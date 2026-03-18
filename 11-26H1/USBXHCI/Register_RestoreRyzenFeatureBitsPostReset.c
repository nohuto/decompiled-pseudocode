/*
 * XREFs of Register_RestoreRyzenFeatureBitsPostReset @ 0x140031E48
 * Callers:
 *     Register_ControllerReset @ 0x1400316A8 (Register_ControllerReset.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     XilRegister_WriteUlong @ 0x140008FA4 (XilRegister_WriteUlong.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 */

void __fastcall Register_RestoreRyzenFeatureBitsPostReset(__int64 a1)
{
  int Ulong; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 744LL) & 0x80u) != 0LL )
  {
    if ( *(_DWORD *)(a1 + 20) < 0xC104u )
    {
      Debug_FreAssertMsg(
        (__int64)"MMIO Offset 0xC100 is unexpectedly out of range",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\register.c",
        2773);
    }
    else
    {
      Ulong = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 49408LL));
      XilRegister_WriteUlong(a1, (_DWORD *)(*(_QWORD *)(a1 + 24) + 49408LL), Ulong & 0xFF0FFFFF);
    }
  }
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 744LL) & 0x100LL) != 0 )
  {
    if ( *(_DWORD *)(a1 + 20) < 0xC110u )
    {
      Debug_FreAssertMsg(
        (__int64)"MMIO Offset 0xC10C is unexpectedly out of range",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\register.c",
        2813);
    }
    else
    {
      v3 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 49408LL));
      XilRegister_WriteUlong(a1, (_DWORD *)(*(_QWORD *)(a1 + 24) + 49408LL), v3 & 0xFF0FFFFF);
      v4 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 49420LL));
      XilRegister_WriteUlong(a1, (_DWORD *)(*(_QWORD *)(a1 + 24) + 49420LL), v4 & 0xFBFFFFFF);
    }
  }
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 744LL) & 0x200LL) != 0 )
  {
    if ( *(_DWORD *)(a1 + 20) < 0xC104u )
    {
      Debug_FreAssertMsg(
        (__int64)"MMIO Offset 0xC100 is unexpectedly out of range",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\register.c",
        2862);
    }
    else
    {
      v5 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 49408LL));
      XilRegister_WriteUlong(a1, (_DWORD *)(*(_QWORD *)(a1 + 24) + 49408LL), v5 | 0xF00000);
      Interval.QuadPart = -200LL;
      KeDelayExecutionThread(0, 0, &Interval);
      v6 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 49408LL));
      XilRegister_WriteUlong(a1, (_DWORD *)(*(_QWORD *)(a1 + 24) + 49408LL), v6 & 0xFF0FFFFF);
    }
  }
}
