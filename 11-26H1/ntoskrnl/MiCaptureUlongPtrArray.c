/*
 * XREFs of MiCaptureUlongPtrArray @ 0x14087EB38
 * Callers:
 *     NtFreeUserPhysicalPages @ 0x14087F7C0 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x14087FCE0 (NtMapUserPhysicalPagesScatter.c)
 *     NtMapUserPhysicalPages @ 0x140B3C1D0 (NtMapUserPhysicalPages.c)
 * Callees:
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiCaptureUlongPtrArray(char *a1, void *a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v5; // edi
  char PreviousMode; // r9
  _KPROCESS *Process; // rcx
  __int16 v8; // ax
  size_t v10; // r8
  char *v11; // rdx
  char *i; // r8
  __int64 v13; // rcx

  v3 = a3;
  v5 = 8;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[1].ReadyTime )
    {
      v8 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( v8 == 332 || v8 == 452 )
        v5 = 4;
    }
  }
  v10 = a3 * v5;
  if ( v10 && ((v5 - 1) & (unsigned int)a2) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( PreviousMode )
    RtlCopyFromUser(a1, a2, v10);
  else
    RtlCopyVolatileMemory(a1, a2, v10);
  if ( v5 == 4 )
  {
    v11 = &a1[8 * v3];
    for ( i = &a1[4 * v3]; v3; --v3 )
    {
      v11 -= 8;
      i -= 4;
      v13 = *(unsigned int *)i;
      if ( (v13 & 0xFFFFFFFF80000000uLL) != 0 )
      {
        LODWORD(v13) = v13 & 0x7FFFFFFF;
        v13 |= 0x8000000000000000uLL;
      }
      *(_QWORD *)v11 = v13;
    }
  }
  return 0LL;
}
