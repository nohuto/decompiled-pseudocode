/*
 * XREFs of ExpSetTimeZoneInformation @ 0x1408395BC
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x14080AC68 (RtlpSetTimeZoneInformationWorker.c)
 *     ExpReadSiloTimeZoneMarker @ 0x14083C4A4 (ExpReadSiloTimeZoneMarker.c)
 *     NtSetSystemTime @ 0x14083C8F0 (NtSetSystemTime.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     RtlWriteRegistryValue @ 0x140A10F00 (RtlWriteRegistryValue.c)
 *     ExAcquireTimeRefreshLockShared @ 0x140A910A0 (ExAcquireTimeRefreshLockShared.c)
 *     ExReleaseTimeRefreshLockShared @ 0x140A91120 (ExReleaseTimeRefreshLockShared.c)
 */

NTSTATUS __fastcall ExpSetTimeZoneInformation(void *Src, int a2)
{
  char SiloTimeZoneMarker; // si
  __int64 v5; // rdi
  struct _LIST_ENTRY *Blink; // rcx
  wchar_t *v7; // rax
  NTSTATUS result; // eax
  int v9; // ebx
  _DWORD ValueData[4]; // [rsp+30h] [rbp-388h] BYREF
  wchar_t v11[86]; // [rsp+40h] [rbp-378h] BYREF
  _BYTE v12[260]; // [rsp+ECh] [rbp-2CCh] BYREF
  wchar_t v13[216]; // [rsp+1F0h] [rbp-1C8h] BYREF

  memset_0(v11, 0, 0x1B0uLL);
  memset_0(v13, 0, sizeof(v13));
  SiloTimeZoneMarker = 0;
  if ( a2 == 172 )
  {
    v5 = 3LL;
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlCopyFromUser(v11, Src, 0xACuLL);
    memset_0(v12, 0, 0x100uLL);
    v12[256] = 1;
  }
  else
  {
    if ( a2 != 432 )
      return -1073741820;
    v5 = 3LL;
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlCopyFromUser(v11, Src, 0x1B0uLL);
  }
  ExAcquireTimeRefreshLockShared();
  Blink = PsGetCurrentServerSiloGlobals()[76].Blink;
  v7 = v13;
  do
  {
    *(struct _LIST_ENTRY *)v7 = *Blink;
    *((struct _LIST_ENTRY *)v7 + 1) = Blink[1];
    *((struct _LIST_ENTRY *)v7 + 2) = Blink[2];
    *((struct _LIST_ENTRY *)v7 + 3) = Blink[3];
    *((struct _LIST_ENTRY *)v7 + 4) = Blink[4];
    *((struct _LIST_ENTRY *)v7 + 5) = Blink[5];
    *((struct _LIST_ENTRY *)v7 + 6) = Blink[6];
    v7 += 64;
    *((struct _LIST_ENTRY *)v7 - 1) = Blink[7];
    Blink += 8;
    --v5;
  }
  while ( v5 );
  *(struct _LIST_ENTRY *)v7 = *Blink;
  *((struct _LIST_ENTRY *)v7 + 1) = Blink[1];
  *((struct _LIST_ENTRY *)v7 + 2) = Blink[2];
  ExReleaseTimeRefreshLockShared(Blink, 128LL);
  if ( !PsIsCurrentThreadInServerSilo()
    || (SiloTimeZoneMarker = ExpReadSiloTimeZoneMarker()) != 0
    || (ValueData[0] = 1,
        result = RtlWriteRegistryValue(2u, L"TimeZoneInformation", L"SiloTimeZoneMarker", 4u, ValueData, 4u),
        result >= 0) )
  {
    v9 = RtlpSetTimeZoneInformationWorker(v11, 0x1B0u);
    if ( v9 >= 0 )
      v9 = NtSetSystemTime(0LL, 0LL);
    if ( v9 < 0 )
    {
      RtlpSetTimeZoneInformationWorker(v13, 0x1B0u);
      if ( PsIsCurrentThreadInServerSilo() && !SiloTimeZoneMarker )
      {
        ValueData[0] = 0;
        RtlWriteRegistryValue(2u, L"TimeZoneInformation", L"SiloTimeZoneMarker", 4u, ValueData, 4u);
      }
    }
    return v9;
  }
  return result;
}
