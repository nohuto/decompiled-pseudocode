/*
 * XREFs of ?OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ @ 0x140219840
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     SynthesizeTouchInputContainer @ 0x1402204A8 (SynthesizeTouchInputContainer.c)
 */

__int64 __fastcall CHidInput::OnTouchSynthesizeNotification(struct RIMCOMPLETEFRAME **this)
{
  __int64 v2; // rdx
  void **v4; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v4, "OnTouchSynthesizeNotification", 0LL);
  SynthesizeTouchInputContainer(this[176]);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v4,
    v2);
  return 0LL;
}
