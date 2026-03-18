/*
 * XREFs of _lambda_16edcab3270fbf033f8f809e89d81614_::operator() @ 0x1401B74A0
 * Callers:
 *     W32AttachToEverySessionAndExecute__lambda_f6639040149d830ab05feaa79928b51c___ @ 0x14014D510 (W32AttachToEverySessionAndExecute__lambda_f6639040149d830ab05feaa79928b51c___.c)
 * Callees:
 *     _lambda_f6639040149d830ab05feaa79928b51c_::operator() @ 0x140148844 (_lambda_f6639040149d830ab05feaa79928b51c_--operator().c)
 *     W32AttachToSessionAndExecute__lambda_f6639040149d830ab05feaa79928b51c___ @ 0x14016CFDC (W32AttachToSessionAndExecute__lambda_f6639040149d830ab05feaa79928b51c___.c)
 */

__int64 __fastcall lambda_16edcab3270fbf033f8f809e89d81614_::operator()(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rcx

  if ( a2 != a3 )
    return W32AttachToSessionAndExecute__lambda_f6639040149d830ab05feaa79928b51c_(a2);
  if ( PsGetCurrentProcessWin32Process(a1) || W32GetSessionState(v3) )
    return lambda_f6639040149d830ab05feaa79928b51c_::operator()();
  return 3221225485LL;
}
