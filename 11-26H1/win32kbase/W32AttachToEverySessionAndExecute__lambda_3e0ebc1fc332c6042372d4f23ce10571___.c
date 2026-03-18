/*
 * XREFs of W32AttachToEverySessionAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___ @ 0x1401AB058
 * Callers:
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x14019FA10 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     _lambda_2948d61e21ea889f487699dcf0f00513_::operator() @ 0x1401DA680 (_lambda_2948d61e21ea889f487699dcf0f00513_--operator().c)
 */

__int64 __fastcall W32AttachToEverySessionAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571_(__int64 a1)
{
  __int64 CurrentWin32kSessionId; // rsi
  __int64 v2; // rcx
  unsigned int v3; // edi
  unsigned int v4; // ebx
  __int64 v5; // rcx
  unsigned int MaxSessionCount; // ebp

  CurrentWin32kSessionId = (unsigned int)W32GetCurrentWin32kSessionId(a1);
  v3 = lambda_2948d61e21ea889f487699dcf0f00513_::operator()(v2, 0LL, CurrentWin32kSessionId);
  v4 = 1;
  MaxSessionCount = W32GetMaxSessionCount();
  if ( MaxSessionCount > 1 )
  {
    do
      lambda_2948d61e21ea889f487699dcf0f00513_::operator()(v5, v4++, (unsigned int)CurrentWin32kSessionId);
    while ( v4 < MaxSessionCount );
  }
  return v3;
}
