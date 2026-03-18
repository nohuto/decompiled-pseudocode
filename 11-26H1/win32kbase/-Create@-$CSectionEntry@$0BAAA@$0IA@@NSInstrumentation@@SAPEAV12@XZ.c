/*
 * XREFs of ?Create@?$CSectionEntry@$0BAAA@$0IA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401DD900
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0BAAA@$0IA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401DD03C (-Allocate@-$CTypeIsolation@$0BAAA@$0IA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0BAAA@$0IA@@NSInstrumentation@@IEAA_NXZ @ 0x1401EBDB0 (-Initialize@-$CTypeIsolation@$0BAAA@$0IA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     ?Destroy@?$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401B5EB4 (-Destroy@-$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CSectionEntry@$0BAAA@$0IA@@NSInstrumentation@@AEAA_NXZ @ 0x1401DEEC4 (-Initialize@-$CSectionEntry@$0BAAA@$0IA@@NSInstrumentation@@AEAA_NXZ.c)
 */

void *NSInstrumentation::CSectionEntry<4096,128>::Create()
{
  _QWORD *Pool2; // rax
  void *v1; // rbx

  Pool2 = (_QWORD *)ExAllocatePool2(258LL, 40LL, 1869834581LL);
  v1 = Pool2;
  if ( !Pool2 )
    return 0LL;
  Pool2[2] = 0LL;
  Pool2[3] = 0LL;
  Pool2[4] = 0LL;
  if ( !(unsigned __int8)NSInstrumentation::CSectionEntry<4096,128>::Initialize(Pool2) )
  {
    NSInstrumentation::CSectionEntry<32768,128>::Destroy(v1);
    return 0LL;
  }
  return v1;
}
