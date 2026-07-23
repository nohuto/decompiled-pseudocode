/*
 * XREFs of KsepRegistryQueryDWORD @ 0x1407C2098
 * Callers:
 *     KsepEngineReadFlags @ 0x140D0E4EC (KsepEngineReadFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlAssert @ 0x14061CB00 (RtlAssert.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 */

NTSTATUS __fastcall KsepRegistryQueryDWORD(HANDLE KeyHandle, PCWSTR SourceString, _DWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-60h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-50h] BYREF
  int v12; // [rsp+4Ch] [rbp-4Ch]
  int v13; // [rsp+50h] [rbp-48h]
  int v14; // [rsp+54h] [rbp-44h]

  DestinationString = 0LL;
  if ( !KeyHandle )
  {
    v6 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount, 1u)
        + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v6) = -1073740768;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v6) = 262788;
    if ( ((__int64)stru_140E66D40.StackBase & 4) != 0 )
      RtlAssert("KeyHandle != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x284u, 0LL);
  }
  if ( !a3 )
  {
    v7 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount, 1u)
        + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v7) = -1073740768;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v7) = 262789;
    if ( ((__int64)stru_140E66D40.StackBase & 4) != 0 )
      RtlAssert("Value != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x285u, 0LL);
  }
  *a3 = 0;
  ResultLength = 20;
  RtlInitUnicodeString(&DestinationString, SourceString);
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength);
  if ( !result )
  {
    if ( v13 == 4 && v12 == 4 )
      *a3 = v14;
    else
      return -1073741788;
  }
  return result;
}
