/*
 * XREFs of ?UninitializeTypeIsolation@@YAXXZ @ 0x14018FA38
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1401C0C3C (MultiUserNtGreCleanup.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SAXPEAPEAE@Z @ 0x1401B8654 (-Destroy@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V-$.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall UninitializeTypeIsolation(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  int (*v3)(void); // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  void (*v8)(void); // rax

  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( *(_QWORD *)(v2 + 4384) )
  {
    v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v1) + 24) + 2144LL);
    if ( v3 && v3() >= 0 )
    {
      v8 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4) + 24) + 2152LL);
      if ( v8 )
        v8();
    }
    gdi::TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<180224,704>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<909312,3552>,NSInstrumentation::CTypeIsolation<32768,128>>::Destroy(*(_QWORD *)(v2 + 4384));
    GreDeleteFastMutex(*(char **)(v2 + 4384), v5, v6, v7);
    *(_QWORD *)(v2 + 4384) = 0LL;
  }
}
