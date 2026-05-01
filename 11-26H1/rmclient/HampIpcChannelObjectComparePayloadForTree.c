/*
 * XREFs of HampIpcChannelObjectComparePayloadForTree @ 0x180009510
 * Callers:
 *     HamCloseActivity @ 0x180008F50 (HamCloseActivity.c)
 *     HamIpcChannelObjectMakeZombie @ 0x1800091A0 (HamIpcChannelObjectMakeZombie.c)
 *     HampIpcChannelWnfCallback @ 0x180009320 (HampIpcChannelWnfCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampIpcChannelObjectComparePayloadForTree(__int64 a1, __int64 a2)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a2 + 40) + 72LL))();
}
