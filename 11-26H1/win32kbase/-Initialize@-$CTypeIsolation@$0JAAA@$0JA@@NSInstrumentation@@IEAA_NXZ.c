/*
 * XREFs of ?Initialize@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ @ 0x14015A784
 * Callers:
 *     ?Create@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14015A710 (-Create@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SA_NPEAPEAE@Z @ 0x1401C6824 (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTy.c)
 * Callees:
 *     ?PlatformDebugModeEnabled@NSInstrumentation@@YA_NXZ @ 0x14015A868 (-PlatformDebugModeEnabled@NSInstrumentation@@YA_NXZ.c)
 *     ?Create@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14015AA00 (-Create@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ.c)
 */

char __fastcall NSInstrumentation::CTypeIsolation<36864,144>::Initialize(__int64 a1)
{
  _QWORD *Pool2; // rax
  NSInstrumentation *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  struct _PAGED_LOOKASIDE_LIST *v9; // rax

  Pool2 = (_QWORD *)ExAllocatePool2(258LL, 8LL, 1869834581LL);
  *(_QWORD *)(a1 + 16) = Pool2;
  if ( !Pool2 )
    return 0;
  *Pool2 = 0LL;
  if ( !NSInstrumentation::PlatformDebugModeEnabled(v3) )
  {
    v6 = (_QWORD *)NSInstrumentation::CSectionEntry<36864,144>::Create(v5, v4);
    if ( v6 )
    {
      v7 = *(_QWORD **)(a1 + 8);
      *(_DWORD *)(a1 + 32) = 252;
      if ( *v7 != a1 )
        __fastfail(3u);
      *v6 = a1;
      v6[1] = v7;
      *v7 = v6;
      *(_QWORD *)(a1 + 8) = v6;
      return 1;
    }
    return 0;
  }
  *(_BYTE *)(a1 + 36) = 1;
  v9 = (struct _PAGED_LOOKASIDE_LIST *)ExAllocatePool2(66LL, 128LL, 1869834581LL);
  *(_QWORD *)(a1 + 24) = v9;
  if ( !v9 )
    return 0;
  ExInitializePagedLookasideList(
    v9,
    `NSInstrumentation::CTypeIsolation<909312,3552>::Initialize'::`13'::_lambda_1_::_lambda_invoker_cdecl_<enum _POOL_TYPE,unsigned __int64,unsigned long>,
    (PFREE_FUNCTION)_lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>,
    0x220u,
    0x90uLL,
    0x6F736955u,
    0x100u);
  return 1;
}
