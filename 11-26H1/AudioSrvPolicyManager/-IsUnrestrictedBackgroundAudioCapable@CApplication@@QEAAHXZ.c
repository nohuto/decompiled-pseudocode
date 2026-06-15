/*
 * XREFs of ?IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800125C0
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000EA10 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x180011710 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x1800133E0 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180014A28 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@_N@Z @ 0x18002BD34 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall CApplication::IsUnrestrictedBackgroundAudioCapable(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v3; // edi
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  int v6; // edi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  int v10; // edi
  _QWORD *v11; // rcx
  __int64 v12; // rdx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v3 = 0;
  v4 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v4 )
  {
    v5 = v4[2];
    v4 = (_QWORD *)*v4;
    if ( !*(_DWORD *)(v5 + 416) && *(_DWORD *)(v5 + 432) )
    {
      v3 = 1;
      break;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( !v3 )
    return 0LL;
  EnterCriticalSection(v2);
  v6 = 0;
  v7 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v7 )
  {
    v8 = v7[2];
    v7 = (_QWORD *)*v7;
    if ( !*(_DWORD *)(v8 + 416) && *(_DWORD *)(v8 + 436) )
    {
      v6 = 1;
      break;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( v6 )
    return 0LL;
  EnterCriticalSection(v2);
  v10 = 0;
  v11 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v11 )
  {
    v12 = v11[2];
    v11 = (_QWORD *)*v11;
    if ( !*(_DWORD *)(v12 + 416) && *(_DWORD *)(v12 + 500) )
    {
      v10 = 1;
      break;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v10 != 0;
}
