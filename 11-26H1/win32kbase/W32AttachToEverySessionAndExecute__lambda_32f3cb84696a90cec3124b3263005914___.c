/*
 * XREFs of W32AttachToEverySessionAndExecute__lambda_32f3cb84696a90cec3124b3263005914___ @ 0x1401DA1A4
 * Callers:
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x14018E1B0 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     _lambda_886f0718d54f63ba37976d1a3a98de38_::operator() @ 0x1401DA7AC (_lambda_886f0718d54f63ba37976d1a3a98de38_--operator().c)
 */

__int64 __fastcall W32AttachToEverySessionAndExecute__lambda_32f3cb84696a90cec3124b3263005914_(__int64 a1)
{
  __int64 CurrentWin32kSessionId; // rbp
  __int64 v3; // rcx
  unsigned int v4; // edi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  unsigned int MaxSessionCount; // r14d

  CurrentWin32kSessionId = (unsigned int)W32GetCurrentWin32kSessionId(a1);
  v4 = lambda_886f0718d54f63ba37976d1a3a98de38_::operator()(v3, 0LL, CurrentWin32kSessionId, a1);
  v5 = 1;
  MaxSessionCount = W32GetMaxSessionCount();
  if ( MaxSessionCount > 1 )
  {
    do
      lambda_886f0718d54f63ba37976d1a3a98de38_::operator()(v6, v5++, (unsigned int)CurrentWin32kSessionId, a1);
    while ( v5 < MaxSessionCount );
  }
  return v4;
}
