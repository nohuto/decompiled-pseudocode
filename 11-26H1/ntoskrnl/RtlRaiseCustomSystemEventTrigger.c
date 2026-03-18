/*
 * XREFs of RtlRaiseCustomSystemEventTrigger @ 0x14061F790
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x140726210 (ZwQueryWnfStateData.c)
 *     ZwQueryWnfStateNameInformation @ 0x140726230 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     RtlpCtAllocateMemory @ 0x140809094 (RtlpCtAllocateMemory.c)
 *     RtlpCtContextFree @ 0x1408090B8 (RtlpCtContextFree.c)
 *     RtlpCtContextInit @ 0x140809118 (RtlpCtContextInit.c)
 *     RtlpCtFreeMemory @ 0x140809234 (RtlpCtFreeMemory.c)
 *     RtlpCtQueueWorkItem @ 0x140809250 (RtlpCtQueueWorkItem.c)
 *     RtlGUIDFromString @ 0x1409A1880 (RtlGUIDFromString.c)
 */

__int64 __fastcall RtlRaiseCustomSystemEventTrigger(__int64 a1)
{
  NTSTATUS updated; // ebx
  __int64 Memory; // rdi
  int v4; // [rsp+48h] [rbp-9h] BYREF
  int v5; // [rsp+4Ch] [rbp-5h] BYREF
  unsigned int v6; // [rsp+50h] [rbp-1h] BYREF
  PVOID P; // [rsp+58h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v9; // [rsp+70h] [rbp+1Fh] BYREF
  GUID Guid; // [rsp+78h] [rbp+27h] BYREF

  v9 = WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED;
  v5 = 0;
  v6 = 0;
  P = 0LL;
  DestinationString = 0LL;
  Guid = 0LL;
  if ( a1 )
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 8));
    updated = RtlGUIDFromString(&DestinationString, &Guid);
    if ( updated < 0 )
      return (unsigned int)updated;
    if ( _InterlockedExchange((volatile __int32 *)&NormalizationListLock.SListFaultAddress, 1) )
      return (unsigned int)-1073741823;
    v4 = 4096;
    Memory = RtlpCtAllocateMemory(4096LL);
    if ( Memory )
    {
      updated = ZwQueryWnfStateData(&v9, 0LL, 0LL, &v6, Memory, &v4);
      if ( updated >= 0 )
      {
        updated = ZwQueryWnfStateNameInformation(&v9, 2LL, 0LL, &v5, 4);
        if ( updated >= 0 )
        {
          if ( v5 )
          {
            updated = ZwQueryWnfStateNameInformation(&v9, 1LL, 0LL, &v5, 4);
            if ( updated >= 0 )
            {
              if ( v5 )
              {
                v4 = 4096;
                if ( Memory == -8 )
                {
                  updated = -1073741811;
                }
                else
                {
                  *(_OWORD *)(Memory + 8) = 0LL;
                  *(GUID *)(Memory + 24) = Guid;
                  *(_DWORD *)(Memory + 40) = 16;
                  v4 = 36;
                  *(_DWORD *)Memory = 0;
                  *(_DWORD *)(Memory + 4) = -1;
                  *(_DWORD *)Memory = 4 * (v4 & 0xFFF | 0x100000);
                  updated = RtlpCtContextInit(&P, v6);
                  if ( updated >= 0 )
                  {
                    updated = ZwUpdateWnfStateData(&v9, Memory, (unsigned int)(v4 + 8), 0LL, 0LL, v6, 1);
                    if ( updated >= 0 )
                    {
                      RtlpCtQueueWorkItem(*(_QWORD *)P);
                      goto LABEL_23;
                    }
                  }
                  if ( P )
                    RtlpCtContextFree(P);
                }
              }
              else
              {
                updated = -1073741653;
              }
            }
          }
          else
          {
            updated = -1073741823;
          }
        }
      }
    }
    else
    {
      updated = -1073741670;
    }
    _InterlockedExchange((volatile __int32 *)&NormalizationListLock.SListFaultAddress, 0);
    if ( !Memory )
      return (unsigned int)updated;
LABEL_23:
    RtlpCtFreeMemory(Memory);
    return (unsigned int)updated;
  }
  return (unsigned int)-1073741811;
}
