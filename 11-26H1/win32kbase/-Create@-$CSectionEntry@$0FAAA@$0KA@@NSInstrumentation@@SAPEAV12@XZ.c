/*
 * XREFs of ?Create@?$CSectionEntry@$0FAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401DDAB0
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0FAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401DD328 (-Allocate@-$CTypeIsolation@$0FAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0FAAA@$0KA@@NSInstrumentation@@IEAA_NXZ @ 0x1401EC24C (-Initialize@-$CTypeIsolation@$0FAAA@$0KA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     ?Destroy@?$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401B5EB4 (-Destroy@-$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CSectionEntry@$0FAAA@$0KA@@NSInstrumentation@@AEAA_NXZ @ 0x1401DF1F4 (-Initialize@-$CSectionEntry@$0FAAA@$0KA@@NSInstrumentation@@AEAA_NXZ.c)
 */

void *NSInstrumentation::CSectionEntry<20480,160>::Create()
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
  if ( !(unsigned __int8)NSInstrumentation::CSectionEntry<20480,160>::Initialize(Pool2) )
  {
    NSInstrumentation::CSectionEntry<32768,128>::Destroy(v1);
    return 0LL;
  }
  return v1;
}
