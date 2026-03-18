/*
 * XREFs of ??$UserFreeIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1402E26C4
 * Callers:
 *     xxxEndScroll @ 0x1402E85E0 (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1402E8980 (xxxSBTrackInit.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1402E2EC0 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

__int64 __fastcall UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = W32GetUserSessionState(a1, a2);
  v4 = *(_QWORD *)(*(_QWORD *)(result + 19800) + 40LL);
  if ( v4 )
    return NSInstrumentation::CTypeIsolation<28672,112>::Free(v4, a1);
  return result;
}
