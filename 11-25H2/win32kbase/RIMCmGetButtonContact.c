/*
 * XREFs of RIMCmGetButtonContact @ 0x140104848
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x14002F720 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimProcessPointerDeviceButtonContact @ 0x14002FD24 (rimProcessPointerDeviceButtonContact.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1400310C8 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1401821AC (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x140182660 (rimStorePointersInHoldingFrame.c)
 *     rimFinalizePointerFlags @ 0x140184A6C (rimFinalizePointerFlags.c)
 *     RIMCmActivateButtonContact @ 0x1401F518C (RIMCmActivateButtonContact.c)
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
