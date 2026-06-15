/*
 * XREFs of ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x180008A20
 * Callers:
 *     ?IsSpatializerAllowed@CProcess@@UEAA_NXZ @ 0x180007D80 (-IsSpatializerAllowed@CProcess@@UEAA_NXZ.c)
 * Callees:
 *     ?InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z @ 0x180001E0C (-InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z.c)
 *     ?TsSessionIdGetAccessibilityAudioMonoMixState@@YA_NK@Z @ 0x180008B0C (-TsSessionIdGetAccessibilityAudioMonoMixState@@YA_NK@Z.c)
 *     ?TsSessionIdAreAccessibilityAudioSettingsInitialized@@YA_NK@Z @ 0x180008C20 (-TsSessionIdAreAccessibilityAudioSettingsInitialized@@YA_NK@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180009150 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B770 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::GetAccessibilityAudioMonoMixState(CWindowsPolicyManager *this)
{
  unsigned int AccessibilityAudioMonoMixState; // ebp
  struct CProcess *v2; // rbx
  int Process; // eax
  int v4; // esi
  int v5; // edi
  unsigned int v6; // eax
  unsigned int v7; // edi
  CWindowsPolicyManager *v8; // rcx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CProcess *v12; // [rsp+30h] [rbp+8h] BYREF

  AccessibilityAudioMonoMixState = *((_DWORD *)this + 12);
  v2 = 0LL;
  v12 = 0LL;
  Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, 0LL, &v12);
  v4 = Process;
  if ( Process < 0 )
  {
    v5 = -2147023171;
    if ( Process != -2147023171 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x167,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
        (const char *)(unsigned int)Process,
        v10);
      v5 = v4;
    }
  }
  else
  {
    v2 = v12;
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v12 + 8LL))(v12);
    v5 = 0;
  }
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v12);
  if ( v5 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(struct CProcess *))(*(_QWORD *)v2 + 48LL))(v2);
    v7 = v6;
    if ( v6 )
    {
      if ( !TsSessionIdAreAccessibilityAudioSettingsInitialized(v6) )
        CWindowsPolicyManager::InitAccessibilityAudioSettings(v8, v7);
      AccessibilityAudioMonoMixState = TsSessionIdGetAccessibilityAudioMonoMixState(v7);
    }
  }
  if ( v2 )
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v2 + 16LL))(v2);
  return AccessibilityAudioMonoMixState;
}
