/*
 * XREFs of VmAccessFault2 @ 0x140821FB0
 * Callers:
 *     <none>
 * Callees:
 *     VmpAccessFault @ 0x1408224C4 (VmpAccessFault.c)
 */

__int64 __fastcall VmAccessFault2(int a1, int a2, int a3, int a4, int a5, int a6, int a7, __int64 a8)
{
  return VmpAccessFault(a1, a2, a3, a4, a5, a6, a7, a8);
}
