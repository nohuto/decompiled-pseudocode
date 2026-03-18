/*
 * XREFs of W32AttachToEverySessionAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___ @ 0x1401B7028
 * Callers:
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1401B77D0 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     _lambda_518f380661a472ef256f22ac48aef260_::operator() @ 0x1401B755C (_lambda_518f380661a472ef256f22ac48aef260_--operator().c)
 */

__int64 W32AttachToEverySessionAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571_()
{
  __int64 CurrentWin32kSessionId; // rsi
  __int64 v1; // rcx
  unsigned int v2; // edi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  unsigned int MaxSessionCount; // ebp

  CurrentWin32kSessionId = (unsigned int)W32GetCurrentWin32kSessionId();
  v2 = lambda_518f380661a472ef256f22ac48aef260_::operator()(v1, 0LL, CurrentWin32kSessionId);
  v3 = 1;
  MaxSessionCount = W32GetMaxSessionCount();
  if ( MaxSessionCount > 1 )
  {
    do
      lambda_518f380661a472ef256f22ac48aef260_::operator()(v4, v3++, (unsigned int)CurrentWin32kSessionId);
    while ( v3 < MaxSessionCount );
  }
  return v2;
}
