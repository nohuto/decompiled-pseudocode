/*
 * XREFs of CcContainerRestoreCallBack @ 0x1405B2E70
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     CcGetContainerPolicyForDTP @ 0x1405B2EE4 (CcGetContainerPolicyForDTP.c)
 *     ExUnsubscribeWnfStateChange @ 0x1409FD2E0 (ExUnsubscribeWnfStateChange.c)
 */

__int64 __fastcall CcContainerRestoreCallBack(__int64 a1)
{
  int ContainerPolicyForDTP; // ebx
  _DWORD v4[6]; // [rsp+30h] [rbp-18h] BYREF

  v4[0] = 0;
  ContainerPolicyForDTP = CcGetContainerPolicyForDTP(v4);
  if ( ContainerPolicyForDTP >= 0 )
  {
    if ( v4[0] )
      CcClientDTPDenominator = 4;
    ExUnsubscribeWnfStateChange(a1);
  }
  DbgPrintEx(
    0x7Fu,
    3u,
    "CcContainerRestoreCallBack called: (0x%x, %x)\n",
    ContainerPolicyForDTP,
    CcClientDTPDenominator);
  return (unsigned int)ContainerPolicyForDTP;
}
