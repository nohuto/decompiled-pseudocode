/*
 * XREFs of ?NdisPDReportECIteration@@YAXPEAUPD_EC_HANDLE__@@E@Z @ 0x1400A69E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisPDUpdateQDepthCounter@@YAXPEAUNDIS_PD_EC@@@Z @ 0x1400A7224 (-ndisPDUpdateQDepthCounter@@YAXPEAUNDIS_PD_EC@@@Z.c)
 */

void __fastcall NdisPDReportECIteration(struct PD_EC_HANDLE__ *a1, char a2)
{
  bool v2; // zf
  struct _KTHREAD *v5; // r9
  ULONG CurrentProcessorNumber; // eax
  ULONG64 v7; // rax
  unsigned __int64 v8; // rdx
  ULONG64 v9; // rcx
  unsigned __int64 CycleTimeStamp; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a1 + 34) == 0;
  CycleTimeStamp = 0LL;
  if ( !v2 )
    ndisPDUpdateQDepthCounter(a1);
  if ( *((_DWORD *)a1 + 9) )
  {
    v5 = (struct _KTHREAD *)*((_QWORD *)a1 + 3);
    if ( v5 != KeGetCurrentThread() )
      ndisBugCheckEx(0x23uLL, 1uLL, *((_QWORD *)a1 + 2), (ULONG_PTR)v5);
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    ++*((_DWORD *)a1 + 15);
    *((_DWORD *)a1 + 14) = CurrentProcessorNumber;
    if ( a2 )
      ++*((_DWORD *)a1 + 16);
    v7 = KeQueryTotalCycleTimeThread(KeGetCurrentThread(), &CycleTimeStamp);
    v8 = CycleTimeStamp - *((_QWORD *)a1 + 10);
    *((_QWORD *)a1 + 10) = CycleTimeStamp;
    v9 = v7 - *((_QWORD *)a1 + 11);
    *((_QWORD *)a1 + 11) = v7;
    if ( v8 > v9 )
      *((_QWORD *)a1 + 14) += v8 - v9;
    if ( a2 )
      *((_QWORD *)a1 + 13) += v9;
    else
      *((_QWORD *)a1 + 12) += v9;
  }
}
