/*
 * XREFs of ?Initialize@CCompositionTextLine@@MEAAJXZ @ 0x18026B650
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CClipBrush@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18028920C (-Create@CClipBrush@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionTextLine::Initialize(struct CComposition **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  struct CResource *v4; // rbx
  struct CComposition *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CResource *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v8);
  v2 = CClipBrush::Create(this[3], &v8);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = v8;
    CResource::RegisterNotifier((CResource *)this, v8);
    v5 = this[14];
    v8 = 0LL;
    this[14] = v4;
    if ( v5 )
      (*(void (__fastcall **)(struct CComposition *))(*(_QWORD *)v5 + 16LL))(v5);
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositiontextline.cpp",
      (const char *)(unsigned int)v2);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v8);
  return v3;
}
