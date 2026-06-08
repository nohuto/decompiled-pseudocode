/*
 * XREFs of ProcLibCpcResourcePriorityRundown @ 0x14002BE44
 * Callers:
 *     ProcLibTraceControlCallback @ 0x14002C260 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1400030C0 (ProcLibGetEventDescriptorAndProcessorId.c)
 *     GetCpcRegisterDefinitionTable @ 0x140008C78 (GetCpcRegisterDefinitionTable.c)
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     GetCpcResourceTypeName @ 0x1400321B4 (GetCpcResourceTypeName.c)
 */

char __fastcall ProcLibCpcResourcePriorityRundown(__int64 a1)
{
  __int64 EventDescriptorAndProcessorId; // rax
  unsigned int v2; // r13d
  const EVENT_DESCRIPTOR *v4; // r15
  __int64 v5; // r14
  unsigned int v6; // esi
  unsigned int *v7; // rbx
  __int64 v8; // r12
  unsigned int *v9; // rax
  __int64 CpcResourceTypeName; // rax
  __int64 v11; // rcx
  int v13; // [rsp+38h] [rbp-39h] BYREF
  int v14; // [rsp+3Ch] [rbp-35h] BYREF
  __int64 v15; // [rsp+40h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-29h] BYREF
  __int64 v17; // [rsp+58h] [rbp-19h]
  __int64 v18; // [rsp+60h] [rbp-11h]
  __int64 v19; // [rsp+68h] [rbp-9h]
  int v20; // [rsp+70h] [rbp-1h]
  int v21; // [rsp+74h] [rbp+3h]
  unsigned int *v22; // [rsp+78h] [rbp+7h]
  __int64 v23; // [rsp+80h] [rbp+Fh]
  unsigned int *v24; // [rsp+88h] [rbp+17h]
  __int64 v25; // [rsp+90h] [rbp+1Fh]

  LODWORD(EventDescriptorAndProcessorId) = *(_DWORD *)(a1 + 280);
  v2 = 0;
  v13 = 0;
  if ( (EventDescriptorAndProcessorId & 0x8000000) != 0 )
  {
    EventDescriptorAndProcessorId = ProcLibGetEventDescriptorAndProcessorId(
                                      a1,
                                      (__int64)&PPM_ETW_PROCESSOR_CPC_RESOURCE_PRIORITY_RUNDOWN,
                                      (__int64)&PPM_ETW_PROCESSOR_CPC_RESOURCE_PRIORITY_RUNDOWN_HV,
                                      (__int64)&v13,
                                      &UserData);
    v4 = (const EVENT_DESCRIPTOR *)EventDescriptorAndProcessorId;
    if ( EventDescriptorAndProcessorId )
    {
      LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(
                                                (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
                                                (PCEVENT_DESCRIPTOR)EventDescriptorAndProcessorId);
      if ( (_BYTE)EventDescriptorAndProcessorId )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 208),
          0LL);
        v5 = *(_QWORD *)(a1 + 592);
        GetCpcRegisterDefinitionTable(v5, &v15, &v14);
        if ( *(_QWORD *)(v5 + 536) )
        {
          v18 = 4LL;
          v17 = v5 + 4;
          v6 = 0;
          v7 = *(unsigned int **)(v5 + 536);
          if ( *v7 )
          {
            do
            {
              v8 = 26LL * v6;
              v23 = 12LL;
              v25 = 12LL;
              v22 = &v7[v8 + 16];
              v24 = &v7[v8 + 22];
              v9 = *(unsigned int **)&v7[v8 + 2];
              if ( *v9 )
              {
                do
                {
                  CpcResourceTypeName = GetCpcResourceTypeName(v9[v2 + 1]);
                  v11 = -1LL;
                  do
                    ++v11;
                  while ( *(_BYTE *)(CpcResourceTypeName + v11) );
                  v19 = CpcResourceTypeName;
                  v20 = (unsigned __int16)v11 + 1;
                  v21 = 0;
                  EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v4, 0LL, (ULONG)5, &UserData);
                  v9 = *(unsigned int **)&v7[v8 + 2];
                  ++v2;
                }
                while ( v2 < *v9 );
              }
              v7 = *(unsigned int **)(v5 + 536);
              ++v6;
              v2 = 0;
            }
            while ( v6 < *v7 );
          }
        }
        LOBYTE(EventDescriptorAndProcessorId) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                                  WdfDriverGlobals,
                                                  *(_QWORD *)(a1 + 208));
      }
    }
  }
  return EventDescriptorAndProcessorId;
}
