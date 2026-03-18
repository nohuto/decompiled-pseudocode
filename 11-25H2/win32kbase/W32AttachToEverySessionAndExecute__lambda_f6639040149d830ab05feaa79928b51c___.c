/*
 * XREFs of W32AttachToEverySessionAndExecute__lambda_f6639040149d830ab05feaa79928b51c___ @ 0x14014D510
 * Callers:
 *     ?W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x14014D4F0 (-W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     _lambda_16edcab3270fbf033f8f809e89d81614_::operator() @ 0x1401B74A0 (_lambda_16edcab3270fbf033f8f809e89d81614_--operator().c)
 */

__int64 W32AttachToEverySessionAndExecute__lambda_f6639040149d830ab05feaa79928b51c_()
{
  __int64 CurrentWin32kSessionId; // rsi
  __int64 v1; // rcx
  unsigned int v2; // edi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  unsigned int MaxSessionCount; // ebp

  CurrentWin32kSessionId = (unsigned int)W32GetCurrentWin32kSessionId();
  v2 = lambda_16edcab3270fbf033f8f809e89d81614_::operator()(v1, 0LL, CurrentWin32kSessionId);
  v3 = 1;
  MaxSessionCount = W32GetMaxSessionCount();
  if ( MaxSessionCount > 1 )
  {
    do
      lambda_16edcab3270fbf033f8f809e89d81614_::operator()(v4, v3++, (unsigned int)CurrentWin32kSessionId);
    while ( v3 < MaxSessionCount );
  }
  return v2;
}
