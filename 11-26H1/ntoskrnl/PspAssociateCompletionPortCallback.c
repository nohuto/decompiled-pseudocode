/*
 * XREFs of PspAssociateCompletionPortCallback @ 0x140B09E10
 * Callers:
 *     <none>
 * Callees:
 *     RtlInterlockedSetClearBits @ 0x1404C51EC (RtlInterlockedSetClearBits.c)
 *     PspSendJobNotification @ 0x1404C9CC0 (PspSendJobNotification.c)
 */

__int64 __fastcall PspAssociateCompletionPortCallback(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rcx
  __int64 v4; // r11

  v3 = (volatile signed __int32 *)(a1 + 496);
  if ( (*v3 & 1) == 0 )
  {
    RtlInterlockedSetClearBits(v3, 4, 32);
    PspSendJobNotification(a2, 6LL, *(_QWORD *)(v4 + 464), 0);
  }
  return 0LL;
}
