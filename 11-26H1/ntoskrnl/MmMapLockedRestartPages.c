/*
 * XREFs of MmMapLockedRestartPages @ 0x14086AB50
 * Callers:
 *     <none>
 * Callees:
 *     MiMapMdlCommon @ 0x140314C5C (MiMapMdlCommon.c)
 *     MiTranslateCacheType @ 0x14034A480 (MiTranslateCacheType.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MiReserveDriverPtes @ 0x140B0C074 (MiReserveDriverPtes.c)
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
