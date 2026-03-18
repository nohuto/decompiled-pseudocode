/*
 * XREFs of ?ConfirmIndependentFlipEntry@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x1801B1DDC
 * Callers:
 *     ?PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAIPEA_N@Z @ 0x1800D6554 (-PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::OverlayPlaneInfo::ConfirmIndependentFlipEntry(
        COverlayContext::OverlayPlaneInfo *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 365) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 408LL))(
           *((_QWORD *)this + 2),
           *((_QWORD *)this + 3));
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xFDA,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globaloverlaycontext.cpp",
        (const char *)(unsigned int)v5,
        a5);
  }
}
