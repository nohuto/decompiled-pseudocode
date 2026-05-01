/*
 * XREFs of ?DragInputHandler_CreateInstance@@YAJPEAUIExternalDragHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1804C255C
 * Callers:
 *     ?_StartTabletModeWindowArrangement@CMultitaskingViewControllerBase@@IEAAJPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x1804B332C (-_StartTabletModeWindowArrangement@CMultitaskingViewControllerBase@@IEAAJPEAUISwitchItem@@PEAUIE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18004F930 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A0BF0 (-InternalRelease@-$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VDragInputHandler@@V1@AEAPEAUIExternalDragHost@@@Details@WRL@Microsoft@@YAJPEAPEAVDragInputHandler@@AEAPEAUIExternalDragHost@@@Z @ 0x1804C23D4 (--$MakeAndInitialize@VDragInputHandler@@V1@AEAPEAUIExternalDragHost@@@Details@WRL@Microsoft@@YAJ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DragInputHandler_CreateInstance(struct IExternalDragHost *a1, const struct _GUID *a2, void **a3)
{
  int v4; // eax
  int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  const struct _GUID *v8; // rcx
  DragInputHandler *v9; // rcx
  DragInputHandler *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IExternalDragHost *v13; // [rsp+30h] [rbp+8h] BYREF
  DragInputHandler *v14; // [rsp+38h] [rbp+10h] BYREF

  v13 = a1;
  *a3 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease((__int64 *)&v14);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<DragInputHandler,DragInputHandler,IExternalDragHost * &>(&v14, &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = (unsigned int)v4;
    v7 = 140LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\draginputhandler.cpp",
      (const char *)v6);
    goto LABEL_11;
  }
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_3421cff7_d49b_4e87_a0e9_1f7077d9ce1b, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v10 = v14;
    *a3 = v14;
    (*(void (__fastcall **)(DragInputHandler *))(*(_QWORD *)v10 + 8LL))(v10);
    v5 = 0;
  }
  else if ( InlineIsEqualGUID(v8, v8) )
  {
    v9 = v14;
    *a3 = v14;
    v5 = 0;
    (*(void (__fastcall **)(DragInputHandler *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  else
  {
    v5 = -2147467262;
  }
  if ( v5 < 0 )
  {
    v6 = (unsigned int)v5;
    v7 = 141LL;
    goto LABEL_10;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease((__int64 *)&v14);
  return (unsigned int)v5;
}
