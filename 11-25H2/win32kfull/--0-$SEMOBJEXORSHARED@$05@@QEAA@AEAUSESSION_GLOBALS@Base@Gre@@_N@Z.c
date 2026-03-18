/*
 * XREFs of ??0?$SEMOBJEXORSHARED@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z @ 0x1401AD9BC
 * Callers:
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14032B210 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008D78C (--$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall SEMOBJEXORSHARED<6>::SEMOBJEXORSHARED<6>(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v4; // rdx
  void (__fastcall *v5)(__int64); // rcx

  v4 = *a2 + 1040LL;
  *(_BYTE *)(a1 + 8) = a3;
  *(_QWORD *)a1 = v4;
  v5 = (void (__fastcall *)(__int64))GreAcquireSemaphoreSharedInternal;
  if ( !a3 )
    v5 = (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal;
  GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(v5, v4);
  return a1;
}
