/*
 * XREFs of ?ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR__@@@Z @ 0x1803C785C
 * Callers:
 *     ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x1803C7360 (-ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x1801B8A5C (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1802B34F0 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?RemoveRectFromRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z @ 0x1803CCC70 (-RemoveRectFromRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ApplyCortiniWindowRegion(
        CortanaDesktopExperienceView *this,
        HRGN a2,
        struct tagRECT *a3,
        ExperienceManagerUtils *a4)
{
  int v5; // esi
  int v6; // r14d
  int v8; // ebp
  HMONITOR v9; // r8
  int v10; // ebx
  HMONITOR v11; // r8
  int v12; // eax
  int v13; // ebx
  __int64 v14; // rdx
  int v16; // ebx
  int IsThreadRTL; // eax
  CortanaDesktopExperienceView *v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = a3->right - a3->left;
  v6 = a3->bottom - a3->top;
  v8 = ExperienceManagerUtils::ScaleByPerMonitorDPI(0LL, a4, (HMONITOR)a3);
  v10 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x28, a4, v9);
  v12 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x87, a4, v11);
  v13 = CortanaDesktopExperienceView::RemoveRectFromRegion(
          (CortanaDesktopExperienceView *)(unsigned int)(v6 - v10 - v12),
          a2,
          0,
          0,
          v5,
          v6 - v10 - v12);
  if ( v13 < 0 )
  {
    v14 = 2060LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v13);
    return (unsigned int)v13;
  }
  v16 = v8;
  if ( (unsigned int)Mirror_IsThreadRTL() )
    v16 = v5;
  IsThreadRTL = Mirror_IsThreadRTL();
  v13 = CortanaDesktopExperienceView::RemoveRectFromRegion(v18, a2, IsThreadRTL != 0 ? v5 - v8 : 0, 0, v16, v6);
  if ( v13 < 0 )
  {
    v14 = 2067LL;
    goto LABEL_3;
  }
  return 0LL;
}
