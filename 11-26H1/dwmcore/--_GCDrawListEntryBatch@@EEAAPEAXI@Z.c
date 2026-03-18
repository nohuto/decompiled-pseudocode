/*
 * XREFs of ??_GCDrawListEntryBatch@@EEAAPEAXI@Z @ 0x180150FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDrawListEntryBatch@@EEAA@XZ @ 0x180150FDC (--1CDrawListEntryBatch@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CDrawListEntryBatch *__fastcall CDrawListEntryBatch::`scalar deleting destructor'(CDrawListEntryBatch *this, char a2)
{
  CDrawListEntryBatch::~CDrawListEntryBatch(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xB8uLL);
  return this;
}
