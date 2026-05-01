/*
 * XREFs of ?BeginTelemetryActivity@CJumpViewExperienceManager@@AEAA?AVShowJumpViewActivity@JumpViewProvider@@PEAUIJumpViewParams@JumpView@Shell@Internal@Windows@@@Z @ 0x1802B6C70
 * Callers:
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180387130 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800B9FAC (--0-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@JumpView@Shell@Internal@Windows@@W4JumpViewInvocationMethod@4567@@Z @ 0x18020F1B4 (-StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
struct wil::details::IFailureCallback *__fastcall CJumpViewExperienceManager::BeginTelemetryActivity(
        __int64 a1,
        struct wil::details::IFailureCallback *a2,
        __int64 a3)
{
  __int64 (__fastcall *v5)(__int64, HSTRING *); // rbx
  int v6; // eax
  __int64 (__fastcall *v7)(__int64, HSTRING *); // rbx
  int v8; // eax
  int v9; // eax
  const WCHAR *StringRawBuffer; // rdi
  const WCHAR *v11; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  HSTRING string; // [rsp+70h] [rbp+30h] BYREF
  struct wil::details::IFailureCallback *v15; // [rsp+78h] [rbp+38h] BYREF
  HSTRING v16; // [rsp+80h] [rbp+40h] BYREF

  v15 = a2;
  v16 = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a3 + 64LL);
  WindowsDeleteString(0LL);
  v16 = 0LL;
  v6 = v5(a3, &v16);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x45C,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  string = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a3 + 96LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v8 = v7(a3, &string);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x45F,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
  LODWORD(v15) = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, struct wil::details::IFailureCallback **))(*(_QWORD *)a3 + 288LL))(a3, &v15);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x462,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v11 = WindowsGetStringRawBuffer(v16, 0LL);
  wil::ActivityBase<JumpViewProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<JumpViewProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(a2);
  *(_QWORD *)a2 = &JumpViewProvider::ShowJumpViewActivity::`vftable';
  JumpViewProvider::ShowJumpViewActivity::StartActivity((__int64)a2, v11, StringRawBuffer);
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v16);
  return a2;
}
