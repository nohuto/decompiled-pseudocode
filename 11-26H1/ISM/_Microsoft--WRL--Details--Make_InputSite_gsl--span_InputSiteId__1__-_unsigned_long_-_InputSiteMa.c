/*
 * XREFs of _Microsoft::WRL::Details::Make_InputSite_gsl::span_InputSiteId__1__&_unsigned_long_&_InputSiteManager____::_1_::dtor$0 @ 0x1801D5E88
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIResizeAreaClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18005EC90 (--1-$ComPtr@UIResizeAreaClientProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall Microsoft::WRL::Details::Make_InputSite_gsl::span_InputSiteId__1____unsigned_long___InputSiteManager____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    Microsoft::WRL::ComPtr<IResizeAreaClientProxy>::~ComPtr<IResizeAreaClientProxy>(*(__int64 **)(a2 + 144));
  }
}
