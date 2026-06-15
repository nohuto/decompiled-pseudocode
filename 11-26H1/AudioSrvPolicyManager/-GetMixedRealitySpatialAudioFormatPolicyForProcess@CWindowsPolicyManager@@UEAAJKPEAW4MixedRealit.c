/*
 * XREFs of ?GetMixedRealitySpatialAudioFormatPolicyForProcess@CWindowsPolicyManager@@UEAAJKPEAW4MixedRealitySpatialAudioFormatPolicy@Audio@Media@Windows@@@Z @ 0x180046310
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B770 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryFindProcessFromProcessId@CApplicationManager@@QEAAJKPEAPEAVCProcess@@@Z @ 0x18001F0A0 (-TryFindProcessFromProcessId@CApplicationManager@@QEAAJKPEAPEAVCProcess@@@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::GetMixedRealitySpatialAudioFormatPolicyForProcess(
        CWindowsPolicyManager *this,
        int a2,
        enum Windows::Media::Audio::MixedRealitySpatialAudioFormatPolicy *a3)
{
  RTL_SRWLOCK *v3; // rcx
  int ProcessFromProcessId; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CProcess *v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = (RTL_SRWLOCK *)g_ApplicationManager;
  *(_DWORD *)a3 = 0;
  v9 = 0LL;
  ProcessFromProcessId = CApplicationManager::TryFindProcessFromProcessId(v3, a2, &v9);
  v6 = ProcessFromProcessId;
  if ( ProcessFromProcessId >= 0 )
  {
    if ( v9 )
      *(_DWORD *)a3 = *((_DWORD *)v9 + 188);
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x183,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)ProcessFromProcessId);
  }
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v9);
  return v6;
}
