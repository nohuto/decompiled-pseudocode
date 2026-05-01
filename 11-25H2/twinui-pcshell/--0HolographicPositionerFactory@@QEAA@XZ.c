/*
 * XREFs of ??0HolographicPositionerFactory@@QEAA@XZ @ 0x1803F71F4
 * Callers:
 *     ??$MakeAndInitialize@VHolographicPositionerFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHolographicPositionerFactory@@@Z @ 0x18020347C (--$MakeAndInitialize@VHolographicPositionerFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHolo.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180178ACC (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

HolographicPositionerFactory *__fastcall HolographicPositionerFactory::HolographicPositionerFactory(
        HolographicPositionerFactory *this)
{
  HolographicPositionerFactory *v1; // rcx
  HolographicPositionerFactory *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>();
  result = v1;
  *(_QWORD *)v1 = &HolographicPositionerFactory::`vftable';
  return result;
}
