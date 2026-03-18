/*
 * XREFs of ??$UserFreeIsolatedType@UtagSBTRACK@@@@YAXPEAUtagSBTRACK@@@Z @ 0x1402F33B0
 * Callers:
 *     xxxEndScroll @ 0x1402F857C (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1402F8934 (xxxSBTrackInit.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1402F39DC (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

__int64 __fastcall UserFreeIsolatedType<tagSBTRACK>(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = W32GetUserSessionState(a1, a2);
  v4 = *(_QWORD *)(*(_QWORD *)(result + 19832) + 32LL);
  if ( v4 )
    return NSInstrumentation::CTypeIsolation<28672,112>::Free(v4, a1);
  return result;
}
