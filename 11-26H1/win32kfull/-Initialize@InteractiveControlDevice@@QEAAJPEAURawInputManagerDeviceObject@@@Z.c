/*
 * XREFs of ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402FCFA4
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402F19B0 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140003F20 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x140138DEC (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140138E4C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14013DB10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ??_GSimpleHapticsController@@QEAAPEAXI@Z @ 0x1402FC830 (--_GSimpleHapticsController@@QEAAPEAXI@Z.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1402FC900 (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1402FCB84 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?GetSupportedWaveforms@InteractiveControlDevice@@QEAAPEAU_WAVEFORM_INFO@@XZ @ 0x1402FCF6C (-GetSupportedWaveforms@InteractiveControlDevice@@QEAAPEAU_WAVEFORM_INFO@@XZ.c)
 *     ?GetWaveformCount@InteractiveControlDevice@@QEAAIXZ @ 0x1402FCF88 (-GetWaveformCount@InteractiveControlDevice@@QEAAIXZ.c)
 *     ?SendDeviceIOControl@InteractiveControlDevice@@QEAAJKPEAXK0KPEAK@Z @ 0x1402FD5B8 (-SendDeviceIOControl@InteractiveControlDevice@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?DeInitialize@SimpleHapticsController@@QEAAJXZ @ 0x1402FFEA0 (-DeInitialize@SimpleHapticsController@@QEAAJXZ.c)
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x140300258 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?SetDevicePropertyData@SimpleHapticsController@@QEAAJPEBU_DEVPROPKEY@@KKKKPEAX@Z @ 0x1403013D8 (-SetDevicePropertyData@SimpleHapticsController@@QEAAJPEBU_DEVPROPKEY@@KKKKPEAX@Z.c)
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveControlDevice@@@Z @ 0x140301940 (-BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveC.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
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
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r14
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  SimpleHapticsController *v19; // rcx
  SimpleHapticsController *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v24; // rdx
  const struct _DEVPROPKEY *v25; // rdx
  unsigned int v26; // r8d
  unsigned int v27; // r9d
  SimpleHapticsController *v28; // rcx
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // r9
  InteractiveControlDevice *v32; // rcx
  struct _WAVEFORM_INFO *SupportedWaveforms; // rcx
  unsigned int v34; // r8d
  unsigned int i; // edx
  unsigned int j; // eax
  unsigned int ObjectType; // [rsp+20h] [rbp-30h]
  unsigned int AccessMode; // [rsp+28h] [rbp-28h]
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  int v40; // [rsp+88h] [rbp+38h] BYREF
  const char *v41; // [rsp+90h] [rbp+40h] BYREF
  size_t Size; // [rsp+98h] [rbp+48h] BYREF

  v2 = *((_QWORD *)Object + 49);
  Handle = 0LL;
  LODWORD(Size) = 0;
  v7 = RawInputManagerDeviceObjectReference(Object);
  if ( v7 >= 0 )
  {
    *(_QWORD *)this = Object;
    UserSessionState = W32GetUserSessionState(v6, v5);
    v9 = *(_DWORD *)(UserSessionState + 17164);
    *(_DWORD *)(UserSessionState + 17164) = v9 + 1;
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
          v12 = Win32AllocPool(104LL, 1667787091LL, v11);
          v14 = v12;
          if ( v12 )
          {
            *(_QWORD *)(v12 + 16) = 0LL;
            *(_QWORD *)(v12 + 24) = 0LL;
            *(_QWORD *)(v12 + 32) = 0LL;
            *(_QWORD *)(v12 + 56) = 0LL;
            *(_QWORD *)(v12 + 64) = 0LL;
            *(_WORD *)(v12 + 72) = 0;
            *(_DWORD *)(v12 + 76) = 0;
            *(_QWORD *)(v12 + 80) = 0LL;
            *(_DWORD *)(v12 + 88) = 0;
            *(_BYTE *)(v12 + 92) = 0;
            *(_DWORD *)(v12 + 96) = W32GetCurrentWin32kSessionId(v13);
            *(_QWORD *)(v14 + 8) = 0LL;
          }
          else
          {
            v14 = 0LL;
          }
          *((_QWORD *)this + 48) = v14;
          if ( !v14 )
            goto LABEL_5;
          v15 = v2 + 104;
          RIMUnlockExclusive(v15);
          v16 = SimpleHapticsController::Initialize(
                  *((SimpleHapticsController **)this + 48),
                  (struct _UNICODE_STRING *)(Object + 264));
          if ( v16 < 0 )
          {
            if ( (unsigned int)dword_1403AAA68 > 4 )
            {
              v40 = v16;
              v41 = "SimpleHapticsController->Initialize failed with.";
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                (__int64)&dword_1403AAA68,
                (__int64)&unk_1403795A4,
                v17,
                v18,
                (void **)&v41,
                (__int64)&v40);
            }
            v19 = (SimpleHapticsController *)*((_QWORD *)this + 48);
            if ( v19 )
            {
              SimpleHapticsController::DeInitialize(v19);
              v20 = (SimpleHapticsController *)*((_QWORD *)this + 48);
              if ( v20 )
                SimpleHapticsController::`scalar deleting destructor'(v20);
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
            RIMLockExclusive(v15);
            goto LABEL_22;
          }
          if ( *((_QWORD *)this + 30) )
            InteractiveControlDevice::CreateDeadzone(this);
          if ( *((_DWORD *)InteractiveControlManager::Instance(v22, v21) + 21) )
          {
            LOBYTE(v24) = 1;
            LODWORD(v41) = 235930369;
            LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v40, v24);
            InteractiveControlDevice::SendDeviceIOControl(this, 0xB0191u, &v41, 4u, 0LL, 0, 0LL);
            LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v40);
          }
          RIMLockExclusive(v15);
          if ( (*(_DWORD *)(*(_QWORD *)this + 240LL) & 0x2000) == 0 && *((_DWORD *)this + 18) == 1 )
          {
            v28 = (SimpleHapticsController *)*((_QWORD *)this + 48);
            if ( v28 )
            {
              v29 = SimpleHapticsController::SetDevicePropertyData(
                      v28,
                      v25,
                      v26,
                      v27,
                      ObjectType,
                      AccessMode,
                      (char *)this + 72);
              if ( v29 < 0 && (unsigned int)dword_1403AAA68 > 2 )
              {
                v40 = v29;
                v41 = "Function failed.";
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                  (__int64)&dword_1403AAA68,
                  (__int64)&unk_140379507,
                  v30,
                  v31,
                  (void **)&v41,
                  (__int64)&v40);
              }
            }
          }
          InteractiveControlDevice::GetWaveformCount(this);
          SupportedWaveforms = InteractiveControlDevice::GetSupportedWaveforms(v32);
          if ( SupportedWaveforms && v34 )
          {
            for ( i = 0; i < v34; ++i )
            {
              if ( *((_WORD *)SupportedWaveforms + 4 * i + 1) == 4099 )
              {
                *((_WORD *)this + 197) = *((_WORD *)SupportedWaveforms + 4 * i);
                break;
              }
            }
            for ( j = 0; j < v34; ++j )
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
