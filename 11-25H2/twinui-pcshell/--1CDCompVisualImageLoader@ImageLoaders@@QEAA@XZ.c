/*
 * XREFs of ??1CDCompVisualImageLoader@ImageLoaders@@QEAA@XZ @ 0x180538C84
 * Callers:
 *     _lambda_c876813055a0f8eb90a291ca9ab0fec3_::operator() @ 0x1805391D8 (_lambda_c876813055a0f8eb90a291ca9ab0fec3_--operator().c)
 *     __lambda_c876813055a0f8eb90a291ca9ab0fec3_::operator()_::_1_::dtor$1 @ 0x1806CBF62 (__lambda_c876813055a0f8eb90a291ca9ab0fec3_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ImageLoaders::CDCompVisualImageLoader::~CDCompVisualImageLoader(
        ImageLoaders::CDCompVisualImageLoader *this)
{
  __int64 v2; // rcx

  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2);
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)this);
}
