/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CDDisplayRenderTarget@@UEAAJIPEAPEAX@Z @ 0x1801DD230
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayRenderTarget::SetSyncRefreshCountWaitTarget(
        CDDisplayRenderTarget *this,
        __int64 a2,
        void **a3)
{
  __int64 v3; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v7; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_QWORD *)this + 7);
  if ( v3 )
  {
    v6 = *(_QWORD *)(v3 + 536);
    if ( v6 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v5 = 0;
        *a3 = *(void **)(v3 + 544);
        return v5;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C1,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\ddisplayswapchain.cpp",
        (const char *)(unsigned int)v7);
    }
    else
    {
      v5 = -2003304309;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3BD,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\ddisplayrendertarget.cpp",
      (const char *)v5,
      v9);
    return v5;
  }
  v5 = -2003304442;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B7,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\ddisplayrendertarget.cpp",
    (const char *)0x88980006LL);
  return v5;
}
