/*
 * XREFs of RtlDeleteGrowableFunctionTable @ 0x180082300
 * Callers:
 *     RtlDeleteFunctionTable @ 0x1800DB030 (RtlDeleteFunctionTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     RtlProtectHeap @ 0x18007F470 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x1800818D0 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180081980 (LdrProtectMrdata.c)
 *     RtlAvlRemoveNode @ 0x1800DB240 (RtlAvlRemoveNode.c)
 *     NtSetInformationProcess @ 0x18015F2C0 (NtSetInformationProcess.c)
 */

struct _TEB *__fastcall RtlDeleteGrowableFunctionTable(__int64 *a1)
{
  bool v1; // zf
  int v3; // eax
  __int64 v4; // rdx
  int v5; // edi
  __int64 *v6; // rdx
  __int64 **v7; // rax
  __int64 v8; // rdx
  int v9; // edx
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v1 = *((_DWORD *)a1 + 20) == 3;
  v11 = 0LL;
  if ( !v1 )
    RtlRaiseStatus(-1073741811);
  *(_QWORD *)&v11 = a1;
  BYTE8(v11) = 1;
  v3 = NtSetInformationProcess(-1LL, 53LL, &v11, 16LL);
  if ( v3 < 0 )
    RtlRaiseStatus(v3);
  LdrProtectMrdata(0);
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v4);
    v5 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v5 == -1 )
        goto LABEL_19;
    }
    else
    {
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v5 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock, v4);
  RtlAvlRemoveNode(&RtlpDynamicFunctionTableTreeMin, a1 + 11);
  RtlAvlRemoveNode(&RtlpDynamicFunctionTableTreeMax, a1 + 14);
  v6 = (__int64 *)*a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || (v7 = (__int64 **)a1[1], *v7 != a1) )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = (__int64)v7;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrControlFlowGuardEnforced();
  RtlFreeHeap_0();
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v8);
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      v9 = *(_DWORD *)LdrpMrdataHeapUnprotected - 1;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v9;
      if ( !v9 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      return LdrProtectMrdata(1);
    }
LABEL_19:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return LdrProtectMrdata(1);
}
