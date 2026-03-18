/*
 * XREFs of RIMCmActivateButtonContact @ 0x1400FA578
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1400FA16C (rimProcessPointerDeviceButtonContact.c)
 * Callees:
 *     RIMCmGetButtonContact @ 0x1400FA6B8 (RIMCmGetButtonContact.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMCmActivateButtonContact(__int64 a1)
{
  __int64 ButtonContact; // rdi
  _QWORD *v3; // rdi
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax

  ButtonContact = RIMCmGetButtonContact(a1);
  if ( (*(_DWORD *)(ButtonContact + 32) & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 436LL);
  if ( *(_DWORD *)(ButtonContact + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 437LL);
  *(_DWORD *)(ButtonContact + 32) |= 6u;
  if ( *(_DWORD *)(a1 + 1016) >= *(_DWORD *)(a1 + 776) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 442LL);
  ++*(_DWORD *)(a1 + 1016);
  ++*(_DWORD *)(a1 + 1020);
  *(_QWORD *)(ButtonContact + 24) = 0LL;
  v3 = (_QWORD *)(ButtonContact + 16);
  *v3 = 0LL;
  v4 = *(__int64 **)(a1 + 1000);
  v5 = *v4;
  if ( *(__int64 **)(*v4 + 8) != v4 )
    __fastfail(3u);
  *v3 = v5;
  v3[1] = v4;
  *(_QWORD *)(v5 + 8) = v3;
  *v4 = (__int64)v3;
  result = *(unsigned int *)(a1 + 1020);
  if ( *(_DWORD *)(a1 + 1016) < (unsigned int)result )
    return MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 453LL);
  return result;
}
