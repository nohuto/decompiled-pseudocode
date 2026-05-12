/*
 * XREFs of sub_14006A19C @ 0x14006A19C
 * Callers:
 *     sub_14000BD54 @ 0x14000BD54 (sub_14000BD54.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14006A19C(__int64 a1)
{
  volatile LONG *v1; // rdi
  unsigned int i; // r8d
  __int64 v4; // rdx

  v1 = (volatile LONG *)(a1 + 5648);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 5648));
  for ( i = 0; i < *(_DWORD *)(a1 + 5632); *(_DWORD *)((v4 << 6) + *(_QWORD *)(a1 + 5640) + 44) = 0 )
    v4 = i++;
  *(_BYTE *)(a1 + 5636) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  return 0LL;
}
