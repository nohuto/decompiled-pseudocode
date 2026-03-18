/*
 * XREFs of ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x14001F7EC
 * Callers:
 *     GreExtCreateRegion @ 0x140096D00 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x14009ADAC (GreCreatePolyPolygonRgnInternal.c)
 * Callees:
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14001F850 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x14001F87C (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     HmgInsertObjectInternal @ 0x14001F910 (HmgInsertObjectInternal.c)
 */

__int64 __fastcall RGNOBJ::hrgnAssociate(struct OBJECT **this)
{
  struct OBJECT *v2; // rdi
  __int64 v3; // rbx
  __int64 inserted; // rax
  struct OBJECT *v5; // rcx
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF
  struct OBJECT *v8; // [rsp+40h] [rbp-18h]

  HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v7);
  v2 = *this;
  v3 = 0LL;
  if ( !v8 )
  {
    inserted = HmgInsertObjectInternal(v2);
    v5 = v8;
    v3 = inserted;
    if ( inserted )
      v5 = v2;
    v8 = v5;
  }
  HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v7);
  return v3;
}
