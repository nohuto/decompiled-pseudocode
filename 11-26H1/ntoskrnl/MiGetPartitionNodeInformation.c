/*
 * XREFs of MiGetPartitionNodeInformation @ 0x14025A7B8
 * Callers:
 *     MmFillEtwNodeInformation @ 0x140259C74 (MmFillEtwNodeInformation.c)
 *     MmManagePartitionNodeInformation @ 0x14088378C (MmManagePartitionNodeInformation.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiGetPartitionNodePageCounts @ 0x1403D23D0 (MiGetPartitionNodePageCounts.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall MiGetPartitionNodeInformation(__int64 a1, unsigned int a2, unsigned __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rbp
  __int64 v7; // r12
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r15
  ULONG_PTR v10; // r12
  int v11; // eax
  unsigned __int64 v12; // rcx
  unsigned __int64 *v13; // rcx
  __int64 *v14; // r8
  __int64 v15; // r9
  __int64 v16; // r10
  unsigned __int64 v17; // rdx
  unsigned __int64 result; // rax
  KIRQL OldIrql; // [rsp+20h] [rbp-B8h]
  __int64 v20; // [rsp+28h] [rbp-B0h]
  volatile LONG *SpinLock; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v23; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-80h]
  unsigned __int64 v25; // [rsp+60h] [rbp-78h]
  unsigned __int64 v26; // [rsp+68h] [rbp-70h]
  unsigned __int64 v27; // [rsp+70h] [rbp-68h]
  unsigned __int64 v28; // [rsp+78h] [rbp-60h]
  unsigned __int64 v29; // [rsp+80h] [rbp-58h]
  unsigned __int64 v30; // [rsp+88h] [rbp-50h]

  v3 = a2;
  memset_0(&v23, 0, 0x40uLL);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = 56320 * v3;
  v20 = v6;
  memset_0(a3, 0, 0x48uLL);
  v8 = 0LL;
  SpinLock = (volatile LONG *)(56320 * v3 + v6 + 14132);
  if ( KeGetCurrentIrql() >= 2u )
  {
    OldIrql = 17;
    ExAcquireSpinLockSharedAtDpcLevel(SpinLock);
  }
  else
  {
    OldIrql = ExAcquireSpinLockShared(SpinLock);
  }
  do
  {
    v9 = *(_QWORD *)(v7 + v6 + 13888);
    MiGetPartitionNodePageCounts(a1, (unsigned int)v3, &v23);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 7456));
    if ( *(_QWORD *)(a1 + 7440) )
    {
      v10 = *(_QWORD *)(a1 + 7424);
      if ( v10 != 0x3FFFFFFFFFLL )
      {
        do
        {
          v11 = MiPageToNode(v10);
          v12 = v8 + 1;
          if ( v11 != (_DWORD)v3 )
            v12 = v8;
          v8 = v12;
          v10 = *(_QWORD *)(48 * v10 - 0x220000000000LL) & 0xFFFFFFFFFFLL;
        }
        while ( v10 != 0x3FFFFFFFFFLL );
        v6 = v20;
      }
      v7 = 56320 * v3;
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 7456));
  }
  while ( v8 > v9 );
  if ( OldIrql == 17 )
    ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
  else
    ExReleaseSpinLockShared(SpinLock, OldIrql);
  v13 = &v23;
  v14 = MiPageSizes;
  v15 = 4LL;
  do
  {
    v16 = 2LL;
    do
    {
      v17 = *v13;
      if ( *v13 + v8 > v9 )
      {
        v17 = (v9 - v8) / *v14;
        *v13 = v17;
      }
      v8 += v17;
      ++v13;
      --v16;
    }
    while ( v16 );
    ++v14;
    --v15;
  }
  while ( v15 );
  a3[2] = v29;
  a3[1] = v30;
  a3[4] = v27;
  a3[3] = v28;
  a3[6] = v25;
  a3[5] = v26;
  a3[8] = v23;
  result = v24;
  a3[7] = v24;
  *a3 = v9;
  return result;
}
