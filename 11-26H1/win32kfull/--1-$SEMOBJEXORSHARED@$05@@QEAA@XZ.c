/*
 * XREFs of ??1?$SEMOBJEXORSHARED@$05@@QEAA@XZ @ 0x1400198F0
 * Callers:
 *     GreRedrawSpriteOverlapPresent @ 0x14001B79C (GreRedrawSpriteOverlapPresent.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140168780 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140313DF0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C78C (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepReleaseLockValidate@$05@@YAXXZ @ 0x1400726A4 (--$GrepReleaseLockValidate@$05@@YAXXZ.c)
 */

void __fastcall SEMOBJEXORSHARED<6>::~SEMOBJEXORSHARED<6>(__int64 a1)
{
  HSEMAPHORE v1; // rbx
  HSEMAPHORE v2; // rdx

  v1 = *(HSEMAPHORE *)a1;
  v2 = *(HSEMAPHORE *)a1;
  if ( *(_BYTE *)(a1 + 8) )
  {
    EtwTraceGreLockReleaseSemaphore(L"Sprite", v2);
    GrepReleaseLockValidate<6>();
    GreReleaseSemaphoreSharedInternal(v1);
  }
  else
  {
    GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v2);
  }
}
