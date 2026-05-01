/*
 * XREFs of HampIpcChannelObjectComparePayloadForTree @ 0x18000A530
 * Callers:
 *     HamCloseActivity @ 0x180009F90 (HamCloseActivity.c)
 *     HamIpcChannelObjectMakeZombie @ 0x18000A1D0 (HamIpcChannelObjectMakeZombie.c)
 *     HampIpcChannelWnfCallback @ 0x18000A360 (HampIpcChannelWnfCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampIpcChannelObjectComparePayloadForTree(__int64 a1, __int64 a2)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a2 + 40) + 72LL))();
}
