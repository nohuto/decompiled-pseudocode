/*
 * XREFs of ?Initialize@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA_NXZ @ 0x1401C1F30
 * Callers:
 *     ??$AllocateAllocator@UtagCURSOR@@@UserTypeIsolationAllocators@@QEAA_NXZ @ 0x1401EB768 (--$AllocateAllocator@UtagCURSOR@@@UserTypeIsolationAllocators@@QEAA_NXZ.c)
 * Callees:
 *     ?Create@?$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14015A1B0 (-Create@-$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?PlatformDebugModeEnabled@NSInstrumentation@@YA_NXZ @ 0x14015A868 (-PlatformDebugModeEnabled@NSInstrumentation@@YA_NXZ.c)
 */

char __fastcall NSInstrumentation::CTypeIsolation<81920,160>::Initialize(__int64 a1)
{
  _QWORD *Pool2; // rax
  NSInstrumentation *v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  struct _PAGED_LOOKASIDE_LIST *v6; // rax

  Pool2 = (_QWORD *)ExAllocatePool2(258LL, 8LL, 1869834581LL);
  *(_QWORD *)(a1 + 16) = Pool2;
  if ( Pool2 )
  {
    *Pool2 = 0LL;
    if ( NSInstrumentation::PlatformDebugModeEnabled(v3) )
    {
      *(_BYTE *)(a1 + 36) = 1;
      v6 = (struct _PAGED_LOOKASIDE_LIST *)ExAllocatePool2(66LL, 128LL, 1869834581LL);
      *(_QWORD *)(a1 + 24) = v6;
      if ( v6 )
      {
        ExInitializePagedLookasideList(
          v6,
          `NSInstrumentation::CTypeIsolation<909312,3552>::Initialize'::`13'::_lambda_1_::_lambda_invoker_cdecl_<enum _POOL_TYPE,unsigned __int64,unsigned long>,
          (PFREE_FUNCTION)_lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>,
          0x220u,
          0xA0uLL,
          0x6F736955u,
          0x100u);
        return 1;
      }
    }
    else
    {
      v4 = NSInstrumentation::CSectionEntry<81920,160>::Create();
      if ( v4 )
      {
        v5 = *(_QWORD **)(a1 + 8);
        *(_DWORD *)(a1 + 32) = 500;
        if ( *v5 != a1 )
          __fastfail(3u);
        *v4 = a1;
        v4[1] = v5;
        *v5 = v4;
        *(_QWORD *)(a1 + 8) = v4;
        return 1;
      }
    }
  }
  return 0;
}
