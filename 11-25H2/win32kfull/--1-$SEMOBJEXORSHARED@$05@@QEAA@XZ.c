/*
 * XREFs of ??1?$SEMOBJEXORSHARED@$05@@QEAA@XZ @ 0x1401B9104
 * Callers:
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14032B210 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140094B50 (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall SEMOBJEXORSHARED<6>::~SEMOBJEXORSHARED<6>(__int64 a1)
{
  __int64 v1; // rdx
  bool v2; // zf
  __int64 (__fastcall *v3)(__int64); // rcx

  v1 = *(_QWORD *)a1;
  v2 = *(_BYTE *)(a1 + 8) == 0;
  v3 = (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal;
  if ( v2 )
    v3 = (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal;
  return GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(v3, v1);
}
