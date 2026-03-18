/*
 * XREFs of HalpMiscInitDiscard @ 0x140CAF9F0
 * Callers:
 *     HalpMiscInitSystem @ 0x140BEB3F0 (HalpMiscInitSystem.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024D7A0 (KeRegisterBugCheckReasonCallback.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 HalpMiscInitDiscard()
{
  unsigned int MajorVersion; // ecx

  MajorVersion = KeGetCurrentPrcb()->MajorVersion;
  if ( (_WORD)MajorVersion != 1 )
    KeBugCheckEx(0x79u, 1uLL, MajorVersion, 1uLL, 0LL);
  HalpDeviceBlockUnblockPushLock.WaitBlockFill5[44] = 0;
  off_140E00638[0] = (__int64 (__fastcall *)())HaliQuerySystemInformation;
  off_140E00640[0] = (__int64 (__fastcall *)())HalpSetSystemInformation;
  KeRegisterBugCheckReasonCallback(
    (PKBUGCHECK_REASON_CALLBACK_RECORD)&HalpDeviceBlockUnblockPushLock.320,
    (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HalpMiscBugCheckCallback,
    (KBUGCHECK_CALLBACK_REASON)9,
    (PUCHAR)"HAL");
  if ( BYTE1(HalpDeviceBlockUnblockPushLock.Timer.TimerListEntry.Flink) )
    __debugbreak();
  return 0LL;
}
