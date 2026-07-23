/*
 * XREFs of KiInitializeBugcheckRecoveryProcessor @ 0x1405FCDCC
 * Callers:
 *     KiInitPrcb @ 0x140BF9C24 (KiInitPrcb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiInitializeBugcheckRecoveryProcessor(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 40720) = 531;
  *(_QWORD *)(a1 + 40776) = 0LL;
  *(_QWORD *)(a1 + 40744) = KiBugCheckRecoveryFreezeProcessorDpc;
  result = *(_QWORD *)(a1 + 40776);
  *(_QWORD *)(a1 + 40752) = 0LL;
  *(_QWORD *)(a1 + 40736) = 0LL;
  if ( !result )
  {
    result = 2048LL;
    *(_WORD *)(a1 + 40722) = *(_DWORD *)(a1 + 36) + 2048;
  }
  return result;
}
