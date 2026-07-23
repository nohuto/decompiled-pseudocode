/*
 * XREFs of LdrpCheckComponentOnDemandEtwEvent @ 0x1800D8C3C
 * Callers:
 *     LdrpMapDllNtFileName @ 0x18007A750 (LdrpMapDllNtFileName.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     EtwEventWriteNoRegistration @ 0x1800CBC90 (EtwEventWriteNoRegistration.c)
 *     CompatCachepLookupCdb @ 0x1800D8F50 (CompatCachepLookupCdb.c)
 *     LdrpIsCODServiceEnabled @ 0x18015D3F0 (LdrpIsCODServiceEnabled.c)
 *     NtWaitForSingleObject @ 0x18015EEC0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwCreateEvent @ 0x18015F740 (ZwCreateEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

char __fastcall LdrpCheckComponentOnDemandEtwEvent(unsigned __int16 *a1)
{
  _QWORD *pShimData; // rbx
  int v3; // esi
  wchar_t *v4; // rcx
  char v5; // di
  int v6; // eax
  HANDLE EventHandle; // [rsp+30h] [rbp-50h] BYREF
  int UniqueProcess; // [rsp+38h] [rbp-48h] BYREF
  int v10; // [rsp+3Ch] [rbp-44h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-40h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v13; // [rsp+58h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp-20h]
  __int64 v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+70h] [rbp-10h]
  int v17; // [rsp+74h] [rbp-Ch]

  EventHandle = 0LL;
  Timeout.QuadPart = 0LL;
  v10 = 1;
  pShimData = 0LL;
  v3 = 0;
  v4 = (wchar_t *)*((_QWORD *)a1 + 1);
  v5 = 0;
  UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
  if ( (unsigned int)CompatCachepLookupCdb(v4) )
  {
    pShimData = NtCurrentPeb()->pShimData;
    if ( pShimData )
    {
      if ( (unsigned __int8)LdrpIsCODServiceEnabled() )
      {
        if ( ZwCreateEvent(&EventHandle, 0x1F0003u, 0LL, NotificationEvent, 0) >= 0 )
        {
          RtlAcquireSRWLockExclusive(&LdrpCODScenarioLock);
          v3 = 1;
          v5 = 1;
          if ( !LdrpCODScenarioTriggered )
          {
            pShimData[559] = EventHandle;
            LdrpCODScenarioTriggered = 1;
            UserData.Ptr = (unsigned __int64)&UniqueProcess;
            *(_QWORD *)&UserData.Size = 4LL;
            v13 = &v10;
            v15 = *((_QWORD *)a1 + 1);
            v6 = *a1 + 2;
            v14 = 4LL;
            v16 = v6;
            v17 = 0;
            if ( !EtwEventWriteNoRegistration(&UserLoaderGuid, &ComponentOnDemand, 3u, &UserData) )
            {
              Timeout.QuadPart = -100000000LL;
              NtWaitForSingleObject(EventHandle, 0, &Timeout);
            }
          }
        }
      }
    }
  }
  if ( EventHandle )
  {
    NtClose(EventHandle);
    pShimData[559] = 0LL;
  }
  if ( v3 )
    RtlReleaseSRWLockExclusive(&LdrpCODScenarioLock);
  return v5;
}
