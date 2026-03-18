/*
 * XREFs of ExpObCloseCrossVmMutant @ 0x140846400
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x14048FC18 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExpGetExtensionHostForCrossVmObject @ 0x140B6A608 (ExpGetExtensionHostForCrossVmObject.c)
 */

void __fastcall ExpObCloseCrossVmMutant(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v4; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( ExpGetExtensionHostForCrossVmObject(a1, &v4) )
  {
    guard_dispatch_icall_no_overrides(a1, a2);
    ExReleaseExtensionTable(v4);
  }
}
