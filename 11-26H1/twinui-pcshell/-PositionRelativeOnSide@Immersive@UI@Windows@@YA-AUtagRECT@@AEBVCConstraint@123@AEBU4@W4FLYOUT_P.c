/*
 * XREFs of ?PositionRelativeOnSide@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_PLACEMENT@@0@Z @ 0x18013DFEC
 * Callers:
 *     ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x18013ED78 (-QueryRelativePosition@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU.c)
 * Callees:
 *     ?ShiftRectIntoContainer@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x18013F3E8 (-ShiftRectIntoContainer@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 *     ?MoveNearRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBU4@0W4FLYOUT_PLACEMENT@@@Z @ 0x1801CD950 (-MoveNearRect@Immersive@UI@Windows@@YA-AUtagRECT@@AEBU4@0W4FLYOUT_PLACEMENT@@@Z.c)
 *     ?VerticallyCenterRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x18068508C (-VerticallyCenterRect@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 */

__int64 __fastcall Windows::UI::Immersive::PositionRelativeOnSide(
        __int64 a1,
        struct tagRECT *a2,
        struct tagRECT *a3,
        const struct tagRECT *a4,
        struct tagRECT *a5)
{
  int v8; // r9d
  int v9; // r9d
  LONG top; // r8d
  LONG left; // edx
  LONG right; // eax
  struct tagRECT v13; // xmm0
  LONG v14; // edx
  char v15; // cl
  const struct tagRECT *v17; // r9
  int v18; // r9d
  struct tagRECT rc; // [rsp+20h] [rbp-30h] BYREF
  struct tagRECT v20; // [rsp+30h] [rbp-20h] BYREF
  struct tagRECT v21; // [rsp+40h] [rbp-10h] BYREF

  *(_OWORD *)a1 = 0LL;
  if ( (unsigned int)a4 <= 2 )
  {
    *(_QWORD *)&rc.left = 0LL;
    if ( (_DWORD)a4 && (v8 = (_DWORD)a4 - 1) != 0 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v18 = v9 - 1;
        if ( v18 )
        {
          if ( v18 != 1 )
          {
            top = rc.top;
            left = rc.left;
            goto LABEL_7;
          }
          left = a2->right - a3->left;
        }
        else
        {
          left = a2->left - a3->right;
        }
        top = rc.top;
        goto LABEL_7;
      }
      top = a2->bottom - a3->top;
    }
    else
    {
      top = a2->top - a3->bottom;
    }
    left = 0;
LABEL_7:
    rc = *a3;
    OffsetRect(&rc, left, top);
    right = a2->right;
    v20 = rc;
    OffsetRect(
      &v20,
      (a2->left + right - _mm_cvtsi128_si32((__m128i)rc) - _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rc, 8))) / 2,
      0);
    v13 = v20;
    goto LABEL_8;
  }
  if ( (unsigned int)((_DWORD)a4 - 3) > 1 )
    goto LABEL_9;
  v20 = *(struct tagRECT *)Windows::UI::Immersive::MoveNearRect(&rc, a3, a2);
  v13 = *Windows::UI::Immersive::VerticallyCenterRect(
           &v21,
           a2,
           (const struct Windows::UI::Immersive::CConstraint *)&v20,
           v17);
LABEL_8:
  *(struct tagRECT *)a1 = v13;
LABEL_9:
  v14 = *(_DWORD *)(a1 + 8);
  v15 = 1;
  if ( *(_DWORD *)a1 > v14 || *(_DWORD *)(a1 + 4) > *(_DWORD *)(a1 + 12) )
    v15 = 0;
  if ( *(_DWORD *)a1 < a5->left
    || v14 > a5->right
    || *(_DWORD *)(a1 + 4) < a5->top
    || *(_DWORD *)(a1 + 12) > a5->bottom
    || !v15 )
  {
    *(struct tagRECT *)a1 = *Windows::UI::Immersive::ShiftRectIntoContainer(
                               (Windows::UI::Immersive *)&v21,
                               a5,
                               (const struct Windows::UI::Immersive::CConstraint *)a1,
                               a4);
  }
  return a1;
}
