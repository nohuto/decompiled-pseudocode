/*
 * XREFs of HvpMapEntryMarkTrimmed @ 0x1408B89FC
 * Callers:
 *     HvTrimHive @ 0x1408B8958 (HvTrimHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpMapEntryMarkTrimmed(__int64 a1)
{
  __int64 result; // rax

  result = *(_DWORD *)(a1 + 20) | 4u;
  *(_DWORD *)(a1 + 20) = result;
  return result;
}
