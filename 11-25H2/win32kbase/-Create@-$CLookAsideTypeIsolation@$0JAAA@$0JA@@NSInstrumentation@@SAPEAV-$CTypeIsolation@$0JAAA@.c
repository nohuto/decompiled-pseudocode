/*
 * XREFs of ?Create@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV?$CTypeIsolation@$0JAAA@$0JA@@2@XZ @ 0x140241F8C
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@gdi@@SA_NPEAPEAE@Z @ 0x140242050 (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTy.c)
 * Callees:
 *     ?Initialize@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ @ 0x14011B8B8 (-Initialize@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Destroy@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14015B470 (-Destroy@-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

char *NSInstrumentation::CLookAsideTypeIsolation<36864,144>::Create()
{
  __int64 Pool2; // rax
  char *v1; // rbx

  Pool2 = ExAllocatePool2(66LL, 144LL, 1869834581LL);
  v1 = (char *)Pool2;
  if ( !Pool2 )
    return 0LL;
  memset((void *)(Pool2 + 37), 0, 0x6BuLL);
  *((_QWORD *)v1 + 2) = 0LL;
  *((_QWORD *)v1 + 3) = 0LL;
  *((_DWORD *)v1 + 8) = 0;
  v1[36] = 0;
  *((_QWORD *)v1 + 1) = v1;
  *(_QWORD *)v1 = v1;
  ExInitializeLookasideListEx(
    (PLOOKASIDE_LIST_EX)(v1 + 48),
    (PALLOCATE_FUNCTION_EX)`NSInstrumentation::CLookAsideTypeIsolation<36864,144>::Initialize'::`2'::_lambda_1_::_lambda_invoker_cdecl_<enum _POOL_TYPE,unsigned __int64,unsigned long,_LOOKASIDE_LIST_EX *>,
    (PFREE_FUNCTION_EX)`NSInstrumentation::CLookAsideTypeIsolation<36864,144>::Initialize'::`2'::_lambda_2_::_lambda_invoker_cdecl_<void *,_LOOKASIDE_LIST_EX *>,
    (POOL_TYPE)512,
    2u,
    0x90uLL,
    0x616C6947u,
    0x100u);
  if ( !NSInstrumentation::CTypeIsolation<36864,144>::Initialize((__int64)v1) )
  {
    NSInstrumentation::CLookAsideTypeIsolation<36864,144>::Destroy(v1);
    return 0LL;
  }
  return v1;
}
