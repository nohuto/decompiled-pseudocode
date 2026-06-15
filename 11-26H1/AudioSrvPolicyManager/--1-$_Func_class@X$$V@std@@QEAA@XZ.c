/*
 * XREFs of ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x180023250
 * Callers:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x18000BE20 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180018508 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 *     ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x18001A3A0 (-CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ.c)
 *     ??1CApplication@@MEAA@XZ @ 0x180037970 (--1CApplication@@MEAA@XZ.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x180037C9C (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?DelayedInteractivityNotificationTimerExpiredCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180038340 (-DelayedInteractivityNotificationTimerExpiredCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x18003AE98 (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800403A4 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _QueueGenericWorkItem_::_1_::dtor$0 @ 0x18004C090 (_QueueGenericWorkItem_--_1_--dtor$0.c)
 *     _QueueGenericWorkItem_::_1_::dtor$5 @ 0x18004C0E0 (_QueueGenericWorkItem_--_1_--dtor$5.c)
 *     _QueueGenericWorkItem_::_1_::dtor$13 @ 0x18004C170 (_QueueGenericWorkItem_--_1_--dtor$13.c)
 *     _CApplication::RecalculateVolume_::_1_::dtor$6 @ 0x18004C4D0 (_CApplication--RecalculateVolume_--_1_--dtor$6.c)
 *     _CApplicationManager::ProcessInteractivityNotification_::_1_::dtor$3 @ 0x18004C530 (_CApplicationManager--ProcessInteractivityNotification_--_1_--dtor$3.c)
 *     _CApplicationManager::ApplyPBMPolicyForAllAppsInSession_::_1_::dtor$35 @ 0x18004C550 (_CApplicationManager--ApplyPBMPolicyForAllAppsInSession_--_1_--dtor$35.c)
 *     _CApplicationManager::ApplyPBMPolicy_::_1_::dtor$13 @ 0x18004C5B0 (_CApplicationManager--ApplyPBMPolicy_--_1_--dtor$13.c)
 *     _CApplicationManager::ApplyPBMPolicy_::_1_::dtor$30 @ 0x18004C5D0 (_CApplicationManager--ApplyPBMPolicy_--_1_--dtor$30.c)
 *     _CApplicationManager::UpdateVolumeForAllAppsInSession_::_1_::dtor$15 @ 0x18004C700 (_CApplicationManager--UpdateVolumeForAllAppsInSession_--_1_--dtor$15.c)
 *     _CProcess::ResetReusedSessionGroupingParams_::_1_::dtor$1 @ 0x18004C720 (_CProcess--ResetReusedSessionGroupingParams_--_1_--dtor$1.c)
 *     _CApplication::CApplication_::_1_::dtor$12 @ 0x18004CA3F (_CApplication--CApplication_--_1_--dtor$12.c)
 *     _std::make_shared_std::function_void___cdecl(void)__std::function_void___cdecl(void)__&__::_1_::dtor$2 @ 0x18004D620 (_std--make_shared_std--function_void___cdecl(void)__std--function_void___cdecl(void_ea_18004D620.c)
 *     _std::function_void___cdecl(void)_::function_void___cdecl(void)__::_1_::dtor$0 @ 0x18004D680 (_std--function_void___cdecl(void)_--function_void___cdecl(void)__--_1_--dtor$0.c)
 *     _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$0 @ 0x18004E246 (_CSerialWorkQueue--QueueWorkItem_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Func_class<void,>::~_Func_class<void,>(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
