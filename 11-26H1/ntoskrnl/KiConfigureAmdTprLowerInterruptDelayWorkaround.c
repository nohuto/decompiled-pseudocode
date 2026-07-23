/*
 * XREFs of KiConfigureAmdTprLowerInterruptDelayWorkaround @ 0x140BFB6C8
 * Callers:
 *     KiInitializeKernel @ 0x140BFC190 (KiInitializeKernel.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1404DF970 (HviIsAnyHypervisorPresent.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

char __fastcall KiConfigureAmdTprLowerInterruptDelayWorkaround(ULONG_PTR BugCheckParameter1, int a2)
{
  char v4; // cl
  unsigned __int8 v5; // al
  unsigned __int64 v6; // rax

  v4 = *(_BYTE *)(BugCheckParameter1 + 64);
  LODWORD(v6) = v4 == 23 && (v5 = *(_BYTE *)(BugCheckParameter1 + 67), v5 >= 0x30u) && v5 <= 0x3Fu
             || v4 == 25 && *(_BYTE *)(BugCheckParameter1 + 67) <= 0xFu;
  if ( (_DWORD)v6 )
  {
    LOBYTE(v6) = HviIsAnyHypervisorPresent();
    if ( !(_BYTE)v6 && KiAmdTprLowerInterruptDelayConfig != 2 )
    {
      if ( !a2 )
      {
        v6 = __readmsr(0xC0010015);
        if ( (v6 & 0x100000000LL) != 0 )
        {
          KiAmdTprLowerInterruptDelayConfig = 2;
          return v6;
        }
        __writemsr(0xC0010015, v6 | 0x100000000LL);
        __writemsr(0xC0010015, v6);
      }
      if ( a2 )
      {
        v6 = __readmsr(0xC0010015);
        if ( (v6 & 0x100000000LL) != 0 )
          KeBugCheckEx(0x3Eu, BugCheckParameter1, v6, 0LL, 0LL);
      }
      if ( KiAmdTprLowerInterruptDelayConfig == 1 )
      {
        v6 = __readmsr(0xC0010015) | 0x100000000LL;
        __writemsr(0xC0010015, v6);
      }
      else if ( !a2 )
      {
        KiTrapFeatures |= 0x10uLL;
      }
    }
  }
  return v6;
}
