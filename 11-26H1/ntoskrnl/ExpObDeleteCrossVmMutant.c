/*
 * XREFs of ExpObDeleteCrossVmMutant @ 0x14084C730
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExpGetExtensionHostForCrossVmObject @ 0x140B6D818 (ExpGetExtensionHostForCrossVmObject.c)
 */

void __fastcall ExpObDeleteCrossVmMutant(__int64 a1)
{
  __int64 v2; // rdx
  struct _EX_RUNDOWN_REF *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( ExpGetExtensionHostForCrossVmObject(a1, &v3) )
  {
    guard_dispatch_icall_no_overrides(a1, v2);
    ExReleaseExtensionTable(v3);
  }
}
