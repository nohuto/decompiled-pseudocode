/*
 * XREFs of CmpAssignSecurityDescriptor @ 0x1408E57F4
 * Callers:
 *     CmpCreateTombstone @ 0x1406E6C30 (CmpCreateTombstone.c)
 * Callees:
 *     CmpGetSecurityDescriptorNodeEx @ 0x1408E5828 (CmpGetSecurityDescriptorNodeEx.c)
 */

__int64 __fastcall CmpAssignSecurityDescriptor(ULONG_PTR a1, __int64 a2, __int64 a3, void *Src)
{
  return CmpGetSecurityDescriptorNodeEx(a1, Src, 0, a3 + 44);
}
