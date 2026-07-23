/*
 * XREFs of PopFxTracePerfRegistration @ 0x140B45F00
 * Callers:
 *     PopFxRegisterComponentPerfStates @ 0x1407D09DC (PopFxRegisterComponentPerfStates.c)
 *     PopFxTraceDeviceRegistration @ 0x140AF125C (PopFxTraceDeviceRegistration.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x14021BFD0 (PopFxAddLogEntry.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopDiagTraceFxPerfSetRegistration @ 0x1407738FC (PopDiagTraceFxPerfSetRegistration.c)
 *     PopDiagTraceFxPerfRegistration @ 0x140B46148 (PopDiagTraceFxPerfRegistration.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxTracePerfRegistration(_QWORD *a1, char a2)
{
  _DWORD *v2; // rdi
  const EVENT_DESCRIPTOR *v5; // rbx
  const EVENT_DESCRIPTOR *v6; // r12
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // ebp
  void *Pool2; // rbx
  unsigned int v12; // r14d
  __int64 v13; // rdi
  unsigned int v14; // ecx
  __int64 i; // r8
  __int64 v16; // r10
  __int64 v17; // r9
  __int64 v18; // r11

  v2 = a1 + 18;
  if ( a2 )
  {
    v5 = &POP_ETW_EVENT_PERFORMANCE_STATE_REGISTRATION_RUNDOWN;
  }
  else
  {
    v5 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_PERFORMANCE_STATE_REGISTRATION;
    PopFxAddLogEntry(*(_QWORD *)(*(_QWORD *)(*a1 + 80LL) + 48LL), *(_DWORD *)(*a1 + 16LL), 12, (unsigned int)*v2);
  }
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, v5) )
  {
    PopDiagTraceFxPerfRegistration(v5);
    v6 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_PERFORMANCE_STATE_SET_REGISTRATION_RUNDOWN;
    if ( !a2 )
      v6 = &POP_ETW_EVENT_PERFORMANCE_STATE_SET_REGISTRATION;
    if ( EtwEventEnabled(PopDiagHandle, v6) )
    {
      v7 = 0;
      if ( *v2 )
      {
        v8 = a1[19];
        v9 = (unsigned int)*v2;
        do
        {
          if ( !*(_DWORD *)(*(_QWORD *)v8 + 28LL) && *(_DWORD *)(*(_QWORD *)v8 + 32LL) > v7 )
            v7 = *(_DWORD *)(*(_QWORD *)v8 + 32LL);
          v8 += 32LL;
          --v9;
        }
        while ( v9 );
        v10 = 0;
        if ( v7 )
        {
          if ( 8 * (unsigned __int64)v7 > 0xFFFFFFFF )
            return;
          v10 = 8 * v7;
          Pool2 = (void *)ExAllocatePool2(0x100uLL);
          if ( !Pool2 )
            return;
          goto LABEL_21;
        }
      }
      else
      {
        v10 = 0;
      }
      Pool2 = 0LL;
LABEL_21:
      v12 = 0;
      if ( *v2 )
      {
        do
        {
          v13 = *(_QWORD *)(32LL * v12 + a1[19]);
          if ( *(_DWORD *)(v13 + 28) )
          {
            v16 = *(_QWORD *)(v13 + 32);
            v14 = 0;
            v18 = *(_QWORD *)(v13 + 40);
            v17 = 0LL;
          }
          else
          {
            memset_0(Pool2, 0, v10);
            v14 = *(_DWORD *)(v13 + 32);
            for ( i = 0LL; (unsigned int)i < v14; v14 = *(_DWORD *)(v13 + 32) )
            {
              *((_QWORD *)Pool2 + i) = *(_QWORD *)(*(_QWORD *)(v13 + 40) + 16LL * (unsigned int)i);
              i = (unsigned int)(i + 1);
            }
            LOBYTE(v16) = 0;
            v17 = (__int64)Pool2;
            LOBYTE(v18) = 0;
          }
          PopDiagTraceFxPerfSetRegistration(
            v6,
            *(_QWORD *)(*(_QWORD *)(*a1 + 80LL) + 48LL),
            *(_DWORD *)(*a1 + 16LL),
            v12,
            *(_DWORD *)(v13 + 28),
            *(_DWORD *)(v13 + 24),
            v16,
            v18,
            (unsigned __int16 *)v13,
            v14,
            v17,
            *(_QWORD *)(32LL * v12 + a1[19] + 8));
          ++v12;
        }
        while ( v12 < *((_DWORD *)a1 + 36) );
      }
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x4D584650u);
    }
  }
}
