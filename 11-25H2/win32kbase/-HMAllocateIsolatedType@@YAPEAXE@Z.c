/*
 * XREFs of ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x14003FA58
 * Callers:
 *     ?HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z @ 0x14000B1D4 (-HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z.c)
 *     HMAllocObjectEx @ 0x14003E880 (HMAllocObjectEx.c)
 * Callees:
 *     ?HMTagToIsolatedType@@YA?AW4UserTypeIsolationCountedType@@E@Z @ 0x14000C760 (-HMTagToIsolatedType@@YA-AW4UserTypeIsolationCountedType@@E@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140071C00 (-Allocate@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401067CC (-Allocate@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401110AC (-Allocate@-$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

void *__fastcall HMAllocateIsolatedType(unsigned __int8 a1)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  void *result; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx

  v1 = HMTagToIsolatedType(a1) - 1;
  if ( v1 )
  {
    v4 = v1 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        v5 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 19800);
        result = 0LL;
        if ( *(_QWORD *)(v5 + 24) )
          return (void *)NSInstrumentation::CTypeIsolation<81920,160>::Allocate();
      }
      else
      {
        return 0LL;
      }
    }
    else
    {
      v7 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 19800);
      result = 0LL;
      if ( *(_QWORD *)(v7 + 16) )
        return (void *)NSInstrumentation::CTypeIsolation<106496,416>::Allocate();
    }
  }
  else
  {
    v8 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 19800);
    result = 0LL;
    if ( *(_QWORD *)(v8 + 8) )
      return (void *)NSInstrumentation::CTypeIsolation<40960,160>::Allocate();
  }
  return result;
}
