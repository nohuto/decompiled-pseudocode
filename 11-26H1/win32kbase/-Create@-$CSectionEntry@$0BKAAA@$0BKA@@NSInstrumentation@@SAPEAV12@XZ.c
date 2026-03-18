/*
 * XREFs of ?Create@?$CSectionEntry@$0BKAAA@$0BKA@@NSInstrumentation@@SAPEAV12@XZ @ 0x140159F8C
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAAPEAXXZ @ 0x14016C890 (-Allocate@-$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAA_NXZ @ 0x1401EBE9C (-Initialize@-$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     ?Destroy@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14015A2E8 (-Destroy@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CSectionEntry@$0BKAAA@$0BKA@@NSInstrumentation@@AEAA_NXZ @ 0x14015A640 (-Initialize@-$CSectionEntry@$0BKAAA@$0BKA@@NSInstrumentation@@AEAA_NXZ.c)
 */

void *NSInstrumentation::CSectionEntry<106496,416>::Create()
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
  if ( !(unsigned __int8)NSInstrumentation::CSectionEntry<106496,416>::Initialize(Pool2) )
  {
    NSInstrumentation::CSectionEntry<49152,192>::Destroy(v1);
    return 0LL;
  }
  return v1;
}
