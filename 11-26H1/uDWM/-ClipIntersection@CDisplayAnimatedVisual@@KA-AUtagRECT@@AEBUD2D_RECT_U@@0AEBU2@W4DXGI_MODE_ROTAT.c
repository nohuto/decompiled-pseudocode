/*
 * XREFs of ?ClipIntersection@CDisplayAnimatedVisual@@KA?AUtagRECT@@AEBUD2D_RECT_U@@0AEBU2@W4DXGI_MODE_ROTATION@@@Z @ 0x1800AEF8C
 * Callers:
 *     ?CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800AED08 (-CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ?CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B01BC (-CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall CDisplayAnimatedVisual::ClipIntersection(
        struct tagRECT *__return_ptr retstr,
        const struct D2D_RECT_U *a2,
        const struct D2D_RECT_U *a3,
        const struct tagRECT *a4,
        enum DXGI_MODE_ROTATION a5)
{
  int v5; // esi
  LONG left; // r15d
  LONG top; // r12d
  UINT32 v9; // r14d
  int v10; // ecx
  UINT32 right; // r10d
  int v12; // r11d
  UINT32 v13; // r13d
  int v14; // eax
  int v15; // r9d
  UINT32 bottom; // r8d
  signed int v17; // r10d
  signed int v18; // r8d
  int v19; // ebp
  UINT32 v20; // eax
  int v21; // r14d
  int v22; // eax
  int v23; // ecx
  int v24; // r10d
  int v25; // eax
  int v26; // edx
  int v27; // r8d

  v5 = 0;
  left = a4->left;
  top = a4->top;
  v9 = a3->left;
  v10 = 0;
  right = a3->right;
  if ( a4->right - a4->left >= 0 )
    v10 = a4->right - a4->left;
  v12 = v10;
  v13 = a3->top;
  v14 = a4->bottom - top;
  v15 = 0;
  bottom = a3->bottom;
  if ( v14 >= 0 )
    v15 = v14;
  v17 = right - v9;
  v18 = bottom - v13;
  if ( ((a5 - 2) & 0xFFFFFFFD) == 0 )
  {
    v12 = v15;
    v15 = v10;
  }
  v19 = 0;
  if ( (int)(v12 * (a2->left - v9)) / v17 >= 0 )
    v19 = (int)(v12 * (a2->left - v9)) / v17;
  if ( (int)(v15 * (a2->top - v13)) / v18 >= 0 )
    v5 = (int)(v15 * (a2->top - v13)) / v18;
  v20 = a2->right - v9;
  v21 = v12;
  v22 = (int)(v12 * v20) / v17;
  if ( v12 >= v22 )
    v21 = v22;
  v23 = v15;
  v24 = v21;
  v25 = (int)(v15 * (a2->bottom - v13)) / v18;
  v26 = v19;
  v27 = v5;
  if ( v15 >= v25 )
    v23 = v25;
  switch ( a5 )
  {
    case DXGI_MODE_ROTATION_ROTATE90:
      v26 = v15 - v23;
      v27 = v19;
      v24 = v15 - v5;
      v23 = v21;
      break;
    case DXGI_MODE_ROTATION_ROTATE180:
      v27 = v15 - v23;
      v26 = v12 - v21;
      v24 = v12 - v19;
      v23 = v15 - v5;
      break;
    case DXGI_MODE_ROTATION_ROTATE270:
      v24 = v23;
      v27 = v12 - v21;
      v23 = v12 - v19;
      v26 = v5;
      break;
  }
  retstr->left = left + v26;
  retstr->top = top + v27;
  retstr->right = left + v24;
  retstr->bottom = top + v23;
  return retstr;
}
