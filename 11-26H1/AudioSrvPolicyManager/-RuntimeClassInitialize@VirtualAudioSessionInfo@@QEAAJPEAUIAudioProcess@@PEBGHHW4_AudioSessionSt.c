/*
 * XREFs of ?RuntimeClassInitialize@VirtualAudioSessionInfo@@QEAAJPEAUIAudioProcess@@PEBGHHW4_AudioSessionState@@@Z @ 0x1800454C4
 * Callers:
 *     ??$MakeAndInitialize@VVirtualAudioSessionInfo@@V1@AEAPEAUIAudioProcess@@AEAPEBG_N_NW4_AudioSessionState@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualAudioSessionInfo@@AEAPEAUIAudioProcess@@AEAPEBG$$QEA_N3$$QEAW4_AudioSessionState@@@Z @ 0x180045924 (--$MakeAndInitialize@VVirtualAudioSessionInfo@@V1@AEAPEAUIAudioProcess@@AEAPEBG_N_NW4_AudioSessi.c)
 * Callees:
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800079B4 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualAudioSessionInfo::RuntimeClassInitialize(
        VirtualAudioSessionInfo *this,
        struct IAudioProcess *a2,
        unsigned __int16 *a3,
        int a4,
        int a5,
        enum _AudioSessionState a6)
{
  __int64 v9; // rdi
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v9 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  *((_DWORD *)this + 8) = a4;
  *((_DWORD *)this + 9) = a5;
  *((_DWORD *)this + 10) = a6;
  v10 = _AllocString<CTCoAllocPolicy>((__int64)this, (__int64)a2, a3, (_QWORD *)this + 3);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\virtualaudioinfo.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
