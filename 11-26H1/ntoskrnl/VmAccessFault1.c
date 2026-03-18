/*
 * XREFs of VmAccessFault1 @ 0x14081BD60
 * Callers:
 *     <none>
 * Callees:
 *     VmpAccessFault @ 0x14081C2B4 (VmpAccessFault.c)
 */

__int64 __fastcall VmAccessFault1(int a1, int a2, int a3, int a4, int a5, int a6, __int64 a7)
{
  return VmpAccessFault(a1, a2, 0, a3, a4, a5, a6, a7);
}
