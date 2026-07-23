/*
 * XREFs of HalpMiscInitDiscard @ 0x140CB5A30
 * Callers:
 *     HalpMiscInitSystem @ 0x140BF13F0 (HalpMiscInitSystem.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024F100 (KeRegisterBugCheckReasonCallback.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 HalpMiscInitDiscard()
{
  unsigned int MajorVersion; // ecx

  MajorVersion = KeGetCurrentPrcb()->MajorVersion;
  if ( (_WORD)MajorVersion != 1 )
    KeBugCheckEx(0x79u, 1uLL, MajorVersion, 1uLL, 0LL);
  HalpDeviceBlockUnblockPushLock.WaitBlockFill4[12] = 0;
  off_140E00638[0] = (__int64 (__fastcall *)())HaliQuerySystemInformation;
  off_140E00640[0] = (__int64 (__fastcall *)())HalpSetSystemInformation;
  KeRegisterBugCheckReasonCallback(
    (PKBUGCHECK_REASON_CALLBACK_RECORD)&HalpDeviceBlockUnblockPushLock.Timer.TimerListEntry,
    (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HalpMiscBugCheckCallback,
    (KBUGCHECK_CALLBACK_REASON)9,
    (PUCHAR)"HAL");
  if ( BYTE1(HalpDeviceBlockUnblockPushLock.Timer.DueTime.LowPart) )
    __debugbreak();
  return 0LL;
}
