/*
 * XREFs of MiAttemptSectionDelete @ 0x1404B8D88
 * Callers:
 *     MmFlushImageSection @ 0x140494970 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x1404A9890 (MiForceSectionClosed.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x1402EDD50 (MiRemoveUnusedSegment.c)
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 *     MiCleanSection @ 0x1404D9074 (MiCleanSection.c)
 */

char __fastcall MiAttemptSectionDelete(__int64 a1, KIRQL a2, char a3)
{
  int v3; // eax
  volatile LONG *v7; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  volatile LONG *v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-30h] BYREF
  int v13; // [rsp+28h] [rbp-28h]
  __int64 v14; // [rsp+2Ch] [rbp-24h]
  int v15; // [rsp+34h] [rbp-1Ch]
  __int16 v16; // [rsp+38h] [rbp-18h] BYREF
  char v17; // [rsp+3Ah] [rbp-16h]
  char v18; // [rsp+3Bh] [rbp-15h]
  int v19; // [rsp+3Ch] [rbp-14h]
  _QWORD v20[2]; // [rsp+40h] [rbp-10h] BYREF

  v3 = *(_DWORD *)(a1 + 56);
  v14 = 0LL;
  v15 = 0;
  v18 = 0;
  if ( *(_QWORD *)(a1 + 24) || *(_QWORD *)(a1 + 40) || (v3 & 2) != 0 )
  {
    if ( (a3 & 4) != 0 )
      *(_DWORD *)(a1 + 56) = v3 | 0x40000;
    v11 = (volatile LONG *)(a1 + 72);
    if ( a2 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v11);
    else
      ExReleaseSpinLockExclusive(v11, a2);
    return 0;
  }
  else if ( (v3 & 1) != 0 )
  {
    v13 = 1;
    v20[1] = v20;
    v7 = (volatile LONG *)(a1 + 72);
    v16 = 263;
    v20[0] = v20;
    v12 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v12;
    v17 = 6;
    v19 = 0;
    if ( a2 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v7);
    else
      ExReleaseSpinLockExclusive(v7, a2);
    KeWaitForGate((__int64)&v16, 19LL);
    return 1;
  }
  else
  {
    MiRemoveUnusedSegment(a1);
    LOBYTE(v9) = a2;
    *(_QWORD *)(a1 + 40) = 1LL;
    LOBYTE(v10) = (a3 & 4) != 0;
    return MiCleanSection(a1, v9, v10);
  }
}
