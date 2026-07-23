/*
 * XREFs of HalpPerfInterrupt @ 0x140486E90
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpPerfInterrupt(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  char v3; // di
  __int64 v4; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax

  v2 = *(_QWORD *)(a1 + 136);
  v3 = 0;
  if ( HalpProfileInterface == &EmonProfileInterface && (HalpProfileFeatures & 1) != 0 )
  {
    v6 = __readmsr(0x38Eu);
    a2 = (unsigned __int64)HIDWORD(v6) << 32;
    if ( (v6 & 0x80000000000000LL) != 0 )
    {
      if ( (_BYTE)KdDebuggerNotPresent )
      {
        v7 = __readmsr(0x570u);
        a2 = (unsigned __int64)HIDWORD(v7) << 32;
        if ( (v7 & 0x111100000000LL) != 0 )
          KeBugCheckEx(0x17Bu, 0LL, 0x570uLL, __readmsr(0x570u), 0x111100000000uLL);
      }
      if ( HalpProfileInterface[13] )
      {
        guard_dispatch_icall_no_overrides(v2, a2);
        v3 = 1;
      }
      if ( HalpProcessorTraceInterruptHandler )
        guard_dispatch_icall_no_overrides(v2, a2);
    }
  }
  if ( HalpProfileInterface[13] && !v3 )
    guard_dispatch_icall_no_overrides(v2, a2);
  if ( HalpPerfInterruptHandler )
  {
    guard_dispatch_icall_no_overrides(v2, a2);
  }
  else
  {
    guard_dispatch_icall_no_overrides(v2, a2);
    guard_dispatch_icall_no_overrides(0LL, v4);
  }
  return 1;
}
