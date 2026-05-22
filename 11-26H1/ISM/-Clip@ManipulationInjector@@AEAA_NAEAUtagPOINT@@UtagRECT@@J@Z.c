/*
 * XREFs of ?Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z @ 0x180113A38
 * Callers:
 *     ?ComputeSafeDelta@ManipulationInjector@@AEAA?AUtagPOINT@@IU2@UtagRECT@@@Z @ 0x180113AF4 (-ComputeSafeDelta@ManipulationInjector@@AEAA-AUtagPOINT@@IU2@UtagRECT@@@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x180114D44 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x180115110 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1801154D4 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ManipulationInjector::Clip(ManipulationInjector *this, struct tagPOINT *a2, struct tagRECT *a3, int a4)
{
  __int64 v5; // rdx
  char v6; // r10
  int x; // edi
  char v9; // bl
  LONG y; // ecx
  LONG bottom; // r8d

  v5 = (__int64)*a2;
  v6 = 0;
  x = a4 + a3->left;
  v9 = 1;
  if ( a2->x >= x )
  {
    x = a2->x;
    if ( a2->x < a3->right - a4 )
      goto LABEL_5;
    x = a3->right + ~a4;
  }
  a2->x = x;
  v6 = 1;
LABEL_5:
  y = a4 + a3->top;
  if ( a2->y >= y )
  {
    bottom = a3->bottom;
    y = a2->y;
    if ( y < bottom - a4 )
    {
      v9 = v6;
      if ( !v6 )
        return v9;
      goto LABEL_10;
    }
    y = ~a4 + bottom;
  }
  a2->y = y;
LABEL_10:
  if ( *((_BYTE *)this + 13) )
    DbgPrint("Clipped: original (%d, %d) clipped (%d, %d)\n", v5, HIDWORD(v5), x, y);
  return v9;
}
