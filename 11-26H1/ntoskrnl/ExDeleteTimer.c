/*
 * XREFs of ExDeleteTimer @ 0x1403AABC0
 * Callers:
 *     DifExDeleteTimerWrapper @ 0x140650EB0 (DifExDeleteTimerWrapper.c)
 *     ?ExpLookasideMgrCleanup@@YAXPEAU_EXP_LOOKASIDE_MGR@@@Z @ 0x140846B6C (-ExpLookasideMgrCleanup@@YAXPEAU_EXP_LOOKASIDE_MGR@@@Z.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1408A00F4 (CancelTimerCallbacksAndDeleteTimer.c)
 *     WdtpCancelTimer @ 0x1409DDFE0 (WdtpCancelTimer.c)
 *     EtwpFreeLoggerContext @ 0x140A6CBB4 (EtwpFreeLoggerContext.c)
 *     HalpUnregisterPmuNotification @ 0x140B113CC (HalpUnregisterPmuNotification.c)
 * Callees:
 *     KeDisableTimer2 @ 0x1403AA104 (KeDisableTimer2.c)
 *     ExpCheckForFreedEnhancedTimer @ 0x1403AA888 (ExpCheckForFreedEnhancedTimer.c)
 *     DifObjTrkIsKvEnabledForPlugin @ 0x1403ACC60 (DifObjTrkIsKvEnabledForPlugin.c)
 *     DifObjTrkRemoveItem @ 0x1403ADC70 (DifObjTrkRemoveItem.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

char __fastcall ExDeleteTimer(__int64 a1, char a2, char a3, unsigned int *a4)
{
  unsigned int v8; // r9d
  ULONG_PTR v10; // rax
  __int64 v11[3]; // [rsp+30h] [rbp-18h] BYREF

  ExpCheckForFreedEnhancedTimer(a1);
  if ( a4 )
  {
    v10 = *a4;
    if ( (_DWORD)v10 )
      KeBugCheckEx(0xC7u, 9uLL, 1uLL, v10, 0LL);
    *(_QWORD *)(a1 + 136) = KiWaitNever ^ __ROR8__(
                                            a1 ^ _byteswap_uint64((__int64)stru_140FC01F0.WaitBlock[2].WaitListEntry.Flink ^ *((_QWORD *)a4 + 1)),
                                            KiWaitNever);
    *(_QWORD *)(a1 + 144) = KiWaitNever ^ __ROR8__(
                                            a1 ^ _byteswap_uint64((__int64)stru_140FC01F0.WaitBlock[2].WaitListEntry.Flink ^ *((_QWORD *)a4 + 2)),
                                            KiWaitNever);
  }
  if ( (unsigned __int8)DifObjTrkIsKvEnabledForPlugin(50LL) )
    DifObjTrkRemoveItem(v8, a1, 0LL);
  v11[1] = a1;
  v11[0] = (__int64)ExpFinalizeTimerDeletion;
  return KeDisableTimer2(a1, a2, a3, v11);
}
