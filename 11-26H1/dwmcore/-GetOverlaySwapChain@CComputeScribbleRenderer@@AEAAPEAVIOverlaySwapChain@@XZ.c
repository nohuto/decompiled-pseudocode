/*
 * XREFs of ?GetOverlaySwapChain@CComputeScribbleRenderer@@AEAAPEAVIOverlaySwapChain@@XZ @ 0x180130534
 * Callers:
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJXZ @ 0x180130340 (-PreRender@CComputeScribbleRenderer@@QEAAJXZ.c)
 *     ?GetBackBufferData@CComputeScribbleRenderer@@AEAAPEAVCComputeScribbleFramebuffer@@XZ @ 0x1801310C4 (-GetBackBufferData@CComputeScribbleRenderer@@AEAAPEAVCComputeScribbleFramebuffer@@XZ.c)
 *     ?ScheduleScribble@CComputeScribbleRenderer@@QEAAJXZ @ 0x18013110C (-ScheduleScribble@CComputeScribbleRenderer@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IOverlaySwapChain *__fastcall CComputeScribbleRenderer::GetOverlaySwapChain(CComputeScribbleRenderer *this)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 2);
  v4 = 0LL;
  if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v1 + 24LL))(
         v1,
         &GUID_8ddf9ce7_e3f9_4bcf_983c_9c1b1b407c97,
         &v4) < 0 )
  {
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v4);
    return 0LL;
  }
  else
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 280LL))(v4);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    return (struct IOverlaySwapChain *)v2;
  }
}
