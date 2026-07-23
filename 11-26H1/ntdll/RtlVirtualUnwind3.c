/*
 * XREFs of RtlVirtualUnwind3 @ 0x18014CB08
 * Callers:
 *     RtlVirtualUnwind2 @ 0x180035390 (RtlVirtualUnwind2.c)
 * Callees:
 *     RtlpSanitizeContext @ 0x1800B1F10 (RtlpSanitizeContext.c)
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAX27@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x18014B9DC (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 */

__int64 __fastcall RtlVirtualUnwind3(
        int a1,
        __int64 a2,
        char *a3,
        __int64 a4,
        _DWORD *a5,
        char *a6,
        _QWORD *a7,
        __int64 *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 *a12,
        int a13)
{
  _QWORD v18[4]; // [rsp+60h] [rbp-28h] BYREF

  if ( a13 )
    return 3221225485LL;
  RtlpSanitizeContext(a5);
  v18[2] = a9;
  v18[0] = a10;
  v18[1] = a11;
  return RtlpxVirtualUnwind<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT *>(
           a1,
           a2,
           a3,
           a4,
           (__int64)a5,
           a6,
           a7,
           a8,
           a12,
           (__int64)v18,
           0,
           0LL);
}
