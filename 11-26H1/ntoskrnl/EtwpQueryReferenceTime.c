/*
 * XREFs of EtwpQueryReferenceTime @ 0x14082F230
 * Callers:
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     EtwpReleaseLoggerContext @ 0x1409194B8 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpQueryReferenceTime(__int64 a1, __int64 a2, _OWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  unsigned int v6; // ebx

  if ( (_DWORD)a2 == 0xFFFF )
    a2 = *(unsigned __int8 *)(a1 + 4504);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = EtwpAcquireLoggerContextByLoggerId(a1, a2, 0LL);
  v6 = 0;
  if ( v5 )
  {
    *a3 = *(_OWORD *)(v5 + 304);
    EtwpReleaseLoggerContext(v5, 0LL);
  }
  else
  {
    v6 = -1073741162;
  }
  KeLeaveCriticalRegion();
  return v6;
}
