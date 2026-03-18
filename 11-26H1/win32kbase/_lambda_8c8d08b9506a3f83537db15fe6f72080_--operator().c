/*
 * XREFs of _lambda_8c8d08b9506a3f83537db15fe6f72080_::operator() @ 0x1401DA828
 * Callers:
 *     W32AttachToEverySessionAndExecute__lambda_f6639040149d830ab05feaa79928b51c___ @ 0x140189160 (W32AttachToEverySessionAndExecute__lambda_f6639040149d830ab05feaa79928b51c___.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     _lambda_f6639040149d830ab05feaa79928b51c_::operator() @ 0x140090498 (_lambda_f6639040149d830ab05feaa79928b51c_--operator().c)
 *     W32AttachToSessionAndExecute__lambda_f6639040149d830ab05feaa79928b51c___ @ 0x1401DA608 (W32AttachToSessionAndExecute__lambda_f6639040149d830ab05feaa79928b51c___.c)
 */

__int64 __fastcall lambda_8c8d08b9506a3f83537db15fe6f72080_::operator()(__int64 a1, unsigned int a2, int a3)
{
  unsigned int MaxSessionCount; // ebx
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( a2 != a3 )
    return W32AttachToSessionAndExecute__lambda_f6639040149d830ab05feaa79928b51c_(a2);
  if ( PsGetCurrentProcessWin32Process(a1) )
    return lambda_f6639040149d830ab05feaa79928b51c_::operator()();
  MaxSessionCount = W32GetMaxSessionCount();
  if ( (unsigned int)W32GetCurrentWin32kSessionId(v4) < MaxSessionCount )
  {
    if ( W32GetSessionState(v5) )
      return lambda_f6639040149d830ab05feaa79928b51c_::operator()();
  }
  return 3221225485LL;
}
