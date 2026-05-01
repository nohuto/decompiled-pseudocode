/*
 * XREFs of std::call_once__lambda_b845a5ef8d523a7a273348395baf5ff1___ @ 0x1804737EC
 * Callers:
 *     ?IgnoreRelativeToFocusedElementShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180094CE4 (-IgnoreRelativeToFocusedElementShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKe.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005D480 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18043E8E8 (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     ??$make_shared@VUIAutomationHelpers@KeyboardHosting@@$$V@std@@YA?AV?$shared_ptr@VUIAutomationHelpers@KeyboardHosting@@@0@XZ @ 0x18047388C (--$make_shared@VUIAutomationHelpers@KeyboardHosting@@$$V@std@@YA-AV-$shared_ptr@VUIAutomationHel.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::call_once__lambda_b845a5ef8d523a7a273348395baf5ff1___(union _RTL_RUN_ONCE *a1, __int64 a2)
{
  __int64 *v4; // rax
  union _RTL_RUN_ONCE *v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  _BYTE v7[8]; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+38h] [rbp-10h]
  WINBOOL fPending; // [rsp+50h] [rbp+8h] BYREF

  fPending = 0;
  if ( !__std_init_once_begin_initialize(a1, 0, &fPending, 0LL) )
    abort();
  if ( fPending )
  {
    v5 = a1;
    v6 = 4LL;
    v4 = (__int64 *)std::make_shared<KeyboardHosting::UIAutomationHelpers,>(v7);
    std::shared_ptr<KBViewInfo>::operator=((_QWORD *)(*(_QWORD *)a2 + 696LL), v4);
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    LODWORD(v6) = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v5);
  }
}
