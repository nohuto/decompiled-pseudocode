/*
 * XREFs of CmpEtwDumpKcb @ 0x14093E790
 * Callers:
 *     CmpLinkHiveToMaster @ 0x14093E12C (CmpLinkHiveToMaster.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpConstructName @ 0x1408CB970 (CmpConstructName.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 */

void __fastcall CmpEtwDumpKcb(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // rdx
  void *v5; // rbx
  struct _KAPC_STATE v6; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v7[2]; // [rsp+70h] [rbp-48h] BYREF

  memset(v7, 0, sizeof(v7));
  memset(&v6, 0, sizeof(v6));
  if ( CmpTraceRoutine )
  {
    CmpAttachToRegistryProcess(&v6);
    v5 = (void *)CmpConstructName(a1, v4);
    if ( v5 )
    {
      guard_dispatch_icall_no_overrides(a2, (__int64)v7);
      CmpFreeTransientPoolWithTag(v5, 0x624E4D43u);
    }
    CmpDetachFromRegistryProcess(&v6);
  }
}
