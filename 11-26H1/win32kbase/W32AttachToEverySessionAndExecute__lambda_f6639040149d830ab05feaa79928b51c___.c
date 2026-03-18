/*
 * XREFs of W32AttachToEverySessionAndExecute__lambda_f6639040149d830ab05feaa79928b51c___ @ 0x140189160
 * Callers:
 *     ?W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140189140 (-W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     _lambda_8c8d08b9506a3f83537db15fe6f72080_::operator() @ 0x1401DA828 (_lambda_8c8d08b9506a3f83537db15fe6f72080_--operator().c)
 */

__int64 __fastcall W32AttachToEverySessionAndExecute__lambda_f6639040149d830ab05feaa79928b51c_(__int64 a1)
{
  __int64 CurrentWin32kSessionId; // rsi
  __int64 v2; // rcx
  unsigned int v3; // edi
  unsigned int v4; // ebx
  __int64 v5; // rcx
  unsigned int MaxSessionCount; // ebp

  CurrentWin32kSessionId = (unsigned int)W32GetCurrentWin32kSessionId(a1);
  v3 = lambda_8c8d08b9506a3f83537db15fe6f72080_::operator()(v2, 0LL, CurrentWin32kSessionId);
  v4 = 1;
  MaxSessionCount = W32GetMaxSessionCount();
  if ( MaxSessionCount > 1 )
  {
    do
      lambda_8c8d08b9506a3f83537db15fe6f72080_::operator()(v5, v4++, (unsigned int)CurrentWin32kSessionId);
    while ( v4 < MaxSessionCount );
  }
  return v3;
}
