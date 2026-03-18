/*
 * XREFs of ?Initialize@?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAA_NXZ @ 0x140253580
 * Callers:
 *     RfontIsolationInitialize @ 0x140329AD0 (RfontIsolationInitialize.c)
 * Callees:
 *     ?Create@?$CSectionEntry@$0DKAAA@$0DKA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14025367C (-Create@-$CSectionEntry@$0DKAAA@$0DKA@@NSInstrumentation@@SAPEAV12@XZ.c)
 */

char __fastcall NSInstrumentation::CTypeIsolation<237568,928>::Initialize(__int64 a1)
{
  _QWORD *Pool2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  struct _PAGED_LOOKASIDE_LIST *v5; // rax

  Pool2 = (_QWORD *)ExAllocatePool2(258LL, 8LL, 1869834581LL);
  *(_QWORD *)(a1 + 16) = Pool2;
  if ( Pool2 )
  {
    *Pool2 = 0LL;
    if ( MmIsDriverVerifyingByAddress(&unk_140366AC8) )
    {
      *(_BYTE *)(a1 + 36) = 1;
      v5 = (struct _PAGED_LOOKASIDE_LIST *)ExAllocatePool2(66LL, 128LL, 1869834581LL);
      *(_QWORD *)(a1 + 24) = v5;
      if ( v5 )
      {
        ExInitializePagedLookasideList(
          v5,
          `NSInstrumentation::CTypeIsolation<237568,928>::Initialize'::`13'::_lambda_1_::_lambda_invoker_cdecl_<enum _POOL_TYPE,unsigned __int64,unsigned long>,
          `NSInstrumentation::CTypeIsolation<237568,928>::Initialize'::`13'::_lambda_2_::_lambda_invoker_cdecl_<void *>,
          0x220u,
          0x3A0uLL,
          0x6F736955u,
          0x100u);
        return 1;
      }
    }
    else
    {
      v3 = (_QWORD *)NSInstrumentation::CSectionEntry<237568,928>::Create();
      if ( v3 )
      {
        v4 = *(_QWORD **)(a1 + 8);
        *(_DWORD *)(a1 + 32) = 232;
        if ( *v4 != a1 )
          __fastfail(3u);
        *v3 = a1;
        v3[1] = v4;
        *v4 = v3;
        *(_QWORD *)(a1 + 8) = v3;
        return 1;
      }
    }
  }
  return 0;
}
