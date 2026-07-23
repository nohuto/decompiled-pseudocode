/*
 * XREFs of RtlpValidateContextFlags2 @ 0x1800B1FF0
 * Callers:
 *     RtlUnwindEx @ 0x180033EB0 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x180036C00 (RtlDispatchException.c)
 *     RtlInitializeExtendedContext @ 0x1800B14A0 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1800B1520 (RtlGetExtendedContextLength.c)
 *     RtlGetExtendedContextLength3 @ 0x1800B17C0 (RtlGetExtendedContextLength3.c)
 *     RtlUnwind @ 0x1800B18E0 (RtlUnwind.c)
 *     RtlInitializeExtendedContext2 @ 0x1800B1A60 (RtlInitializeExtendedContext2.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1800B1C70 (RtlWow64GetCpuAreaInfo.c)
 *     RtlpSanitizeContext @ 0x1800B1F10 (RtlpSanitizeContext.c)
 *     RtlpCopyExtendedContext @ 0x180146300 (RtlpCopyExtendedContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpValidateContextFlags2(int a1, int *a2, _QWORD *a3)
{
  int v5; // r11d
  bool v6; // cl

  if ( (a1 & 0x27FFFF80) != 0x10000
    && (a1 & 0x7FFFF20) != 0x100000
    && ((a1 & 0x200000) == 0 || (a1 & 0x7DFFFF0) != 0)
    && (a1 & 0x7FFFF00) != 0x400000 )
  {
    return 3221225485LL;
  }
  v5 = 1;
  v6 = 0;
  if ( (a1 & 0x400020) != 0x400020 )
    v6 = (a1 & 0x10040) != 65600 && (a1 & 0x100040) != 1048640;
  if ( !v6 )
  {
    if ( !*a3 )
      return 3221225659LL;
    v5 = 3;
  }
  if ( (a1 & 0x100080) == 0x100080 )
    return 3221225659LL;
  if ( a2 )
    *a2 = v5;
  return 0LL;
}
