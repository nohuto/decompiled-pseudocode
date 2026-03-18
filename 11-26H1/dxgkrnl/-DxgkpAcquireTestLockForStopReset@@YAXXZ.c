/*
 * XREFs of ?DxgkpAcquireTestLockForStopReset@@YAXXZ @ 0x140209B2C
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x14019F50C (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@EE@Z @ 0x14019FF84 (-Stop@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@EE@Z.c)
 * Callees:
 *     <none>
 */

void DxgkpAcquireTestLockForStopReset(void)
{
  unsigned int i; // ebx
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  for ( i = 0; i < 0xA; ++i )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(&qword_140168760, 0LL) )
      return;
    Interval.QuadPart = -10000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  WdLogSingleEntry5(0LL, 275LL, 48LL, qword_140168768, 0LL, 0LL);
  WdLogGlobalForLineNumber = 199;
}
