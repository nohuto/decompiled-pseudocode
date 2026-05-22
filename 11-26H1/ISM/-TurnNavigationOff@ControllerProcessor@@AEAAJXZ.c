/*
 * XREFs of ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x1801804C4
 * Callers:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180064CA4 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 * Callees:
 *     ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXMGG_N@Z @ 0x18004E5F8 (-TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXMGG_N@Z.c)
 *     ?UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x18004F3C4 (-UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AURawMouseInputInfo@@K@Z @ 0x18017D514 (-BuildMouseInputInfo@ControllerProcessor@@AEAA-AURawMouseInputInfo@@K@Z.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x18017E4C4 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x18017EBEC (-LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z.c)
 *     ?Remove@InjectionDevice@@QEAAJXZ @ 0x18017F320 (-Remove@InjectionDevice@@QEAAJXZ.c)
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z @ 0x18017FAF0 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x1801803F4 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ControllerProcessor::TurnNavigationOff(ControllerProcessor *this)
{
  unsigned int v2; // esi
  int *v3; // r14
  _DWORD *v4; // rdi
  int v5; // eax
  int v6; // eax
  int updated; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v12; // [rsp+20h] [rbp-258h]
  int v13; // [rsp+20h] [rbp-258h]
  struct tagPOINT v14; // [rsp+30h] [rbp-248h] BYREF
  _DWORD v15[136]; // [rsp+40h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  ControllerProcessor::LiftPressedVirtualKeys(this, 0);
  v2 = 0;
  v3 = (int *)&unk_18020B9D4;
  v4 = (_DWORD *)((char *)this + 7524);
  *((_QWORD *)this + 45) = **(_QWORD **)&ControllerProcessor::GetCursorPosition(this, &v14);
  do
  {
    if ( *v4 )
    {
      ControllerProcessor::BuildMouseInputInfo((__int64)this, v15, *v3);
      v5 = ControllerProcessor::SendMouseInputInfo(this, (struct RawMouseInputInfo *)v15);
      if ( v5 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x491,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v5,
          v12);
    }
    ++v2;
    ++v4;
    v3 += 3;
  }
  while ( v2 < 5 );
  if ( *((_DWORD *)this + 315) )
    ControllerProcessor::TryUpdateInteractionType((__int64)this, 0);
  v6 = InjectionDevice::Remove((ControllerProcessor *)((char *)this + 2832));
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x49A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v6,
      v12);
  ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(this, *((float *)this + 65), 0xD3u, 0xD4u, 1);
  ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(this, *((float *)this + 64), 0xD5u, 0xD6u, 1);
  updated = ControllerProcessor::UpdateAutoRepeatTimer(this);
  if ( updated < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4AB,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)updated,
      v13);
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 37) + 96LL))(*((_QWORD *)this + 37));
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4AD,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v8,
      v13);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 961) + 96LL))(*((_QWORD *)this + 961));
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4AE,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v9,
      v13);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 962) + 96LL))(*((_QWORD *)this + 962));
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4AF,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v10,
      v13);
  return 0LL;
}
