/*
 * XREFs of RtlVirtualUnwind @ 0x1800B1590
 * Callers:
 *     RtlRaiseException @ 0x18002B180 (RtlRaiseException.c)
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 *     __report_gsfailure @ 0x180126750 (__report_gsfailure.c)
 * Callees:
 *     RtlpSanitizeContext @ 0x1800B1F10 (RtlpSanitizeContext.c)
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAX27@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x18014B9DC (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 */

PEXCEPTION_ROUTINE __stdcall RtlVirtualUnwind(ULONG HandlerType, ULONG64 ImageBase, ULONG64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PULONG64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)
{
  PCONTEXT v8; // rbx
  int v10; // edi
  int v11; // esi
  int v12; // ebp
  _QWORD v14[4]; // [rsp+60h] [rbp-38h] BYREF
  EXCEPTION_DISPOSITION (__cdecl *v15)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+B8h] [rbp+20h] BYREF

  v8 = ContextRecord;
  v15 = 0LL;
  v10 = (int)FunctionEntry;
  v14[0] = 0LL;
  v11 = ControlPc;
  v14[1] = 0LL;
  v12 = ImageBase;
  RtlpSanitizeContext(ContextRecord);
  v14[2] = ContextPointers;
  RtlpxVirtualUnwind<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT *>(
    HandlerType,
    v12,
    v11,
    v10,
    (__int64)v8,
    0LL,
    (__int64)HandlerData,
    (__int64)EstablisherFrame,
    (__int64)&v15,
    (__int64)v14,
    0,
    0LL);
  return v15;
}
