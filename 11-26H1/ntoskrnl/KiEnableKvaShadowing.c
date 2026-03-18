/*
 * XREFs of KiEnableKvaShadowing @ 0x140BF8180
 * Callers:
 *     KiInitializeProcessorState @ 0x1407BB330 (KiInitializeProcessorState.c)
 *     KiInitializeBootStructures @ 0x140BF5890 (KiInitializeBootStructures.c)
 * Callees:
 *     KiSetAddressPolicy @ 0x140247450 (KiSetAddressPolicy.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     HvlRescindEnlightenments @ 0x1405C19B8 (HvlRescindEnlightenments.c)
 *     KiIsKvaShadowDisabled @ 0x1405F2210 (KiIsKvaShadowDisabled.c)
 *     KiInitializeDescriptorIst @ 0x1405F720C (KiInitializeDescriptorIst.c)
 *     SpcIsKvaLeakageSimulated @ 0x14071E35C (SpcIsKvaLeakageSimulated.c)
 *     SpcQueryKvaLeakagePresent @ 0x14071E36C (SpcQueryKvaLeakagePresent.c)
 *     KiInitializeIdt @ 0x140BF5F9C (KiInitializeIdt.c)
 *     KiShadowProcessorAllocation @ 0x140BF8350 (KiShadowProcessorAllocation.c)
 */

__int64 __fastcall KiEnableKvaShadowing(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // r11
  __int64 v10; // rdx
  unsigned __int8 v11; // cf
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 result; // rax
  __int16 v15; // cx

  if ( KiIsKvaShadowDisabled() )
  {
    BYTE1(Mm64BitPhysicalAddress) = 1;
  }
  else
  {
    if ( (KeFeatureBits2 & 0x18000) == 0x8000 )
      *(_QWORD *)(v5 + 11520) = 3LL;
    if ( (unsigned int)SpcQueryKvaLeakagePresent() || SpcIsKvaLeakageSimulated() )
    {
      if ( KiFredEnabled )
        KeBugCheckEx(0x5Du, 0x4B766120uLL, 0x46524544uLL, 0LL, 0LL);
      v8 = __readcr3();
      *(_QWORD *)(v7 + 44672) = v8;
      *(_QWORD *)(v6 + 4216) = *(_QWORD *)(v6 + 4100);
      KiInitializeDescriptorIst(v7, v6);
      *(_QWORD *)(v9 + 4100) = v9 + 16896;
      if ( *(_DWORD *)(a1 + 36) )
      {
        result = KiShadowProcessorAllocation(a1, v9, a3);
        if ( !(_DWORD)result )
          return result;
        v15 = *(_WORD *)(KeGetPrcb(0) + 44714);
        *(_DWORD *)(a1 + 44696) |= 2u;
        *(_WORD *)(a1 + 44714) = v15;
      }
      else
      {
        KiInitializeIdt(v9, 1);
        KeGetCurrentThread()->ApcState.Process->AddressPolicy = 1;
        byte_140FC90A0 = 1;
        _InterlockedOr(dword_140FC953C, 0x4000u);
        KiSetAddressPolicy(1LL, v10);
        v11 = _bittest64((const signed __int64 *)(a1 + 36832), 0x2Au);
        *(_WORD *)(a1 + 44714) = 24;
        if ( v11 )
        {
          v12 = __readcr4();
          __writecr4(v12 & 0xFFFFFFFFFFFDFF7FuLL | 0x20000);
          v13 = __readcr3();
          __writecr3(v13 | 2);
          KiFlushPcid |= 1u;
        }
        if ( (*(_QWORD *)(a1 + 36832) & 0x240000000000LL) == 0x240000000000LL )
          KiFlushPcid |= 2u;
        HvlRescindEnlightenments();
        KiTrapFeatures |= 1uLL;
        KiKvaShadow = 1;
        KiKvaShadowMode = 2 - (KiFlushPcid != 0);
      }
      if ( KiFlushPcid )
        _interlockedbittestandset64((volatile signed __int32 *)(a1 + 44672), 0x3FuLL);
    }
  }
  return 1LL;
}
