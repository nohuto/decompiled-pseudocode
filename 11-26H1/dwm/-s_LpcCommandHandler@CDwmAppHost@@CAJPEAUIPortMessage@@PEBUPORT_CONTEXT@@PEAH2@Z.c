/*
 * XREFs of ?s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x1400024D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@00_N@Z @ 0x140002710 (-PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@00_N@Z.c)
 *     ?Cleanup@CSettingsManager@@QEAAXXZ @ 0x1400027B0 (-Cleanup@CSettingsManager@@QEAAXXZ.c)
 *     ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x140002924 (-RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ.c)
 *     ?HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ @ 0x140002BE8 (-HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ.c)
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140002C30 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x140002E2C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Shutdown@CDwmAppHost@@QEAAXJ@Z @ 0x140003144 (-Shutdown@CDwmAppHost@@QEAAXJ@Z.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x140005DA4 (IsDWMGhostHandleGhostMsgPresent.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140010010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDwmAppHost::s_LpcCommandHandler(
        struct IPortMessage *a1,
        const struct PORT_CONTEXT *a2,
        int *a3,
        int *a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  CDwmAppHost *v10; // rcx
  int v12; // eax
  CDwmAppHost *v13; // rcx
  CDwmAppHost *v14; // rcx

  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(struct IPortMessage *, const struct PORT_CONTEXT *))(*(_QWORD *)a1 + 16LL))(a1, a2);
  v9 = *(_WORD *)(v8 + 4) >> 15;
  *a3 = 1;
  *a4 = 0;
  if ( (*(unsigned __int16 *)(v8 + 4) & 0xFFFF00FF) == 1 )
  {
    switch ( *(_DWORD *)(v8 + 40) )
    {
      case 0x20000001:
        if ( *(_DWORD *)(v8 + 8) == (_DWORD)qword_14001C4E0 )
        {
          (*(void (__fastcall **)(struct IPortMessage *, _QWORD, __int64))(*(_QWORD *)a1 + 24LL))(a1, 0LL, v9);
          *a4 = 1;
          CDwmAppHost::Shutdown(v14, -805305602);
        }
        break;
      case 0x20000003:
        if ( *(_DWORD *)(v8 + 8) == (_DWORD)qword_14001C4E0 )
        {
          CSettingsManager::Cleanup((CSettingsManager *)qword_14001C4F8);
          AcquireSRWLockExclusive(&SRWLock);
          GetCurrentThreadId();
          byte_14001C518 = 1;
          dword_14001C530 = 0;
          ReleaseSRWLockExclusive(&SRWLock);
          CSettingsManager::RefreshPreferencesAndPolicies((CSettingsManager *)qword_14001C4F8);
          CDwmAppHost::LpcNotifySettingsChange(v13, 0x7D3u);
          (*(void (__fastcall **)(struct IPortMessage *, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, 0LL);
          *a4 = 1;
        }
        break;
      case 0x40000034:
        if ( (_BYTE)v9 && (unsigned __int8)IsDWMGhostHandleGhostMsgPresent() )
        {
          DWMGhostHandleGhostMsg(a1);
          *a4 = 1;
        }
        break;
      default:
        goto LABEL_6;
    }
  }
  else if ( (*(unsigned __int16 *)(v8 + 4) & 0xFFFF00FF) == 3 )
  {
    if ( *(_DWORD *)(v8 + 40) == 536870914 )
    {
      if ( *(_DWORD *)(v8 + 8) == (_DWORD)qword_14001C4E0 )
        CSettingsManager::PropagateUserLogon(
          (CSettingsManager *)qword_14001C4F8,
          *(HKEY *)(v8 + 52),
          *(HKEY *)(v8 + 60),
          *(HKEY *)(v8 + 68),
          *(_DWORD *)(v8 + 76) != 0);
    }
    else
    {
      v10 = (CDwmAppHost *)(unsigned int)(*(_DWORD *)(v8 + 40) - 1073741876);
      if ( *(_DWORD *)(v8 + 40) == 1073741876 )
      {
        if ( (_BYTE)v9 && (unsigned __int8)IsDWMGhostHandleGhostMsgPresent() )
          DWMGhostHandleGhostMsg(a1);
      }
      else
      {
        if ( *(_DWORD *)(v8 + 40) != 1073741878 )
        {
LABEL_6:
          *a3 = 0;
          return v7;
        }
        if ( (_BYTE)v9 )
        {
          *a3 = 0;
          v12 = CDwmAppHost::HandleDisplayModeChange(v10);
          v7 = v12;
          if ( v12 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1BDu, 0LL);
        }
      }
    }
  }
  return v7;
}
