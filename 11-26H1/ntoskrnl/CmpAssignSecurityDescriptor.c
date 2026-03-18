/*
 * XREFs of CmpAssignSecurityDescriptor @ 0x1408DF234
 * Callers:
 *     CmpCreateTombstone @ 0x1406E2950 (CmpCreateTombstone.c)
 * Callees:
 *     CmpGetSecurityDescriptorNodeEx @ 0x1408DF268 (CmpGetSecurityDescriptorNodeEx.c)
 */

__int64 __fastcall CmpAssignSecurityDescriptor(ULONG_PTR a1, __int64 a2, __int64 a3, void *Src)
{
  return CmpGetSecurityDescriptorNodeEx(a1, Src, 0, a3 + 44);
}
