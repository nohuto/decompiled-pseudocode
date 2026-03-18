/*
 * XREFs of EtwpFreeSecurityDescriptor @ 0x140A8F2C8
 * Callers:
 *     EtwpFixBootLoggers @ 0x140CE1DAC (EtwpFixBootLoggers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeSecurityDescriptor(void **a1)
{
  PSECURITY_DESCRIPTOR v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    if ( v2 != (PSECURITY_DESCRIPTOR)WmipDefaultAccessSd && v2 != EtwpDefaultTraceSecurityDescriptor )
      ExFreePoolWithTag(v2, 0);
    *a1 = 0LL;
  }
}
