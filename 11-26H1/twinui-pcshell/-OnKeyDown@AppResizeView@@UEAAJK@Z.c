/*
 * XREFs of ?OnKeyDown@AppResizeView@@UEAAJK@Z @ 0x18052E0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CancelResize@AppResizeView@@AEAAXXZ @ 0x18052D5D8 (-CancelResize@AppResizeView@@AEAAXXZ.c)
 *     ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x18052D674 (-CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z @ 0x18052EDE0 (-UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z.c)
 */

__int64 __fastcall AppResizeView::OnKeyDown(AppResizeView *this, int a2)
{
  AppResizeView *v2; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  int ScaleFactorForDevice; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // eax
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v16; // [rsp+30h] [rbp+8h] BYREF
  int v17; // [rsp+34h] [rbp+Ch]

  v2 = (AppResizeView *)((char *)this - 32);
  if ( *((_BYTE *)this + 64) )
    return 0LL;
  if ( !*((_BYTE *)this + 452) )
    goto LABEL_8;
  if ( ((a2 - 37) & 0xFFFFFFFD) == 0 )
  {
    ScaleFactorForDevice = GetScaleFactorForDevice(1LL);
    v9 = -10;
    if ( a2 != 37 )
      v9 = 10;
    v10 = MulDiv(v9, ScaleFactorForDevice, 100) + *((_DWORD *)this + 27);
    v11 = *((_DWORD *)this + 17);
    v12 = *((_DWORD *)this + 19) - 1;
    v13 = v12;
    if ( v12 >= v10 )
      v13 = v10;
    if ( v11 <= v13 )
    {
      v11 = v10;
      if ( v12 < v10 )
        v11 = *((_DWORD *)this + 19) - 1;
    }
    v14 = *((_DWORD *)this + 28);
    v16 = v11;
    v17 = v14;
    AppResizeView::UpdateAppResizeData(v2, &v16, 0LL);
    return 0LL;
  }
  if ( a2 != 13 )
  {
    if ( a2 != 27 )
      return 0LL;
LABEL_8:
    AppResizeView::CancelResize(v2);
    return 0LL;
  }
  v5 = AppResizeView::CommitResize(v2, (AppResizeView *)((char *)this + 108));
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10A,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  return 0LL;
}
