/*
 * XREFs of WheaInitializeRegChangeNotify @ 0x14084FBA4
 * Callers:
 *     WheapSetPolicyValue @ 0x140850024 (WheapSetPolicyValue.c)
 *     WheaInitialize @ 0x140CEDE58 (WheaInitialize.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x14093C190 (NtNotifyChangeMultipleKeys.c)
 */

void WheaInitializeRegChangeNotify()
{
  if ( CmpContextListLock.WaitBlock[1].Object )
  {
    CmpContextListLock.LastXStateSaveDebugInfo = 0LL;
    CmpContextListLock.Spare18 = (unsigned __int64)WheaRegChangeNotifyCallback;
    *(_QWORD *)&CmpContextListLock.WaitBlockFill11[160] = 0LL;
    if ( NtNotifyChangeMultipleKeys(
           CmpContextListLock.WaitBlock[1].Object,
           0,
           0LL,
           0LL,
           (PIO_APC_ROUTINE)&CmpContextListLock.WaitBlockFill11[160],
           (PVOID)1,
           (PIO_STATUS_BLOCK)&CmpContextListLock.WaitBlockFill11[128],
           4u,
           0,
           0LL,
           0,
           1u) < 0 )
      _InterlockedExchange((volatile __int32 *)&CmpContextListLock.WaitBlockFill11[120], 1);
  }
}
