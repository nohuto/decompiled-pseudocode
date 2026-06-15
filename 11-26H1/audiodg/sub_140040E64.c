/*
 * XREFs of sub_140040E64 @ 0x140040E64
 * Callers:
 *     sub_14004DF60 @ 0x14004DF60 (sub_14004DF60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140040E64(int a1)
{
  dword_1400E84B0 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_1400E8480);
}
