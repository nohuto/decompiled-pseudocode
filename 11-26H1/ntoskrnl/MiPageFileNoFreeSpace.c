/*
 * XREFs of MiPageFileNoFreeSpace @ 0x140512338
 * Callers:
 *     MiModwriterConfigureMode @ 0x140406DD0 (MiModwriterConfigureMode.c)
 *     MiModwriterFillMdl @ 0x140407040 (MiModwriterFillMdl.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x14040646C (MiMakePagefileWriterEntryAvailable.c)
 *     MiIssuePageExtendRequest @ 0x1404A4ED0 (MiIssuePageExtendRequest.c)
 *     MiCauseOverCommitPopup @ 0x1404BC9D4 (MiCauseOverCommitPopup.c)
 *     MiFreeModifiedReservations @ 0x1404DC3E4 (MiFreeModifiedReservations.c)
 *     MiStoreExtendVirtualPagefile @ 0x1405117D8 (MiStoreExtendVirtualPagefile.c)
 */

void __fastcall MiPageFileNoFreeSpace(unsigned __int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v6; // rsi
  int v7; // r15d
  KIRQL v8; // dl
  volatile LONG *v9; // rcx
  unsigned __int64 v10; // r8
  __int16 v11; // ax
  __int64 v12; // rcx
  unsigned int v13; // r9d
  unsigned int v14; // edx
  __int64 v15; // r8
  unsigned __int64 v16; // rdi

  v2 = *(_QWORD *)(a1 + 224);
  v4 = 1LL;
  MiFreeModifiedReservations(a1, 1LL);
  v6 = 0LL;
  v7 = 0;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
  if ( *(_DWORD *)(a1 + 12) )
  {
    MiMakePagefileWriterEntryAvailable(a2);
  }
  else
  {
    *(_BYTE *)(a1 + 174) |= 1u;
    v7 = 1;
  }
  v9 = (volatile LONG *)(a1 + 200);
  if ( v8 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v9);
  else
    ExReleaseSpinLockExclusive(v9, v8);
  if ( v7 )
  {
    *a2 = 2575857425LL;
    v10 = *(_QWORD *)(v2 + 23448);
    v11 = *(_WORD *)(a1 + 172);
    if ( (v11 & 0x10) == 0 )
    {
      if ( (v11 & 0x40) != 0 )
      {
        MiStoreExtendVirtualPagefile(v2, a1);
        return;
      }
      v12 = *(_QWORD *)(v2 + 23448);
      if ( *(_QWORD *)(v2 + 23104) <= v10 )
        v12 = *(_QWORD *)(v2 + 23104);
      if ( v12 > (((v10 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL)
        && v10 < *(_QWORD *)(v2 + 17224) )
      {
        MiCauseOverCommitPopup(v2);
LABEL_25:
        if ( *(_QWORD *)(v2 + 23448) < *(_QWORD *)(v2 + 17224) )
          MiIssuePageExtendRequest(v2, v4, 6, 0);
        return;
      }
      if ( *(_QWORD *)(v2 + 23456) >= 0x1000uLL )
      {
        v13 = *(_DWORD *)(v2 + 22296);
        v14 = 0;
        if ( v13 )
        {
          v15 = v2 + 22304;
          do
          {
            if ( (*(_BYTE *)(*(_QWORD *)v15 + 172LL) & 0x50) == 0 )
            {
              if ( v6 + *(unsigned int *)(*(_QWORD *)v15 + 12LL) < v6 )
                break;
              v6 += *(unsigned int *)(*(_QWORD *)v15 + 12LL);
            }
            ++v14;
            v15 += 8LL;
          }
          while ( v14 < v13 );
        }
        v16 = *(_QWORD *)(v2 + 23456);
        if ( v16 > v6 )
        {
          v4 = v16 - v6;
          if ( v4 )
            goto LABEL_25;
        }
      }
    }
  }
}
