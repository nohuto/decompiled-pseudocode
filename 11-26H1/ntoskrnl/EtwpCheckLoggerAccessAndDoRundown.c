/*
 * XREFs of EtwpCheckLoggerAccessAndDoRundown @ 0x140A99C44
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x140A99808 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x140A99B60 (EtwpCheckGuidAccessAndDoRundown.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140258A10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     EtwpStackRundown @ 0x14046AEBC (EtwpStackRundown.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCheckLoggerControlAccess @ 0x14097A438 (EtwpCheckLoggerControlAccess.c)
 *     EtwpLogKernelTraceRundown @ 0x140A99D58 (EtwpLogKernelTraceRundown.c)
 *     EtwpLogPmcCounterRundown @ 0x140A9A250 (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpCheckLoggerAccessAndDoRundown(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  unsigned int *v7; // rax
  unsigned int *v8; // rbx
  int v9; // edi
  int v10; // r9d

  v7 = EtwpAcquireLoggerContextByLoggerId(a1, a2, 1);
  v8 = v7;
  if ( v7 )
  {
    v9 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v7);
    if ( v9 >= 0 )
    {
      if ( (v8[3] & 0x2000000) != 0 )
      {
        LOBYTE(v10) = a4;
        EtwpLogKernelTraceRundown(a1, a3, a1 + 32 * *((unsigned __int8 *)v8 + 818) + 4556, v10, 0LL, 0);
      }
      if ( (v8[204] & 0x800) != 0 )
        EtwpLogPmcCounterRundown(v8, a3);
      if ( (v8[204] & 0x1000000) != 0 )
        EtwpStackRundown(*((_QWORD *)v8 + 132), a1, a3);
    }
    KeReleaseMutex((PRKMUTEX)(v8 + 158), 0);
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v8 + 170) + 704LL) + 8LL * *v8),
      1u);
  }
  else
  {
    return (unsigned int)-1073741162;
  }
  return (unsigned int)v9;
}
