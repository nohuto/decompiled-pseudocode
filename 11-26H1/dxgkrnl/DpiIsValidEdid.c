/*
 * XREFs of DpiIsValidEdid @ 0x14006D9AC
 * Callers:
 *     DpiFdoValidateIntegratedDisplayDescriptor @ 0x14024948C (DpiFdoValidateIntegratedDisplayDescriptor.c)
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x14025653C (DpiPdoGetDeviceIdFromDescriptor.c)
 *     DpiPdoGetDeviceDescriptor @ 0x140429A24 (DpiPdoGetDeviceDescriptor.c)
 * Callees:
 *     ?DpiEdidCheckSum@@YAEPEADK@Z @ 0x14005BE08 (-DpiEdidCheckSum@@YAEPEADK@Z.c)
 */

bool __fastcall DpiIsValidEdid(const __m128i *a1)
{
  return a1->m128i_i32[0] == -256 && a1->m128i_i32[1] == 0xFFFFFF && DpiEdidCheckSum(a1);
}
