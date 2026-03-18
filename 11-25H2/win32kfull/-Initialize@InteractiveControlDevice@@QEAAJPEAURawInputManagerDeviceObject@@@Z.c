/*
 * XREFs of ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402ED638
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402E0518 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140005D0C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012FC60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??_GSimpleHapticsController@@QEAAPEAXI@Z @ 0x1402ECEFC (--_GSimpleHapticsController@@QEAAPEAXI@Z.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1402ECFCC (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1402ED240 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?GetSupportedWaveforms@InteractiveControlDevice@@QEAAPEAU_WAVEFORM_INFO@@XZ @ 0x1402ED600 (-GetSupportedWaveforms@InteractiveControlDevice@@QEAAPEAU_WAVEFORM_INFO@@XZ.c)
 *     ?GetWaveformCount@InteractiveControlDevice@@QEAAIXZ @ 0x1402ED61C (-GetWaveformCount@InteractiveControlDevice@@QEAAIXZ.c)
 *     ?SendDeviceIOControl@InteractiveControlDevice@@QEAAJKPEAXK0KPEAK@Z @ 0x1402EDC5C (-SendDeviceIOControl@InteractiveControlDevice@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?DeInitialize@SimpleHapticsController@@QEAAJXZ @ 0x1402F0754 (-DeInitialize@SimpleHapticsController@@QEAAJXZ.c)
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1402F0B04 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?SetDevicePropertyData@SimpleHapticsController@@QEAAJPEBU_DEVPROPKEY@@KKKKPEAX@Z @ 0x1402F1C60 (-SetDevicePropertyData@SimpleHapticsController@@QEAAJPEBU_DEVPROPKEY@@KKKKPEAX@Z.c)
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveControlDevice@@@Z @ 0x1402F21C8 (-BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveC.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall InteractiveControlDevice::Initialize(InteractiveControlDevice *this, char *Object)
{
  __int64 v2; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  NTSTATUS v7; // edi
  __int64 UserSessionState; // rax
  int v9; // edx
  void *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r14
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  SimpleHapticsController *v17; // rcx
  SimpleHapticsController *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v22; // rdx
  const struct _DEVPROPKEY *v23; // rdx
  unsigned int v24; // r8d
  unsigned int v25; // r9d
  SimpleHapticsController *v26; // rcx
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // r9
  InteractiveControlDevice *v30; // rcx
  struct _WAVEFORM_INFO *SupportedWaveforms; // rcx
  unsigned int v32; // r8d
  unsigned int i; // edx
  unsigned int j; // eax
  unsigned int ObjectType; // [rsp+20h] [rbp-30h]
  int *AccessMode; // [rsp+28h] [rbp-28h]
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  int v38; // [rsp+88h] [rbp+38h] BYREF
  const char *v39; // [rsp+90h] [rbp+40h] BYREF
  size_t Size; // [rsp+98h] [rbp+48h] BYREF

  v2 = *((_QWORD *)Object + 49);
  Handle = 0LL;
  LODWORD(Size) = 0;
  v7 = RawInputManagerDeviceObjectReference(Object);
  if ( v7 >= 0 )
  {
    *(_QWORD *)this = Object;
    UserSessionState = W32GetUserSessionState(v6, v5);
    v9 = *(_DWORD *)(UserSessionState + 17172);
    *(_DWORD *)(UserSessionState + 17172) = v9 + 1;
    *((_DWORD *)this + 2) = v9;
    v7 = ObOpenObjectByPointer(
           Object,
           0,
           0LL,
           3u,
           ExRawInputManagerObjectType,
           (unsigned __int16)(~(unsigned __int16)*((_DWORD *)Object + 60) & 0x2000) >> 13,
           &Handle);
    if ( v7 >= 0 )
    {
      v7 = RIMGetDevicePreparsedDataLockfree(Handle, 0LL, &Size, 0LL);
      if ( v7 >= 0 )
      {
        v10 = (void *)Win32AllocPoolZInit((unsigned int)Size, 1819440195LL);
        *((_QWORD *)this + 32) = v10;
        if ( !v10 )
        {
LABEL_5:
          v7 = -1073741670;
          goto LABEL_22;
        }
        memset_0(v10, 0, (unsigned int)Size);
        v7 = RIMGetDevicePreparsedDataLockfree(Handle, *((_QWORD *)this + 32), &Size, 0LL);
        if ( v7 >= 0 )
        {
          v11 = Win32AllocPool(104LL, 1667787091LL);
          v12 = v11;
          if ( v11 )
          {
            *(_QWORD *)(v11 + 16) = 0LL;
            *(_QWORD *)(v11 + 24) = 0LL;
            *(_QWORD *)(v11 + 32) = 0LL;
            *(_QWORD *)(v11 + 56) = 0LL;
            *(_QWORD *)(v11 + 64) = 0LL;
            *(_WORD *)(v11 + 72) = 0;
            *(_DWORD *)(v11 + 76) = 0;
            *(_QWORD *)(v11 + 80) = 0LL;
            *(_DWORD *)(v11 + 88) = 0;
            *(_BYTE *)(v11 + 92) = 0;
            *(_DWORD *)(v11 + 96) = W32GetCurrentWin32kSessionId();
            *(_QWORD *)(v12 + 8) = 0LL;
          }
          else
          {
            v12 = 0LL;
          }
          *((_QWORD *)this + 48) = v12;
          if ( !v12 )
            goto LABEL_5;
          v13 = v2 + 104;
          RIMUnlockExclusive(v13);
          v14 = SimpleHapticsController::Initialize(
                  *((SimpleHapticsController **)this + 48),
                  (struct _UNICODE_STRING *)(Object + 264));
          if ( v14 < 0 )
          {
            if ( (unsigned int)dword_14039BBF8 > 4 )
            {
              v38 = v14;
              v39 = "SimpleHapticsController->Initialize failed with.";
              AccessMode = &v38;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                (__int64)&dword_14039BBF8,
                (__int64)&unk_14036B034,
                v15,
                v16,
                &v39);
            }
            v17 = (SimpleHapticsController *)*((_QWORD *)this + 48);
            if ( v17 )
            {
              SimpleHapticsController::DeInitialize(v17);
              v18 = (SimpleHapticsController *)*((_QWORD *)this + 48);
              if ( v18 )
                SimpleHapticsController::`scalar deleting destructor'(v18);
              *((_QWORD *)this + 48) = 0LL;
            }
          }
          v7 = InteractiveControlParser::BuildDeviceCapabilities(*((PHIDP_PREPARSED_DATA *)this + 32), this);
          if ( v7 < 0 )
            goto LABEL_21;
          if ( *((_DWORD *)this + 18) != 1 )
          {
            v7 = -1073741637;
LABEL_21:
            RIMLockExclusive(v13);
            goto LABEL_22;
          }
          if ( *((_QWORD *)this + 30) )
            InteractiveControlDevice::CreateDeadzone(this);
          if ( *((_DWORD *)InteractiveControlManager::Instance(v20, v19) + 21) )
          {
            LOBYTE(v22) = 1;
            LODWORD(v39) = 235930369;
            LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v38, v22);
            InteractiveControlDevice::SendDeviceIOControl(this, 0xB0191u, &v39, 4u, 0LL, 0, 0LL);
            LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v38);
          }
          RIMLockExclusive(v13);
          if ( (*(_DWORD *)(*(_QWORD *)this + 240LL) & 0x2000) == 0 && *((_DWORD *)this + 18) == 1 )
          {
            v26 = (SimpleHapticsController *)*((_QWORD *)this + 48);
            if ( v26 )
            {
              v27 = SimpleHapticsController::SetDevicePropertyData(
                      v26,
                      v23,
                      v24,
                      v25,
                      ObjectType,
                      (unsigned int)AccessMode,
                      (char *)this + 72);
              if ( v27 < 0 && (unsigned int)dword_14039BBF8 > 2 )
              {
                v38 = v27;
                v39 = "Function failed.";
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                  (__int64)&dword_14039BBF8,
                  (__int64)&unk_14036B06D,
                  v28,
                  v29,
                  &v39);
              }
            }
          }
          InteractiveControlDevice::GetWaveformCount(this);
          SupportedWaveforms = InteractiveControlDevice::GetSupportedWaveforms(v30);
          if ( SupportedWaveforms && v32 )
          {
            for ( i = 0; i < v32; ++i )
            {
              if ( *((_WORD *)SupportedWaveforms + 4 * i + 1) == 4099 )
              {
                *((_WORD *)this + 197) = *((_WORD *)SupportedWaveforms + 4 * i);
                break;
              }
            }
            for ( j = 0; j < v32; ++j )
            {
              if ( *((_WORD *)SupportedWaveforms + 4 * j + 1) == 4100 )
              {
                *((_WORD *)this + 196) = *((_WORD *)SupportedWaveforms + 4 * j);
                break;
              }
            }
          }
          v7 = 0;
        }
      }
    }
  }
LABEL_22:
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( v7 < 0 )
    InteractiveControlDevice::Deinitialize(this);
  return (unsigned int)v7;
}
