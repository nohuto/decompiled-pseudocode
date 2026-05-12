/*
 * XREFs of sub_140055CDC @ 0x140055CDC
 * Callers:
 *     StorPortRegistryRead @ 0x140033E80 (StorPortRegistryRead.c)
 *     StorPortRegistryWrite @ 0x140074A60 (StorPortRegistryWrite.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140055CDC(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // r10d
  int v4; // eax
  unsigned int v5; // r9d

  v3 = *a3;
  v4 = a2 - *(_DWORD *)(a1 + 32);
  v5 = *(_DWORD *)(a1 + 40);
  if ( *a3 > v5 )
  {
    *a3 = v5;
    return 0;
  }
  if ( !v3 || !a2 || v4 < 0 )
    return 0;
  return v3 + v4 <= v5;
}
