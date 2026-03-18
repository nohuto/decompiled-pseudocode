/*
 * XREFs of ??$AllocateAllocator@UtagWND@@@UserTypeIsolationAllocators@@QEAA_NXZ @ 0x1401EBA98
 * Callers:
 *     ?Initialize@UserTypeIsolationAllocators@@QEAA_NXZ @ 0x1401B8744 (-Initialize@UserTypeIsolationAllocators@@QEAA_NXZ.c)
 * Callees:
 *     ?Destroy@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140159EAC (-Destroy@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAA_NXZ @ 0x1401EBE9C (-Initialize@-$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAA_NXZ.c)
 */

bool __fastcall UserTypeIsolationAllocators::AllocateAllocator<tagWND>(__int64 a1)
{
  __int64 Pool2; // rax
  void *v3; // rbx

  Pool2 = ExAllocatePool2(258LL, 40LL, 1869834581LL);
  v3 = (void *)Pool2;
  if ( !Pool2 )
    goto LABEL_4;
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_DWORD *)(Pool2 + 32) = 0;
  *(_BYTE *)(Pool2 + 36) = 0;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  if ( !(unsigned __int8)NSInstrumentation::CTypeIsolation<106496,416>::Initialize(Pool2) )
  {
    NSInstrumentation::CTypeIsolation<81920,160>::Destroy(v3);
LABEL_4:
    v3 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = v3;
  return v3 != 0LL;
}
