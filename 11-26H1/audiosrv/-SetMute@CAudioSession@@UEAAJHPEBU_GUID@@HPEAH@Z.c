/*
 * XREFs of ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z @ 0x180085190
 * Callers:
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x180037310 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x1800877E0 (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z.c)
 *     ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@HPEAH@Z @ 0x1800CF630 (-SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@HPEAH@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@33@Z @ 0x180002E0C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?ResetPolicyGainStages@CAudioSession@@AEAAXXZ @ 0x1800407D0 (-ResetPolicyGainStages@CAudioSession@@AEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     WPP_SF_Sd @ 0x1800CF92C (WPP_SF_Sd.c)
 *     WPP_SF_Sdd @ 0x1800CF9AC (WPP_SF_Sdd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioSession::SetMute(CAudioSession *this, int a2, const struct _GUID *a3, int a4, int *a5)
{
  int v9; // ebp
  int v10; // ebx
  __int64 v11; // rax
  _DWORD *v12; // rcx
  int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // [rsp+20h] [rbp-68h]
  int v18; // [rsp+40h] [rbp-48h] BYREF
  int v19; // [rsp+44h] [rbp-44h] BYREF
  const wchar_t *v20; // [rsp+48h] [rbp-40h] BYREF
  int v21; // [rsp+90h] [rbp+8h] BYREF
  int v22; // [rsp+98h] [rbp+10h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      19,
      (unsigned int)&WPP_ee85f21a7da73824226bb42893b0f656_Traceguids,
      *((_QWORD *)this + 82),
      a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v9 = *((_DWORD *)this + 195);
  v10 = 0;
  if ( v9 != a2 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sdd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        20,
        (unsigned int)&WPP_ee85f21a7da73824226bb42893b0f656_Traceguids,
        *((_QWORD *)this + 82),
        v9,
        a2);
    }
    CAudioSession::ResetPolicyGainStages((struct _RTL_CRITICAL_SECTION *)this);
    v11 = *(_QWORD *)this;
    *((_DWORD *)this + 195) = a2;
    v22 = 0;
    if ( (*(int (__fastcall **)(CAudioSession *, int *))(v11 + 96))(this, &v22) >= 0 )
    {
      v12 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      if ( *v12 > 4u && tlgKeywordOn((__int64)v12, 0x400000000002LL) )
      {
        v21 = v22;
        v18 = *((_DWORD *)this + 162);
        v20 = (const wchar_t *)*((_QWORD *)this + 82);
        v19 = a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v13,
          (int)&unk_1801A4585,
          v14,
          v15,
          (__int64)&v19,
          &v20,
          (__int64)&v18,
          (__int64)&v21);
      }
    }
  }
  if ( this != (CAudioSession *)-736LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  if ( v9 != a2 && !a4 )
  {
    LOBYTE(v17) = 0;
    (*(void (__fastcall **)(char *, _QWORD, const struct _GUID *, __int64, int, _QWORD))(*((_QWORD *)this + 1) + 152LL))(
      (char *)this + 8,
      0LL,
      a3,
      0xFFFFFFFFLL,
      v17,
      0LL);
  }
  if ( a5 )
  {
    LOBYTE(v10) = v9 == a2;
    *a5 = v10;
  }
  return 0LL;
}
