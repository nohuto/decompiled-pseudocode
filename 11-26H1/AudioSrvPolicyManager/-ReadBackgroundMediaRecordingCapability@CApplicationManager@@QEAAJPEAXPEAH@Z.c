/*
 * XREFs of ?ReadBackgroundMediaRecordingCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x18002D678
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180009150 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18003D680 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

__int64 __fastcall CApplicationManager::ReadBackgroundMediaRecordingCapability(
        CApplicationManager *this,
        void *a2,
        int *a3)
{
  unsigned int v4; // eax
  unsigned int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CApplicationManager *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = this;
  *a3 = 0;
  LOBYTE(v8) = 0;
  v4 = CapabilityCheck(a2, L"backgroundMediaRecording", &v8);
  if ( v4 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)0x46E,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)v4,
      v6);
  if ( (_BYTE)v8 )
    *a3 = 1;
  return 0LL;
}
