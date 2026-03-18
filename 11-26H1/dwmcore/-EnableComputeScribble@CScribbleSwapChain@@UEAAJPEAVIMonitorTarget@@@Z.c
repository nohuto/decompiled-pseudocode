/*
 * XREFs of ?EnableComputeScribble@CScribbleSwapChain@@UEAAJPEAVIMonitorTarget@@@Z @ 0x1801CEC90
 * Callers:
 *     ?EnableComputeScribble@CDDisplaySwapChain@@UEAAJPEAVIMonitorTarget@@@Z @ 0x18029A870 (-EnableComputeScribble@CDDisplaySwapChain@@UEAAJPEAVIMonitorTarget@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@VCDecodeBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F5C70 (-reset@-$com_ptr_t@VCDecodeBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CComputeScribbleRenderer@@SAJPEAVIMonitorTarget@@PEAPEAV1@@Z @ 0x180259ADC (-Create@CComputeScribbleRenderer@@SAJPEAVIMonitorTarget@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScribbleSwapChain::EnableComputeScribble(CScribbleSwapChain *this, struct IMonitorTarget *a2)
{
  char *v2; // rsi
  __int64 v5; // r15
  unsigned int i; // ebx
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  int v11; // ebx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (char *)this - 232;
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 29) + 40LL))((char *)this - 232);
  if ( *(_DWORD *)(v5 + 1124) )
  {
    v11 = -2003304307;
    v12 = 29LL;
  }
  else
  {
    for ( i = 0; i < (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v2 + 96LL))(v2); ++i )
    {
      v7 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)v2 + 224LL))(v2, i);
      if ( !v7 )
        return 2291674884LL;
      v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 192LL))(v7, v5);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x24,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\scribbleswapchain.cpp",
          (const char *)(unsigned int)v8);
        return v9;
      }
    }
    if ( *((_QWORD *)this + 1) )
      return 0LL;
    wil::com_ptr_t<CDecodeBitmap,wil::err_returncode_policy>::reset((volatile signed __int32 **)this + 1);
    v11 = CComputeScribbleRenderer::Create(a2, (struct CComputeScribbleRenderer **)this + 1);
    if ( v11 >= 0 )
      return 0LL;
    v12 = 48LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\scribbleswapchain.cpp",
    (const char *)(unsigned int)v11);
  return (unsigned int)v11;
}
