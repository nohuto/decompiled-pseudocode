/*
 * XREFs of RIMCmGetButtonContact @ 0x1400FA6B8
 * Callers:
 *     rimCountContactsToDeliverWithFrame @ 0x1400732B8 (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x140073934 (rimStorePointersInHoldingFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x140075964 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x14007ADBC (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMCmActivateButtonContact @ 0x1400FA578 (RIMCmActivateButtonContact.c)
 *     rimFinalizePointerFlags @ 0x1401AF8AC (rimFinalizePointerFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCmGetButtonContact(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 24) == 7 )
    return *(_QWORD *)(a1 + 976);
  else
    return 0LL;
}
