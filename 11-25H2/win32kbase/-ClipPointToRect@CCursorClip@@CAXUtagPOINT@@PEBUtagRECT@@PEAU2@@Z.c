/*
 * XREFs of ?ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z @ 0x1400663D4
 * Callers:
 *     ?BoundPoint@CCursorClip@@QEAA?AW4ClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x1400653C0 (-BoundPoint@CCursorClip@@QEAA-AW4ClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_Mous.c)
 *     ?ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z @ 0x1400661B4 (-ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCursorClip::ClipPointToRect(struct tagPOINT a1, const struct tagRECT *a2, struct tagPOINT *a3)
{
  LONG left; // eax
  LONG right; // eax
  LONG y; // ecx
  LONG top; // eax
  LONG bottom; // eax

  *a3 = a1;
  left = a2->left;
  if ( a1.x >= a2->left )
  {
    right = a2->right;
    if ( a1.x < right )
      goto LABEL_5;
    left = right - 1;
  }
  a3->x = left;
LABEL_5:
  y = a3->y;
  top = a2->top;
  if ( y >= top )
  {
    bottom = a2->bottom;
    if ( y < bottom )
      return;
    top = bottom - 1;
  }
  a3->y = top;
}
