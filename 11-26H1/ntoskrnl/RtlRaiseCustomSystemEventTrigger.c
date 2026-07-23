/*
 * XREFs of RtlRaiseCustomSystemEventTrigger @ 0x1406227E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x14072ADE0 (ZwQueryWnfStateData.c)
 *     ZwQueryWnfStateNameInformation @ 0x14072AE00 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     RtlpCtAllocateMemory @ 0x14080EB24 (RtlpCtAllocateMemory.c)
 *     RtlpCtContextFree @ 0x14080EB48 (RtlpCtContextFree.c)
 *     RtlpCtContextInit @ 0x14080EBA8 (RtlpCtContextInit.c)
 *     RtlpCtFreeMemory @ 0x14080ECC4 (RtlpCtFreeMemory.c)
 *     RtlpCtQueueWorkItem @ 0x14080ECE0 (RtlpCtQueueWorkItem.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 */

DWORD __cdecl RtlRaiseCustomSystemEventTrigger(PCUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG TriggerConfig)
{
  signed int updated; // ebx
  _DWORD *Buffer; // rdi
  ULONG BufferSize; // [rsp+48h] [rbp-9h] BYREF
  int InfoBuffer; // [rsp+4Ch] [rbp-5h] BYREF
  ULONG ChangeStamp; // [rsp+50h] [rbp-1h] BYREF
  PVOID P; // [rsp+58h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp+Fh] BYREF
  WNF_STATE_NAME StateName; // [rsp+70h] [rbp+1Fh] BYREF
  GUID Guid; // [rsp+78h] [rbp+27h] BYREF

  StateName = (WNF_STATE_NAME)WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED;
  InfoBuffer = 0;
  ChangeStamp = 0;
  P = 0LL;
  DestinationString = 0LL;
  Guid = 0LL;
  if ( TriggerConfig )
  {
    RtlInitUnicodeString(&DestinationString, TriggerConfig->TriggerId);
    updated = RtlGUIDFromString(&DestinationString, &Guid);
    if ( updated < 0 )
      return updated;
    if ( _InterlockedExchange((volatile __int32 *)&NormalizationListLock.SListFaultAddress, 1) )
      return -1073741823;
    BufferSize = 4096;
    Buffer = (_DWORD *)RtlpCtAllocateMemory(4096LL);
    if ( Buffer )
    {
      updated = ZwQueryWnfStateData(&StateName, 0LL, 0LL, &ChangeStamp, Buffer, &BufferSize);
      if ( updated >= 0 )
      {
        updated = ZwQueryWnfStateNameInformation(&StateName, WnfInfoIsQuiescent, 0LL, &InfoBuffer, 4u);
        if ( updated >= 0 )
        {
          if ( InfoBuffer )
          {
            updated = ZwQueryWnfStateNameInformation(&StateName, WnfInfoSubscribersPresent, 0LL, &InfoBuffer, 4u);
            if ( updated >= 0 )
            {
              if ( InfoBuffer )
              {
                BufferSize = 4096;
                if ( Buffer == (_DWORD *)-8LL )
                {
                  updated = -1073741811;
                }
                else
                {
                  *(_OWORD *)(Buffer + 2) = 0LL;
                  *(GUID *)(Buffer + 6) = Guid;
                  Buffer[10] = 16;
                  BufferSize = 36;
                  *Buffer = 0;
                  Buffer[1] = -1;
                  *Buffer = 4 * (BufferSize & 0xFFF | 0x100000);
                  updated = RtlpCtContextInit(&P, ChangeStamp);
                  if ( updated >= 0 )
                  {
                    updated = ZwUpdateWnfStateData(&StateName, Buffer, BufferSize + 8, 0LL, 0LL, ChangeStamp, 1u);
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
    if ( !Buffer )
      return updated;
LABEL_23:
    RtlpCtFreeMemory(Buffer);
    return updated;
  }
  return -1073741811;
}
