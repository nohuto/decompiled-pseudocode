/*
 * XREFs of PerfDiagpStartPerfDiagLogger @ 0x1408252B4
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140825080 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlStringCbCatW @ 0x14041D8F0 (RtlStringCbCatW.c)
 *     RtlStringCbCopyW @ 0x14041DAC0 (RtlStringCbCopyW.c)
 *     PerfDiagpIsTracingAllowed @ 0x140B3CFFC (PerfDiagpIsTracingAllowed.c)
 *     EtwStartAutoLogger @ 0x140B44338 (EtwStartAutoLogger.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PerfDiagpStartPerfDiagLogger(NTSTRSAFE_PCWSTR pszSrc)
{
  __int64 v1; // rax
  size_t v3; // rsi
  wchar_t *Pool2; // rax
  wchar_t *v5; // rdi
  unsigned int started; // ebx

  v1 = -1LL;
  do
    ++v1;
  while ( pszSrc[v1] );
  v3 = (unsigned int)(2 * v1 + 104);
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  v5 = Pool2;
  if ( Pool2 )
  {
    RtlStringCbCopyW(Pool2, v3, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\");
    RtlStringCbCatW(v5, v3, pszSrc);
    if ( (unsigned int)PerfDiagpIsTracingAllowed() )
    {
      *(LIST_ENTRY *)((char *)&stru_140F042A0.Header.WaitListHead + 4) = *(LIST_ENTRY *)L"PerfDiag Logger";
      *(_OWORD *)((char *)&stru_140F042A0.SListFaultAddress + 4) = *(_OWORD *)L" Logger";
      started = EtwStartAutoLogger((PCWSTR)&stru_140F042A0.Header.WaitListHead.Flink + 2);
    }
    else
    {
      started = -1073741823;
    }
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return started;
}
