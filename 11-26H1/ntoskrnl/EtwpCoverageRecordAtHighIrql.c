/*
 * XREFs of EtwpCoverageRecordAtHighIrql @ 0x1406CA5DC
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x140B0F758 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     EtwTelemetryCoverageReport @ 0x140486B20 (EtwTelemetryCoverageReport.c)
 *     RtlStringCchCopyA @ 0x140486D18 (RtlStringCchCopyA.c)
 *     EtwpCoverageValidateCP @ 0x140486D7C (EtwpCoverageValidateCP.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpCoverageRecordAtHighIrql(char **a1)
{
  __int64 result; // rax
  char *v3; // xmm1_8
  unsigned __int8 CurrentIrql; // bl
  int v5; // [rsp+20h] [rbp-78h] BYREF
  __int128 v6; // [rsp+28h] [rbp-70h] BYREF
  char *v7; // [rsp+38h] [rbp-60h]
  char pszDest[64]; // [rsp+40h] [rbp-58h] BYREF

  v5 = 0;
  result = EtwpCoverageValidateCP(a1, &v5);
  if ( (_DWORD)result )
  {
    v3 = a1[2];
    v6 = *(_OWORD *)a1;
    v7 = v3;
    RtlStringCchCopyA(pszDest, 0x40uLL, (NTSTRSAFE_PCSTR)v6);
    HIDWORD(v6) = 0;
    *(_QWORD *)&v6 = pszDest;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    EtwTelemetryCoverageReport(&v6);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    result = HIDWORD(v6);
    *((_DWORD *)a1 + 3) = HIDWORD(v6);
  }
  return result;
}
