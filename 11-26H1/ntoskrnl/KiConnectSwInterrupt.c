/*
 * XREFs of KiConnectSwInterrupt @ 0x140CCA390
 * Callers:
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 * Callees:
 *     VslConnectSwInterrupt @ 0x140D06C2C (VslConnectSwInterrupt.c)
 */

__int64 __fastcall KiConnectSwInterrupt(ULONG_PTR a1, unsigned int a2)
{
  return VslConnectSwInterrupt(a1, (unsigned __int64)a2 << 6);
}
