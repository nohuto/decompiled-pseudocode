/*
 * XREFs of ?GetPatternProvider@CDragVisualAcc@@UEAAJHPEAPEAUIUnknown@@@Z @ 0x180526860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDragVisualAcc::GetPatternProvider(CDragVisualAcc *this, int a2, struct IUnknown **a3)
{
  *a3 = 0LL;
  if ( a2 == 10030 )
    return Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IRawElementProviderFragment,IRawElementProviderFragmentRoot,IDragProvider,IDragVisualAcc>>(
             (__int64)this,
             &GUID_00000000_0000_0000_c000_000000000046,
             a3);
  else
    return 2147746308LL;
}
