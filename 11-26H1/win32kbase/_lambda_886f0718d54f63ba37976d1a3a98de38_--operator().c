/*
 * XREFs of _lambda_886f0718d54f63ba37976d1a3a98de38_::operator() @ 0x1401DA7AC
 * Callers:
 *     W32AttachToEverySessionAndExecute__lambda_32f3cb84696a90cec3124b3263005914___ @ 0x1401DA1A4 (W32AttachToEverySessionAndExecute__lambda_32f3cb84696a90cec3124b3263005914___.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     W32AttachToSessionAndExecute__lambda_32f3cb84696a90cec3124b3263005914___ @ 0x1401DA538 (W32AttachToSessionAndExecute__lambda_32f3cb84696a90cec3124b3263005914___.c)
 *     _lambda_32f3cb84696a90cec3124b3263005914_::operator() @ 0x1401DA6F4 (_lambda_32f3cb84696a90cec3124b3263005914_--operator().c)
 */

__int64 __fastcall lambda_886f0718d54f63ba37976d1a3a98de38_::operator()(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4)
{
  unsigned int MaxSessionCount; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( a2 != a3 )
    return W32AttachToSessionAndExecute__lambda_32f3cb84696a90cec3124b3263005914_(a2, a4);
  if ( PsGetCurrentProcessWin32Process(a1) )
    return lambda_32f3cb84696a90cec3124b3263005914_::operator()(a4);
  MaxSessionCount = W32GetMaxSessionCount();
  if ( (unsigned int)W32GetCurrentWin32kSessionId(v6) < MaxSessionCount )
  {
    if ( W32GetSessionState(v7) )
      return lambda_32f3cb84696a90cec3124b3263005914_::operator()(a4);
  }
  return 3221225485LL;
}
