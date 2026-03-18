/*
 * XREFs of xxxFlushDeferredWindowEvents @ 0x14005F9D0
 * Callers:
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14005F888 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 * Callees:
 *     xxxProcessNotifyWinEvent @ 0x14002F920 (xxxProcessNotifyWinEvent.c)
 *     xxxProcessTSFEvent @ 0x1400CADAC (xxxProcessTSFEvent.c)
 */

__int64 __fastcall xxxFlushDeferredWindowEvents(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  unsigned int CurrentThreadId; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 *v7; // rbx
  __int64 v8; // rcx
  int v9; // edx
  bool v10; // zf

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(UserSessionState + 42320)) != 1 )
    __int2c();
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  result = W32GetUserSessionState(v5, v4);
  v7 = (__int64 *)(result + 70608);
  v8 = *(_QWORD *)(result + 70608);
  if ( v8 != result + 70608 )
  {
    do
    {
      v9 = *(_DWORD *)(v8 + 56);
      if ( (v9 & 2) != 0 && *(_DWORD *)(v8 + 48) == CurrentThreadId )
      {
        v10 = *(_DWORD *)(v8 + 24) == 0;
        *(_DWORD *)(v8 + 56) = v9 & 0xFFFFFFFD;
        if ( v10 )
          result = xxxProcessNotifyWinEvent(v8);
        else
          result = xxxProcessTSFEvent((struct tagNOTIFY *)v8);
        v8 = *v7;
      }
      else
      {
        v8 = *(_QWORD *)v8;
      }
    }
    while ( (__int64 *)v8 != v7 );
  }
  return result;
}
