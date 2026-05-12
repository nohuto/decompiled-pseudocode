/*
 * XREFs of BuildSetFeaturesCacheCommand @ 0x1400CE9F4
 * Callers:
 *     NvmeControllerSetCurrentWriteCacheState @ 0x1400CFB68 (NvmeControllerSetCurrentWriteCacheState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildSetFeaturesCacheCommand(__int64 a1, char a2, char a3)
{
  int v3; // r9d
  __int64 result; // rax

  v3 = 0;
  *(_BYTE *)a1 = 9;
  *(_BYTE *)(a1 + 40) = 6;
  if ( a3 )
    *(_DWORD *)(a1 + 40) |= 0x80000000;
  LOBYTE(v3) = a2 != 0;
  result = *(_DWORD *)(a1 + 44) & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 44) = result | v3;
  return result;
}
