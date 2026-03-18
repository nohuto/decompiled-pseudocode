/*
 * XREFs of ?OnTimerNotification@CBaseInput@@AEAAJXZ @ 0x140059980
 * Callers:
 *     <none>
 * Callees:
 *     RIMOnTimerNotification @ 0x140059D20 (RIMOnTimerNotification.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 */

__int64 __fastcall CBaseInput::OnTimerNotification(HANDLE *this)
{
  char v3; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v3,
    "OnTimerNotification",
    0LL);
  LODWORD(this) = RIMOnTimerNotification(this[1]);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v3);
  return (unsigned int)this;
}
