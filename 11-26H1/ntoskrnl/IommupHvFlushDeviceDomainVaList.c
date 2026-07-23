/*
 * XREFs of IommupHvFlushDeviceDomainVaList @ 0x1405A0B38
 * Callers:
 *     IommuFlushDomainVaList @ 0x140789B60 (IommuFlushDomainVaList.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IommupHvFlushDeviceDomainVaList(int a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  if ( !(_BYTE)a2 )
    return 3221225659LL;
  LODWORD(v4) = a1;
  HIDWORD(v4) = (unsigned __int8)a2;
  return guard_dispatch_icall_no_overrides((__int64 *)va, a2);
}
