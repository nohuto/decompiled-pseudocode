/*
 * XREFs of ObDereferenceObjectDeferDelete @ 0x140265670
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407C0410 (NtAlpcImpersonateClientContainerOfPort.c)
 *     PfpServiceMainThreadBoostPrep @ 0x1407C60A8 (PfpServiceMainThreadBoostPrep.c)
 *     CmpCleanupTransactionState @ 0x1408ACEE8 (CmpCleanupTransactionState.c)
 *     CmpRunDownCmRM @ 0x1408AF194 (CmpRunDownCmRM.c)
 *     CmpReportNotifyHelper @ 0x1408D0490 (CmpReportNotifyHelper.c)
 *     CmpFreePostBlock @ 0x1408D1020 (CmpFreePostBlock.c)
 *     ObpLookupObjectName @ 0x1408FE2F0 (ObpLookupObjectName.c)
 *     ObpCreateSymbolicLinkName @ 0x1409E185C (ObpCreateSymbolicLinkName.c)
 *     CmpCloseKeyObject @ 0x140A59A10 (CmpCloseKeyObject.c)
 *     CmpDelayedDerefKeys @ 0x140A90E58 (CmpDelayedDerefKeys.c)
 *     ObpDeleteDirectoryObject @ 0x140AF6E20 (ObpDeleteDirectoryObject.c)
 *     ObpDeleteSymbolicLinkName @ 0x140B008CC (ObpDeleteSymbolicLinkName.c)
 *     PfpScenCtxScenarioSet @ 0x140C09F08 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403DD9F0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __stdcall ObDereferenceObjectDeferDelete(PVOID Object)
{
  signed __int64 v2; // rbx
  bool v3; // cc
  signed __int64 BugCheckParameter4; // rbx

  if ( ObpTraceFlags )
    ObpPushStackInfo((char *)Object - 48, 0xFFFFFFFFLL, 1953261124LL);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  BugCheckParameter4 = v2 - 1;
  if ( v3 )
  {
    if ( *((_QWORD *)Object - 5) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)],
        (ULONG_PTR)Object,
        3uLL,
        *((_QWORD *)Object - 5));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 4uLL, BugCheckParameter4);
    ObpDeferObjectDeletion((char *)Object - 48);
  }
}
