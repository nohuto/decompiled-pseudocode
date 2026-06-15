/*
 * XREFs of ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x180024E1C
 * Callers:
 *     PbmGetSoundLevel @ 0x180024C00 (PbmGetSoundLevel.c)
 *     ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x18003A6D0 (-UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?TsSessionIdIsMuted@@YA_NK@Z @ 0x180018008 (-TsSessionIdIsMuted@@YA_NK@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x180019EE0 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?GetSoundLevel@AudioStateMonitorManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x180025FF4 (-GetSoundLevel@AudioStateMonitorManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@_N@Z @ 0x18002BD34 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 *     ??$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@PEBU_tlgProvider_t@@@Details@WRL@Microsoft@@YAJPEAPEAVAudioStateMonitorManager@@AEAPEAVCWindowsPolicyManager@@$$QEAPEAVCProcess@@$$QEAPEBU_tlgProvider_t@@@Z @ 0x180036C0C (--$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@P.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::GetSoundLevel(
        struct CApplication *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  CApplicationManager *v8; // rsi
  unsigned int v9; // ebx
  struct _RTL_CRITICAL_SECTION *v10; // rbp
  __int64 v11; // r8
  struct CApplication *v12; // rdx
  unsigned int SoundLevel; // eax
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct CApplication *v20; // [rsp+80h] [rbp+8h] BYREF
  __int64 v21; // [rsp+90h] [rbp+18h] BYREF

  v20 = a1;
  v8 = g_ApplicationManager;
  v9 = 2;
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( a3 )
  {
    v14 = (_QWORD *)(a2 + 704);
    if ( !*(_QWORD *)(a2 + 704) )
    {
      v20 = AudioSrvPolicyManagerTelemetryProvider::Provider();
      v21 = a2;
      v16 = *v14;
      *v14 = 0LL;
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      v17 = Microsoft::WRL::Details::MakeAndInitialize<AudioStateMonitorManager,AudioStateMonitorManager,CWindowsPolicyManager * &,CProcess *,_tlgProvider_t const *>(
              a2 + 704,
              v15,
              &v21,
              &v20);
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x10D7,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
          (const char *)(unsigned int)v17);
        goto LABEL_14;
      }
    }
    SoundLevel = AudioStateMonitorManager::GetSoundLevel(*v14, a3, a4, a5);
  }
  else
  {
    v12 = *(struct CApplication **)(a2 + 224);
    v20 = v12;
    if ( !v12 )
    {
      if ( (int)CApplicationManager::GetApplication(
                  v8,
                  *(const unsigned __int16 **)(a2 + 176),
                  *(_QWORD *)(a2 + 208),
                  *(_DWORD *)(a2 + 164),
                  &v20,
                  0,
                  0LL) < 0 )
      {
        v9 = 2 * ((unsigned __int8)TsSessionIdIsMuted(*(_DWORD *)(a2 + 164)) ^ 1);
        goto LABEL_14;
      }
      v12 = v20;
    }
    LOBYTE(v11) = 1;
    SoundLevel = CApplicationManager::GetSoundLevel(v8, v12, v11);
  }
  v9 = SoundLevel;
LABEL_14:
  if ( v10 )
    LeaveCriticalSection(v10);
  return v9;
}
