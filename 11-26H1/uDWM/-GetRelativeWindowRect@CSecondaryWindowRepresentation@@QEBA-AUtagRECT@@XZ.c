/*
 * XREFs of ?GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA?AUtagRECT@@XZ @ 0x180028830
 * Callers:
 *     ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x180028574 (-QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE.c)
 *     ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x180029EEC (-QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAI.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180034AB8 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800436A0 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180045488 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?EnsureVisualBrush@CTopLevelWindow3D@@AEAAJXZ @ 0x180082790 (-EnsureVisualBrush@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?CreateVisualBrushForAnimation@CSecondaryWindowRepresentation@@QEAA?AVCVisualBrush@@_N@Z @ 0x1800BF440 (-CreateVisualBrushForAnimation@CSecondaryWindowRepresentation@@QEAA-AVCVisualBrush@@_N@Z.c)
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x1800CA57C (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     ?s_GetRelativeWindowRect@CSecondaryWindowRepresentation@@CA?AUtagRECT@@AEBUtagSIZE@@AEBU_MARGINS@@@Z @ 0x180028860 (-s_GetRelativeWindowRect@CSecondaryWindowRepresentation@@CA-AUtagRECT@@AEBUtagSIZE@@AEBU_MARGINS.c)
 */

struct tagRECT *__fastcall CSecondaryWindowRepresentation::GetRelativeWindowRect(
        CSecondaryWindowRepresentation *this,
        struct tagRECT *__return_ptr retstr)
{
  struct tagRECT v2; // xmm0
  struct tagRECT *v3; // r9
  struct tagRECT *result; // rax
  struct tagRECT v5; // [rsp+20h] [rbp-18h] BYREF

  v2 = *CSecondaryWindowRepresentation::s_GetRelativeWindowRect(
          &v5,
          (const struct tagSIZE *)this + 10,
          (const struct _MARGINS *)((char *)this + 88));
  result = v3;
  *v3 = v2;
  return result;
}
