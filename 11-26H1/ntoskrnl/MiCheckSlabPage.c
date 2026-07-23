/*
 * XREFs of MiCheckSlabPage @ 0x14038C61C
 * Callers:
 *     MiWalkEntireSubsection @ 0x14031D3A0 (MiWalkEntireSubsection.c)
 *     MiMakeDriverPagesPrivate @ 0x14038C790 (MiMakeDriverPagesPrivate.c)
 *     MiFinalizeImageHeaderPage @ 0x1404C18CC (MiFinalizeImageHeaderPage.c)
 *     MiProtectDriverSectionPte @ 0x1406EAA00 (MiProtectDriverSectionPte.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall MiCheckSlabPage(__int64 a1, int a2, char a3)
{
  __int64 v4; // rbx
  ULONG_PTR v5; // r15
  __int64 v6; // r14
  volatile LONG *v7; // rcx
  KIRQL v8; // si
  unsigned __int64 v9; // rbx
  unsigned int v10; // edi
  unsigned __int64 v11; // rax
  volatile LONG *v12; // rcx

  v4 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v5 = (a1 + 0x220000000000LL) / 48;
  v6 = 232LL * a2 + 56320LL * (unsigned int)MiPageToNode(v5) + *(_QWORD *)(v4 + 16) + 14752LL;
  v7 = (volatile LONG *)(v6 + 16);
  if ( (a3 & 4) != 0 )
  {
    v8 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(v7);
  }
  else
  {
    v8 = ExAcquireSpinLockShared(v7);
  }
  v9 = *(_QWORD *)v6;
  v10 = 0;
  if ( (*(_BYTE *)(v6 + 8) & 1) != 0 )
  {
    if ( v9 )
      v9 ^= v6;
    else
      v9 = 0LL;
  }
  while ( v9 )
  {
    if ( v5 > *(_QWORD *)(v9 + 48) )
    {
      v11 = *(_QWORD *)(v9 + 8);
    }
    else
    {
      if ( v5 >= *(_QWORD *)(v9 + 40) )
        break;
      v11 = *(_QWORD *)v9;
    }
    if ( (*(_BYTE *)(v6 + 8) & 1) != 0 && v11 )
      v9 ^= v11;
    else
      v9 = v11;
  }
  v12 = (volatile LONG *)(v6 + 16);
  if ( v8 == 17 )
    ExReleaseSpinLockSharedFromDpcLevel(v12);
  else
    ExReleaseSpinLockShared(v12, v8);
  LOBYTE(v10) = v9 != 0;
  return v10;
}
