/*
 * XREFs of HalpAuditQueryResults @ 0x140788B84
 * Callers:
 *     HaliQuerySystemInformation @ 0x140BF38E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAuditQueryResults(_KWAIT_BLOCK **a1)
{
  __int64 result; // rax

  result = (unsigned int)HalpAuditStatus;
  if ( HalpAuditStatus == -1073741637 )
    return 3221225659LL;
  *a1 = IommuInterfaceStateChangeCallbackPushLock.WaitBlockList;
  return result;
}
