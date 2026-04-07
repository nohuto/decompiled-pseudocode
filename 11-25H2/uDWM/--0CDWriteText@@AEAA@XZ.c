/*
 * XREFs of ??0CDWriteText@@AEAA@XZ @ 0x180039470
 * Callers:
 *     ?Create@CDWriteText@@SAJPEAPEAV1@@Z @ 0x1800392C4 (-Create@CDWriteText@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CSpriteVisual@@QEAA@XZ @ 0x18003983C (--0CSpriteVisual@@QEAA@XZ.c)
 */

CDWriteText *__fastcall CDWriteText::CDWriteText(CDWriteText *this)
{
  __int64 v1; // rcx

  CSpriteVisual::CSpriteVisual(this);
  *(_QWORD *)(v1 + 168) = &CDWriteText::`vftable'{for `IText'};
  *(_QWORD *)v1 = &CDWriteText::`vftable'{for `CSpriteVisual'};
  *(_QWORD *)(v1 + 176) = 0LL;
  *(_QWORD *)(v1 + 184) = 0LL;
  *(_OWORD *)(v1 + 192) = 0LL;
  *(_QWORD *)(v1 + 208) = 0LL;
  *(_QWORD *)(v1 + 216) = 7LL;
  *(_WORD *)(v1 + 192) = 0;
  *(_WORD *)(v1 + 424) = 0;
  return (CDWriteText *)v1;
}
