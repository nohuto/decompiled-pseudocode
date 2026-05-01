/*
 * XREFs of ?str@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x1805059BC
 * Callers:
 *     _lambda_ab57ea0a18b59054314f7ae3775d9ac6_::operator() @ 0x1804F82D0 (_lambda_ab57ea0a18b59054314f7ae3775d9ac6_--operator().c)
 *     ?ControlGainedForActivation@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1804F9C80 (-ControlGainedForActivation@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITION.c)
 *     ?ControlLost@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1804FA010 (-ControlLost@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUn.c)
 *     ?HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ @ 0x1804FDD60 (-HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ.c)
 *     ?InitializePosition@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1804FE870 (-InitializePosition@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPrese.c)
 *     ?OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180500130 (-OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW.c)
 *     ?OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x180500E90 (-OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@.c)
 *     ?OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x180501850 (-OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180505088 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::stringbuf::str(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r8
  const void *v4; // rdx
  size_t v5; // r8
  __int64 v6; // r9

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  if ( (*(_DWORD *)(a1 + 112) & 0x22) == 2 || (v3 = **(_QWORD **)(a1 + 64)) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 112) & 4) != 0 || (v6 = **(_QWORD **)(a1 + 56)) == 0 )
    {
      v5 = 0LL;
      v4 = 0LL;
    }
    else
    {
      v4 = **(const void ***)(a1 + 24);
      v5 = v6 + **(int **)(a1 + 80) - (_QWORD)v4;
    }
  }
  else
  {
    v4 = **(const void ***)(a1 + 32);
    if ( v3 < *(_QWORD *)(a1 + 104) )
      v3 = *(_QWORD *)(a1 + 104);
    v5 = v3 - (_QWORD)v4;
  }
  if ( v4 )
    std::string::assign((void **)a2, v4, v5);
  return a2;
}
