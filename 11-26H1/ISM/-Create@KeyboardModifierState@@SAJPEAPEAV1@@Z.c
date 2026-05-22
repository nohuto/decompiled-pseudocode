/*
 * XREFs of ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x180011120
 * Callers:
 *     ?InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@_NPEAUPointerInputInfo@@@Z @ 0x180011008 (-InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@_NPEAUPointerInputInfo@@@Z.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N@Z @ 0x1800F28F8 (-ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification.c)
 *     ?Create@KeyboardProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18019B6C0 (-Create@KeyboardProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@KeyboardModifierState@@AEAAJXZ @ 0x180094CA0 (-Initialize@KeyboardModifierState@@AEAAJXZ.c)
 *     ??0KeyboardModifierState@@AEAA@XZ @ 0x18019D020 (--0KeyboardModifierState@@AEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardModifierState::Create(struct KeyboardModifierState **a1)
{
  struct KeyboardModifierState *v2; // rbx
  KeyboardModifierState *v4; // rax
  int v5; // eax
  unsigned int v6; // edi
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( KeyboardModifierState::s_pKeyboardModifierState )
  {
    (*(void (__fastcall **)(struct KeyboardModifierState *))(*(_QWORD *)KeyboardModifierState::s_pKeyboardModifierState
                                                           + 8LL))(KeyboardModifierState::s_pKeyboardModifierState);
    v2 = KeyboardModifierState::s_pKeyboardModifierState;
LABEL_3:
    *a1 = v2;
    return 0LL;
  }
  v4 = (KeyboardModifierState *)RefCountedObject::operator new(0x58uLL);
  if ( v4 )
    v2 = KeyboardModifierState::KeyboardModifierState(v4);
  else
    v2 = 0LL;
  if ( v2 )
  {
    v5 = KeyboardModifierState::Initialize(v2);
    v6 = v5;
    if ( v5 >= 0 )
    {
      KeyboardModifierState::s_pKeyboardModifierState = v2;
      goto LABEL_3;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\utilities\\keyboardmodifierstate\\lib\\ke"
                    "yboardmodifierstate.cpp",
      (const char *)(unsigned int)v5,
      v7);
    return v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\utilities\\keyboardmodifierstate\\lib\\ke"
                    "yboardmodifierstate.cpp",
      (const char *)0x8007000ELL,
      v7);
    return 2147942414LL;
  }
}
