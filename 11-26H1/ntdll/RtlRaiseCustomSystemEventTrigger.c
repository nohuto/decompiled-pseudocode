/*
 * XREFs of RtlRaiseCustomSystemEventTrigger @ 0x1801492A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     TpPostWork @ 0x180088400 (TpPostWork.c)
 *     RtlGUIDFromString @ 0x1800C0070 (RtlGUIDFromString.c)
 *     RtlpCtContextFree @ 0x1801494FC (RtlpCtContextFree.c)
 *     RtlpCtContextInit @ 0x18014954C (RtlpCtContextInit.c)
 *     ZwQueryWnfStateData @ 0x180161C50 (ZwQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x180161C70 (NtQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x180162A70 (ZwUpdateWnfStateData.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

DWORD __cdecl RtlRaiseCustomSystemEventTrigger(PCUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG TriggerConfig)
{
  NTSTATUS updated; // ebx
  _DWORD *Buffer; // rdi
  ULONG BufferSize; // [rsp+48h] [rbp-9h] BYREF
  int InfoBuffer; // [rsp+4Ch] [rbp-5h] BYREF
  ULONG ChangeStamp; // [rsp+50h] [rbp-1h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp+7h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp+Fh] BYREF
  WNF_STATE_NAME StateName; // [rsp+70h] [rbp+1Fh] BYREF
  GUID Guid; // [rsp+78h] [rbp+27h] BYREF

  StateName = (WNF_STATE_NAME)WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED;
  InfoBuffer = 0;
  ChangeStamp = 0;
  BaseAddress = 0LL;
  DestinationString = 0LL;
  Guid = 0LL;
  if ( TriggerConfig )
  {
    RtlInitUnicodeString(&DestinationString, TriggerConfig->TriggerId);
    updated = RtlGUIDFromString(&DestinationString, &Guid);
    if ( updated < 0 )
      return updated;
    if ( _InterlockedExchange(&RtlpCtPublishInProgress, 1) )
      return -1073741823;
    BufferSize = 4096;
    Buffer = RtlpAllocateAtom(0x1000uLL);
    if ( Buffer )
    {
      updated = ZwQueryWnfStateData(&StateName, 0LL, 0LL, &ChangeStamp, Buffer, &BufferSize);
      if ( updated >= 0 )
      {
        updated = NtQueryWnfStateNameInformation(&StateName, WnfInfoIsQuiescent, 0LL, &InfoBuffer, 4u);
        if ( updated >= 0 )
        {
          if ( InfoBuffer )
          {
            updated = NtQueryWnfStateNameInformation(&StateName, WnfInfoSubscribersPresent, 0LL, &InfoBuffer, 4u);
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
                  updated = RtlpCtContextInit(&BaseAddress, ChangeStamp);
                  if ( updated >= 0 )
                  {
                    updated = ZwUpdateWnfStateData(&StateName, Buffer, BufferSize + 8, 0LL, 0LL, ChangeStamp, 1u);
                    if ( updated >= 0 )
                    {
                      TpPostWork(*(PTP_WORK *)BaseAddress);
                      goto LABEL_23;
                    }
                  }
                  if ( BaseAddress )
                    RtlpCtContextFree(BaseAddress);
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
    _InterlockedExchange(&RtlpCtPublishInProgress, 0);
    if ( !Buffer )
      return updated;
LABEL_23:
    RtlpSysVolFree(Buffer);
    return updated;
  }
  return -1073741811;
}
