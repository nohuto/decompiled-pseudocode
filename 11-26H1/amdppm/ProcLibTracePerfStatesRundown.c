/*
 * XREFs of ProcLibTracePerfStatesRundown @ 0x14003FE4C
 * Callers:
 *     ProcLibTraceControlCallback @ 0x140024B00 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1400029E0 (ProcLibGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 */

void __fastcall ProcLibTracePerfStatesRundown(__int64 a1)
{
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rsi
  _BYTE *Pool2; // rbx
  unsigned int v7; // ecx
  __int64 i; // r10
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r9
  unsigned int v12; // [rsp+30h] [rbp-40h] BYREF
  int v13; // [rsp+34h] [rbp-3Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  unsigned int *v15; // [rsp+48h] [rbp-28h]
  __int64 v16; // [rsp+50h] [rbp-20h]
  _BYTE *v17; // [rsp+58h] [rbp-18h]
  int v18; // [rsp+60h] [rbp-10h]
  int v19; // [rsp+64h] [rbp-Ch]

  v13 = 0;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)ProcLibGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (__int64)&PPM_ETW_PERF_STATES_RUNDOWN,
                                                              (__int64)&PPM_ETW_PERF_STATES_RUNDOWN_HV,
                                                              (__int64)&v13,
                                                              &UserData);
  v3 = EventDescriptorAndProcessorId;
  if ( EventDescriptorAndProcessorId )
  {
    if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, EventDescriptorAndProcessorId) )
    {
      v4 = *(_QWORD *)(a1 + 224);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 56);
        v12 = *(_DWORD *)(v5 + 64);
        Pool2 = (_BYTE *)ExAllocatePool2(256LL, 6LL * v12, 1919119952LL);
        if ( Pool2 )
        {
          v7 = v12;
          for ( i = 0LL; (unsigned int)i < v12; v7 = v12 )
          {
            v9 = *(_QWORD *)(v5 + 56);
            v10 = 3 * i;
            v11 = (unsigned int)i;
            i = (unsigned int)(i + 1);
            v11 *= 32LL;
            *(_DWORD *)&Pool2[2 * v10] = *(_DWORD *)(v11 + v9 + 16);
            Pool2[2 * v10 + 4] = *(_BYTE *)(v11 + v9 + 24);
            Pool2[2 * v10 + 5] = *(_BYTE *)(v11 + v9 + 25);
          }
          v16 = 4LL;
          v15 = &v12;
          v17 = Pool2;
          v18 = 6 * v7;
          v19 = 0;
          EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v3, 0LL, (ULONG)3, &UserData);
          ExFreePoolWithTag(Pool2, (ULONG)1919119952);
        }
      }
    }
  }
}
