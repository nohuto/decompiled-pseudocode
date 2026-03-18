/*
 * XREFs of UpdatePerUserImmEnabling @ 0x1402121AC
 * Callers:
 *     NtUserUpdatePerUserImmEnabling @ 0x140212170 (NtUserUpdatePerUserImmEnabling.c)
 * Callees:
 *     <none>
 */

__int64 UpdatePerUserImmEnabling()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  if ( (unsigned int)IsIMMEnabledSystem() )
    _InterlockedOr(*(volatile signed __int32 **)(W32GetUserSessionState(v1, v0) + 19872), 4u);
  else
    _InterlockedAnd(*(volatile signed __int32 **)(W32GetUserSessionState(v1, v0) + 19872), 0xFFFFFFFB);
  return 1LL;
}
