/*
 * XREFs of ExDeleteTimer @ 0x1403B48D0
 * Callers:
 *     DifExDeleteTimerWrapper @ 0x140654A90 (DifExDeleteTimerWrapper.c)
 *     ?ExpLookasideMgrCleanup@@YAXPEAU_EXP_LOOKASIDE_MGR@@@Z @ 0x14084CDCC (-ExpLookasideMgrCleanup@@YAXPEAU_EXP_LOOKASIDE_MGR@@@Z.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1408A6504 (CancelTimerCallbacksAndDeleteTimer.c)
 *     EtwpFreeLoggerContext @ 0x140A16604 (EtwpFreeLoggerContext.c)
 *     WdtpCancelTimer @ 0x140A1B10C (WdtpCancelTimer.c)
 *     HalpUnregisterPmuNotification @ 0x140B1314C (HalpUnregisterPmuNotification.c)
 * Callees:
 *     KeDisableTimer2 @ 0x1403B3D14 (KeDisableTimer2.c)
 *     ExpCheckForFreedEnhancedTimer @ 0x1403B4498 (ExpCheckForFreedEnhancedTimer.c)
 *     DifObjTrkIsKvEnabledForPlugin @ 0x1403B6970 (DifObjTrkIsKvEnabledForPlugin.c)
 *     DifObjTrkRemoveItem @ 0x1403B7980 (DifObjTrkRemoveItem.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
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
                                            a1 ^ _byteswap_uint64((__int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink ^ *((_QWORD *)a4 + 1)),
                                            KiWaitNever);
    *(_QWORD *)(a1 + 144) = KiWaitNever ^ __ROR8__(
                                            a1 ^ _byteswap_uint64((__int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink ^ *((_QWORD *)a4 + 2)),
                                            KiWaitNever);
  }
  if ( (unsigned __int8)DifObjTrkIsKvEnabledForPlugin(50LL) )
    DifObjTrkRemoveItem(v8, a1, 0LL);
  v11[1] = a1;
  v11[0] = (__int64)ExpFinalizeTimerDeletion;
  return KeDisableTimer2(a1, a2, a3, v11);
}
