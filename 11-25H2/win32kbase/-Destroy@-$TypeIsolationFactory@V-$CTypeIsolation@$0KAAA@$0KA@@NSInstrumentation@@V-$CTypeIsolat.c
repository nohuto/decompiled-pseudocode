/*
 * XREFs of ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V?$CTypeIsolation@$0BKAAA@$0BKA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SAXPEAPEAE@Z @ 0x14011A960
 * Callers:
 *     ?UninitializeUserTypeIsolation@@YAXXZ @ 0x14011A8D8 (-UninitializeUserTypeIsolation@@YAXXZ.c)
 * Callees:
 *     ?Destroy@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14011AA54 (-Destroy@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

__int64 __fastcall TypeIsolationFactory<NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<106496,416>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Destroy(
        _QWORD *a1)
{
  void *v2; // rcx
  __int64 result; // rax
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  v2 = (void *)a1[1];
  if ( v2 )
    result = NSInstrumentation::CTypeIsolation<24576,96>::Destroy(v2);
  v4 = (void *)a1[2];
  if ( v4 )
    result = NSInstrumentation::CTypeIsolation<24576,96>::Destroy(v4);
  v5 = (void *)a1[3];
  if ( v5 )
    result = NSInstrumentation::CTypeIsolation<24576,96>::Destroy(v5);
  v6 = (void *)a1[4];
  if ( v6 )
    result = NSInstrumentation::CTypeIsolation<24576,96>::Destroy(v6);
  v7 = (void *)a1[5];
  if ( v7 )
    return NSInstrumentation::CTypeIsolation<24576,96>::Destroy(v7);
  return result;
}
