/*
 * XREFs of ?InitializeTypeIsolation@@YA_NXZ @ 0x1401938A8
 * Callers:
 *     HmgCreate @ 0x14010E70C (HmgCreate.c)
 * Callees:
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SA_NPEAPEAE@Z @ 0x1401B7A44 (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V-$C.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

bool __fastcall InitializeTypeIsolation(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rcx
  int (*v6)(void); // rax
  __int64 v7; // rcx
  __int64 (*v8)(void); // rax

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v4 = PALLOCMEM(64LL, 1869834581LL, v2, v3);
  *(_QWORD *)(v1 + 4384) = v4;
  if ( !v4
    || !(unsigned __int8)gdi::TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<180224,704>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<909312,3552>,NSInstrumentation::CTypeIsolation<32768,128>>::Create(v4) )
  {
    return 0;
  }
  v6 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5) + 24) + 2128LL);
  if ( !v6 || v6() < 0 )
    return 1;
  v8 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7) + 24) + 2136LL);
  if ( v8 )
    LODWORD(v8) = v8();
  return (_DWORD)v8 != 0;
}
