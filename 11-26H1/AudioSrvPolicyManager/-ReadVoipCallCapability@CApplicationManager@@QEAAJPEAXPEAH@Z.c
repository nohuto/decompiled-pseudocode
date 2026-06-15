/*
 * XREFs of ?ReadVoipCallCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x18003CAB0
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180009150 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18003D680 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

__int64 __fastcall CApplicationManager::ReadVoipCallCapability(CApplicationManager *this, void *a2, int *a3)
{
  int v3; // ebx
  unsigned int v5; // eax
  __int64 result; // rax
  unsigned int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CApplicationManager *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = this;
  v3 = 0;
  *a3 = 0;
  LOBYTE(v9) = 0;
  v5 = CapabilityCheck(a2, L"voipCall", &v9);
  if ( v5 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)0x40F,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)v5,
      v7);
  LOBYTE(v3) = (_BYTE)v9 != 0;
  result = 0LL;
  *a3 = v3;
  return result;
}
