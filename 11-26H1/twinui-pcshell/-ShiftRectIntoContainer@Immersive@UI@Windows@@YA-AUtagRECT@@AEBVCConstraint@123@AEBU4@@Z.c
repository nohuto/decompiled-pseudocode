/*
 * XREFs of ?ShiftRectIntoContainer@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x18013F3E8
 * Callers:
 *     ?PositionRelativeOnSide@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_PLACEMENT@@0@Z @ 0x18013DFEC (-PositionRelativeOnSide@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_P.c)
 *     ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x18013ED78 (-QueryRelativePosition@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall Windows::UI::Immersive::ShiftRectIntoContainer(
        struct tagRECT *this,
        struct tagRECT *__return_ptr retstr,
        struct tagRECT *a3,
        const struct tagRECT *a4)
{
  LONG left; // r9d
  struct tagRECT v6; // xmm0
  LONG v8; // edx
  LONG right; // r9d
  LONG top; // rcx^4
  int v11; // edx
  int v12; // r8d
  LONG v13; // r9d
  LONG v14; // r8d
  LONG bottom; // edx
  struct tagRECT v17; // xmm0
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // edx
  struct tagRECT rc; // [rsp+20h] [rbp-10h] BYREF

  left = retstr->left;
  v6 = *a3;
  *this = *a3;
  v8 = this->left;
  if ( this->left < left )
  {
    top = v6.top;
    v11 = left - v6.left;
  }
  else
  {
    right = this->right;
    if ( right <= retstr->right )
      goto LABEL_5;
    top = v6.top;
    v11 = retstr->right + v8 - right - v6.left;
  }
  v12 = this->top - top;
  rc = v6;
  OffsetRect(&rc, v11, v12);
  *this = rc;
LABEL_5:
  v13 = retstr->top;
  v14 = this->top;
  if ( v14 < v13 )
  {
    v17 = *this;
    v18 = *(_QWORD *)&this->left;
    v19 = v13 - HIDWORD(*(_QWORD *)&this->left);
LABEL_10:
    v20 = this->left - v18;
    rc = v17;
    OffsetRect(&rc, v20, v19);
    *this = rc;
    return this;
  }
  bottom = this->bottom;
  if ( bottom > retstr->bottom )
  {
    v17 = *this;
    v18 = *(_QWORD *)&this->left;
    v19 = retstr->bottom + v14 - HIDWORD(*(_QWORD *)&this->left) - bottom;
    goto LABEL_10;
  }
  return this;
}
