/*
 * XREFs of ?UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z @ 0x1801A8A7C
 * Callers:
 *     ?ApplyCursorAttraction@CursorAttraction@@QEAA?AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z @ 0x1801A865C (-ApplyCursorAttraction@CursorAttraction@@QEAA-AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z.c)
 * Callees:
 *     _o_sqrtf_0 @ 0x18009AB9C (_o_sqrtf_0.c)
 *     operator__ @ 0x1801A8640 (operator__.c)
 */

void __fastcall CursorAttraction::UpdateAttractionParameters(struct tagPOINT *this, struct tagPOINT *a2)
{
  struct tagPOINT *v2; // r8
  LONG y; // r9d
  LONG v6; // edx
  LONG v7; // r11d
  int v8; // ecx
  int v9; // r9d
  int v10; // eax
  LONG x; // r9d
  LONG v12; // edx
  int v13; // ecx
  int v14; // r9d
  int v15; // eax
  _DWORD *v16; // r8
  _DWORD *v17; // r10
  float v18; // xmm7_4
  float v19; // xmm6_4
  float v20; // xmm7_4
  float v21; // xmm6_4
  float v22; // xmm0_4

  v2 = this + 2;
  this[2] = *a2;
  y = a2->y;
  v6 = this->y;
  if ( v6 <= y )
  {
    if ( this[1].y >= y )
      goto LABEL_11;
    v2 = this + 2;
  }
  v7 = this[1].y;
  v8 = v7 - y;
  if ( v7 - y < 0 )
    v8 = y - v7;
  v9 = y - v6;
  v10 = -v9;
  if ( v9 > 0 )
    v10 = v9;
  if ( v10 >= v8 )
    this[2].y = v7;
  else
    this[2].y = v6;
LABEL_11:
  x = a2->x;
  if ( this->x > a2->x || this[1].x < x )
  {
    v12 = this[1].x;
    v13 = v12 - x;
    if ( v12 - x < 0 )
      v13 = x - v12;
    v14 = x - this->x;
    v15 = -v14;
    if ( v14 > 0 )
      v15 = v14;
    if ( v15 < v13 )
      v12 = this->x;
    v2->x = v12;
  }
  v18 = 0.0;
  v19 = 0.0;
  if ( operator__(v2, a2) )
  {
    v20 = (float)(*v16 - *v17);
    v21 = (float)(this[2].y - v17[1]);
    v22 = o_sqrtf_0((float)(v21 * v21) + (float)(v20 * v20));
    v19 = (float)(v21 / v22) * *(float *)&this[4].y;
    v18 = (float)(v20 / v22) * *(float *)&this[4].y;
  }
  *(float *)&this[3].x = v18;
  *(float *)&this[3].y = v19;
}
