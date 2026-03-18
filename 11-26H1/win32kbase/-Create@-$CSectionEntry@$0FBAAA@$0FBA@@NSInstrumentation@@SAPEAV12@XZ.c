/*
 * XREFs of ?Create@?$CSectionEntry@$0FBAAA@$0FBA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401DDB1C
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0FBAAA@$0FBA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401DD4A0 (-Allocate@-$CTypeIsolation@$0FBAAA@$0FBA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0FBAAA@$0FBA@@NSInstrumentation@@IEAA_NXZ @ 0x1401EC338 (-Initialize@-$CTypeIsolation@$0FBAAA@$0FBA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     ?Destroy@?$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401B5EB4 (-Destroy@-$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CSectionEntry@$0FBAAA@$0FBA@@NSInstrumentation@@AEAA_NXZ @ 0x1401DF2C0 (-Initialize@-$CSectionEntry@$0FBAAA@$0FBA@@NSInstrumentation@@AEAA_NXZ.c)
 */

void *NSInstrumentation::CSectionEntry<331776,1296>::Create()
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
  if ( !(unsigned __int8)NSInstrumentation::CSectionEntry<331776,1296>::Initialize(Pool2) )
  {
    NSInstrumentation::CSectionEntry<32768,128>::Destroy(v1);
    return 0LL;
  }
  return v1;
}
