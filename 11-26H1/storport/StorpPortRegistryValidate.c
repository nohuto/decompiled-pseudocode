/*
 * XREFs of StorpPortRegistryValidate @ 0x14005C428
 * Callers:
 *     StorPortRegistryRead @ 0x140037CD0 (StorPortRegistryRead.c)
 *     StorPortRegistryWrite @ 0x14007C320 (StorPortRegistryWrite.c)
 * Callees:
 *     <none>
 */

bool __fastcall StorpPortRegistryValidate(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // r9d
  int v4; // eax
  unsigned int v5; // ecx

  v3 = *(_DWORD *)(a1 + 40);
  v4 = a2 - *(_DWORD *)(a1 + 32);
  v5 = *a3;
  if ( *a3 > v3 )
  {
    *a3 = v3;
    return 0;
  }
  if ( !v5 || !a2 || v4 < 0 )
    return 0;
  return v5 + v4 <= v3;
}
