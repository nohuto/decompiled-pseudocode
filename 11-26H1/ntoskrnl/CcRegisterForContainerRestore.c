/*
 * XREFs of CcRegisterForContainerRestore @ 0x1405B3020
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     CcCheckContainerWaitForRestore @ 0x1405B2D54 (CcCheckContainerWaitForRestore.c)
 *     ExSubscribeWnfStateChange @ 0x1409C4400 (ExSubscribeWnfStateChange.c)
 */

signed int CcRegisterForContainerRestore()
{
  signed int result; // eax
  char v1; // [rsp+48h] [rbp+10h] BYREF

  result = CcCheckContainerWaitForRestore();
  if ( result )
  {
    result = ExSubscribeWnfStateChange(
               (unsigned int)&v1,
               (unsigned int)&WNF_CONT_RESTORE_FROM_SNAPSHOT_COMPLETE,
               1,
               0,
               (__int64)CcContainerRestoreCallBack,
               0LL);
    if ( result < 0 )
      return DbgPrintEx(0x7Fu, 1u, "CcRegisterForContainerRestore failed: 0x%x\n", result);
  }
  return result;
}
