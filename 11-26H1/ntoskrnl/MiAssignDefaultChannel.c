/*
 * XREFs of MiAssignDefaultChannel @ 0x140284390
 * Callers:
 *     MiMakePageAvoidRead @ 0x140282DC0 (MiMakePageAvoidRead.c)
 *     MiCreateSharedZeroPages @ 0x140283980 (MiCreateSharedZeroPages.c)
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 *     MiFindContiguousPagesPrepare @ 0x14028F3C8 (MiFindContiguousPagesPrepare.c)
 *     MiZeroLargePage @ 0x1402A1A04 (MiZeroLargePage.c)
 *     MiInitializePoolPageChainPacket @ 0x1403665CC (MiInitializePoolPageChainPacket.c)
 *     MiCopyOnWriteGetPage @ 0x14036C2DC (MiCopyOnWriteGetPage.c)
 *     MiAllocatePageFileReadResources @ 0x1403719F8 (MiAllocatePageFileReadResources.c)
 *     MiGetSinglePageToZero @ 0x1403C47E4 (MiGetSinglePageToZero.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x1403C7FF0 (MiGetLargePageDemoteAsNeeded.c)
 *     MiGetHugeRange @ 0x1406EB880 (MiGetHugeRange.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MiAssignDefaultChannel(unsigned int a1)
{
  __int64 v1; // rdx
  __int64 v3; // r8
  unsigned __int8 i; // cl

  v1 = 56320LL * a1;
  if ( (*(_DWORD *)(v1 + qword_140E37CD0 + 14096) & 1) != 0 )
  {
    v3 = v1 + qword_140E37CD0;
    for ( i = 0; i < (unsigned __int8)byte_140E2D718; ++i )
    {
      if ( *(_BYTE *)(i + v3 + 14149) == 1 )
        return i;
    }
    for ( i = 0; i < (unsigned __int8)byte_140E2D718; ++i )
    {
      if ( *(_BYTE *)(i + v3 + 14149) == 2 )
        return i;
    }
  }
  return 0;
}
