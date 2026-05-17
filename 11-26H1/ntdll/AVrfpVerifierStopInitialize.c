/*
 * XREFs of AVrfpVerifierStopInitialize @ 0x1801201E8
 * Callers:
 *     AVrfInitializeVerifier @ 0x1801163F0 (AVrfInitializeVerifier.c)
 * Callees:
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     LdrGetProcedureAddressEx @ 0x180085BD0 (LdrGetProcedureAddressEx.c)
 *     RtlInitAnsiString @ 0x1800D5DB0 (RtlInitAnsiString.c)
 *     _wcsicmp @ 0x180128F40 (_wcsicmp.c)
 */

__int64 AVrfpVerifierStopInitialize()
{
  __int64 v0; // rbx
  __int64 v1; // rbx
  int ProcedureAddress; // ebx
  STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  v0 = AVrfpVerifierProvidersList;
  DestinationString = 0LL;
  v5 = 0LL;
  while ( 1 )
  {
    if ( (__int64 *)v0 == &AVrfpVerifierProvidersList )
      goto LABEL_10;
    if ( !wcsicmp(*(const wchar_t **)(v0 + 24), L"verifier.dll") )
      break;
    v0 = *(_QWORD *)v0;
  }
  v1 = *(_QWORD *)(*(_QWORD *)(v0 + 32) + 48LL);
  if ( !v1 )
  {
LABEL_10:
    DbgPrint("AVRF: Failed to find verifier.dll among loaded providers! \n");
    return 3221225473LL;
  }
  RtlInitAnsiString(&DestinationString, "VerifierStopMessage");
  ProcedureAddress = LdrGetProcedureAddressEx(v1, (int)&DestinationString, 0, (int)&v5, 0);
  if ( ProcedureAddress >= 0 )
    AVrfpVerifierStopMessageFunction = v5;
  else
    DbgPrint("AVRF: Failed to find `VerifierStopMessage()' export in verifier.dll! \n");
  return (unsigned int)ProcedureAddress;
}
