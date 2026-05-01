/*
 * XREFs of TerminateAppByName @ 0x180473658
 * Callers:
 *     ?TerminateStaleInputApp@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18024D2C4 (-TerminateStaleInputApp@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x18047373C (-TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VStubImmersiveApplication@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVStubImmersiveApplication@@AEAPEBG@Z @ 0x180464F48 (--$MakeAndInitialize@VStubImmersiveApplication@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVStub.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TerminateAppByName(__int64 a1, char *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v8; // [rsp+50h] [rbp+20h] BYREF
  char *v9; // [rsp+58h] [rbp+28h] BYREF
  int v10; // [rsp+60h] [rbp+30h] BYREF
  void **v11; // [rsp+68h] [rbp+38h] BYREF

  v9 = a2;
  v8 = 0;
  if ( (*(int (__fastcall **)(__int64, char *, int *))(*(_QWORD *)a1 + 56LL))(a1, a2, &v8) >= 0
    && (unsigned int)(v8 - 1) <= 4 )
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
    v3 = Microsoft::WRL::Details::MakeAndInitialize<StubImmersiveApplication,StubImmersiveApplication,unsigned short const * &>(
           &v11,
           &v9);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 3849LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
      return v4;
    }
    v10 = 0;
    v3 = (*(__int64 (__fastcall **)(__int64, void **, __int64, int *))(*(_QWORD *)a1 + 96LL))(a1, v11, 2LL, &v10);
    v4 = v3;
    if ( v3 < 0 && v3 != -805306193 && v3 != -2147319765 )
    {
      v5 = 3861LL;
      goto LABEL_9;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
  }
  return 0LL;
}
