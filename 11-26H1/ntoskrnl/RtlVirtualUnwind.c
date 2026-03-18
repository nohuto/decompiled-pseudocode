/*
 * XREFs of RtlVirtualUnwind @ 0x14052B970
 * Callers:
 *     RtlUnwindEx @ 0x1402E8510 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x1403D5F30 (RtlDispatchException.c)
 *     RtlRaiseException @ 0x140619230 (RtlRaiseException.c)
 * Callees:
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAX27@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x14052B9F4 (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 */

__int64 __fastcall RtlVirtualUnwind(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  _QWORD v9[5]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v10; // [rsp+A8h] [rbp+20h] BYREF

  v9[2] = a8;
  v10 = 0LL;
  v9[0] = 0LL;
  v9[1] = 0LL;
  RtlpxVirtualUnwind<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT *>(
    a1,
    a2,
    a3,
    a4,
    a5,
    0LL,
    a6,
    a7,
    (__int64)&v10,
    (__int64)v9,
    0,
    0LL);
  return v10;
}
