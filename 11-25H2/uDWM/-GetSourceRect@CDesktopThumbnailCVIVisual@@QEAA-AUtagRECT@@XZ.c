/*
 * XREFs of ?GetSourceRect@CDesktopThumbnailCVIVisual@@QEAA?AUtagRECT@@XZ @ 0x1800AE6AC
 * Callers:
 *     ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x180060078 (-QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall CDesktopThumbnailCVIVisual::GetSourceRect(
        CDesktopThumbnailCVIVisual *this,
        struct tagRECT *__return_ptr retstr)
{
  struct tagRECT *result; // rax

  result = retstr;
  *retstr = *(struct tagRECT *)((char *)this + 280);
  return result;
}
