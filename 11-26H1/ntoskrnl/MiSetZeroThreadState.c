/*
 * XREFs of MiSetZeroThreadState @ 0x1404AB3E0
 * Callers:
 *     MiCreateZeroThreadContext @ 0x140776624 (MiCreateZeroThreadContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSetZeroThreadState(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = a2 | *(_DWORD *)(a1 + 128);
  *(_DWORD *)(a1 + 128) = result;
  return result;
}
