/*
 * XREFs of ?GetSourceRect@CDesktopThumbnailCVIVisual@@QEAAAEBUtagRECT@@XZ @ 0x1800ADDA0
 * Callers:
 *     ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x180028574 (-QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE.c)
 * Callees:
 *     <none>
 */

const struct tagRECT *__fastcall CDesktopThumbnailCVIVisual::GetSourceRect(CDesktopThumbnailCVIVisual *this)
{
  return (const struct tagRECT *)((char *)this + 240);
}
