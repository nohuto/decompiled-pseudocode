/*
 * XREFs of sub_14006A664 @ 0x14006A664
 * Callers:
 *     sub_14000BD54 @ 0x14000BD54 (sub_14000BD54.c)
 *     sub_14006A5B0 @ 0x14006A5B0 (sub_14006A5B0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14006A664(__int64 a1)
{
  __int64 i; // r8
  __int64 v3; // rdx

  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 24));
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)a1; *(_BYTE *)(*(_QWORD *)(a1 + 16) + 8 * v3 + 64) &= ~1u )
  {
    v3 = 9 * i;
    i = (unsigned int)(i + 1);
  }
  *(_BYTE *)(a1 + 8) &= ~1u;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 24));
}
