/*
 * XREFs of ?Create@?$CSectionEntry@$0DKAAA@$0DKA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14025367C
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1400D35B8 (-Allocate@-$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAA_NXZ @ 0x140253580 (-Initialize@-$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     ?Initialize@?$CSectionEntry@$0DKAAA@$0DKA@@NSInstrumentation@@AEAA_NXZ @ 0x1402318FC (-Initialize@-$CSectionEntry@$0DKAAA@$0DKA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Destroy@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1402873C0 (-Destroy@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void *NSInstrumentation::CSectionEntry<237568,928>::Create()
{
  _QWORD *Pool2; // rax
  unsigned int v1; // edx
  void *v2; // rbx

  Pool2 = (_QWORD *)ExAllocatePool2(258LL, 40LL, 1869834581LL);
  v2 = Pool2;
  if ( !Pool2 )
    return 0LL;
  Pool2[2] = 0LL;
  Pool2[3] = 0LL;
  Pool2[4] = 0LL;
  if ( !NSInstrumentation::CSectionEntry<237568,928>::Initialize(Pool2, v1) )
  {
    NSInstrumentation::CSectionEntry<36864,144>::Destroy(v2);
    return 0LL;
  }
  return v2;
}
