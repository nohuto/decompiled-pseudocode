/*
 * XREFs of MmMapLockedRestartPages @ 0x140864770
 * Callers:
 *     <none>
 * Callees:
 *     MiMapMdlCommon @ 0x140312C2C (MiMapMdlCommon.c)
 *     MiTranslateCacheType @ 0x140348400 (MiTranslateCacheType.c)
 *     MiGetAnyMultiplexedVm @ 0x140457870 (MiGetAnyMultiplexedVm.c)
 *     MiReserveDriverPtes @ 0x140B0A2B4 (MiReserveDriverPtes.c)
 */

__int64 __fastcall MmMapLockedRestartPages(_DWORD *a1, int a2, int a3)
{
  int v5; // esi
  __int64 v6; // r9
  char *AnyMultiplexedVm; // rax
  unsigned __int64 *v8; // rdx
  unsigned int v9; // r9d

  v5 = MiTranslateCacheType(a2);
  if ( v5 == 3
    || (a3 & 0xBFFFFFFF) != 0
    || (v6 & 0xFFFFFFFFFFDFFFFFuLL) != 0
    || !MiReserveDriverPtes(((unsigned int)a1[10] + 4095LL + (unsigned __int64)((a1[8] + a1[11]) & 0xFFF)) >> 12, v6) )
  {
    return 0LL;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  return MiMapMdlCommon(a1, v8, (__int64)AnyMultiplexedVm, v9, v5);
}
