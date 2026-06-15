/*
 * XREFs of ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x18001A5FC
 * Callers:
 *     ?RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x1800294F0 (-RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18000F768 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?TsSessionIdIsMuted@@YA_NK@Z @ 0x180018008 (-TsSessionIdIsMuted@@YA_NK@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x180019EE0 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18001A490 (-AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18001B304 (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18001BF6C (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180020B2C (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x18003CDC4 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::RegisterSession(
        CApplicationManager *this,
        struct CProcess *a2,
        __int64 (***a3)(void))
{
  CApplicationManager *v5; // rbp
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  int Application; // edi
  struct CApplication *v9; // r14
  CApplicationManager *v10; // [rsp+80h] [rbp+8h] BYREF
  struct CApplication *v11; // [rsp+88h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+98h] [rbp+20h]

  v10 = this;
  v5 = g_ApplicationManager;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v12 = v6;
  Application = 0;
  v11 = 0LL;
  LODWORD(v10) = 0;
  EnterCriticalSection(v6);
  if ( !*((_QWORD *)a2 + 28) )
  {
    Application = CApplicationManager::GetApplication(
                    v5,
                    *((const unsigned __int16 **)a2 + 22),
                    *((_QWORD *)a2 + 26),
                    *((_DWORD *)a2 + 41),
                    &v11,
                    1,
                    (int *)&v10);
    if ( Application < 0 || (v9 = v11, Application = CApplication::LinkProcess(v11, a2), Application < 0) )
    {
      if ( (_DWORD)v10 )
        CApplicationManager::RemoveApplication(v5, &v11);
      if ( Application < 0 )
        AudPolicyLogError("CApplicationManager::Register", 687, Application);
    }
    else if ( TsSessionIdIsMuted(*((_DWORD *)a2 + 41)) && !*((_DWORD *)v9 + 164) )
    {
      CApplicationManager::SilenceAndRevokePLMExemption(v5, v9);
    }
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  if ( Application < 0 )
    goto LABEL_5;
  Application = CProcess::AddSession(a2, a3);
  if ( Application < 0 )
  {
    CApplicationManager::Unregister(v5, a2);
LABEL_5:
    AudPolicyLogError("CApplicationManager::RegisterSession", 440, Application);
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return (unsigned int)Application;
}
