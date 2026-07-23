/*
 * XREFs of KiConnectSwInterrupt @ 0x140CD0470
 * Callers:
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 * Callees:
 *     VslConnectSwInterrupt @ 0x140D0CEFC (VslConnectSwInterrupt.c)
 */

__int64 __fastcall KiConnectSwInterrupt(ULONG_PTR a1, unsigned int a2)
{
  return VslConnectSwInterrupt(a1, (unsigned __int64)a2 << 6);
}
