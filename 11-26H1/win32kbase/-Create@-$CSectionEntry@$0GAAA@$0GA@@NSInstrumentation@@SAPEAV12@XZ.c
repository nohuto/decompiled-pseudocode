/*
 * XREFs of ?Create@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14015A414
 * Callers:
 *     ?Initialize@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA_NXZ @ 0x140159DC0 (-Initialize@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     ?Initialize@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ @ 0x14015A480 (-Initialize@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Destroy@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14015AEF4 (-Destroy@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void *NSInstrumentation::CSectionEntry<24576,96>::Create()
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
  if ( !(unsigned __int8)NSInstrumentation::CSectionEntry<24576,96>::Initialize(Pool2) )
  {
    NSInstrumentation::CSectionEntry<24576,96>::Destroy(v1);
    return 0LL;
  }
  return v1;
}
