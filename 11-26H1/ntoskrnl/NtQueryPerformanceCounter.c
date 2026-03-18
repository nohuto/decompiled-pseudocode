/*
 * XREFs of NtQueryPerformanceCounter @ 0x140A8E4E0
 * Callers:
 *     DifNtQueryPerformanceCounterWrapper @ 0x140684E50 (DifNtQueryPerformanceCounterWrapper.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtQueryPerformanceCounter(_QWORD *a1, _QWORD *a2)
{
  char PreviousMode; // bl
  LARGE_INTEGER v5; // rax
  LARGE_INTEGER Src[2]; // [rsp+28h] [rbp-10h] BYREF
  LARGE_INTEGER v8; // [rsp+58h] [rbp+20h] BYREF

  v8.QuadPart = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = KeQueryPerformanceCounter(&v8);
  Src[0] = v5;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      goto LABEL_3;
    RtlWriteULong64ToUser(a1, v5.QuadPart);
  }
  else
  {
    RtlCopyVolatileMemory(a1, Src, 8uLL);
  }
  if ( a2 )
  {
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)a2 & 3) != 0 )
LABEL_3:
        ExRaiseDatatypeMisalignment();
      RtlWriteULong64ToUser(a2, v8.QuadPart);
    }
    else
    {
      RtlCopyVolatileMemory(a2, &v8, 8uLL);
    }
  }
  return 0LL;
}
