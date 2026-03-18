/*
 * XREFs of ?GetOverlayMonitorTarget@CComputeScribbleRenderer@@QEAAJPEAPEAVIOverlayMonitorTarget@@@Z @ 0x180193594
 * Callers:
 *     ?WorkerThreadMain@CComputeScribbleScheduler@@AEAAKXZ @ 0x18019337C (-WorkerThreadMain@CComputeScribbleScheduler@@AEAAKXZ.c)
 *     ?DecideBufferToDispatch@CComputeScribbleScheduler@@AEAAJPEAPEAVCComputeScribbleFramebuffer@@0@Z @ 0x180193914 (-DecideBufferToDispatch@CComputeScribbleScheduler@@AEAAJPEAPEAVCComputeScribbleFramebuffer@@0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComputeScribbleRenderer::GetOverlayMonitorTarget(
        CComputeScribbleRenderer *this,
        struct IOverlayMonitorTarget **a2)
{
  __int64 v3; // rcx
  struct IOverlayMonitorTarget *v5; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  if ( !*((_BYTE *)this + 48) )
    return 2291662987LL;
  v3 = *((_QWORD *)this + 2);
  v5 = 0LL;
  if ( (*(int (__fastcall **)(__int64, GUID *, struct IOverlayMonitorTarget **))(*(_QWORD *)v3 + 24LL))(
         v3,
         &GUID_8ddf9ce7_e3f9_4bcf_983c_9c1b1b407c97,
         &v5) < 0 )
  {
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v5);
    return 2291662854LL;
  }
  else
  {
    *a2 = v5;
    return 0LL;
  }
}
