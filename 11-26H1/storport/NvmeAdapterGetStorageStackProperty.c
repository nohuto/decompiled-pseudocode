/*
 * XREFs of NvmeAdapterGetStorageStackProperty @ 0x14019D290
 * Callers:
 *     NvmeAdapterStorageQueryProperty @ 0x14018377C (NvmeAdapterStorageQueryProperty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeAdapterGetStorageStackProperty(__int64 a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int v3; // eax
  __int64 result; // rax
  int v5; // eax

  v3 = *a3;
  if ( *a3 >= 8 )
  {
    *a2 = 12;
    a2[1] = 12;
    if ( v3 < 0xC )
    {
      *a3 = 8;
      return 0LL;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0 || (v5 = 1, (*(_DWORD *)(a1 + 416) & 0x40) != 0) )
      v5 = 2;
    a2[2] = v5;
    result = 0LL;
  }
  else
  {
    result = 3221225507LL;
  }
  *a3 = 12;
  return result;
}
