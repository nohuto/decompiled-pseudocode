/*
 * XREFs of ?ApplyAppClip@CCursorClip@@AEAA_NUtagPOINT@@PEAU2@@Z @ 0x14012DFC0
 * Callers:
 *     ?BoundPoint@CCursorClip@@QEAA?AUClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x140217920 (-BoundPoint@CCursorClip@@QEAA-AUClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_Mouse.c)
 * Callees:
 *     <none>
 */

char __fastcall CCursorClip::ApplyAppClip(CCursorClip *this, struct tagPOINT a2, struct tagPOINT *a3)
{
  __int64 v3; // r10
  char v4; // r9
  LONG v5; // eax
  LONG v6; // eax
  LONG v7; // eax
  LONG y; // r10d
  LONG v9; // eax

  *a3 = a2;
  v3 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  if ( !v3 )
    v3 = *((_QWORD *)this + 3) - *((_QWORD *)this + 1);
  v4 = 0;
  if ( !v3 || *((_DWORD *)this + 62) )
    goto LABEL_13;
  *a3 = a2;
  v5 = *((_DWORD *)this + 4);
  if ( a2.x < v5 )
    goto LABEL_8;
  v6 = *((_DWORD *)this + 6);
  if ( a2.x >= v6 )
  {
    v5 = v6 - 1;
LABEL_8:
    a3->x = v5;
  }
  v7 = *((_DWORD *)this + 5);
  y = a3->y;
  if ( y >= v7 )
  {
    v9 = *((_DWORD *)this + 7);
    if ( y < v9 )
      goto LABEL_13;
    v7 = v9 - 1;
  }
  a3->y = v7;
LABEL_13:
  if ( *a3 != a2 )
    return 1;
  return v4;
}
