/*
 * XREFs of ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18000F768
 * Callers:
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180019884 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x18001A5FC (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ?MuteAllAppsInSession@CApplicationManager@@QEAAXK@Z @ 0x180028B24 (-MuteAllAppsInSession@CApplicationManager@@QEAAXK@Z.c)
 *     ?SilenceAndRevokePLMExemption@CProcess@@UEAAJXZ @ 0x18003A1D0 (-SilenceAndRevokePLMExemption@CProcess@@UEAAJXZ.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18003C010 (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 * Callees:
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x18000FC20 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?UpdateVolume@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAH1@Z @ 0x180010C60 (-UpdateVolume@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAH1@Z.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180011340 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x180011710 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 *     ?SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180012250 (-SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180012380 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CApplicationManager::SilenceAndRevokePLMExemption(CApplicationManager *this, struct CApplication *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  unsigned int v5; // r13d
  int v6; // edi
  BOOL v7; // esi
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  int v9; // r15d
  int v10; // esi
  bool v11; // zf
  struct _RTL_CRITICAL_SECTION *v12; // rdi
  unsigned int v13; // r12d
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  int v16; // esi
  unsigned int v17; // esi
  int v18; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v20; // [rsp+38h] [rbp-38h] BYREF
  int v21; // [rsp+40h] [rbp-30h] BYREF
  int v22; // [rsp+44h] [rbp-2Ch] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-28h]
  char *v24; // [rsp+50h] [rbp-20h]
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+58h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+60h] [rbp-10h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v25 = v4;
  *((_DWORD *)a2 + 155) = 1;
  *((_QWORD *)a2 + 78) = 1LL;
  *((_QWORD *)a2 + 79) = 1LL;
  *((_DWORD *)a2 + 160) = 1;
  *((_DWORD *)a2 + 161) = 1;
  EnterCriticalSection(v4);
  v26 = v4;
  v19 = 0;
  LODWORD(v20) = 0;
  v18 = 0;
  CApplicationManager::GetApplicationPBMStatus(
    this,
    a2,
    (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v20,
    (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v19,
    (enum _PLM_EXEMPTION *)&v18);
  v5 = 209;
  v21 = 0;
  v22 = 0;
  v6 = v20;
  do
  {
    v7 = 0;
    if ( (v5 & 7) == 1 )
    {
      CApplication::UpdateVolume(a2, v19, &v21, &v22);
      if ( !v21 )
        goto LABEL_17;
      if ( v22 )
        CApplicationManager::UpdateVolumeForAllAppsInSession(g_ApplicationManager, *((unsigned int *)a2 + 53), 3LL);
      CApplication::RecalculateVolume(a2, 3LL);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 224));
      v24 = (char *)a2 + 224;
      *((_DWORD *)a2 + 68) = 1;
      v20 = -4400000LL;
      (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64 *, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        *((_QWORD *)a2 + 33),
        &v20,
        0LL,
        0);
      if ( a2 != (struct CApplication *)-224LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 224));
      v9 = v18;
      goto LABEL_18;
    }
    if ( (v5 & 7) == 2 )
    {
      v8 = (struct _RTL_CRITICAL_SECTION *)((char *)a2 + 280);
      EnterCriticalSection((LPCRITICAL_SECTION)a2 + 7);
      *((_DWORD *)a2 + 81) = v6;
      if ( v6 < *((_DWORD *)a2 + 82) )
        v7 = *((_DWORD *)a2 + 68) != 0;
      if ( a2 != (struct CApplication *)-280LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)a2 + 7);
      if ( !v7 )
      {
        while ( 1 )
        {
          EnterCriticalSection((LPCRITICAL_SECTION)a2 + 7);
          if ( *((_DWORD *)a2 + 80) )
          {
            v16 = *((_DWORD *)a2 + 80);
            if ( v16 != GetCurrentThreadId() )
              break;
          }
          if ( *((_DWORD *)a2 + 81) == *((_DWORD *)a2 + 82) && !*((_DWORD *)a2 + 171) )
          {
            *((_DWORD *)a2 + 80) = 0;
            break;
          }
          *((_DWORD *)a2 + 80) = GetCurrentThreadId();
          v17 = *((_DWORD *)a2 + 81);
          *((_DWORD *)a2 + 82) = v17;
          *((_DWORD *)a2 + 171) = 0;
          if ( a2 != (struct CApplication *)-280LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)a2 + 7);
          CApplication::SendSoundLevelNotification(a2, v17);
        }
LABEL_14:
        if ( v8 )
          LeaveCriticalSection(v8);
      }
LABEL_17:
      v9 = v18;
      goto LABEL_18;
    }
    if ( (v5 & 7) != 3 )
    {
      if ( (v5 & 7) == 4 )
        Sleep(0xAu);
      goto LABEL_17;
    }
    v8 = (struct _RTL_CRITICAL_SECTION *)((char *)a2 + 336);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 336));
    v9 = v18;
    *((_DWORD *)a2 + 95) = v18;
    if ( v9 == 1 )
      v7 = *((_DWORD *)a2 + 68) != 0;
    if ( a2 != (struct CApplication *)-336LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 336));
    if ( !v7 )
    {
      while ( 1 )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 336));
        if ( *((_DWORD *)a2 + 94) )
        {
          v10 = *((_DWORD *)a2 + 94);
          if ( v10 != GetCurrentThreadId() )
            goto LABEL_14;
        }
        if ( !*((_DWORD *)a2 + 95) )
        {
          *((_DWORD *)a2 + 94) = 0;
          goto LABEL_14;
        }
        *((_DWORD *)a2 + 94) = GetCurrentThreadId();
        v13 = *((_DWORD *)a2 + 95);
        *((_DWORD *)a2 + 95) = 0;
        if ( a2 != (struct CApplication *)-336LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 336));
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
        v24 = (char *)a2 + 32;
        v14 = (_QWORD *)*((_QWORD *)a2 + 9);
        while ( v14 )
        {
          v15 = v14[2];
          v14 = (_QWORD *)*v14;
          CProcess::NotifyPLM(v15, v13);
        }
        if ( a2 != (struct CApplication *)-32LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
      }
    }
LABEL_18:
    v5 >>= 3;
  }
  while ( v5 );
  v11 = v6 == 0;
  v12 = lpCriticalSection;
  if ( v11 && !v19 )
  {
    if ( v9 == 1 )
    {
      *((_DWORD *)a2 + 155) = 1;
      *((_DWORD *)a2 + 160) = 1;
      *((_DWORD *)a2 + 161) = 1;
      goto LABEL_23;
    }
    if ( *((_DWORD *)a2 + 155) != 6 )
    {
      *((_DWORD *)a2 + 155) = 6;
LABEL_23:
      *((_QWORD *)a2 + 79) = 1LL;
      *((_QWORD *)a2 + 78) = 1LL;
    }
  }
  if ( v12 )
  {
    LeaveCriticalSection(v12);
    LeaveCriticalSection(v12);
  }
}
