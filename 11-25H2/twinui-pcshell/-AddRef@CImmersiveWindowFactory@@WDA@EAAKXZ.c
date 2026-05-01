/*
 * XREFs of ?AddRef@CImmersiveWindowFactory@@WDA@EAAKXZ @ 0x1806A1E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveWindowFactory::AddRef(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveWindowFactoryBase>::AddRef(a1 - 48);
}
