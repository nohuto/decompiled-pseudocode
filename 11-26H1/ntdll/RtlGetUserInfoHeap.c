/*
 * XREFs of RtlGetUserInfoHeap @ 0x1800D9310
 * Callers:
 *     RtlDebugGetUserInfoHeap @ 0x1800D9654 (RtlDebugGetUserInfoHeap.c)
 * Callees:
 *     RtlpProbeUserBufferSafe @ 0x180004150 (RtlpProbeUserBufferSafe.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpAnalyzeHeapFailure @ 0x180010880 (RtlpAnalyzeHeapFailure.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpGetExtraStuffPointer @ 0x18005FFD0 (RtlpGetExtraStuffPointer.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800D9654 (RtlDebugGetUserInfoHeap.c)
 *     RtlpHpGetUserInfo @ 0x1800D97B0 (RtlpHpGetUserInfo.c)
 *     RtlpHeapExceptionFilter @ 0x1801004C8 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 */

BOOLEAN __cdecl RtlGetUserInfoHeap(
        PVOID HeapHandle,
        ULONG Flags,
        PVOID BaseAddress,
        PVOID *UserValue,
        PULONG UserFlags)
{
  PVOID v6; // rsi
  __int16 v7; // bx
  char v9; // r15
  ULONG v10; // ebx
  unsigned __int8 *v12; // rcx
  int v13; // eax
  struct _TEB *v14; // rbx
  BOOLEAN v15; // r14
  unsigned __int64 v16; // rsi
  struct _TEB *v17; // rbx
  __int64 ExtraStuffPointer; // rax
  int v19; // r14d
  int v20; // ecx
  ULONG v21; // ecx
  unsigned int v22; // edx
  int v23; // r8d
  int v24; // ecx

  v6 = BaseAddress;
  v7 = Flags;
  v9 = 0;
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
        v21 = (Flags >> 2) & 2;
        v22 = v21 | 0x80000000;
        if ( (v7 & 4) == 0 )
          v22 = v21;
        v23 = v22 | 0x100;
        if ( (v7 & 0x100) == 0 )
          v23 = v22;
        v24 = v7 & 0xE00 | v23;
        if ( (v7 & 0xE00) == 0 )
          v24 = v23;
        v19 = v24 | 0x10000000;
        if ( (v7 & 0x10) == 0 )
          v19 = v24;
      }
    }
    else
    {
      v19 = 0;
    }
    return RtlpHpGetUserInfo((_DWORD)HeapHandle, (_DWORD)v6, v19, (_DWORD)UserValue, (__int64)UserFlags);
  }
  v10 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v10 & 0x61000000) != 0 && (v10 & 0x10000000) == 0 )
    return RtlDebugGetUserInfoHeap((int)HeapHandle, UserFlags);
  if ( (v10 & 0x800) != 0 || (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
  {
    v12 = RtlpProbeUserBufferSafe((int)HeapHandle, (__int64)BaseAddress);
  }
  else
  {
    if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
    {
      v20 = 9;
    }
    else
    {
      v12 = (unsigned __int8 *)BaseAddress - 16;
      _m_prefetchw((char *)BaseAddress - 16);
      if ( *((char *)BaseAddress - 1) == 5 )
        v12 -= 16 * v12[14];
      if ( (v12[15] & 0x3F) != 0 )
        goto LABEL_9;
      LODWORD(BaseAddress) = (_DWORD)v12;
      v20 = 8;
    }
    RtlpLogHeapFailure(v20, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
    v12 = 0LL;
  }
LABEL_9:
  if ( !v12 )
  {
LABEL_12:
    v14 = NtCurrentTeb();
    v14->LastStatusValue = -1073741811;
    v14->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
    return 0;
  }
  v13 = v12[15];
  if ( (v13 & 0x80u) == 0 )
  {
    v15 = 0;
    v16 = (unsigned __int64)v6 - 16;
    _m_prefetchw((const void *)v16);
    if ( *(_BYTE *)(v16 + 15) == 5 )
      v16 -= 16LL * *(unsigned __int8 *)(v16 + 14);
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      v9 = 1;
    }
    if ( *((_DWORD *)HeapHandle + 31) )
    {
      *(_DWORD *)(v16 + 8) ^= *((_DWORD *)HeapHandle + 34);
      if ( HIBYTE(*(_DWORD *)(v16 + 8)) != ((unsigned __int8)*(_DWORD *)(v16 + 8) ^ (unsigned __int8)(BYTE1(*(_DWORD *)(v16 + 8)) ^ HIWORD(*(_DWORD *)(v16 + 8)))) )
        RtlpAnalyzeHeapFailure((unsigned __int64)HeapHandle, v16);
    }
    if ( (*(_BYTE *)(v16 + 15) & 0x3F) != 0 )
    {
      if ( (*(_BYTE *)(v16 + 10) & 2) != 0 )
      {
        ExtraStuffPointer = RtlpGetExtraStuffPointer(v16);
        if ( UserValue )
          *UserValue = *(PVOID *)(ExtraStuffPointer + 8);
      }
      if ( UserFlags )
        *UserFlags = 16 * (*(_BYTE *)(v16 + 10) & 0xE0);
      v15 = 1;
    }
    else
    {
      v17 = NtCurrentTeb();
      v17->LastStatusValue = -1073741811;
      v17->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
    }
    if ( *((_DWORD *)HeapHandle + 31) )
    {
      *(_BYTE *)(v16 + 11) = *(_BYTE *)(v16 + 8) ^ *(_BYTE *)(v16 + 9) ^ *(_BYTE *)(v16 + 10);
      *(_DWORD *)(v16 + 8) ^= *((_DWORD *)HeapHandle + 34);
    }
    if ( v9 )
      RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    return v15;
  }
  else
  {
    if ( (v13 & 0xFFFFFF3F) == 0 )
      goto LABEL_12;
    if ( UserFlags )
      *UserFlags = 0;
    return 1;
  }
}
