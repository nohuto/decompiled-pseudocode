/*
 * XREFs of RtlVirtualUnwind @ 0x14052DE90
 * Callers:
 *     RtlUnwindEx @ 0x1402CA550 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x1403D8F00 (RtlDispatchException.c)
 *     RtlRaiseException @ 0x14061C280 (RtlRaiseException.c)
 * Callees:
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAX27@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x14052DF14 (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 */

PEXCEPTION_ROUTINE __cdecl RtlVirtualUnwind(DWORD HandlerType, DWORD64 ImageBase, DWORD64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PDWORD64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)
{
  _QWORD v9[5]; // [rsp+60h] [rbp-28h] BYREF
  EXCEPTION_DISPOSITION (__cdecl *v10)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+A8h] [rbp+20h] BYREF

  v9[2] = ContextPointers;
  v10 = 0LL;
  v9[0] = 0LL;
  v9[1] = 0LL;
  RtlpxVirtualUnwind<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT *>(
    HandlerType,
    ImageBase,
    ControlPc,
    (_DWORD)FunctionEntry,
    (__int64)ContextRecord,
    0LL,
    (__int64)HandlerData,
    (__int64)EstablisherFrame,
    (__int64)&v10,
    (__int64)v9,
    0,
    0LL);
  return v10;
}
