/*
 * XREFs of ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x18001BEB0
 * Callers:
 *     ?StartInactiveTimer@CAudioSession@@QEAAXXZ @ 0x18001A94C (-StartInactiveTimer@CAudioSession@@QEAAXXZ.c)
 *     ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x18001AE10 (-PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ.c)
 *     ?WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001B110 (-WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x18001B240 (-RemoveClientReference@CAudioSession@@UEAAJ_N@Z.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x18001B6E0 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18001BB70 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?TimerCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18001C930 (-TimerCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@J@ZV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@5@@Z @ 0x18001CA40 (-QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180082D78 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetWorkItem@CWorkFifo@@AEAA?AV?$shared_ptr@VWorkItem@CWorkFifo@@@std@@XZ @ 0x180085F98 (-GetWorkItem@CWorkFifo@@AEAA-AV-$shared_ptr@VWorkItem@CWorkFifo@@@std@@XZ.c)
 *     ?RecurringWaitCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800BF900 (-RecurringWaitCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 *     ?DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z @ 0x180124D84 (-DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z.c)
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x180125B00 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 *     ?ProcessWorkItem@CWorkFifo@@AEAAXXZ @ 0x180126104 (-ProcessWorkItem@CWorkFifo@@AEAAXXZ.c)
 *     ?TimerCallback@CWorkFifo@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180126F90 (-TimerCallback@CWorkFifo@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Atomic_storage<bool,1>::load(__int64 a1)
{
  return *(_BYTE *)a1;
}
