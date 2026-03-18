/*
 * XREFs of vDisableSynchronize @ 0x140008E70
 * Callers:
 *     <none>
 * Callees:
 *     ??$GrepIsLockOwnedByCurrentThread@$00USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140008F6C (--$GrepIsLockOwnedByCurrentThread@$00USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@G.c)
 *     ?vDisableTimers@@YAXK@Z @ 0x140009380 (-vDisableTimers@@YAXK@Z.c)
 */

__int64 __fastcall vDisableSynchronize(__int64 a1)
{
  int v2; // esi
  Gre::Base *v3; // rcx
  int v4; // edi
  __int64 result; // rax
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  signed __int32 v7; // ett

  v2 = 0;
  if ( (unsigned int)UserIsUserCritSecIn() )
  {
    v4 = 0;
    result = UserIsUserCritSecInShared();
    v2 = result;
  }
  else
  {
    v4 = 1;
    v6 = Gre::Base::Globals(v3);
    result = GrepIsLockOwnedByCurrentThread<1,Gre::Base::SESSION_GLOBALS>(v6);
    if ( (_BYTE)result )
    {
      v2 = 1;
      v4 = 0;
    }
    else
    {
      result = UserEnterUserCritSec();
    }
  }
  if ( (*(_DWORD *)(a1 + 40) & 0x800) != 0 )
  {
    if ( v2 )
      UserPostNKAPC(
        KeGetCurrentThread(),
        vDisableSynchronizeNKAPCBegin,
        vDisableSynchronizeNKAPCBegin,
        vDisableSynchronizeNKAPC,
        *(unsigned int *)(a1 + 2112));
    else
      vDisableTimers(*(_DWORD *)(a1 + 2112));
    _m_prefetchw((const void *)(a1 + 40));
    do
    {
      v7 = *(_DWORD *)(a1 + 40);
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v7 & 0xFFFFF7FF, v7);
    }
    while ( v7 != (_DWORD)result );
  }
  if ( v4 )
    return UserLeaveUserCritSec();
  return result;
}
