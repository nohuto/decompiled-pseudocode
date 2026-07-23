/*
 * XREFs of KeSetSelectedCpuSetsThread @ 0x14045BD60
 * Callers:
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiValidateCpuSetMasks @ 0x14045BE5C (KiValidateCpuSetMasks.c)
 *     KiAcquireProcessLockShared @ 0x14045BFC0 (KiAcquireProcessLockShared.c)
 *     KiUpdateThreadCpuSets @ 0x14045C180 (KiUpdateThreadCpuSets.c)
 *     KiWriteCpuSetMasks @ 0x14052FA08 (KiWriteCpuSetMasks.c)
 */

__int64 __fastcall KeSetSelectedCpuSetsThread(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  bool v7; // zf
  _QWORD *v8; // rdi
  __int64 v9; // rbp
  unsigned int v10; // esi
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+20h] [rbp-28h] BYREF
  struct _SINGLE_LIST_ENTRY v14[4]; // [rsp+28h] [rbp-20h] BYREF
  char v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0;
  result = KiValidateCpuSetMasks(a3);
  if ( (int)result >= 0 )
  {
    v7 = (*(_DWORD *)(a1 + 1440) & 0x20000) == 0;
    v8 = (_QWORD *)(a1 + 1680);
    v9 = *(_QWORD *)(a1 + 544);
    v14[0].Next = 0LL;
    if ( v7 )
    {
      v10 = 1;
    }
    else
    {
      v10 = (unsigned __int16)KiMaximumGroups;
      v8 = (_QWORD *)*v8;
    }
    KiAcquireProcessLockShared(v9, &v15);
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v13);
      while ( *(_QWORD *)(a1 + 64) );
    }
    KiWriteCpuSetMasks(v8, v10, a3, a2, v13, v14[0].Next);
    KiUpdateThreadCpuSets(a1, v14);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v9 + 64));
    LOBYTE(v11) = v15;
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), v14, v11, v12);
    return 0LL;
  }
  return result;
}
