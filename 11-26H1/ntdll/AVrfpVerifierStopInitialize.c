/*
 * XREFs of AVrfpVerifierStopInitialize @ 0x18011FF98
 * Callers:
 *     AVrfInitializeVerifier @ 0x180115BD0 (AVrfInitializeVerifier.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     LdrGetProcedureAddressEx @ 0x18007CF70 (LdrGetProcedureAddressEx.c)
 *     RtlInitAnsiString @ 0x1800D2D70 (RtlInitAnsiString.c)
 *     _wcsicmp @ 0x180128CB0 (_wcsicmp.c)
 */

__int64 AVrfpVerifierStopInitialize()
{
  __int64 v0; // rbx
  void *v1; // rbx
  NTSTATUS v2; // ebx
  _STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  PVOID ProcedureAddress; // [rsp+50h] [rbp+8h] BYREF

  v0 = AVrfpVerifierProvidersList;
  DestinationString = 0LL;
  ProcedureAddress = 0LL;
  while ( 1 )
  {
    if ( (__int64 *)v0 == &AVrfpVerifierProvidersList )
      goto LABEL_10;
    if ( !wcsicmp(*(const wchar_t **)(v0 + 24), L"verifier.dll") )
      break;
    v0 = *(_QWORD *)v0;
  }
  v1 = *(void **)(*(_QWORD *)(v0 + 32) + 48LL);
  if ( !v1 )
  {
LABEL_10:
    DbgPrint("AVRF: Failed to find verifier.dll among loaded providers! \n");
    return 3221225473LL;
  }
  RtlInitAnsiString(&DestinationString, "VerifierStopMessage");
  v2 = LdrGetProcedureAddressEx(v1, &DestinationString, 0, &ProcedureAddress, 0);
  if ( v2 >= 0 )
    AVrfpVerifierStopMessageFunction = (__int64)ProcedureAddress;
  else
    DbgPrint("AVRF: Failed to find `VerifierStopMessage()' export in verifier.dll! \n");
  return (unsigned int)v2;
}
