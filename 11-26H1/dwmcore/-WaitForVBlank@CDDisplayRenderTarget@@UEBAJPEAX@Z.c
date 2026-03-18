/*
 * XREFs of ?WaitForVBlank@CDDisplayRenderTarget@@UEBAJPEAX@Z @ 0x180254A90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayRenderTarget::WaitForVBlank(CDDisplayRenderTarget *this, void *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  if ( *((_QWORD *)this + 7) && (v2 = *((_QWORD *)this + 6)) != 0 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, bool, unsigned __int64))(*(_QWORD *)v2 + 48LL))(
           v2,
           a2 != 0LL,
           (unsigned __int64)&v7 & -(__int64)(a2 != 0LL));
    v4 = v3;
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        941LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\ddisplayrendertarget.cpp",
        (const char *)(unsigned int)v3);
  }
  else
  {
    v4 = -2003304442;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\ddisplayrendertarget.cpp",
      (const char *)0x88980006LL);
  }
  return v4;
}
