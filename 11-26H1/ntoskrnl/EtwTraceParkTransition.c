/*
 * XREFs of EtwTraceParkTransition @ 0x1406C4C6C
 * Callers:
 *     KiSoftParkElectionUnparkProcessor @ 0x14022ACC4 (KiSoftParkElectionUnparkProcessor.c)
 *     KiParkCurrentProcessor @ 0x1403346DC (KiParkCurrentProcessor.c)
 *     KeTransitionProcessorParkState @ 0x14042C1D0 (KeTransitionProcessorParkState.c)
 *     KiUnparkCurrentProcessor @ 0x14042C4D0 (KiUnparkCurrentProcessor.c)
 *     KiTraceParkingRundown @ 0x1405F8C7C (KiTraceParkingRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceParkTransition(__int64 a1, char a2, char a3)
{
  int v3; // eax
  int v5; // [rsp+30h] [rbp-28h] BYREF
  char v6; // [rsp+34h] [rbp-24h]
  char v7; // [rsp+35h] [rbp-23h]
  __int16 v8; // [rsp+36h] [rbp-22h]
  _QWORD v9[2]; // [rsp+38h] [rbp-20h] BYREF

  v3 = *(_DWORD *)(a1 + 36);
  v8 = 0;
  v5 = v3;
  v6 = a2;
  v7 = a3;
  v9[0] = &v5;
  v9[1] = 8LL;
  return EtwTraceKernelEvent((int)v9, 1, 0xA0002000, 3964, 514);
}
