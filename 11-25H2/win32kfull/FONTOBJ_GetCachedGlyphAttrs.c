/*
 * XREFs of FONTOBJ_GetCachedGlyphAttrs @ 0x1401CE8A8
 * Callers:
 *     UmfdQueryGlyphAttrs @ 0x1403410C0 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall FONTOBJ_GetCachedGlyphAttrs(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v2 = *(_QWORD *)(a1 + 8LL * a2 + 904);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4);
  return v2;
}
