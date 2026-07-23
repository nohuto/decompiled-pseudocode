/*
 * XREFs of EtwpFreeSecurityDescriptor @ 0x140A93F98
 * Callers:
 *     EtwpFixBootLoggers @ 0x140CE814C (EtwpFixBootLoggers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
