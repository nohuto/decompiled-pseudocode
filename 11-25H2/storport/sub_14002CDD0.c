/*
 * XREFs of sub_14002CDD0 @ 0x14002CDD0
 * Callers:
 *     sub_140042620 @ 0x140042620 (sub_140042620.c)
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 *     sub_1400BDE7C @ 0x1400BDE7C (sub_1400BDE7C.c)
 *     sub_1400D8C60 @ 0x1400D8C60 (sub_1400D8C60.c)
 *     sub_1400DF484 @ 0x1400DF484 (sub_1400DF484.c)
 *     sub_1400DFC54 @ 0x1400DFC54 (sub_1400DFC54.c)
 *     sub_1400E922C @ 0x1400E922C (sub_1400E922C.c)
 *     sub_1400E9360 @ 0x1400E9360 (sub_1400E9360.c)
 *     sub_1400EF9BC @ 0x1400EF9BC (sub_1400EF9BC.c)
 *     sub_1400F1278 @ 0x1400F1278 (sub_1400F1278.c)
 *     sub_1400F1D38 @ 0x1400F1D38 (sub_1400F1D38.c)
 *     sub_1400F2890 @ 0x1400F2890 (sub_1400F2890.c)
 *     sub_1400F2B50 @ 0x1400F2B50 (sub_1400F2B50.c)
 *     sub_1400F2E10 @ 0x1400F2E10 (sub_1400F2E10.c)
 *     sub_1400F3180 @ 0x1400F3180 (sub_1400F3180.c)
 *     sub_140111898 @ 0x140111898 (sub_140111898.c)
 *     sub_140111914 @ 0x140111914 (sub_140111914.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14002CDD0(ULONG MicroSeconds)
{
  __int64 v1; // rbx
  __int64 Timer; // rax
  void *v3; // rbx
  union _LARGE_INTEGER Interval; // [rsp+48h] [rbp+10h] BYREF

  v1 = MicroSeconds;
  if ( KeGetCurrentIrql() >= 2u || (unsigned int)v1 < dword_140168D68 / 0xAu )
  {
    KeStallExecutionProcessor(v1);
  }
  else
  {
    Interval.QuadPart = -10 * v1;
    if ( (unsigned int)v1 < dword_140168D60 / 0xAu
      && (Timer = ExAllocateTimer(0LL, 0LL, 4LL), (v3 = (void *)Timer) != 0LL) )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ExSetTimer)(
        Timer,
        (union _LARGE_INTEGER)Interval.QuadPart,
        0LL,
        0LL);
      KeWaitForSingleObject(v3, Executive, 0, 0, 0LL);
      ExDeleteTimer(v3, 0LL, 0LL, 0LL);
    }
    else
    {
      KeDelayExecutionThread(0, 0, &Interval);
    }
  }
}
