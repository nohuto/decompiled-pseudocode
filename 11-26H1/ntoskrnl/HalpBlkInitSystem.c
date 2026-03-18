/*
 * XREFs of HalpBlkInitSystem @ 0x140CB4528
 * Callers:
 *     HalpProcInitSystem @ 0x140BEB320 (HalpProcInitSystem.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 *     KiInitializeTimer2 @ 0x140456EEC (KiInitializeTimer2.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     HalpBlkInitializeVirtualAddressSpace @ 0x140CB2FF8 (HalpBlkInitializeVirtualAddressSpace.c)
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
      word_140F874C2 = 0;
      KiInitializeTimer2((unsigned __int64)&unk_140F874C0, (__int64)HalpBlkWdTimerRoutine, 0LL, 8);
      qword_140F87578 = 0LL;
      qword_140F87570 = (__int64)HalpBlkWdWorkerRoutine;
      qword_140F87560.List.Flink = 0LL;
    }
  }
  else if ( a1 == 21 && HalpInterruptBlockedProcessors )
  {
    if ( HalpInterruptStartHyperthreadSiblings )
    {
      v2[0] = 0LL;
      v2[1] = -1LL;
      KeSetTimer2((__int64)&unk_140F874C0, -30000000LL, 30000000LL, (__int64)v2);
    }
  }
}
