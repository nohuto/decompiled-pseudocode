/*
 * XREFs of RtlSetUserFlagsHeap @ 0x180108530
 * Callers:
 *     RtlDebugSetUserFlagsHeap @ 0x1801083AC (RtlDebugSetUserFlagsHeap.c)
 * Callees:
 *     RtlpProbeUserBufferSafe @ 0x180004150 (RtlpProbeUserBufferSafe.c)
 *     RtlpHpExtrasGet @ 0x1800043C0 (RtlpHpExtrasGet.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpAnalyzeHeapFailure @ 0x180010880 (RtlpAnalyzeHeapFailure.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpHeapExceptionFilter @ 0x1801004C8 (RtlpHeapExceptionFilter.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1801083AC (RtlDebugSetUserFlagsHeap.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 */

BOOLEAN __cdecl RtlSetUserFlagsHeap(
        PVOID HeapHandle,
        ULONG Flags,
        PVOID BaseAddress,
        ULONG UserFlagsReset,
        ULONG UserFlagsSet)
{
  char *v6; // r13
  __int16 v7; // di
  ULONG v9; // edi
  unsigned __int8 *v10; // rcx
  int v11; // ecx
  struct _TEB *v12; // rbx
  ULONG v13; // eax
  BOOLEAN v14; // r15
  unsigned __int64 v15; // rdi
  BOOLEAN v16; // bl
  struct _TEB *v17; // rbx
  __int16 v19; // r8
  ULONG v20; // ecx
  __int16 v21; // dx
  __int16 v22; // r8
  __int16 v23; // cx
  unsigned __int64 v24; // rax
  char v25; // [rsp+30h] [rbp-38h]

  v6 = (char *)BaseAddress;
  v7 = Flags;
  v25 = 0;
  if ( ((UserFlagsSet | UserFlagsReset) & 0xFFFFF1FF) != 0 )
    goto LABEL_10;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    if ( Flags )
    {
      if ( Flags == 8 )
      {
        v19 = 2;
      }
      else
      {
        v20 = (Flags >> 2) & 2;
        v21 = v20;
        if ( (v7 & 4) == 0 )
          v21 = v20;
        v22 = v21 | 0x100;
        if ( (v7 & 0x100) == 0 )
          v22 = v21;
        v23 = v7 & 0xE00 | v22;
        if ( (v7 & 0xE00) == 0 )
          v23 = v22;
        v19 = v23;
        if ( (v7 & 0x10) == 0 )
          v19 = v23;
      }
    }
    else
    {
      v19 = 0;
    }
    if ( v6 )
    {
      v24 = RtlpHpExtrasGet((_RTL_SRWLOCK *)HeapHandle, (unsigned __int64)v6, *((_WORD *)HeapHandle + 10) | v19, 0LL);
      if ( v24 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
      {
        v14 = 0;
      }
      else
      {
        *(_BYTE *)(v24 + 2) = (16 * BYTE1(UserFlagsSet)) | *(_BYTE *)(v24 + 2) & ((16 * ~BYTE1(UserFlagsReset)) | 0xF);
        v14 = 1;
      }
      if ( v14 )
        return v14;
      v12 = NtCurrentTeb();
      v12->LastStatusValue = -1073741811;
      v13 = RtlNtStatusToDosErrorNoTeb(-1073741811);
LABEL_11:
      v12->LastErrorValue = v13;
      return v14;
    }
LABEL_10:
    v12 = NtCurrentTeb();
    v12->LastStatusValue = -1073741811;
    v13 = RtlNtStatusToDosErrorNoTeb(-1073741811);
    v14 = 0;
    goto LABEL_11;
  }
  v9 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v9 & 0x61000000) != 0 && (v9 & 0x10000000) == 0 )
    return RtlDebugSetUserFlagsHeap((unsigned __int64)HeapHandle, v9, (char *)BaseAddress, UserFlagsReset, UserFlagsSet);
  if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
  {
    v10 = RtlpProbeUserBufferSafe((int)HeapHandle, (__int64)BaseAddress);
    goto LABEL_14;
  }
  if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
  {
    v11 = 9;
    goto LABEL_13;
  }
  v10 = (unsigned __int8 *)BaseAddress - 16;
  _m_prefetchw((char *)BaseAddress - 16);
  if ( *((char *)BaseAddress - 1) == 5 )
    v10 -= 16 * v10[14];
  if ( (v10[15] & 0x3F) == 0 )
  {
    LODWORD(BaseAddress) = (_DWORD)v10;
    v11 = 8;
LABEL_13:
    RtlpLogHeapFailure(v11, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
    v10 = 0LL;
  }
LABEL_14:
  if ( !v10 || (v10[15] & 0x80u) != 0 )
    goto LABEL_10;
  if ( (v9 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    v25 = 1;
  }
  v15 = (unsigned __int64)(v6 - 16);
  _m_prefetchw(v6 - 16);
  if ( *(v6 - 1) == 5 )
    v15 -= 16LL * *(unsigned __int8 *)(v15 + 14);
  if ( *((_DWORD *)HeapHandle + 31) )
  {
    *(_DWORD *)(v15 + 8) ^= *((_DWORD *)HeapHandle + 34);
    if ( *(_BYTE *)(v15 + 11) != (*(_BYTE *)(v15 + 8) ^ (unsigned __int8)(*(_BYTE *)(v15 + 9) ^ *(_BYTE *)(v15 + 10))) )
      RtlpAnalyzeHeapFailure((unsigned __int64)HeapHandle, v15);
  }
  if ( (*(_BYTE *)(v15 + 15) & 0x3F) != 0 )
  {
    *(_BYTE *)(v15 + 10) &= ~(unsigned __int8)(UserFlagsReset >> 4);
    *(_BYTE *)(v15 + 10) |= UserFlagsSet >> 4;
    v16 = 1;
  }
  else
  {
    v17 = NtCurrentTeb();
    v17->LastStatusValue = -1073741811;
    v17->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
    v16 = 0;
  }
  if ( *((_DWORD *)HeapHandle + 31) )
  {
    *(_BYTE *)(v15 + 11) = *(_BYTE *)(v15 + 8) ^ *(_BYTE *)(v15 + 9) ^ *(_BYTE *)(v15 + 10);
    *(_DWORD *)(v15 + 8) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v25 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return v16;
}
