/*
 * XREFs of KdpCopyContext @ 0x140C1D9C0
 * Callers:
 *     KdpReport @ 0x14050255C (KdpReport.c)
 *     KdpSetContextEx @ 0x1405E67A4 (KdpSetContextEx.c)
 *     KdpGetContext @ 0x140C1A0B8 (KdpGetContext.c)
 *     KdpSetContext @ 0x140C1B228 (KdpSetContext.c)
 *     KdpCommandString @ 0x140C1BC54 (KdpCommandString.c)
 *     KdpSymbol @ 0x140C1C018 (KdpSymbol.c)
 * Callees:
 *     KdpQuickMoveMemory @ 0x140C1816C (KdpQuickMoveMemory.c)
 */

void __fastcall KdpCopyContext(__int64 a1, int a2, int *a3)
{
  unsigned int v6; // r8d
  unsigned int v7; // r8d

  KdpQuickMoveMemory((char *)a1, (unsigned __int64)a3, 1232);
  *(_DWORD *)(a1 + 48) = a2;
  if ( (a2 & 0x100040) == 0x100040 )
  {
    v6 = a3[313];
    if ( *(_DWORD *)(a1 + 1252) <= v6 )
      v6 = *(_DWORD *)(a1 + 1252);
    KdpQuickMoveMemory((char *)(a1 + *(int *)(a1 + 1248) + 1232LL), (unsigned __int64)a3 + a3[312] + 1232, v6);
  }
  if ( (a2 & 0x100080) == 0x100080 )
  {
    v7 = a3[315];
    if ( *(_DWORD *)(a1 + 1260) <= v7 )
      v7 = *(_DWORD *)(a1 + 1260);
    KdpQuickMoveMemory((char *)(a1 + *(int *)(a1 + 1256) + 1232LL), (unsigned __int64)a3 + a3[314] + 1232, v7);
  }
}
