/*
 * XREFs of LdrpCheckComponentOnDemandEtwEvent @ 0x1800DBCCC
 * Callers:
 *     LdrpMapDllNtFileName @ 0x1800833B0 (LdrpMapDllNtFileName.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     EtwEventWriteNoRegistration @ 0x1800CE520 (EtwEventWriteNoRegistration.c)
 *     CompatCachepLookupCdb @ 0x1800DBFE0 (CompatCachepLookupCdb.c)
 *     LdrpIsCODServiceEnabled @ 0x18015D530 (LdrpIsCODServiceEnabled.c)
 *     NtWaitForSingleObject @ 0x18015EFC0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwCreateEvent @ 0x18015F840 (ZwCreateEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

char __fastcall LdrpCheckComponentOnDemandEtwEvent(unsigned __int16 *a1)
{
  _QWORD *pShimData; // rbx
  int v3; // esi
  wchar_t *v4; // rcx
  char v5; // di
  __int64 v6; // rdx
  int v7; // eax
  char v9; // [rsp+20h] [rbp-60h]
  HANDLE Handle; // [rsp+30h] [rbp-50h] BYREF
  int UniqueProcess; // [rsp+38h] [rbp-48h] BYREF
  int v12; // [rsp+3Ch] [rbp-44h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v14[5]; // [rsp+48h] [rbp-38h] BYREF
  int v15; // [rsp+70h] [rbp-10h]
  int v16; // [rsp+74h] [rbp-Ch]

  Handle = 0LL;
  Timeout.QuadPart = 0LL;
  v12 = 1;
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
        v9 = 0;
        if ( (int)ZwCreateEvent(&Handle, 2031619LL, 0LL, 0LL, v9) >= 0 )
        {
          RtlAcquireSRWLockExclusive(&LdrpCODScenarioLock, v6);
          v3 = 1;
          v5 = 1;
          if ( !LdrpCODScenarioTriggered )
          {
            pShimData[559] = Handle;
            LdrpCODScenarioTriggered = 1;
            v14[0] = &UniqueProcess;
            v14[1] = 4LL;
            v14[2] = &v12;
            v14[4] = *((_QWORD *)a1 + 1);
            v7 = *a1 + 2;
            v14[3] = 4LL;
            v15 = v7;
            v16 = 0;
            if ( !(unsigned int)EtwEventWriteNoRegistration(
                                  (__int64)&UserLoaderGuid,
                                  &ComponentOnDemand,
                                  3,
                                  (__int64)v14) )
            {
              Timeout.QuadPart = -100000000LL;
              NtWaitForSingleObject(Handle, 0, &Timeout);
            }
          }
        }
      }
    }
  }
  if ( Handle )
  {
    NtClose(Handle);
    pShimData[559] = 0LL;
  }
  if ( v3 )
    RtlReleaseSRWLockExclusive(&LdrpCODScenarioLock);
  return v5;
}
