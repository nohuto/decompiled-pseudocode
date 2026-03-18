/*
 * XREFs of PnpQueryAndSaveDeviceNodeCapabilities @ 0x140908B88
 * Callers:
 *     PiInitializeDevice @ 0x1407B36E8 (PiInitializeDevice.c)
 *     PipProcessStartPhase3 @ 0x140908998 (PipProcessStartPhase3.c)
 *     IopInitializeDeviceInstanceKey @ 0x140AA0078 (IopInitializeDeviceInstanceKey.c)
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PnpSaveDeviceCapabilities @ 0x140909F30 (PnpSaveDeviceCapabilities.c)
 *     PpIrpQueryCapabilities @ 0x14090E564 (PpIrpQueryCapabilities.c)
 */

__int64 __fastcall PnpQueryAndSaveDeviceNodeCapabilities(__int64 a1)
{
  __int64 result; // rax
  _BYTE v3[64]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(v3, 0, sizeof(v3));
  result = PpIrpQueryCapabilities(*(_QWORD *)(a1 + 32), v3);
  if ( (int)result >= 0 )
    return PnpSaveDeviceCapabilities(a1, v3, 0LL);
  return result;
}
