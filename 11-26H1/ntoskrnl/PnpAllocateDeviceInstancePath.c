/*
 * XREFs of PnpAllocateDeviceInstancePath @ 0x1407A55DC
 * Callers:
 *     IoReportDetectedDevice @ 0x14079E000 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x1407B36E8 (PiInitializeDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x140AA0078 (IopInitializeDeviceInstanceKey.c)
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpAllocateDeviceInstancePath(__int64 a1, __int16 a2)
{
  __int64 Pool2; // rax

  *(_WORD *)(a1 + 42) = a2;
  *(_WORD *)(a1 + 40) = 0;
  Pool2 = ExAllocatePool2(0x40uLL);
  *(_QWORD *)(a1 + 48) = Pool2;
  return Pool2 == 0 ? 0xC000009A : 0;
}
