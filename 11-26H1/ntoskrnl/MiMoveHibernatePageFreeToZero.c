/*
 * XREFs of MiMoveHibernatePageFreeToZero @ 0x1406F4C70
 * Callers:
 *     <none>
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14028BE54 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDetermineNewPfnHeatState @ 0x1404911B4 (MiDetermineNewPfnHeatState.c)
 */

__int64 __fastcall MiMoveHibernatePageFreeToZero(__int64 a1, _QWORD *a2)
{
  ULONG_PTR v4; // rdi
  unsigned int PfnPageSizeIndex; // r15d
  unsigned int v6; // esi
  unsigned __int64 v7; // rdx
  char v8; // bl
  volatile LONG *v9; // r9
  __int64 v10; // r10
  volatile LONG *v11; // r11
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  bool i; // zf
  __int64 v15; // rdx
  __int64 v16; // rbx
  unsigned int v17; // eax

  v4 = (a1 + 0x220000000000LL) / 48;
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(a1);
  v6 = 0;
  v7 = MiPageSizes[PfnPageSizeIndex];
  if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 3 && v4 < *(_QWORD *)&stru_140E2ED08.WaitBlockFill11[64] )
  {
    if ( v7 <= 1 )
    {
      if ( v7 != 1
        || !_bittest64((const signed __int64 *)&stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + (v4 >> 6), v4 & 0x3F) )
      {
        goto LABEL_6;
      }
LABEL_16:
      v16 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
      v17 = MiPageToNode(v4);
      MiDetermineNewPfnHeatState(0, PfnPageSizeIndex, *(_QWORD *)(v16 + 16) + 56320LL * v17);
      goto LABEL_6;
    }
    if ( *(_QWORD *)&stru_140E2ED08.WaitBlockFill11[64] - v4 < v7 )
      goto LABEL_6;
    v8 = v7 + v4 - 1;
    v9 = &stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + 2 * (v4 >> 6);
    v10 = *(_QWORD *)v9;
    v11 = &stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + 2 * ((v7 + v4 - 1) >> 6);
    if ( v9 == v11 )
    {
      v12 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v7) << v4;
      v13 = v10 & v12;
LABEL_15:
      if ( v13 == v12 )
        goto LABEL_16;
    }
    else
    {
      for ( i = (v10 & (-1LL << v4)) == -1LL << v4; i; i = v15 == -1 )
      {
        v9 += 2;
        v15 = *(_QWORD *)v9;
        if ( v9 == v11 )
        {
          v12 = 0xFFFFFFFFFFFFFFFFuLL >> ~v8;
          v13 = v15 & v12;
          goto LABEL_15;
        }
      }
    }
  }
LABEL_6:
  MiUnlinkFreeOrZeroedPage(v4, 0LL, 0);
  MiInsertPageInFreeOrZeroedList(v4);
  LOBYTE(v6) = ++a2[1] < *a2;
  return v6;
}
