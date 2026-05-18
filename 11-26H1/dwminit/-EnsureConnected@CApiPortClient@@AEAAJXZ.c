/*
 * XREFs of ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000F50C
 * Callers:
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x18000F740 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z @ 0x18000F9DC (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800021F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180002F44 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800032B4 (memset_0.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180006774 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000EE20 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x18000F4C8 (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?Translate@CApiPortClient@@CAJJ@Z @ 0x18000FB54 (-Translate@CApiPortClient@@CAJJ@Z.c)
 *     ?ConnectWithName@CPortClient@@QEAAJPEBG@Z @ 0x18000FBF8 (-ConnectWithName@CPortClient@@QEAAJPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApiPortClient::EnsureConnected(CApiPortClient *this)
{
  unsigned int v1; // ebx
  void *v2; // rdi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned __int16 v9[48]; // [rsp+40h] [rbp-D8h] BYREF
  unsigned __int16 v10[48]; // [rsp+A0h] [rbp-78h] BYREF

  if ( qword_18001AD68 && *((_QWORD *)qword_18001AD68 + 2) )
    return 0;
  CApiPortClient::Disconnect((CApiPortClient *)&g_PortClient);
  v2 = operator new(0x30uLL);
  v3 = g_PortClient;
  *(_QWORD *)v2 = &CPortClient::`vftable';
  *((_DWORD *)v2 + 7) = v3;
  *(_QWORD *)v2 = &CPortClientRefCounted::`vftable';
  *((_DWORD *)v2 + 2) = 0;
  *((_QWORD *)v2 + 2) = 0LL;
  *((_BYTE *)v2 + 24) = 0;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_DWORD *)v2 + 10) = 1;
  memset_0(v9, 0, 0x52uLL);
  memset_0(v10, 0, 0x52uLL);
  LeaveCriticalSection(&stru_18001AD70);
  if ( NtCurrentPeb()->SessionId
    && (v4 = StringCchPrintfW(v9, 41LL, L"\\Sessions\\%d", NtCurrentPeb()->SessionId), v1 = v4, v4 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(4, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2u, v4, 0x134u, 0LL);
  }
  else
  {
    v5 = StringCchPrintfW(v10, 41LL, L"%s\\Windows\\DwmApiPort", v9);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(4, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2u, v5, 0x13Bu, 0LL);
    }
    else
    {
      v6 = CPortClient::ConnectWithName((CPortClient *)v2, v10);
      v7 = CApiPortClient::Translate(v6);
      v1 = v7;
      if ( v7 >= 0 )
      {
        EnterCriticalSection(&stru_18001AD70);
        if ( !qword_18001AD68 )
        {
          qword_18001AD68 = (CPortClient *)v2;
          return v1;
        }
        goto LABEL_14;
      }
      MilInstrumentationCheckHR_MaybeFailFast(4, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2u, v7, 0x13Eu, 0LL);
    }
  }
  EnterCriticalSection(&stru_18001AD70);
LABEL_14:
  if ( v2 && _InterlockedExchangeAdd((volatile signed __int32 *)v2 + 10, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(void *, __int64))v2)(v2, 1LL);
  return v1;
}
