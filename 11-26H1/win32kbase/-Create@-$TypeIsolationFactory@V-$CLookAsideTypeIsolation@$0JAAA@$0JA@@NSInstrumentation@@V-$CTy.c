/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SA_NPEAPEAE@Z @ 0x1401C6824
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SA_NPEAPEAE@Z @ 0x1401B7A44 (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V-$C.c)
 * Callees:
 *     ?Initialize@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ @ 0x14015A784 (-Initialize@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Destroy@?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14019B5EC (-Destroy@-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Create@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401C18B4 (-Create@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401EE458 (-Create@-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401EE4D0 (-Create@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

char __fastcall gdi::TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<909312,3552>,NSInstrumentation::CTypeIsolation<32768,128>>::Create(
        _QWORD *a1)
{
  __int64 Pool2; // rax
  char v3; // bl
  char *v4; // rdi
  void *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  Pool2 = ExAllocatePool2(66LL, 144LL, 1869834581LL);
  v3 = 0;
  v4 = (char *)Pool2;
  if ( !Pool2 )
    return 0;
  memset((void *)(Pool2 + 37), 0, 0x6BuLL);
  *((_QWORD *)v4 + 2) = 0LL;
  *((_QWORD *)v4 + 3) = 0LL;
  *((_DWORD *)v4 + 8) = 0;
  v4[36] = 0;
  *((_QWORD *)v4 + 1) = v4;
  *(_QWORD *)v4 = v4;
  ExInitializeLookasideListEx(
    (PLOOKASIDE_LIST_EX)(v4 + 48),
    (PALLOCATE_FUNCTION_EX)`NSInstrumentation::CLookAsideTypeIsolation<36864,144>::Initialize'::`2'::_lambda_1_::_lambda_invoker_cdecl_<enum _POOL_TYPE,unsigned __int64,unsigned long,_LOOKASIDE_LIST_EX *>,
    (PFREE_FUNCTION_EX)`NSInstrumentation::CLookAsideTypeIsolation<36864,144>::Initialize'::`2'::_lambda_2_::_lambda_invoker_cdecl_<void *,_LOOKASIDE_LIST_EX *>,
    (POOL_TYPE)512,
    2u,
    0x90uLL,
    0x616C6947u,
    0x100u);
  if ( !NSInstrumentation::CTypeIsolation<36864,144>::Initialize((__int64)v4) )
  {
    NSInstrumentation::CLookAsideTypeIsolation<180224,704>::Destroy(v4);
    return 0;
  }
  a1[1] = v4;
  v6 = NSInstrumentation::CTypeIsolation<81920,320>::Create();
  if ( v6 )
  {
    a1[4] = v6;
    v7 = NSInstrumentation::CTypeIsolation<909312,3552>::Create();
    if ( v7 )
    {
      a1[6] = v7;
      v8 = NSInstrumentation::CTypeIsolation<32768,128>::Create();
      if ( v8 )
      {
        a1[7] = v8;
        return 1;
      }
    }
  }
  return v3;
}
