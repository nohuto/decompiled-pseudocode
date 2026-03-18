/*
 * XREFs of VidSchUnreferenceDmaBuffer @ 0x14009AF10
 * Callers:
 *     VidMmUnreferenceDmaBuffer @ 0x14003AE50 (VidMmUnreferenceDmaBuffer.c)
 * Callees:
 *     VidSchiSignalRegisteredEvent @ 0x1400270D0 (VidSchiSignalRegisteredEvent.c)
 *     VidMmUnreferenceDmaBuffer @ 0x14003AE50 (VidMmUnreferenceDmaBuffer.c)
 */

void __fastcall VidSchUnreferenceDmaBuffer(__int64 a1, __int64 a2)
{
  VidMmUnreferenceDmaBuffer(a2, 0);
  VidSchiSignalRegisteredEvent(a1, (struct _KEVENT **)(a1 + 1928));
  *(_QWORD *)(a1 + 1776) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(a1 + 1744), 0, 0);
  VidSchiSignalRegisteredEvent(a1, (struct _KEVENT **)(a1 + 1960));
}
