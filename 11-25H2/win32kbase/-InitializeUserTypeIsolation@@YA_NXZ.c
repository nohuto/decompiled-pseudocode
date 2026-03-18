/*
 * XREFs of ?InitializeUserTypeIsolation@@YA_NXZ @ 0x14011AE60
 * Callers:
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0BKAAA@$0BKA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SA_NPEAPEAE@Z @ 0x14011AED8 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTypeIsolati.c)
 */

bool InitializeUserTypeIsolation(void)
{
  __int64 Pool2; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax

  Pool2 = ExAllocatePool2(256LL, 48LL, 1869834581LL);
  *(_QWORD *)(W32GetUserSessionState(v2, v1) + 19800) = Pool2;
  if ( !*(_QWORD *)(W32GetUserSessionState(v4, v3) + 19800) )
    return 0;
  UserSessionState = W32GetUserSessionState(v6, v5);
  return TypeIsolationFactory<NSInstrumentation::CTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<106496,416>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Create(*(_QWORD *)(UserSessionState + 19800));
}
