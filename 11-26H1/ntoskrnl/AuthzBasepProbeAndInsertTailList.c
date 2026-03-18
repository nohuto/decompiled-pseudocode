/*
 * XREFs of AuthzBasepProbeAndInsertTailList @ 0x140A34588
 * Callers:
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x1404197DC (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x140A343AC (AuthzBasepCopyoutInternalSecurityAttributes.c)
 * Callees:
 *     MmIsUserAddress @ 0x14044E7C0 (MmIsUserAddress.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 */

__int64 __fastcall AuthzBasepProbeAndInsertTailList(unsigned __int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 **v4; // rdi

  v4 = *(unsigned __int64 ***)(a1 + 8);
  if ( MmIsUserAddress(a1) )
    ProbeForWrite(v4, 0x10uLL, 4u);
  *a2 = a1;
  a2[1] = (unsigned __int64)v4;
  *v4 = a2;
  *(_QWORD *)(a1 + 8) = a2;
  return 0LL;
}
