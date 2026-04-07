/*
 * XREFs of ?GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA?AUtagRECT@@XZ @ 0x1800189C4
 * Callers:
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x18001396C (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?CreateTransformMatrix@CTopLevelWindow3D@@AEAAXPEAUD2DMatrix@@AEBUD2D_POINT_3F@@1111@Z @ 0x180018B08 (-CreateTransformMatrix@CTopLevelWindow3D@@AEAAXPEAUD2DMatrix@@AEBUD2D_POINT_3F@@1111@Z.c)
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180018D00 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z @ 0x18001EBF0 (-CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180049AF4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180056E94 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x180060078 (-QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x18006459C (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x18008F2B0 (-QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAI.c)
 * Callees:
 *     ?s_GetRelativeWindowRect@CSecondaryWindowRepresentation@@CA?AUtagRECT@@AEBUtagSIZE@@AEBU_MARGINS@@@Z @ 0x1800189F4 (-s_GetRelativeWindowRect@CSecondaryWindowRepresentation@@CA-AUtagRECT@@AEBUtagSIZE@@AEBU_MARGINS.c)
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
