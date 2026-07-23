/*
 * XREFs of SpcDetectKvaLeakage @ 0x140C0808C
 * Callers:
 *     KiDetectKvaLeakage @ 0x1405F9AC0 (KiDetectKvaLeakage.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     SpcIsFbClearSupported @ 0x140722F18 (SpcIsFbClearSupported.c)
 *     SpcIsHyperVCr3RspErrataPresent @ 0x140722F40 (SpcIsHyperVCr3RspErrataPresent.c)
 *     RtlGetCpuMaxPhysicalBits @ 0x140C04F34 (RtlGetCpuMaxPhysicalBits.c)
 *     RtlGetProcessorSignature @ 0x140C050BC (RtlGetProcessorSignature.c)
 */

unsigned __int64 __fastcall SpcDetectKvaLeakage(ULONG_PTR BugCheckParameter2, _BYTE *a2)
{
  ULONG_PTR v2; // rdi
  unsigned __int64 result; // rax
  __int64 v5; // rcx
  char v14; // dl
  char v15; // dl
  int v16[8]; // [rsp+30h] [rbp-20h] BYREF
  char v17; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v18; // [rsp+88h] [rbp+38h] BYREF

  v2 = (unsigned int)BugCheckParameter2;
  v17 = 0;
  v16[0] = 0;
  v18 = 0;
  result = RtlGetProcessorSignature(&v17, v16, (int *)&v18, 0LL);
  if ( v17 == 2 )
  {
    if ( v16[0] == 6 && v18 <= 0x36 )
    {
      result = v18;
      v5 = 0x6000C010000000LL;
      if ( _bittest64(&v5, v18) )
        goto LABEL_15;
    }
  }
  else if ( v17 != 3 || v16[0] == 6 && v18 == 13 )
  {
    goto LABEL_15;
  }
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)result < 7 )
    goto LABEL_35;
  _RAX = 7LL;
  __asm { cpuid }
  if ( (_RDX & 0x20000000) == 0 || (result = __readmsr(0x10Au), (result & 1) == 0) )
  {
LABEL_35:
    if ( !(_DWORD)v2 )
    {
LABEL_27:
      if ( !WheapPfaLock.SchedulerAssistPriorityFloor )
        WheapPfaLock.SchedulerAssistPriorityFloor = 2;
      goto LABEL_29;
    }
LABEL_36:
    if ( !WheapPfaLock.SchedulerAssistPriorityFloor )
      KeBugCheckEx(0x5Du, 0x4B56414CuLL, 0LL, 0LL, 0LL);
    goto LABEL_29;
  }
  KiMicrocodeTrackerEnabled = 1;
  result = 3670016LL;
  v14 = (KeFeatureBits2 & 0x28) == 8;
  if ( (KeFeatureBits2 & 0x380000) != 0x380000 )
  {
    result = SpcIsFbClearSupported();
    v14 = result | v15;
  }
  if ( v14 )
  {
    if ( !(_DWORD)v2 )
    {
      WheapPfaLock.SchedulerAssistPriorityFloor = 1;
      goto LABEL_27;
    }
    goto LABEL_36;
  }
LABEL_15:
  if ( *a2 )
  {
    WheapPfaLock.SchedulerAssistPriorityFloor = 1;
  }
  else if ( (_DWORD)v2 || (result = SpcIsHyperVCr3RspErrataPresent(), (_DWORD)result) || a2[4] || !a2[2] && !a2[1] )
  {
    if ( !LOBYTE(WheapPfaLock.RealtimePriorityFloor) )
      return result;
  }
  else
  {
    LOBYTE(WheapPfaLock.RealtimePriorityFloor) = 1;
  }
LABEL_29:
  if ( v17 != 2 || (KeFeatureBits2 & 0x10) != 0 )
  {
    if ( !(_DWORD)v2 )
      LODWORD(gLoadedDiffHivesLock.StackBase) = -1;
  }
  else
  {
    result = RtlGetCpuMaxPhysicalBits();
    if ( (_DWORD)v2 )
    {
      if ( (_DWORD)result != LODWORD(gLoadedDiffHivesLock.StackBase) && !LOBYTE(WheapPfaLock.RealtimePriorityFloor) )
        KeBugCheckEx(0x5Du, 0x4C315446uLL, v2, (int)result, SLODWORD(gLoadedDiffHivesLock.StackBase));
    }
    else
    {
      LODWORD(gLoadedDiffHivesLock.StackBase) = result;
    }
  }
  return result;
}
