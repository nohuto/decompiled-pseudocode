/*
 * XREFs of RtlSetUserValueHeap @ 0x18005FD00
 * Callers:
 *     RtlDebugSetUserValueHeap @ 0x18010D700 (RtlDebugSetUserValueHeap.c)
 * Callees:
 *     RtlpProbeUserBufferSafe @ 0x180004150 (RtlpProbeUserBufferSafe.c)
 *     RtlpHpExtrasGet @ 0x1800043C0 (RtlpHpExtrasGet.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpAnalyzeHeapFailure @ 0x180010880 (RtlpAnalyzeHeapFailure.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpGetExtraStuffPointer @ 0x18005FFD0 (RtlpGetExtraStuffPointer.c)
 *     RtlDebugSetUserValueHeap @ 0x18010D700 (RtlDebugSetUserValueHeap.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __cdecl RtlSetUserValueHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress, PVOID UserValue)
{
  PVOID v5; // r10
  __int16 v6; // si
  BOOLEAN v8; // r13
  char v9; // r15
  ULONG v10; // esi
  unsigned __int8 *v11; // rbx
  int v12; // ecx
  int v13; // eax
  struct _TEB *v14; // rbx
  __int16 v16; // ax
  unsigned __int64 v17; // rax
  BOOLEAN v18; // r14
  ULONG v19; // ecx
  __int16 v20; // dx
  __int16 v21; // r8
  __int16 v22; // cx
  struct _TEB *v23; // rbx
  struct _TEB *v24; // rbx

  v5 = BaseAddress;
  v6 = Flags;
  v8 = 0;
  v9 = 0;
  if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
  {
    v10 = *((_DWORD *)HeapHandle + 29) | Flags;
    if ( (v10 & 0x61000000) != 0 && (v10 & 0x10000000) == 0 )
      return RtlDebugSetUserValueHeap((int)HeapHandle);
    if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
    {
      v11 = RtlpProbeUserBufferSafe((int)HeapHandle, (__int64)BaseAddress);
    }
    else
    {
      if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
      {
        v12 = 9;
        goto LABEL_10;
      }
      v11 = (unsigned __int8 *)BaseAddress - 16;
      _m_prefetchw((char *)BaseAddress - 16);
      if ( *((char *)BaseAddress - 1) == 5 )
        v11 -= 16 * v11[14];
      if ( (v11[15] & 0x3F) == 0 )
      {
        LODWORD(BaseAddress) = (_DWORD)v11;
        v12 = 8;
LABEL_10:
        RtlpLogHeapFailure(v12, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
        v11 = 0LL;
      }
    }
    if ( !v11 )
    {
      v23 = NtCurrentTeb();
      v23->LastStatusValue = -1073741811;
      v23->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
      return 0;
    }
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      v9 = 1;
    }
    v13 = v11[15];
    if ( (v13 & 0xFFFFFF3F) != 0 )
    {
      if ( (v13 & 0x80) == 0 )
      {
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          *((_DWORD *)v11 + 2) ^= *((_DWORD *)HeapHandle + 34);
          if ( v11[11] != (v11[8] ^ (unsigned __int8)(v11[9] ^ v11[10])) )
            RtlpAnalyzeHeapFailure((unsigned __int64)HeapHandle, (unsigned __int64)v11);
        }
        if ( (v11[10] & 2) != 0 )
        {
          *(_QWORD *)(RtlpGetExtraStuffPointer(v11, *(_QWORD *)&Flags, BaseAddress, UserValue) + 8) = UserValue;
          v8 = 1;
        }
        goto LABEL_23;
      }
    }
    else
    {
      v14 = NtCurrentTeb();
      v14->LastStatusValue = -1073741811;
      v14->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
    }
    v11 = 0LL;
LABEL_23:
    if ( v11 && *((_DWORD *)HeapHandle + 31) )
    {
      v11[11] = v11[8] ^ v11[9] ^ v11[10];
      *((_DWORD *)v11 + 2) ^= *((_DWORD *)HeapHandle + 34);
    }
    if ( v9 )
      RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    return v8;
  }
  if ( Flags )
  {
    if ( Flags == 8 )
    {
      v16 = 2;
    }
    else
    {
      v19 = (Flags >> 2) & 2;
      v20 = v19;
      if ( (v6 & 4) == 0 )
        v20 = v19;
      v21 = v20 | 0x100;
      if ( (v6 & 0x100) == 0 )
        v21 = v20;
      v22 = v6 & 0xE00 | v21;
      if ( (v6 & 0xE00) == 0 )
        v22 = v21;
      v16 = v22;
      if ( (v6 & 0x10) == 0 )
        v16 = v22;
    }
  }
  else
  {
    v16 = 0;
  }
  v17 = RtlpHpExtrasGet((_RTL_SRWLOCK *)HeapHandle, (unsigned __int64)v5, *((_WORD *)HeapHandle + 10) | v16, 0LL);
  if ( v17 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v18 = 0;
  }
  else
  {
    *(_QWORD *)(v17 + 8) = UserValue;
    v18 = 1;
  }
  if ( !v18 )
  {
    v24 = NtCurrentTeb();
    v24->LastStatusValue = -1073741811;
    v24->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
  }
  return v18;
}
