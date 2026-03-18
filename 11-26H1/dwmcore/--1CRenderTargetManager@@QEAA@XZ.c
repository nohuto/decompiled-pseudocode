/*
 * XREFs of ??1CRenderTargetManager@@QEAA@XZ @ 0x18022A0A0
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x180229B7C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009B620 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18013194C (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??1?$vector_facade@PEAVIRenderTarget@@V?$buffer_impl@PEAVIRenderTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180229A6C (--1-$vector_facade@PEAVIRenderTarget@@V-$buffer_impl@PEAVIRenderTarget@@$03$00Vliberal_expansion.c)
 *     ??1?$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V?$buffer_impl@UtagCOMPOSITION_TARGET_ID_AND_STATS@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180229AA0 (--1-$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V-$buffer_impl@UtagCOMPOSITION_TARGET_ID.c)
 */

void __fastcall CRenderTargetManager::~CRenderTargetManager(CRenderTargetManager *this)
{
  __int64 *v2; // rcx
  void *v3; // rcx

  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 87);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 86);
  detail::vector_facade<tagCOMPOSITION_TARGET_ID_AND_STATS,detail::buffer_impl<tagCOMPOSITION_TARGET_ID_AND_STATS,4,1,detail::liberal_expansion_policy>>::~vector_facade<tagCOMPOSITION_TARGET_ID_AND_STATS,detail::buffer_impl<tagCOMPOSITION_TARGET_ID_AND_STATS,4,1,detail::liberal_expansion_policy>>((__int64 *)this + 23);
  v2 = (__int64 *)*((_QWORD *)this + 20);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>(
      v2,
      *((__int64 **)this + 21));
    std::_Deallocate<16>(
      *((void **)this + 20),
      (*((_QWORD *)this + 22) - *((_QWORD *)this + 20)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 17);
  if ( v3 )
  {
    std::_Deallocate<16>(v3, (*((_QWORD *)this + 19) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  detail::vector_facade<IRenderTarget *,detail::buffer_impl<IRenderTarget *,4,1,detail::liberal_expansion_policy>>::~vector_facade<IRenderTarget *,detail::buffer_impl<IRenderTarget *,4,1,detail::liberal_expansion_policy>>((__int64 *)this + 10);
  detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,4,1,detail::liberal_expansion_policy>>::~vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,4,1,detail::liberal_expansion_policy>>((__int64 *)this + 3);
}
