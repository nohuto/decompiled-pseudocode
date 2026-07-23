/*
 * XREFs of MiActivateDecayNode @ 0x140298EF4
 * Callers:
 *     MiDecayPfnFullyInitialized @ 0x140491EA8 (MiDecayPfnFullyInitialized.c)
 * Callees:
 *     MiAcquirePrcbPageBatchList @ 0x140298760 (MiAcquirePrcbPageBatchList.c)
 *     MiAcquirePageListSynchronization @ 0x1402999B0 (MiAcquirePageListSynchronization.c)
 *     MiUnlinkSingleBatchPage @ 0x1402DA130 (MiUnlinkSingleBatchPage.c)
 *     MiReleasePageListSynchronization @ 0x1402DAB30 (MiReleasePageListSynchronization.c)
 */

__int64 __fastcall MiActivateDecayNode(__int64 a1)
{
  unsigned int v2; // ebp
  __int64 v3; // r14
  __int64 v4; // rbx
  _DWORD *v5; // rsi
  unsigned __int64 v6; // rax
  __int64 result; // rax
  _DWORD *MmInternal; // rdx

  v2 = 1;
  v3 = (a1 + 0x220000000000LL) / 48;
  v4 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v5 = MiAcquirePrcbPageBatchList();
  *((_QWORD *)v5 + 1) = v4;
  v5[10] = 2;
  MiAcquirePageListSynchronization(v5, a1);
  v6 = *(_QWORD *)(a1 + 16);
  if ( qword_140E2D8C0 && (v6 & 0x10) == 0 )
    v6 &= qword_140E2D8C8;
  if ( ((v6 >> 12) & 0xFFFFFFFFFFLL) == v3 )
  {
    MiUnlinkSingleBatchPage(v5, a1);
    v2 = 0;
  }
  *(_DWORD *)(a1 + 32) &= ~0x8000000u;
  MiReleasePageListSynchronization(v5, a1);
  result = v2;
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  --MmInternal[986];
  return result;
}
