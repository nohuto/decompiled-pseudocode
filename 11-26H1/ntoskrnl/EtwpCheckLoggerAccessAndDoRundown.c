/*
 * XREFs of EtwpCheckLoggerAccessAndDoRundown @ 0x140A6F5B8
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x140A6D54C (EtwpEnableDisableSpecialGuids.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x140A6D8A4 (EtwpCheckGuidAccessAndDoRundown.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140257080 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     EtwpStackRundown @ 0x14047173C (EtwpStackRundown.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14091EFC0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCheckLoggerControlAccess @ 0x140A6FAA4 (EtwpCheckLoggerControlAccess.c)
 *     EtwpLogKernelTraceRundown @ 0x140A704A4 (EtwpLogKernelTraceRundown.c)
 *     EtwpLogPmcCounterRundown @ 0x140B24C50 (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpCheckLoggerAccessAndDoRundown(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  unsigned int *v7; // rbx
  int v8; // edi
  int v9; // r9d

  v7 = EtwpAcquireLoggerContextByLoggerId(a1, a2, 1);
  if ( v7 )
  {
    v8 = EtwpCheckLoggerControlAccess(0x80u);
    if ( v8 >= 0 )
    {
      if ( (v7[3] & 0x2000000) != 0 )
      {
        LOBYTE(v9) = a4;
        EtwpLogKernelTraceRundown(a1, a3, a1 + 32 * *((unsigned __int8 *)v7 + 818) + 4556, v9, 0LL, 0);
      }
      if ( (v7[204] & 0x800) != 0 )
        EtwpLogPmcCounterRundown(v7, a3);
      if ( (v7[204] & 0x1000000) != 0 )
        EtwpStackRundown(*((_QWORD *)v7 + 132), a1, a3);
    }
    KeReleaseMutex((PRKMUTEX)(v7 + 158), 0);
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v7 + 170) + 704LL) + 8LL * *v7),
      1u);
  }
  else
  {
    return (unsigned int)-1073741162;
  }
  return (unsigned int)v8;
}
