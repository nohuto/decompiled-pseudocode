/*
 * XREFs of ?GetWindowIdAndTextSelectionRect@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@PEAUHWND__@@UtagRECT@@@std@@XZ @ 0x18057A2B8
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1 @ 0x18057ADF0 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_18057ADF0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$query@UITextInputHostInfoProvider@@@?$com_ptr_t@UITouchKeyboardExperienceManager@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITextInputHostInfoProvider@@Uerr_exception_policy@wil@@@1@XZ @ 0x180578730 (--$query@UITextInputHostInfoProvider@@@-$com_ptr_t@UITouchKeyboardExperienceManager@@Uerr_except.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::GetWindowIdAndTextSelectionRect(
        __int64 a1,
        __int64 a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  int v8; // [rsp+20h] [rbp-40h]
  unsigned int v9; // [rsp+30h] [rbp-30h] BYREF
  __int64 (__fastcall ***v10)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h] BYREF
  __int128 v12; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v10 = 0LL;
  v3 = *(__int64 **)(a1 + 96);
  v4 = *v3;
  v10 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, GUID *, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(v4 + 24))(
         v3,
         &IID_ITouchKeyboardExperienceManager,
         &GUID_9516d866_ca0f_40ca_8997_efa618b50f99,
         &v10);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC6,
      (int)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
      (const char *)(unsigned int)v5,
      v8);
  wil::com_ptr_t<ITouchKeyboardExperienceManager,wil::err_exception_policy>::query<ITextInputHostInfoProvider>(
    &v10,
    &v11);
  v9 = 0;
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 32LL))(v11, &v9);
  v12 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 24LL))(v11, &v12);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xCE,
      (int)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
      (const char *)(unsigned int)v6,
      v8);
  *(_OWORD *)a2 = v12;
  *(_QWORD *)(a2 + 16) = v9;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v10);
  return a2;
}
