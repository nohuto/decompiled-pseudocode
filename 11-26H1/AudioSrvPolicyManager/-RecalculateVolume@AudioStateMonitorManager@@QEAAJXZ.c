/*
 * XREFs of ?RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ @ 0x18001210C
 * Callers:
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x18000FC20 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18000FDB0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180010540 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180012380 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180012830 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 * Callees:
 *     ??0CStreamPolicyVolumeClient@@QEAA@PEAUIAudioProcess@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEBG@Z @ 0x180012D54 (--0CStreamPolicyVolumeClient@@QEAA@PEAUIAudioProcess@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_.c)
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x180012D90 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ?SendNotification@AudioStateMonitorManager@@AEAAJ_K@Z @ 0x180027090 (-SendNotification@AudioStateMonitorManager@@AEAAJ_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioStateMonitorManager::RecalculateVolume(AudioStateMonitorManager *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  _QWORD *v3; // rbx
  unsigned __int64 v4; // r15
  __int64 v5; // r14
  unsigned int *v6; // rax
  _DWORD *v7; // rcx
  unsigned int v8; // r9d
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v9; // r8d
  __int64 v10; // r8
  int v11; // edi
  _BYTE v13[48]; // [rsp+30h] [rbp-68h] BYREF
  float v14; // [rsp+A0h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+A8h] [rbp+10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v15 = v2;
  v3 = (_QWORD *)*((_QWORD *)this + 9);
  while ( 1 )
  {
    v3 = (_QWORD *)*v3;
    if ( v3 == *((_QWORD **)this + 9) )
      break;
    v4 = v3[2];
    v5 = v3[3];
    v6 = *(unsigned int **)(v5 + 8);
    v7 = *(_DWORD **)v5;
    v8 = 24;
    if ( v6 )
      v8 = *v6;
    if ( v7 )
      v9 = *v7 == 1;
    else
      v9 = eAll;
    CStreamPolicyVolumeClient::CStreamPolicyVolumeClient(
      (CStreamPolicyVolumeClient *)v13,
      *((struct IAudioProcess **)this + 17),
      v9,
      v8,
      *(const unsigned __int16 **)(v5 + 16));
    v14 = 1.0;
    GetPolicyVolumeForAudioStream(*((_QWORD *)this + 16), v13, v10, &v14);
    if ( v14 < 1.0 )
      v11 = v14 > 0.0;
    else
      v11 = 2;
    if ( **(_DWORD **)(v5 + 24) != v11 && (int)AudioStateMonitorManager::SendNotification(this, v4) >= 0 )
      **(_DWORD **)(v5 + 24) = v11;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
