/*
 * XREFs of ?UninitializeUserTypeIsolation@@YAXXZ @ 0x14011A8D8
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140169710 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V?$CTypeIsolation@$0BKAAA@$0BKA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SAXPEAPEAE@Z @ 0x14011A960 (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V-$CTypeIsolat.c)
 *     ?Destroy@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14011AA54 (-Destroy@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void __fastcall UninitializeUserTypeIsolation(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  PVOID *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19800) )
  {
    v4 = *(PVOID **)(W32GetUserSessionState(v3, v2) + 19800);
    if ( *v4 )
      NSInstrumentation::CTypeIsolation<24576,96>::Destroy(*v4);
    TypeIsolationFactory<NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<106496,416>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Destroy(v4);
    UserSessionState = W32GetUserSessionState(v6, v5);
    ExFreePoolWithTag(*(PVOID *)(UserSessionState + 19800), 0);
    *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19800) = 0LL;
  }
}
