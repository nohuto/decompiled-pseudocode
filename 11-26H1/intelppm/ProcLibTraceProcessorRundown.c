/*
 * XREFs of ProcLibTraceProcessorRundown @ 0x140044780
 * Callers:
 *     ProcLibTraceControlCallback @ 0x14002C260 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1400030C0 (ProcLibGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 */

char __fastcall ProcLibTraceProcessorRundown(__int64 a1)
{
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v3; // rdi
  int v4; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  ULONG Type; // [rsp+48h] [rbp-19h] BYREF
  int Data; // [rsp+4Ch] [rbp-15h] BYREF
  ULONG RequiredSize; // [rsp+50h] [rbp-11h] BYREF
  int v12; // [rsp+54h] [rbp-Dh] BYREF
  int v13; // [rsp+58h] [rbp-9h] BYREF
  int v14; // [rsp+5Ch] [rbp-5h] BYREF
  int v15; // [rsp+60h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp+7h] BYREF
  int *v17; // [rsp+78h] [rbp+17h]
  __int64 v18; // [rsp+80h] [rbp+1Fh]
  int *v19; // [rsp+88h] [rbp+27h]
  __int64 v20; // [rsp+90h] [rbp+2Fh]
  __int64 v21; // [rsp+98h] [rbp+37h] BYREF

  v15 = 0;
  RequiredSize = 0;
  Type = 0;
  Data = 0;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)ProcLibGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (__int64)&PPM_ETW_PROCESSOR_FIRMWARE_RUNDOWN,
                                                              (__int64)&PPM_ETW_PROCESSOR_FIRMWARE_RUNDOWN_HV,
                                                              (__int64)&v15,
                                                              &v21);
  v3 = EventDescriptorAndProcessorId;
  if ( EventDescriptorAndProcessorId )
  {
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(
                                              (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
                                              EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      v4 = *(_DWORD *)(a1 + 1104);
      v5 = *(_DWORD *)(a1 + 1108) & v4;
      v6 = ~*(_DWORD *)(a1 + 1112);
      v12 = v4;
      v7 = v5 & v6;
      v13 = v5;
      v14 = v7;
      if ( qword_1400197A8 )
      {
        v12 = v4 | 0x4000;
        v14 = v7 | 0x4000;
        v13 = v5 | 0x4000;
      }
      if ( IoGetDevicePropertyData(
             *(PDEVICE_OBJECT *)(a1 + 8),
             &PROCESSOR_ETW_FEATUREPRESENT_OVERRIDE,
             0,
             (ULONG)0,
             (ULONG)4,
             &Data,
             &RequiredSize,
             &Type) >= 0
        && Type == 7 )
      {
        v12 = Data;
      }
      if ( IoGetDevicePropertyData(
             *(PDEVICE_OBJECT *)(a1 + 8),
             &PROCESSOR_ETW_FEATUREACCESSED_OVERRIDE,
             0,
             (ULONG)0,
             (ULONG)4,
             &Data,
             &RequiredSize,
             &Type) >= 0
        && Type == 7 )
      {
        v13 = Data;
      }
      if ( IoGetDevicePropertyData(
             *(PDEVICE_OBJECT *)(a1 + 8),
             &PROCESSOR_ETW_FEATUREVALID_OVERRIDE,
             0,
             (ULONG)0,
             (ULONG)4,
             &Data,
             &RequiredSize,
             &Type) >= 0
        && Type == 7 )
      {
        v14 = Data;
      }
      UserData.Ptr = (unsigned __int64)&v12;
      *(_QWORD *)&UserData.Size = 4LL;
      v17 = &v13;
      v18 = 4LL;
      v19 = &v14;
      v20 = 4LL;
      LOBYTE(EventDescriptorAndProcessorId) = EtwWrite(
                                                (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
                                                v3,
                                                0LL,
                                                (ULONG)4,
                                                &UserData);
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
