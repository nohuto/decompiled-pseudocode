/*
 * XREFs of PsGetBaseIoPriorityThread @ 0x14026C7A0
 * Callers:
 *     ExpBoostIoAfterAcquire @ 0x1402053F4 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPriorityBoost @ 0x1402057EC (ExpApplyPriorityBoost.c)
 *     IopBuildDeviceIoControlRequest @ 0x14026A720 (IopBuildDeviceIoControlRequest.c)
 *     CcCopyWriteWontFlush @ 0x14026A9B0 (CcCopyWriteWontFlush.c)
 *     MiSynchronousPageWrite @ 0x14026AA34 (MiSynchronousPageWrite.c)
 *     CcCopyWriteEx @ 0x14026C4B0 (CcCopyWriteEx.c)
 *     ?KiAbSetMinimumThreadPriority@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@PEAU_SINGLE_LIST_ENTRY@@22PEAK@Z @ 0x14026DBD4 (-KiAbSetMinimumThreadPriority@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@PEAU_SING.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetBaseIoPriorityThread(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  int v3; // ecx

  result = (*(_DWORD *)(a1 + 1440) >> 9) & 7;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 672LL);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 1084);
    if ( (int)result >= v3 )
      return (unsigned int)v3;
  }
  return result;
}
