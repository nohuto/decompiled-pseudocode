/*
 * XREFs of KiSetHardwareSpeculationControlFeatures @ 0x1405F5B74
 * Callers:
 *     KiInitializeKernel @ 0x140BFC190 (KiInitializeKernel.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1405F4498 (KiDetectHardwareSpecControlFeatures.c)
 */

__int64 __fastcall KiSetHardwareSpeculationControlFeatures(__int64 a1, signed __int64 a2)
{
  unsigned int v3; // edx
  __int64 result; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]
  char v7; // [rsp+60h] [rbp+8h] BYREF

  v7 = 0;
  v6 = 0LL;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  KiDetectHardwareSpecControlFeatures(a1, a2, BugCheckParameter3, &v7);
  v3 = BugCheckParameter3[0];
  result = a1 + 1820;
  if ( (BugCheckParameter3[0] & 0x20) != 0 )
    *(_BYTE *)result |= 4u;
  if ( (_BYTE)KiKernelCetEnabled )
    *(_BYTE *)result |= 8u;
  if ( *(_DWORD *)(a1 + 36) )
  {
    if ( (unsigned int)KiCpu0HardwareFlags != (unsigned __int64)v3 )
      KeBugCheckEx(0x5Du, 0x53524249uLL, (unsigned int)KiCpu0HardwareFlags, v3, 0LL);
  }
  else
  {
    LODWORD(KiCpu0HardwareFlags) = v3;
    result = v6;
    *(_QWORD *)&KiSpeculationFeatures = v3 | KiSpeculationFeatures & 0xFFFFFFFF00000000uLL;
    DWORD2(KiSpeculationFeatures) = BugCheckParameter3[1];
    KiSsbdMsr = BugCheckParameter3[1];
    qword_140FC0C68 = v6;
    KiSsbdBit = v6;
  }
  if ( v7 )
    KiMicrocodeTrackerEnabled = 1;
  if ( (*(_QWORD *)&v3 & 0x400000LL) != 0 )
  {
    result = 256LL;
    *(_WORD *)(a1 + 1816) |= 0x100u;
  }
  return result;
}
