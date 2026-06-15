/*
 * XREFs of ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x180064B78
 * Callers:
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800223A4 (--1CPerfTracker@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAPOWrapperClient@@QEAAJPEBGW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@AEBU_GUID@@@Z @ 0x1800BA6B8 (-RuntimeClassInitialize@CAPOWrapperClient@@QEAAJPEBGW4__MIDL___MIDL_itf_audioenginecore_0000_000.c)
 * Callees:
 *     _vsnprintf @ 0x1800B33C0 (_vsnprintf.c)
 */

__int64 StringCchPrintfA(char *a1, __int64 a2, const char *a3, ...)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebx
  int v6; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    v5 = -2147024809;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v4 = a2 - 1;
    v5 = 0;
    v6 = vsnprintf(a1, a2 - 1, a3, va);
    if ( v6 < 0 )
      goto LABEL_9;
    if ( v6 == v4 )
    {
      a1[v4] = 0;
      return v5;
    }
    if ( v6 > v4 )
    {
LABEL_9:
      a1[v4] = 0;
      return (unsigned int)-2147024774;
    }
  }
  return v5;
}
