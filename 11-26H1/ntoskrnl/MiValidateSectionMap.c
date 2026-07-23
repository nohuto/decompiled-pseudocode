/*
 * XREFs of MiValidateSectionMap @ 0x14099CAFC
 * Callers:
 *     MiValidateSectionCreate @ 0x14099C8D4 (MiValidateSectionCreate.c)
 * Callees:
 *     PsSetSystemPagePriorityThread @ 0x140479948 (PsSetSystemPagePriorityThread.c)
 *     PsRevertToUserPagePriorityThread @ 0x140481AA0 (PsRevertToUserPagePriorityThread.c)
 *     MiMapImageInSystemSpace @ 0x14099D80C (MiMapImageInSystemSpace.c)
 *     MiCreatePerSessionProtos @ 0x1409A0A14 (MiCreatePerSessionProtos.c)
 *     MiPrefetchControlArea @ 0x140A58548 (MiPrefetchControlArea.c)
 *     MiDereferencePerSessionProtos @ 0x140A9AEB4 (MiDereferencePerSessionProtos.c)
 */

__int64 __fastcall MiValidateSectionMap(__int64 a1)
{
  unsigned int v1; // r15d
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  int PerSessionProtos; // esi

  v1 = *(_DWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  if ( (v1 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 52) = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1);
    if ( (*(_DWORD *)(v3 + 56) & 8) != 0 && (*(_DWORD *)(v3 + 56) & 0x20) != 0 )
    {
      PerSessionProtos = MiCreatePerSessionProtos(v3, 0xFFFFFFFFLL);
      if ( PerSessionProtos < 0 )
      {
LABEL_13:
        PsRevertToUserPagePriorityThread((__int64)CurrentThread, *(unsigned int *)(a1 + 52));
        return (unsigned int)PerSessionProtos;
      }
      *(_DWORD *)(a1 + 36) |= 2u;
    }
    if ( (*(_DWORD *)(a1 + 36) & 4) != 0 )
      MiPrefetchControlArea(v3, CLFS_LSN_NULL_EXT, 0, 1, 0, -1, 0LL);
  }
  PerSessionProtos = MiMapImageInSystemSpace(v3, v1, a1 + 64);
  if ( PerSessionProtos < 0 )
  {
    if ( (*(_DWORD *)(a1 + 36) & 2) != 0 )
      MiDereferencePerSessionProtos(v3, 0xFFFFFFFFLL);
    if ( (v1 & 1) != 0 )
      goto LABEL_13;
  }
  return (unsigned int)PerSessionProtos;
}
