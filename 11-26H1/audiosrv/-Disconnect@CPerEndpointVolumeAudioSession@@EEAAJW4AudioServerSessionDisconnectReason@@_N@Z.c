/*
 * XREFs of ?Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800CDE50
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800494A0 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ @ 0x180084D58 (-DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ.c)
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::Disconnect(CPerEndpointVolumeAudioSession *a1, int a2, char a3)
{
  int v6; // eax
  unsigned int v7; // ebx

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_ee85f21a7da73824226bb42893b0f656_Traceguids, a1);
  }
  v6 = CAudioSession::Disconnect((__int64)a1, a2, a3);
  v7 = v6;
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("CPerEndpointVolumeAudioSession::Disconnect", 2119, v6);
  else
    CPerEndpointVolumeAudioSession::DestroyVolumeStrip(a1);
  return v7;
}
