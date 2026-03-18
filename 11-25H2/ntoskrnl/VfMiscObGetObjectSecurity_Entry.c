/*
 * XREFs of VfMiscObGetObjectSecurity_Entry @ 0x140B8E4A0
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1404B11E4 (VfMiscCheckKernelAddress.c)
 */

unsigned __int64 __fastcall VfMiscObGetObjectSecurity_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 24), 8uLL, *(_QWORD *)a1);
}
