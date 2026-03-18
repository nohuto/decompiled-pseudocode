/*
 * XREFs of ??0?$SEMOBJ@$0P@@@QEAA@PEAVRFONT@@@Z @ 0x1401D8A0C
 * Callers:
 *     ?GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z @ 0x14010CB48 (-GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0P@@@YAXXZ @ 0x1400701DC (--$GrepAcquireLockValidate@$0P@@@YAXXZ.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<15>::SEMOBJ<15>(HSEMAPHORE *a1, __int64 a2)
{
  HSEMAPHORE v3; // rcx

  v3 = *(HSEMAPHORE *)(a2 + 856);
  *a1 = v3;
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<15>();
  return a1;
}
