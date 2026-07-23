/*
 * XREFs of MiAssignDefaultChannel @ 0x140283900
 * Callers:
 *     MiMakePageAvoidRead @ 0x140282330 (MiMakePageAvoidRead.c)
 *     MiCreateSharedZeroPages @ 0x140282EF0 (MiCreateSharedZeroPages.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiFindContiguousPagesPrepare @ 0x14028E928 (MiFindContiguousPagesPrepare.c)
 *     MiZeroLargePage @ 0x1402A0F54 (MiZeroLargePage.c)
 *     MiInitializePoolPageChainPacket @ 0x14036836C (MiInitializePoolPageChainPacket.c)
 *     MiCopyOnWriteGetPage @ 0x14036E07C (MiCopyOnWriteGetPage.c)
 *     MiAllocatePageFileReadResources @ 0x1403737A8 (MiAllocatePageFileReadResources.c)
 *     MiGetSinglePageToZero @ 0x1403CE6F0 (MiGetSinglePageToZero.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x1403D1EE0 (MiGetLargePageDemoteAsNeeded.c)
 *     MiGetHugeRange @ 0x1406F0520 (MiGetHugeRange.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MiAssignDefaultChannel(unsigned int a1)
{
  __int64 v1; // rdx
  __int64 v3; // r8
  unsigned __int8 i; // cl

  v1 = 56320LL * a1;
  if ( (*(_DWORD *)(v1 + qword_140E37E50 + 14096) & 1) != 0 )
  {
    v3 = v1 + qword_140E37E50;
    for ( i = 0; i < (unsigned __int8)byte_140E2D898; ++i )
    {
      if ( *(_BYTE *)(i + v3 + 14149) == 1 )
        return i;
    }
    for ( i = 0; i < (unsigned __int8)byte_140E2D898; ++i )
    {
      if ( *(_BYTE *)(i + v3 + 14149) == 2 )
        return i;
    }
  }
  return 0;
}
