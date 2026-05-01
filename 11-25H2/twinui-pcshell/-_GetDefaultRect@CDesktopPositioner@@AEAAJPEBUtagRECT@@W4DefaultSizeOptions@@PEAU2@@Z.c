/*
 * XREFs of ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x1804F11EC
 * Callers:
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x180114230 (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180268220 (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x180115978 (-_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z.c)
 *     ?_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x180117520 (-_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@.c)
 */

__int64 __fastcall CDesktopPositioner::_GetDefaultRect(
        CDesktopPositioner *a1,
        const struct tagRECT *a2,
        int a3,
        struct tagRECT *a4)
{
  int DefaultSizeForRect; // ebx
  __int64 v8; // rdx
  struct tagSIZE v10; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v10 = 0LL;
  DefaultSizeForRect = CDesktopPositioner::_GetDefaultSizeForRect(a1, a3, a2, &v10);
  if ( DefaultSizeForRect < 0 )
  {
    v8 = 1316LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)DefaultSizeForRect);
    return (unsigned int)DefaultSizeForRect;
  }
  DefaultSizeForRect = CDesktopPositioner::_GetOffsetRectFromSize(a1, a2, 0LL, v10, a4);
  if ( DefaultSizeForRect < 0 )
  {
    v8 = 1327LL;
    goto LABEL_3;
  }
  return 0LL;
}
