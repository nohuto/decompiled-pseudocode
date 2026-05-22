/*
 * XREFs of ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z @ 0x18017FAF0
 * Callers:
 *     ?ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ @ 0x18017D110 (-ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ.c)
 *     ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJV?$optional@W4GameInputGamepadButtons@@@std@@0@Z @ 0x18017D30C (-BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJV-$optional@W4GameInputGamepadButtons@@@st.c)
 *     ?SendPointerDelta@ControllerProcessor@@AEAAJUtagPOINT@@@Z @ 0x18017FBDC (-SendPointerDelta@ControllerProcessor@@AEAAJUtagPOINT@@@Z.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x18017FCB8 (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x1801804C4 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x180076840 (-Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ControllerProcessor::SendMouseInputInfo(ControllerProcessor *this, struct RawMouseInputInfo *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 *v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 7520) )
  {
    v4 = *((_QWORD *)this + 939);
    v11 = 0LL;
    v9 = &v11;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v4 + 72LL))(
           v4,
           *((unsigned int *)this + 710),
           1LL);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x518,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v5,
        (int)&v11);
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 939) + 32LL))(
           *((_QWORD *)this + 939),
           &v11);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x519,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v6,
        (int)&v11);
    *((_BYTE *)this + 7520) = 0;
  }
  v7 = (unsigned int)InjectionDevice::Inject((ControllerProcessor *)((char *)this + 2832), a2);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x51E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v7,
      (int)v9);
  return 0LL;
}
