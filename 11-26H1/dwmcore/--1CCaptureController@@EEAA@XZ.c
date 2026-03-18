/*
 * XREFs of ??1CCaptureController@@EEAA@XZ @ 0x18021412C
 * Callers:
 *     ??_ECCaptureController@@EEAAPEAXI@Z @ 0x1801DAA10 (--_ECCaptureController@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009B620 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x18026A45C (-RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 */

void __fastcall CCaptureController::~CCaptureController(CCaptureController *this)
{
  __int64 *v2; // rcx
  struct CCaptureRenderTarget *v3; // rdx
  CCaptureController *v4; // rcx

  *(_QWORD *)this = &CCaptureController::`vftable';
  while ( 1 )
  {
    v2 = (__int64 *)*((_QWORD *)this + 20);
    if ( v2 == *((__int64 **)this + 21) )
      break;
    v3 = (struct CCaptureRenderTarget *)*v2;
    v4 = *(CCaptureController **)(*v2 + 2408);
    *((_QWORD *)v3 + 301) = 0LL;
    if ( v4 )
      CCaptureController::RemoveRenderTarget(v4, v3);
  }
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
  CCaptureControllerGeneratedT<CCaptureController,CResource>::~CCaptureControllerGeneratedT<CCaptureController,CResource>(this);
}
