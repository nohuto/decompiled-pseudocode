/*
 * XREFs of ObCleanupSecurityDescriptor @ 0x1407C2124
 * Callers:
 *     ObpInitializeRootNamespace @ 0x1407C2F9C (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x14087F724 (MiCreatePartitionNamespace.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140486620 (RtlGetDaclSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall ObCleanupSecurityDescriptor(void *a1)
{
  BOOLEAN v1; // [rsp+38h] [rbp+10h] BYREF
  BOOLEAN v2; // [rsp+40h] [rbp+18h] BYREF
  PVOID P; // [rsp+48h] [rbp+20h] BYREF

  v1 = 0;
  P = 0LL;
  if ( RtlGetDaclSecurityDescriptor(a1, &v1, (PACL *)&P, &v2) >= 0 )
  {
    if ( v1 )
      ExFreePoolWithTag(P, 0);
  }
}
