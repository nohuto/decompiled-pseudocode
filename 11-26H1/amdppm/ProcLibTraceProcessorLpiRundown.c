/*
 * XREFs of ProcLibTraceProcessorLpiRundown @ 0x140040C58
 * Callers:
 *     ProcLibTraceControlCallback @ 0x140024B00 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1400029E0 (ProcLibGetEventDescriptorAndProcessorId.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

char __fastcall ProcLibTraceProcessorLpiRundown(__int64 a1)
{
  void *v2; // rdi
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v4; // r14
  __int64 v5; // rsi
  __int64 v6; // r15
  __int64 Pool2; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  __int64 v9; // rax
  unsigned int v10; // r9d
  _DWORD *v11; // r8
  unsigned __int64 v12; // r10
  _DWORD *v13; // rsi
  int v14; // ecx
  __int64 v15; // rcx
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int128 v19; // [rsp+30h] [rbp-38h] BYREF
  int v20; // [rsp+78h] [rbp+10h] BYREF

  v20 = 0;
  v19 = 0LL;
  v2 = 0LL;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)ProcLibGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (__int64)&PPM_ETW_PROCESSOR_LPI_STATES,
                                                              (__int64)&PPM_ETW_PROCESSOR_LPI_STATES_HV,
                                                              (__int64)&v20,
                                                              &v19);
  v4 = EventDescriptorAndProcessorId;
  if ( EventDescriptorAndProcessorId )
  {
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(
                                              (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                                              EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 208),
        0LL);
      v5 = *(_QWORD *)(a1 + 544);
      if ( !v5
        || (v6 = *(unsigned int *)(v5 + 16),
            Pool2 = ExAllocatePool2(256LL, 16LL * (unsigned int)(2 * v6 + 4), 1919119952LL),
            (UserData = (struct _EVENT_DATA_DESCRIPTOR *)Pool2) == 0LL) )
      {
LABEL_12:
        LOBYTE(EventDescriptorAndProcessorId) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                                  WdfDriverGlobals,
                                                  *(_QWORD *)(a1 + 208));
        return (char)EventDescriptorAndProcessorId;
      }
      *(_OWORD *)Pool2 = v19;
      *(_QWORD *)(Pool2 + 16) = v5;
      *(_QWORD *)(Pool2 + 24) = 4LL;
      *(_QWORD *)(Pool2 + 32) = v5 + 8;
      *(_QWORD *)(Pool2 + 40) = 8LL;
      *(_QWORD *)(Pool2 + 48) = v5 + 16;
      *(_QWORD *)(Pool2 + 56) = 4LL;
      if ( (_DWORD)v6 )
      {
        v9 = ExAllocatePool2(256LL, 60 * v6, 1919119952LL);
        v2 = (void *)v9;
        if ( !v9 )
          goto LABEL_10;
        v10 = 0;
        v11 = (_DWORD *)(v9 + 8);
        v12 = v9;
        v13 = (_DWORD *)(v5 + 28);
        do
        {
          *(v11 - 2) = *(v13 - 1);
          v14 = *v13;
          v13 += 20;
          *(v11 - 1) = v14;
          v15 = 2 * v10 + 4;
          *v11 = *(v13 - 19);
          v11 += 15;
          *(v11 - 14) = *(v13 - 18);
          *(v11 - 13) = *(v13 - 17);
          *(v11 - 12) = *(v13 - 16);
          *(_QWORD *)(v11 - 11) = *(_QWORD *)(v13 - 15);
          *(v11 - 9) = *(v13 - 13);
          *((_QWORD *)v11 - 4) = *((_QWORD *)v13 - 6);
          *(v11 - 6) = *(v13 - 10);
          *(_QWORD *)(v11 - 5) = *(_QWORD *)(v13 - 9);
          *(v11 - 3) = *(v13 - 7);
          UserData[v15].Ptr = v12;
          v12 += 60LL;
          *(_QWORD *)&UserData[v15].Size = 60LL;
          v16 = *((unsigned __int16 *)v13 - 9);
          v17 = 2 * v10++ + 5;
          UserData[v17].Ptr = *(_QWORD *)(v13 - 3);
          *(_QWORD *)&UserData[v17].Size = v16;
        }
        while ( v10 < (unsigned int)v6 );
      }
      EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v4, 0LL, (ULONG)(2 * v6 + 4), UserData);
LABEL_10:
      ExFreePoolWithTag(UserData, (ULONG)1919119952);
      if ( v2 )
        ExFreePoolWithTag(v2, (ULONG)1919119952);
      goto LABEL_12;
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
