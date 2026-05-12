/*
 * XREFs of sub_14012C4D0 @ 0x14012C4D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14012C2EC @ 0x14012C2EC (sub_14012C2EC.c)
 */

void __fastcall sub_14012C4D0(PDEVICE_OBJECT DeviceObject, char *Context)
{
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)Context + 16) + 160LL), 0);
  sub_14012C2EC(Context);
}
