/*
 * XREFs of ??1GestureHandler@@QEAA@XZ @ 0x1801449F8
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VGestureHandler@@@std@@EEAAXXZ @ 0x180146D20 (-_Destroy@-$_Ref_count_obj2@VGestureHandler@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BDDC (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BE0C (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAXPEAUGestureClient@GestureHandler@@QEAU12@AEAV?$allocator@UGestureClient@GestureHandler@@@0@@Z @ 0x180144250 (--$_Destroy_range@V-$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAXPEAUGestureClient@G.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GestureHandler::~GestureHandler(GestureHandler *this)
{
  void *v2; // rcx
  __int64 v3; // rcx
  GestureHandler::GestureClient *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  std::_Ref_count_base *v7; // rcx

  Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)this + 31);
  v2 = (void *)*((_QWORD *)this + 25);
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (struct std::nothrow_t *)((*((_QWORD *)this + 27) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  v3 = *((_QWORD *)this + 18);
  if ( v3 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = (GestureHandler::GestureClient *)*((_QWORD *)this + 14);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<GestureHandler::GestureClient>>(
      v4,
      *((GestureHandler::GestureClient **)this + 15));
    std::_Deallocate<16>(
      *((void **)this + 14),
      (struct std::nothrow_t *)(8 * ((__int64)(*((_QWORD *)this + 16) - *((_QWORD *)this + 14)) >> 3)));
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 12);
  v6 = *((_QWORD *)this + 11);
  if ( v6 )
  {
    LOBYTE(v5) = v6 != (_QWORD)this + 32;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(v6, v5);
    *((_QWORD *)this + 11) = 0LL;
  }
  v7 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v7 )
    std::_Ref_count_base::_Decwref(v7);
}
