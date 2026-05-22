/*
 * XREFs of ??$make_unique@VSpeechRuntimeListener@@AEAPEAVMPCRawInputProvider@@AEAK$0A@@std@@YA?AV?$unique_ptr@VSpeechRuntimeListener@@U?$default_delete@VSpeechRuntimeListener@@@std@@@0@AEAPEAVMPCRawInputProvider@@AEAK@Z @ 0x1800CFE18
 * Callers:
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z @ 0x1800CFF8C (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x1800D1D1C (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall std::make_unique<SpeechRuntimeListener,MPCRawInputProvider * &,unsigned long &,0>(
        _QWORD *a1,
        __int64 *a2,
        int *a3)
{
  _QWORD *v6; // rsi
  int v7; // r8d
  __int64 v8; // rdx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = operator new(0x58uLL);
  v7 = *a3;
  v8 = *a2;
  *v6 = 0LL;
  v6[1] = 0LL;
  v6[2] = 0LL;
  v6[9] = v8;
  *((_DWORD *)v6 + 20) = v7;
  v9 = SpeechRuntimeListener::InitializeCoreMessaging((SpeechRuntimeListener *)v6);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x19,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v9,
      v11);
  *a1 = v6;
  return a1;
}
