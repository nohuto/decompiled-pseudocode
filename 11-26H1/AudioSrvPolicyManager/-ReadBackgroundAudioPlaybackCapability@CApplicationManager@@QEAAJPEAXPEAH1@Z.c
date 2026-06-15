/*
 * XREFs of ?ReadBackgroundAudioPlaybackCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x18003C88C
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180009150 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18003D680 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

__int64 __fastcall CApplicationManager::ReadBackgroundAudioPlaybackCapability(
        CApplicationManager *this,
        void *a2,
        int *a3,
        int *a4)
{
  unsigned int v6; // eax
  unsigned int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CApplicationManager *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = this;
  *a3 = 0;
  LOBYTE(v10) = 0;
  *a4 = 0;
  v6 = CapabilityCheck(a2, L"backgroundMediaPlayback", &v10);
  if ( v6 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)0x428,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)v6,
      v8);
  if ( (_BYTE)v10 )
  {
    *a3 = 1;
    *a4 = 0;
  }
  return 0LL;
}
