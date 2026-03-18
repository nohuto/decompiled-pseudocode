/*
 * XREFs of ??$AllocateAllocator@UtagDDECONV@@@UserTypeIsolationAllocators@@QEAA_NXZ @ 0x1401EB7F0
 * Callers:
 *     ?Initialize@UserTypeIsolationAllocators@@QEAA_NXZ @ 0x1401B8744 (-Initialize@UserTypeIsolationAllocators@@QEAA_NXZ.c)
 * Callees:
 *     ?Destroy@?$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401EBC98 (-Destroy@-$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CTypeIsolation@$0DAAA@$0GA@@NSInstrumentation@@IEAA_NXZ @ 0x1401EC074 (-Initialize@-$CTypeIsolation@$0DAAA@$0GA@@NSInstrumentation@@IEAA_NXZ.c)
 */

bool __fastcall UserTypeIsolationAllocators::AllocateAllocator<tagDDECONV>(__int64 a1)
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
  if ( !(unsigned __int8)NSInstrumentation::CTypeIsolation<12288,96>::Initialize(Pool2) )
  {
    NSInstrumentation::CTypeIsolation<20480,80>::Destroy(v3);
LABEL_4:
    v3 = 0LL;
  }
  *(_QWORD *)(a1 + 80) = v3;
  return v3 != 0LL;
}
