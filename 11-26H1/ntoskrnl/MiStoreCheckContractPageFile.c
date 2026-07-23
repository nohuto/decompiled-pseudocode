/*
 * XREFs of MiStoreCheckContractPageFile @ 0x1404DEAE8
 * Callers:
 *     MiStoreContractVirtualPagefileApc @ 0x1404B5E00 (MiStoreContractVirtualPagefileApc.c)
 *     MiStoreAttemptContractPageFile @ 0x1404DE9D4 (MiStoreAttemptContractPageFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiStoreCheckContractPageFile(_DWORD *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edx

  v1 = a1[3];
  v2 = a1[1];
  if ( v2 > *a1 )
    v1 += v2 - *a1;
  if ( v1 >= 0x80000 )
    return (v1 & 0xFFFC0000) - 0x40000;
  else
    return 0LL;
}
