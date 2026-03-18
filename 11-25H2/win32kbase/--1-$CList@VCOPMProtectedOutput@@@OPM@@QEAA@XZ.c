/*
 * XREFs of ??1?$CList@VCOPMProtectedOutput@@@OPM@@QEAA@XZ @ 0x14006D8DC
 * Callers:
 *     ??1COPM@@QEAA@XZ @ 0x14006D858 (--1COPM@@QEAA@XZ.c)
 * Callees:
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x140083440 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall OPM::CList<COPMProtectedOutput>::~CList<COPMProtectedOutput>(__int64 a1, void *a2)
{
  __int64 i; // rdi
  void (__fastcall ***v4)(_QWORD, __int64); // rcx

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 12); i = (unsigned int)(i + 1) )
  {
    v4 = *(void (__fastcall ****)(_QWORD, __int64))(*(_QWORD *)a1 + 8 * i);
    if ( v4 )
    {
      (**v4)(v4, 1LL);
      *(_QWORD *)(*(_QWORD *)a1 + 8 * i) = 0LL;
    }
  }
  OPM::OPMFreeMemory(*(OPM **)a1, a2);
}
