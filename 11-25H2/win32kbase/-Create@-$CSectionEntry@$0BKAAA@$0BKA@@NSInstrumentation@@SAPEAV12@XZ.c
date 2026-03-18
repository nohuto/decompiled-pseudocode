/*
 * XREFs of ?Create@?$CSectionEntry@$0BKAAA@$0BKA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14011B010
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401110AC (-Allocate@-$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAA_NXZ @ 0x1401C2DBC (-Initialize@-$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     ?Destroy@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14011AB08 (-Destroy@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CSectionEntry@$0BKAAA@$0BKA@@NSInstrumentation@@AEAA_NXZ @ 0x14011B4E8 (-Initialize@-$CSectionEntry@$0BKAAA@$0BKA@@NSInstrumentation@@AEAA_NXZ.c)
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
