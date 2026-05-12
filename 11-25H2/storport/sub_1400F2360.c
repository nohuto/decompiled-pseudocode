/*
 * XREFs of sub_1400F2360 @ 0x1400F2360
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400F2254 @ 0x1400F2254 (sub_1400F2254.c)
 */

void __fastcall sub_1400F2360(PDEVICE_OBJECT DeviceObject, volatile signed __int32 *Context)
{
  if ( !Context || *Context != 1314276178 )
    KeBugCheckEx(0x176u, 4uLL, (ULONG_PTR)Context, 0LL, 0LL);
  _interlockedbittestandreset(Context + 268, 6u);
  _interlockedbittestandreset(Context + 237, 1u);
  sub_1400F2254((__int64)Context);
}
