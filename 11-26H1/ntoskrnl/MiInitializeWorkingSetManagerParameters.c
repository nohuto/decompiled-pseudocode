/*
 * XREFs of MiInitializeWorkingSetManagerParameters @ 0x1406FC6DC
 * Callers:
 *     MiUpdatePartitionAgeTrimConfiguration @ 0x1404CC9D4 (MiUpdatePartitionAgeTrimConfiguration.c)
 *     MiInitializePartition @ 0x14086F740 (MiInitializePartition.c)
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeGenericCallDpcEx @ 0x1403CC184 (KeGenericCallDpcEx.c)
 *     MiSetTrimWhileAgingState @ 0x1405110FC (MiSetTrimWhileAgingState.c)
 */

__int64 __fastcall MiInitializeWorkingSetManagerParameters(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 *v8; // rax
  int v9; // r12d
  KIRQL v10; // al
  unsigned __int64 v11; // rdi
  KIRQL v12; // r8
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  volatile LONG *v21; // rcx
  unsigned __int64 v22; // r14
  __int64 result; // rax
  __int128 v24; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v25[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a1 + 21388) )
  {
    v9 = 0;
  }
  else
  {
    v2 = 3LL;
    v3 = (_QWORD *)(a1 + 18320);
    do
    {
      v3[1] = v3;
      *v3 = v3;
      v3 += 2;
      --v2;
    }
    while ( v2 );
    *(_QWORD *)(a1 + 18640) = 0LL;
    v4 = 5LL;
    *(_QWORD *)(a1 + 18368) = 0LL;
    v5 = a1 + 21264;
    v6 = a1 + 21272;
    do
    {
      *(_WORD *)v5 = 1;
      v7 = (_QWORD *)(v5 + 8);
      *(_BYTE *)(v5 + 2) = 6;
      *(_DWORD *)(v5 + 4) = 0;
      *(_QWORD *)(v5 + 16) = v6;
      v5 += 24LL;
      v6 += 24LL;
      *v7 = v7;
      --v4;
    }
    while ( v4 );
    *(_DWORD *)(a1 + 1132) = 256;
    *(_BYTE *)(a1 + 22776) = *(_DWORD *)(a1 + 22776) & 0xF0 | 1;
    v8 = &qword_140E37980;
    if ( (*(_DWORD *)(a1 + 22776) & 0xF) != 1 )
      v8 = (__int64 *)(a1 + 22784);
    *v8 = (__int64)&unk_140E2EAC0;
    v24 = 0LL;
    DWORD2(v24) = 3;
    MiSetTrimWhileAgingState(a1, (__int64)&v24);
    v9 = 1;
  }
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 272));
  v11 = *(_QWORD *)(a1 + 22288);
  v12 = v10;
  v13 = *(_QWORD *)(a1 + 17008);
  v14 = *(_QWORD *)(a1 + 17016);
  *(_BYTE *)(a1 + 12) = 0;
  if ( (ULONG *)a1 == &MiSystemPartition
    && ((v15 = *(_QWORD *)(a1 + 18608), v11 <= v15) ? (*(_QWORD *)(a1 + 18608) = -1LL) : (v11 -= v15), v11 < 0x21000) )
  {
    v11 = 135168LL;
    v16 = 4224LL;
  }
  else
  {
    v16 = v11 >> 5;
    if ( v11 > 0x200000 )
    {
      v17 = ((v11 - 0x200000) >> 7) + 0x10000;
      goto LABEL_17;
    }
  }
  v17 = v16;
LABEL_17:
  v18 = 1152LL;
  if ( v17 >= 0x480 )
  {
    v18 = v17;
    if ( v17 > 0x400000 )
      v18 = 0x400000LL;
  }
  *(_QWORD *)(a1 + 18400) = v18;
  if ( v11 > 0x80000 )
    v16 = ((v11 - 0x80000) >> 8) + 0x4000;
  if ( v16 >= 0x121 )
  {
    if ( v16 > 0x100000 )
      v16 = 0x100000LL;
  }
  else
  {
    v16 = 289LL;
  }
  *(_QWORD *)(a1 + 21240) = v16;
  *(_QWORD *)(a1 + 18392) = v16;
  v19 = *(_QWORD *)(a1 + 18400) >> 2;
  if ( v19 < 0x121 )
    v19 = 289LL;
  *(_QWORD *)(a1 + 21232) = v19;
  if ( v11 < 0x18A88 )
    v20 = 100LL;
  else
    v20 = v11 / 0x3E8;
  if ( v20 > v11 )
  {
    v20 = v11 >> 1;
    if ( v11 < 2 )
      v20 = 1LL;
  }
  *(_QWORD *)(a1 + 21216) = v20;
  v21 = (volatile LONG *)(a1 + 272);
  v22 = *(_QWORD *)(a1 + 18400);
  if ( v12 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v21);
  else
    ExReleaseSpinLockExclusive(v21, v12);
  if ( !v13 )
  {
    v13 = 2 * v22;
    if ( 2 * v22 > v11 )
    {
      if ( !v11 || v11 < v22 || (v13 = ((v11 - v22) >> 1) + v22, !((v11 - v22) >> 1)) )
        v13 = 1LL;
    }
  }
  v25[0] = v13;
  if ( v14 )
  {
    if ( v14 < v13 )
      v13 = v14;
    v25[0] = v13;
  }
  else
  {
    v14 = v13;
    if ( v13 <= v11 )
    {
      v14 = 2 * v13;
      if ( 2 * v13 > v11 )
        v14 = v13 + ((v11 - v13) >> 1);
    }
  }
  v25[1] = v14;
  v25[2] = a1;
  result = KeGenericCallDpcEx((__int64)MiUpdatePageThresholdsDpc, (__int64)v25);
  if ( v9 )
    *(_BYTE *)(a1 + 21388) = 1;
  return result;
}
