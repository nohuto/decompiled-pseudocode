/*
 * XREFs of ??$start@V?$tip_test@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@0@XZ @ 0x1800A2CCC
 * Callers:
 *     ?InstanceThreadProc@SessionMonitor@@AEAAKXZ @ 0x180082880 (-InstanceThreadProc@SessionMonitor@@AEAAKXZ.c)
 * Callees:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800A3864 (-ensure_data@-$tip_test@V-$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x1800A4B28 (-start@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 */

_QWORD *__fastcall tip2::start<tip2::tip_test<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>>(
        _QWORD *a1)
{
  _QWORD *v2; // rax
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  v2 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>::ensure_data();
  tip2::details::shared_data<0,0,0>::start(*v2 + 8LL, v4);
  return a1;
}
