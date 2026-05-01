/*
 * XREFs of ??$?0V?$tuple@AEB_K@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CB_K_K@std@@AEAA@AEAV?$tuple@AEB_K@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x18057C5A4
 * Callers:
 *     ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$map@PEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x1800CD134 (--$_Try_emplace@AEBQEAUHWND__@@$$V@-$map@PEAUHWND__@@V-$com_ptr_t@UISwitchItem@Multitasking@Comp.c)
 *     ??$?0AEB_K$$Z$$V@?$pair@$$CB_K_K@std@@QEAA@Upiecewise_construct_t@1@V?$tuple@AEB_K@1@V?$tuple@$$V@1@@Z @ 0x18018F2A0 (--$-0AEB_K$$Z$$V@-$pair@$$CB_K_K@std@@QEAA@Upiecewise_construct_t@1@V-$tuple@AEB_K@1@V-$tuple@$$.c)
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x180605198 (--$_Try_emplace@AEB_K$$V@-$map@_KU-$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@U-$less@.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ____0V__tuple_AEB_K_std__V__tuple___V_1__0A___Z_S___pair___CB_K_K_std__AEAA_AEAV__tuple_AEB_K_1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
        _QWORD *a1,
        _QWORD **a2)
{
  _QWORD *result; // rax

  result = a1;
  *a1 = **a2;
  a1[1] = 0LL;
  return result;
}
