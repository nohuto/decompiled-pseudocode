/*
 * XREFs of ?ApplyShellClip@CCursorClip@@AEAAXUtagPOINT@@PEAU2@@Z @ 0x14010D5C8
 * Callers:
 *     ?ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@PEAW4ClipResultDetailFlags@@@Z @ 0x14021783C (-ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@PEAW4ClipResultDetail.c)
 * Callees:
 *     PtInRect @ 0x14010DA60 (PtInRect.c)
 */

void __fastcall CCursorClip::ApplyShellClip(CCursorClip *this, struct tagPOINT a2, struct tagPOINT *a3)
{
  unsigned int v3; // edi
  int v4; // ebp
  LONG *v5; // r10
  unsigned int v6; // ebx
  struct tagPOINT v7; // r9
  LONG v9; // eax
  LONG v10; // eax
  LONG v11; // eax
  LONG v12; // ecx
  LONG v13; // eax
  unsigned int v14; // eax
  LONG *v15; // r10
  LONG *v16; // r11
  LONG x; // ecx
  LONG v18; // edx
  LONG y; // ecx
  LONG v20; // edx
  LONG v21; // edx
  int v22; // [rsp+20h] [rbp-8h]

  v3 = -1;
  *a3 = a2;
  v4 = *((_DWORD *)this + 66);
  v5 = 0LL;
  v6 = 0;
  v7 = a2;
  while ( v6 != v4 )
  {
    v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))PtInRect)(
            *((_QWORD *)this + 32) + 16LL * v6,
            v7,
            a3,
            v7,
            v22);
    if ( v14 )
      return;
    x = a3->x;
    if ( a3->x >= *v16 )
    {
      v20 = v16[2];
      if ( x >= v20 )
        v14 = x - v20 + 1;
    }
    else
    {
      v14 = *v16 - x;
    }
    v18 = v16[1];
    y = a3->y;
    if ( y >= v18 )
    {
      v21 = v16[3];
      if ( y >= v21 )
        v14 += y - v21 + 1;
    }
    else
    {
      v14 += v18 - y;
    }
    if ( v14 >= v3 )
      v16 = v15;
    ++v6;
    v5 = v16;
    if ( v14 >= v3 )
      v14 = v3;
    v3 = v14;
  }
  if ( v5 )
  {
    v9 = *v5;
    if ( a3->x >= *v5 )
    {
      v10 = v5[2];
      if ( a3->x < v10 )
        goto LABEL_9;
      v9 = v10 - 1;
    }
    a3->x = v9;
LABEL_9:
    v11 = v5[1];
    v12 = a3->y;
    if ( v12 >= v11 )
    {
      v13 = v5[3];
      if ( v12 < v13 )
        return;
      v11 = v13 - 1;
    }
    a3->y = v11;
  }
}
