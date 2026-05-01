/*
 * XREFs of ?ResizeView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1804DBC30
 * Callers:
 *     ?_OnSizeConstraintsChanged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804DC124 (-_OnSizeConstraintsChanged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804DC6C8 (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

__int64 __fastcall SurfaceHubPositioner::ResizeView(
        SurfaceHubPositioner *this,
        struct IApplicationView *a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 472) )
  {
    v4 = -2147418113;
    v5 = 180LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = SurfaceHubPositioner::_SetDefaultLayout((SurfaceHubPositioner *)((char *)this - 104), a2, 0);
  if ( v4 < 0 )
  {
    v5 = 181LL;
    goto LABEL_3;
  }
  return 0LL;
}
