/*
 * XREFs of ?Create@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14015B65C
 * Callers:
 *     ?Initialize@UserTypeIsolationAllocators@@QEAA_NXZ @ 0x1401B8744 (-Initialize@UserTypeIsolationAllocators@@QEAA_NXZ.c)
 * Callees:
 *     ?Destroy@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140159EAC (-Destroy@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAA_NXZ @ 0x1401C1D00 (-Initialize@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAA_NXZ.c)
 */

void *NSInstrumentation::CTypeIsolation<28672,112>::Create()
{
  __int64 Pool2; // rax
  void *v1; // rbx

  Pool2 = ExAllocatePool2(258LL, 40LL, 1869834581LL);
  v1 = (void *)Pool2;
  if ( !Pool2 )
    return 0LL;
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_DWORD *)(Pool2 + 32) = 0;
  *(_BYTE *)(Pool2 + 36) = 0;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  if ( !(unsigned __int8)NSInstrumentation::CTypeIsolation<28672,112>::Initialize(Pool2) )
  {
    NSInstrumentation::CTypeIsolation<81920,160>::Destroy(v1);
    return 0LL;
  }
  return v1;
}
