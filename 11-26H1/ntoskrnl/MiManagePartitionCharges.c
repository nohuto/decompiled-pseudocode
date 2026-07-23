/*
 * XREFs of MiManagePartitionCharges @ 0x1406F5538
 * Callers:
 *     MmManagePartitionCharges @ 0x140883238 (MmManagePartitionCharges.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiManagePartitionCharges(__int64 a1, char a2, unsigned int a3, _DWORD *a4)
{
  volatile LONG *v4; // rdi
  KIRQL v9; // r9
  __int64 v10; // r8
  int v11; // eax
  _QWORD *v12; // rbx
  unsigned __int64 v13; // rdx

  v4 = (volatile LONG *)(a1 + 2112);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 2112));
  if ( a3 )
  {
    v10 = a3;
    if ( (a2 & 2) != 0 )
    {
      do
      {
        v11 = *a4;
        a4 += 10;
        *(_QWORD *)((-(__int64)(v11 != 0) & 0xFFFFFFFFFFFFFFE0uLL) + a1 + 3144) = *((_QWORD *)a4 - 2);
        --v10;
      }
      while ( v10 );
    }
    else
    {
      v12 = a4 + 8;
      do
      {
        v13 = -(__int64)(*((_DWORD *)v12 - 8) != 0) & 0xFFFFFFFFFFFFFFE0uLL;
        *(v12 - 1) = *(_QWORD *)(v13 + a1 + 3144);
        *v12 = *(_QWORD *)(v13 + a1 + 3128);
        v12 += 5;
        *(v12 - 7) = *(_QWORD *)(v13 + a1 + 3136);
        *(v12 - 8) = *(_QWORD *)(v13 + a1 + 3120);
        --v10;
      }
      while ( v10 );
    }
  }
  if ( v9 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  else
    ExReleaseSpinLockExclusive(v4, v9);
  return 0LL;
}
