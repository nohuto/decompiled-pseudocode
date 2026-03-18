/*
 * XREFs of ?ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x14039D8F8
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGCONTEXT::ValidatePresentRegions(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT *a2,
        int a3,
        int a4)
{
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rcx
  UINT v8; // r10d
  const D3DKMT_MOVE_RECT *pMoveRects; // rbx
  const RECT *pDirtyRects; // rbx
  UINT v11; // r9d
  UINT DirtyRectCount; // edi
  int v13; // ecx
  int v14; // r8d
  int v15; // edx
  int v16; // eax
  int v17; // r10d
  int v18; // r11d
  int left; // edx
  int right; // r8d
  __int64 bottom; // rax
  const wchar_t *v23; // r9
  __int64 v24; // rcx
  __int64 top; // rdx
  __int64 v26; // r8
  int v27; // r9d
  int v28; // r11d
  __int64 x; // rbp
  __int64 y; // rsi
  int v31; // r8d
  int v32; // edx
  __int64 v33; // rbx
  __int64 v34; // rdi

  pPresentRegions = a2->pPresentRegions;
  v8 = 0;
  pMoveRects = pPresentRegions->pMoveRects;
  while ( v8 < pPresentRegions->MoveRectCount )
  {
    left = pMoveRects->DestRect.left;
    right = pMoveRects->DestRect.right;
    if ( right <= left
      || (v27 = pMoveRects->DestRect.top, v28 = pMoveRects->DestRect.bottom, v28 <= v27)
      || right > a3
      || v28 > a4
      || left < 0
      || v27 < 0 )
    {
      WdLogSingleEntry5(
        2LL,
        -1073741811LL,
        pMoveRects->DestRect.left,
        pMoveRects->DestRect.top,
        pMoveRects->DestRect.right,
        pMoveRects->DestRect.bottom);
      bottom = pMoveRects->DestRect.bottom;
      v23 = L"0x%I64x Invalid Dest Rect [0x%I64x 0x%I64x 0x%I64x 0x%I64x] in Move Rect";
      v24 = pMoveRects->DestRect.right;
      top = pMoveRects->DestRect.top;
      v26 = pMoveRects->DestRect.left;
      WdLogGlobalForLineNumber = 9771;
      goto LABEL_16;
    }
    x = pMoveRects->SourcePoint.x;
    y = pMoveRects->SourcePoint.y;
    v31 = pMoveRects->SourcePoint.x - left + right;
    v32 = v28 + pMoveRects->SourcePoint.y - v27;
    if ( v31 > a3 || v32 > a4 || (int)x < 0 || (int)y < 0 )
    {
      v33 = v32;
      v34 = v31;
      WdLogSingleEntry5(2LL, -1073741811LL, x, y, v31, v32);
      WdLogGlobalForLineNumber = 9795;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x Invalid Source Point [0x%I64x 0x%I64x : 0x%I64x 0x%I64x] in Move Rect",
        -1073741811LL,
        x,
        y,
        v34,
        v33);
      return 3221225485LL;
    }
    ++v8;
    ++pMoveRects;
  }
  pDirtyRects = pPresentRegions->pDirtyRects;
  v11 = 0;
  DirtyRectCount = pPresentRegions->DirtyRectCount;
  while ( 1 )
  {
    if ( v11 >= DirtyRectCount )
      return 0LL;
    if ( (a2->Flags.Value & 0x10000000) != 0 )
      break;
    v13 = pDirtyRects->right;
    v14 = v13;
    v15 = pDirtyRects->left;
    v16 = pDirtyRects->left;
    if ( v13 <= pDirtyRects->left )
      goto LABEL_20;
    v17 = pDirtyRects->bottom;
    v18 = pDirtyRects->top;
    if ( v17 <= v18 )
      goto LABEL_20;
LABEL_8:
    v13 = v14;
    v15 = v16;
    if ( v17 > a4 || v14 > a3 || v16 < 0 || v18 < 0 )
      goto LABEL_20;
    ++v11;
    ++pDirtyRects;
  }
  v14 = pDirtyRects->right;
  v13 = v14;
  v16 = pDirtyRects->left;
  v15 = pDirtyRects->left;
  if ( v14 >= pDirtyRects->left )
  {
    v17 = pDirtyRects->bottom;
    v18 = pDirtyRects->top;
    if ( v17 >= v18 )
      goto LABEL_8;
  }
LABEL_20:
  WdLogSingleEntry5(2LL, -1073741811LL, v15, pDirtyRects->top, v13, pDirtyRects->bottom);
  bottom = pDirtyRects->bottom;
  v23 = L"0x%I64x Invalid Dirty Rect [0x%I64x 0x%I64x 0x%I64x 0x%I64x]";
  v24 = pDirtyRects->right;
  top = pDirtyRects->top;
  v26 = pDirtyRects->left;
  WdLogGlobalForLineNumber = 9825;
LABEL_16:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v23, -1073741811LL, v26, top, v24, bottom);
  return 3221225485LL;
}
