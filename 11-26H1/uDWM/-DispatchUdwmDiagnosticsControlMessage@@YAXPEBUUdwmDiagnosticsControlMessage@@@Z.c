/*
 * XREFs of ?DispatchUdwmDiagnosticsControlMessage@@YAXPEBUUdwmDiagnosticsControlMessage@@@Z @ 0x1800B4C80
 * Callers:
 *     ?EtwEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x18008DB28 (-EtwEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009311C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall DispatchUdwmDiagnosticsControlMessage(const struct UdwmDiagnosticsControlMessage *a1)
{
  DWORD CurrentProcessId; // eax
  const char *v3; // r9
  int v4; // edx
  __int64 v5; // r8
  _DWORD *v6; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD pSessionId; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)a1 + 6) == -1 )
    goto LABEL_16;
  pSessionId = 0;
  CurrentProcessId = GetCurrentProcessId();
  if ( !ProcessIdToSessionId(CurrentProcessId, &pSessionId) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x6B,
      (__int64)"clientcore\\windows\\dwm\\udwm\\etw.cpp",
      v3);
  if ( pSessionId == *((_DWORD *)a1 + 6) )
  {
LABEL_16:
    if ( !*((_BYTE *)a1 + 2) && !*(_WORD *)a1 && *((_DWORD *)a1 + 4) >= 0x24u )
    {
      v4 = *((_DWORD *)a1 + 7);
      if ( *((unsigned int *)a1 + 4) >= (unsigned __int64)(4LL * (v4 - 1) + 36) )
      {
        v5 = *((int *)a1 + 7);
        if ( v4 > 0 )
        {
          v6 = (_DWORD *)((char *)a1 + 32);
          do
          {
            if ( (*v6 & 0x7FFFFFFF) == 1 )
              g_simulateDeviceLost = *v6 >= 0;
            ++v6;
            --v5;
          }
          while ( v5 );
        }
      }
    }
  }
}
