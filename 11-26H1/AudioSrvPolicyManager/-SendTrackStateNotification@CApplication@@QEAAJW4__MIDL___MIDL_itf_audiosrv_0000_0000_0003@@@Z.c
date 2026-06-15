/*
 * XREFs of ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180028EB8
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000EA10 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x1800133E0 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     ?SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180039FA4 (-SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 */

__int64 __fastcall CApplication::SendTrackStateNotification(__int64 a1)
{
  unsigned int v2; // esi
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 v4; // r8
  _QWORD *v5; // rdx
  __int64 v7; // rcx

  v2 = -2147023728;
  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v5 = *(_QWORD **)(a1 + 72);
  while ( v5 )
  {
    v7 = v5[2];
    v5 = (_QWORD *)*v5;
    if ( !*(_DWORD *)(v7 + 416) && (*(_DWORD *)(v7 + 448) & 0x1000) != 0 )
    {
      v2 = CProcess::SendPBMNotification(v7, 12LL, v4);
      break;
    }
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v2;
}
