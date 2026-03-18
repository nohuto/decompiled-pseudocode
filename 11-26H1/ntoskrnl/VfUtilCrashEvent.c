/*
 * XREFs of VfUtilCrashEvent @ 0x14064073C
 * Callers:
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 * Callees:
 *     <none>
 */

char __fastcall VfUtilCrashEvent(__int64 a1)
{
  __int64 v1; // rdx
  char v3; // r9
  __int64 v4; // r10

  v1 = 0LL;
  if ( !a1 )
    return 0;
  if ( !(_DWORD)VfRuleClassesRecord || !VfBugcheckTmpData )
    return 0;
  *(_DWORD *)a1 = VfBugcheckTmpData;
  v3 = 1;
  *(_QWORD *)(a1 + 8) = BugCheckParameter1;
  *(_QWORD *)(a1 + 16) = qword_140FEFED8;
  v4 = 2LL;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)&xmmword_140FEFEE0;
  do
  {
    *(_DWORD *)(v1 + *(_QWORD *)(a1 + 40)) = *(_DWORD *)((char *)&VfRuleClassesRecord + v1);
    v1 += 4LL;
    --v4;
  }
  while ( v4 );
  *(_DWORD *)(a1 + 48) = VfOptionFlags;
  *(_DWORD *)(a1 + 52) = VfFlightOptions;
  *(_DWORD *)(a1 + 56) = VfTriageContext;
  return v3;
}
