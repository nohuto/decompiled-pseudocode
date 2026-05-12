/*
 * XREFs of sub_1400A5FC0 @ 0x1400A5FC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400A6008 @ 0x1400A6008 (sub_1400A6008.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_1400A5FC0(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  sub_1400A6008(Context, 0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(Context[120] + 240LL))(
    *(_QWORD *)(Context[120] + 232LL),
    *(_QWORD *)(Context[120] + 216LL),
    *(_QWORD *)(Context[120] + 224LL));
}
