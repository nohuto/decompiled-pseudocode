/*
 * XREFs of ??1CD3DDevice@@MEAA@XZ @ 0x180134D3C
 * Callers:
 *     ??_GCD3DDevice@@MEAAPEAXI@Z @ 0x180134CF0 (--_GCD3DDevice@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800F8600 (McTemplateU0x_EventWriteTransfer.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@0@@Z @ 0x1801272E8 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@.c)
 *     ??1CKMAdapterHandle@@QEAA@XZ @ 0x180134CBC (--1CKMAdapterHandle@@QEAA@XZ.c)
 *     ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x18013557C (-DestroyAllResources@CD3DDevice@@AEAAXXZ.c)
 *     ??1CD2DContext@@UEAA@XZ @ 0x180135878 (--1CD2DContext@@UEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@0@@Z @ 0x1801DB6A4 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ??1?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18020AB18 (--1-$vector_facade@VCDelayUnpin@CD3DDevice@@V-$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliber.c)
 *     ?CleanupDelayUnpin@CD3DDevice@@AEAAXXZ @ 0x18020AB3C (-CleanupDelayUnpin@CD3DDevice@@AEAAXXZ.c)
 *     ??1?$unique_ptr@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@U?$default_delete@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@std@@@std@@QEAA@XZ @ 0x18021F1DC (--1-$unique_ptr@V-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@U-$default_delete@V-$CAsyncTask@UD3D.c)
 *     ??1?$unique_ptr@VCSurfaceShaderComposer@@U?$default_delete@VCSurfaceShaderComposer@@@std@@@std@@QEAA@XZ @ 0x18021F264 (--1-$unique_ptr@VCSurfaceShaderComposer@@U-$default_delete@VCSurfaceShaderComposer@@@std@@@std@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DDevice::~CD3DDevice(CD3DDevice *this)
{
  void *v2; // rcx
  __int64 *v3; // r14
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 *v9; // rdi
  __int64 v10; // rbp
  __int64 *v11; // rdi
  __int64 v12; // rbp
  __int64 *v13; // rdi
  int i; // edi
  void *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &CD3DDevice::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CD3DDevice::`vftable'{for `CD2DContext'};
  CD3DDevice::CleanupDelayUnpin(this);
  CD3DDevice::DestroyAllResources(this);
  v2 = (void *)*((_QWORD *)this + 122);
  if ( v2 != (void *)-1LL && v2 )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 122) = 0LL;
  }
  v3 = (__int64 *)((char *)this + 552);
  v4 = *((_QWORD *)this + 69);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 888LL))(v4);
    v5 = *v3;
    *v3 = 0LL;
    if ( *((_QWORD *)this + 56) )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    *((_QWORD *)this + 56) = v5;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0x_EventWriteTransfer(v4, &EVTDESC_HWDEVICE_DESTROY, (__int64)this);
  v6 = (__int64 *)((char *)this + 2184);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 273);
  v7 = 4LL;
  v8 = 4LL;
  do
  {
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(--v6);
    --v8;
  }
  while ( v8 );
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 268);
  v9 = (__int64 *)((char *)this + 2144);
  v10 = 48LL;
  do
  {
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(--v9);
    --v10;
  }
  while ( v10 );
  v11 = (__int64 *)((char *)this + 1760);
  v12 = 24LL;
  do
  {
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(--v11);
    --v12;
  }
  while ( v12 );
  v13 = (__int64 *)((char *)this + 1568);
  do
  {
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(--v13);
    --v7;
  }
  while ( v7 );
  std::unique_ptr<CSurfaceShaderComposer>::~unique_ptr<CSurfaceShaderComposer>((char *)this + 1528);
  if ( *((_QWORD *)this + 188) )
  {
    for ( i = 0; i < *((_DWORD *)this + 380); ++i )
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(*((_QWORD *)this + 189) + 8LL * i));
    operator delete(*((void **)this + 188));
    *((_QWORD *)this + 188) = 0LL;
  }
  v15 = (void *)*((_QWORD *)this + 189);
  if ( v15 )
  {
    operator delete(v15);
    *((_QWORD *)this + 189) = 0LL;
  }
  *((_DWORD *)this + 380) = 0;
  v16 = *((_QWORD *)this + 178);
  if ( v16 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CCheckMPOCache>>>(v16, *((_QWORD *)this + 179));
    std::_Deallocate<16>(
      *((void **)this + 178),
      (*((_QWORD *)this + 180) - *((_QWORD *)this + 178)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 178) = 0LL;
    *((_QWORD *)this + 179) = 0LL;
    *((_QWORD *)this + 180) = 0LL;
  }
  detail::vector_facade<CD3DDevice::CDelayUnpin,detail::buffer_impl<CD3DDevice::CDelayUnpin,7,1,detail::liberal_expansion_policy>>::~vector_facade<CD3DDevice::CDelayUnpin,detail::buffer_impl<CD3DDevice::CDelayUnpin,7,1,detail::liberal_expansion_policy>>((char *)this + 1232);
  *((_QWORD *)this + 142) = &CD3DResourceManager::`vftable';
  std::unique_ptr<CAsyncTask<CD3DDevice::D3D12Resources>>::~unique_ptr<CAsyncTask<CD3DDevice::D3D12Resources>>((char *)this + 1072);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 131);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 130);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 129);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 128);
  CKMAdapterHandle::~CKMAdapterHandle((CD3DDevice *)((char *)this + 640));
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 76);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 75);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 74);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 73);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 72);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 71);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 70);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 69);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 68);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 67);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 66);
  v17 = *((_QWORD *)this + 63);
  if ( v17 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CAtlasTexture>>>(v17, *((_QWORD *)this + 64));
    std::_Deallocate<16>(
      *((void **)this + 63),
      (*((_QWORD *)this + 65) - *((_QWORD *)this + 63)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 63) = 0LL;
    *((_QWORD *)this + 64) = 0LL;
    *((_QWORD *)this + 65) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 456);
  CD2DContext::~CD2DContext((CD3DDevice *)((char *)this + 16));
  CD3DResourceLeakChecker::~CD3DResourceLeakChecker((CD3DDevice *)((char *)this + 448));
}
