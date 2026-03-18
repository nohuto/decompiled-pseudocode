/*
 * XREFs of ??1CProjectedShadow@@MEAA@XZ @ 0x18018E98C
 * Callers:
 *     ??_ECProjectedShadow@@MEAAPEAXI@Z @ 0x18018E940 (--_ECProjectedShadow@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18001E7BC (--1-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCacheS.c)
 *     ?UnRegisterNotifierNoRelease@CResource@@QEAA_NPEAV1@@Z @ 0x1800222EC (-UnRegisterNotifierNoRelease@CResource@@QEAA_NPEAV1@@Z.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180039FA0 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800F33F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CProjectedShadow::~CProjectedShadow(CProjectedShadow *this)
{
  __int64 *v1; // rsi
  __int64 v3; // rdi
  CResource *v4; // rcx
  CResource *v5; // rcx
  CResource *v6; // rcx

  v1 = (__int64 *)((char *)this + 368);
  v3 = *((_QWORD *)this + 46);
  *(_QWORD *)this = &CProjectedShadow::`vftable';
  if ( v3 )
  {
    *(_DWORD *)(v3 + 40) = 0;
    DynArrayImpl<0>::ShrinkToSize(v3 + 16, 0x18u);
    *(_BYTE *)(v3 + 200) = 1;
  }
  v4 = (CResource *)*((_QWORD *)this + 11);
  if ( v4 )
    CResource::UnRegisterNotifierNoRelease(v4, this);
  v5 = (CResource *)*((_QWORD *)this + 10);
  if ( v5 )
    CResource::UnRegisterNotifierNoRelease(v5, this);
  v6 = (CResource *)*((_QWORD *)this + 9);
  if ( v6 )
    CResource::UnRegisterNotifierNoRelease(v6, this);
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 47);
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v1);
  wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>((__int64 *)this + 43);
  detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::~vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>((__int64 *)this + 32);
  CResource::~CResource(this);
}
