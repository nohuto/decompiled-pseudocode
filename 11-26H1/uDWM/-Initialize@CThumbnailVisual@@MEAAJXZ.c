/*
 * XREFs of ?Initialize@CThumbnailVisual@@MEAAJXZ @ 0x1800846E0
 * Callers:
 *     ?Create@CThumbnailVisual@@SAJPEAPEAV1@@Z @ 0x180026100 (-Create@CThumbnailVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x180021BA0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LoadThemeBorderParameters@CThumbnailVisual@@AEAAJXZ @ 0x1800C9DA4 (-LoadThemeBorderParameters@CThumbnailVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CThumbnailVisual::Initialize(struct CContainerVisualProxy **this)
{
  int ThemeBorderParameters; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ThemeBorderParameters = CContainerVisual::Initialize(this);
  if ( ThemeBorderParameters < 0 )
  {
    v3 = 31LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"clientcore\\windows\\dwm\\udwm\\thumbnailvisual.cpp",
      (const char *)(unsigned int)ThemeBorderParameters);
    return (unsigned int)ThemeBorderParameters;
  }
  ThemeBorderParameters = CThumbnailVisual::LoadThemeBorderParameters((CThumbnailVisual *)this);
  if ( ThemeBorderParameters < 0 )
  {
    v3 = 32LL;
    goto LABEL_3;
  }
  return 0LL;
}
