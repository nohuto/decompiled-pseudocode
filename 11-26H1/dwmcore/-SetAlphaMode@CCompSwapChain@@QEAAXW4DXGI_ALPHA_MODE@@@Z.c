/*
 * XREFs of ?SetAlphaMode@CCompSwapChain@@QEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1802A31AC
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1802560AC (-Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCompSwapChain::SetAlphaMode(CCompSwapChain *this, unsigned int a2)
{
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 28) != a2 )
  {
    *((_DWORD *)this + 28) = a2;
    v4 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 8);
    v6 = 0LL;
    if ( (**v4)(v4, &GUID_7652c85a_0df5_4567_bcdd_8176a332b99b, &v6) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 72LL))(v6, a2);
    v5 = *((_QWORD *)this + 10);
    if ( v5 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v5 + 16) + 136LL))(v5 + 16, a2);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v6);
  }
}
