/*
 * XREFs of ?OnPointerUp@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z @ 0x18052E200
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x18052D674 (-CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z @ 0x18052EDE0 (-UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z.c)
 */

__int64 __fastcall AppResizeView::OnPointerUp(AppResizeView *this, __int64 a2, struct tagPOINT *a3)
{
  AppResizeView *v3; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (AppResizeView *)((char *)this - 32);
  if ( *((_BYTE *)this + 64) )
    return 0LL;
  v9 = *a3;
  AppResizeView::UpdateAppResizeData((char *)this - 32, &v9, 0LL);
  v9 = *a3;
  v5 = AppResizeView::CommitResize(v3, (const struct Geometry::CPoint *)&v9);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE7,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)v5);
  return v6;
}
