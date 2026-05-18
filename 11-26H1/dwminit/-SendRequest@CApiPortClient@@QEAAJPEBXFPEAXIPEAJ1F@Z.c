/*
 * XREFs of ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z @ 0x18000F9DC
 * Callers:
 *     DwmpNotifyUserLogoff @ 0x18000DBF0 (DwmpNotifyUserLogoff.c)
 *     DwmpTerminateSessionProcess @ 0x18000E330 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000EE20 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000F50C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?Translate@CApiPortClient@@CAJJ@Z @ 0x18000FB54 (-Translate@CApiPortClient@@CAJJ@Z.c)
 *     ?Disconnect@CPortClient@@QEAAXXZ @ 0x18000FD10 (-Disconnect@CPortClient@@QEAAXXZ.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x18000FD7C (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApiPortClient::SendRequest(
        CApiPortClient *this,
        unsigned int *a2,
        __int16 a3,
        void *a4,
        unsigned int a5,
        int *a6)
{
  unsigned int v7; // ebx
  CApiPortClient *v8; // rcx
  int v9; // eax
  volatile signed __int32 *v10; // rbx
  __int16 v11; // r9
  int v12; // edi
  CPortClient *v13; // rcx
  int v14; // eax
  void *v16; // [rsp+20h] [rbp-38h]
  unsigned int v17; // [rsp+28h] [rbp-30h]
  void *v18; // [rsp+30h] [rbp-28h]
  __int16 v19; // [rsp+38h] [rbp-20h]
  int v20; // [rsp+70h] [rbp+18h] BYREF

  LOWORD(v20) = a3;
  v7 = -2144980991;
  EnterCriticalSection(&stru_18001AD70);
  if ( !byte_18001AD98 )
  {
    v20 = 0;
    v9 = CApiPortClient::EnsureConnected(v8);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(4, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2u, v9, 0xA1u, 0LL);
    }
    else
    {
      v10 = (volatile signed __int32 *)qword_18001AD68;
      if ( qword_18001AD68 )
        _InterlockedAdd((volatile signed __int32 *)qword_18001AD68 + 10, 1u);
      LeaveCriticalSection(&stru_18001AD70);
      v12 = CPortClient::SendComplexSyncRequest((CPortClient *)v10, *a2, a2, v11, v16, v17, v18, v19, &v20);
      if ( v10 && _InterlockedExchangeAdd(v10 + 10, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v10)(v10, 1LL);
      EnterCriticalSection(&stru_18001AD70);
      v13 = qword_18001AD68;
      if ( qword_18001AD68
        && _InterlockedCompareExchange((volatile signed __int32 *)qword_18001AD68 + 10, 1, 1) == 1
        && *((_DWORD *)v13 + 2) )
      {
        CPortClient::Disconnect(v13);
      }
      v14 = CApiPortClient::Translate(v12);
      v7 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(4, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2u, v14, 0xBEu, 0LL);
      else
        *a6 = CApiPortClient::Translate(v20);
    }
  }
  LeaveCriticalSection(&stru_18001AD70);
  return v7;
}
