/*
 * XREFs of MiInitializeCommitment @ 0x14070A674
 * Callers:
 *     MiInitializePartition @ 0x14086F740 (MiInitializePartition.c)
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiIncreaseCommitLimits @ 0x14070A538 (MiIncreaseCommitLimits.c)
 */

void __fastcall MiInitializeCommitment(__int64 a1)
{
  unsigned __int64 v1; // rdi
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r11
  unsigned __int16 **v7; // rcx
  __int64 v8; // r9
  unsigned __int16 *v9; // r8
  __int64 v10; // r10
  __int64 v11; // rax

  v1 = *(_QWORD *)(a1 + 22288);
  if ( (ULONG *)a1 == &MiSystemPartition )
    *(_QWORD *)(a1 + 17280) = (-(__int64)(v1 < 0x4000) & 0xFFFFFFFFFFFFFC00uLL) + 1280;
  else
    *(_QWORD *)(a1 + 17280) = 0LL;
  v3 = *(_BYTE *)(a1 + 631);
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 576) = 1LL;
  *(_BYTE *)(a1 + 631) = v3 & 0xF9 | 4;
  *(_QWORD *)(a1 + 584) = 0LL;
  *(_QWORD *)(a1 + 568) = a1;
  *(_DWORD *)(a1 + 624) = 0;
  *(_BYTE *)(a1 + 628) = -1;
  *(_WORD *)(a1 + 600) = 0;
  *(_BYTE *)(a1 + 602) = 6;
  *(_DWORD *)(a1 + 604) = 0;
  *(_QWORD *)(a1 + 616) = a1 + 608;
  *(_QWORD *)(a1 + 608) = a1 + 608;
  v4 = *(_QWORD *)(a1 + 22464);
  if ( KeNumberNodes )
  {
    v5 = *(_QWORD *)(a1 + 16) + 13856LL;
    v6 = (unsigned __int16)KeNumberNodes;
    do
    {
      v7 = (unsigned __int16 **)v5;
      v8 = 2LL;
      do
      {
        v9 = *v7;
        if ( dword_140E2D90C )
        {
          v10 = (unsigned int)dword_140E2D90C;
          do
          {
            v11 = *v9;
            v9 += 8;
            v4 += v11;
            --v10;
          }
          while ( v10 );
        }
        ++v7;
        --v8;
      }
      while ( v8 );
      v5 += 56320LL;
      --v6;
    }
    while ( v6 );
  }
  *(_QWORD *)(a1 + 22528) = v4;
  MiIncreaseCommitLimits(a1, v1, v1, 0LL, 0, 0LL);
  if ( v1 != v4 )
    MiChargeCommit((ULONG *)a1, v1 - v4, 2u);
  if ( (ULONG *)a1 == &MiSystemPartition )
    stru_140E366D8.WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)(*(_QWORD *)(a1 + 23104)
                                                                           - (unsigned __int64)stru_140E366D8.WaitBlock[0].Thread
                                                                           - qword_140E3DA00);
}
