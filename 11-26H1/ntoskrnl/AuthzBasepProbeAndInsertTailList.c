/*
 * XREFs of AuthzBasepProbeAndInsertTailList @ 0x140A4F4E8
 * Callers:
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x14040DD0C (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x140A4F30C (AuthzBasepCopyoutInternalSecurityAttributes.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
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
