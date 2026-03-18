/*
 * XREFs of ?InitializeTypeIsolation@@YA_NXZ @ 0x140029C78
 * Callers:
 *     HmgCreate @ 0x140028D7C (HmgCreate.c)
 * Callees:
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@gdi@@SA_NPEAPEAE@Z @ 0x14019C6E8 (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V-$C.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

bool __fastcall InitializeTypeIsolation(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  int (*v3)(void); // rax
  __int64 (*v4)(void); // rax

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v2 = PALLOCMEM(64LL, 1869834581LL);
  *(_QWORD *)(v1 + 4272) = v2;
  if ( !v2
    || !(unsigned __int8)gdi::TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<180224,704>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<909312,3552>,NSInstrumentation::CTypeIsolation<28672,112>>::Create(v2) )
  {
    return 0;
  }
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2152LL);
  if ( !v3 || v3() < 0 )
    return 1;
  v4 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2160LL);
  if ( v4 )
    LODWORD(v4) = v4();
  return (_DWORD)v4 != 0;
}
