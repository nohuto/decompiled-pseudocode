/*
 * XREFs of ExAllocateTimerInternal2 @ 0x14044E590
 * Callers:
 *     ExAllocateTimer @ 0x14044E550 (ExAllocateTimer.c)
 *     ExAllocateTimerInternal @ 0x1406D2BE0 (ExAllocateTimerInternal.c)
 * Callees:
 *     DifObjTrkIsKvEnabledForPlugin @ 0x1403B6970 (DifObjTrkIsKvEnabledForPlugin.c)
 *     KeInitializeIRTimer @ 0x14044E4C8 (KeInitializeIRTimer.c)
 *     ExpExTimerAttributesAreValid @ 0x14044E6FC (ExpExTimerAttributesAreValid.c)
 *     KiInitializeTimer2 @ 0x14044E75C (KiInitializeTimer2.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     DifObjTrkInsertItem @ 0x14064EAB0 (DifObjTrkInsertItem.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall ExAllocateTimerInternal2(__int64 a1, __int64 a2, unsigned __int16 *a3, unsigned int a4)
{
  ULONG_PTR v5; // rdi
  __int64 Pool2; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned int v11; // r10d
  unsigned __int16 v13[20]; // [rsp+30h] [rbp-28h] BYREF

  v5 = a4;
  if ( !(unsigned __int8)ExpExTimerAttributesAreValid(a4) || ((v5 & 2) != 0) != (a3 != 0LL) )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, v5, 0LL);
  Pool2 = ExAllocatePool2(0x40uLL);
  v9 = Pool2;
  if ( Pool2 )
  {
    if ( (v5 & 2) != 0 )
    {
      v13[0] = *a3;
      v13[1] = a3[1];
      KeInitializeIRTimer(Pool2, a1, a2, v13, v5);
    }
    else
    {
      *(_WORD *)(Pool2 + 2) = 0;
      KiInitializeTimer2(Pool2, a1, a2, (unsigned int)v5);
    }
    *(_QWORD *)(v9 + 136) = KiWaitNever ^ __ROR8__(
                                            v9 ^ _byteswap_uint64((unsigned __int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink),
                                            KiWaitNever);
    v10 = KiWaitNever ^ __ROR8__(
                          v9 ^ _byteswap_uint64((unsigned __int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink),
                          KiWaitNever);
    *(_BYTE *)(v9 + 152) = ExpTimerFreedCookie;
    *(_QWORD *)(v9 + 144) = v10;
    if ( DifObjTrkIsKvEnabledForPlugin(50LL) )
      DifObjTrkInsertItem(v11, v9, 0LL, 0LL);
  }
  return v9;
}
