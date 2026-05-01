/*
 * XREFs of ?RuntimeClassInitialize@CLaunchActivatedEventArgs@@QEAAJPEAUHSTRING__@@0@Z @ 0x18018E8D8
 * Callers:
 *     ??$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchActivatedEventArgs@@$$QEAPEAUHSTRING__@@1@Z @ 0x18018E584 (--$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18018EDB8 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall CLaunchActivatedEventArgs::RuntimeClassInitialize(
        CLaunchActivatedEventArgs *this,
        HSTRING a2,
        HSTRING a3)
{
  HRESULT v4; // ebx
  HSTRING v5; // rcx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING v9; // [rsp+30h] [rbp+8h] BYREF
  HSTRING v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  v9 = 0LL;
  v4 = WindowsDuplicateString(a2, &v9);
  if ( v4 < 0 )
  {
    v6 = 37LL;
    goto LABEL_4;
  }
  v5 = (HSTRING)*((_QWORD *)this + 37);
  *((_QWORD *)this + 37) = v9;
  WindowsDeleteString(v5);
  v4 = Windows::Internal::String::Initialize((CLaunchActivatedEventArgs *)((char *)this + 304), &v10);
  if ( v4 < 0 )
  {
    v6 = 41LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  return 0LL;
}
