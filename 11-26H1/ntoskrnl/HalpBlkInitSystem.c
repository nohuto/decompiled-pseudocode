/*
 * XREFs of HalpBlkInitSystem @ 0x140CBA568
 * Callers:
 *     HalpProcInitSystem @ 0x140BF1320 (HalpProcInitSystem.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     KiInitializeTimer2 @ 0x14044E75C (KiInitializeTimer2.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpBlkInitializeVirtualAddressSpace @ 0x140CB9038 (HalpBlkInitializeVirtualAddressSpace.c)
 */

void __fastcall HalpBlkInitSystem(int a1)
{
  int v1; // eax
  _QWORD v2[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( a1 == 12 )
  {
    qword_140E00C68 = (__int64)HalpBlkPoGetPowerInterface;
    qword_140E00C70 = (__int64)HalpBlkPoGetPackageId;
    qword_140E00C78 = (__int64)HalpBlkPoGetProcessorCount;
    qword_140E00C80 = (__int64)HalpBlkPoGetApicIdByIndex;
    qword_140E00C88 = (__int64)HalpBlkPoRegisterIdleState;
    if ( HalpInterruptBlockedProcessors && HalpInterruptStartHyperthreadSiblings )
    {
      v1 = HalpBlkInitializeVirtualAddressSpace();
      if ( v1 < 0 )
        KeBugCheckEx(0x1DAu, 1uLL, v1, 0LL, 0LL);
      word_140F878A2 = 0;
      KiInitializeTimer2((unsigned __int64)&unk_140F878A0, (__int64)HalpBlkWdTimerRoutine, 0LL, 8);
      qword_140F87958 = 0LL;
      qword_140F87950 = (__int64)HalpBlkWdWorkerRoutine;
      qword_140F87940.List.Flink = 0LL;
    }
  }
  else if ( a1 == 21 && HalpInterruptBlockedProcessors )
  {
    if ( HalpInterruptStartHyperthreadSiblings )
    {
      v2[0] = 0LL;
      v2[1] = -1LL;
      KeSetTimer2((__int64)&unk_140F878A0, -30000000LL, 30000000LL, (__int64)v2);
    }
  }
}
