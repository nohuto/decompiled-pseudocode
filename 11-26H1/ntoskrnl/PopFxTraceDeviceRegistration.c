/*
 * XREFs of PopFxTraceDeviceRegistration @ 0x140AF125C
 * Callers:
 *     PopDiagTraceFxRundown @ 0x140422618 (PopDiagTraceFxRundown.c)
 *     PopFxRegisterDevice @ 0x140B52230 (PopFxRegisterDevice.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x14021BFD0 (PopFxAddLogEntry.c)
 *     PopPepGetComponentVetoMasks @ 0x1404E14E0 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x1404EE2C8 (PopPepGetDeviceVetoMasks.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopDiagTraceFxDeviceRegistration @ 0x140AF150C (PopDiagTraceFxDeviceRegistration.c)
 *     PopDiagTraceFxComponentRegistration @ 0x140AF1604 (PopDiagTraceFxComponentRegistration.c)
 *     PopFxTracePerfRegistration @ 0x140B45F00 (PopFxTracePerfRegistration.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxTraceDeviceRegistration(__int64 a1, char a2)
{
  char v2; // r13
  unsigned int *v3; // rbx
  __int64 *v5; // r15
  const EVENT_DESCRIPTOR *v6; // rdi
  __int64 v7; // rcx
  const EVENT_DESCRIPTOR *v8; // rax
  unsigned int v9; // edi
  __int64 *v10; // rdx
  unsigned int v11; // ebx
  __int64 Pool2; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rcx
  unsigned int v15; // ebx
  void *v16; // rcx
  __int64 v17; // r12
  __int64 v18; // r14
  __int64 v19; // r9
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  unsigned int v27; // ecx
  __int64 v29; // [rsp+48h] [rbp-60h]
  const EVENT_DESCRIPTOR *EventDescriptor; // [rsp+50h] [rbp-58h]
  __int64 v31; // [rsp+58h] [rbp-50h] BYREF
  int v32; // [rsp+60h] [rbp-48h]

  v2 = a2;
  v3 = (unsigned int *)(a1 + 868);
  v5 = (__int64 *)(a1 + 48);
  if ( a2 )
  {
    v6 = &POP_ETW_EVENT_DEVICE_REGISTRATION_RUNDOWN;
  }
  else
  {
    PopFxAddLogEntry(*v5, 0, 1, *v3);
    v6 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_DEVICE_REGISTRATION;
  }
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, v6) )
  {
    v7 = *(_QWORD *)(a1 + 56);
    v31 = 0LL;
    v32 = 0;
    PopPepGetDeviceVetoMasks(v7, (__int64)&v31);
    PopDiagTraceFxDeviceRegistration(v6, *(_DWORD *)(a1 + 32), *v5 + 128, *v3, (__int64)&v31);
    v8 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_COMPONENT_REGISTRATION_RUNDOWN;
    if ( !v2 )
      v8 = &POP_ETW_EVENT_COMPONENT_REGISTRATION;
    EventDescriptor = v8;
    if ( EtwEventEnabled(PopDiagHandle, v8) )
    {
      v9 = *v3;
      if ( *v3 )
      {
        v10 = *(__int64 **)(a1 + 872);
        v11 = *(_DWORD *)(*v10 + 156);
        if ( v9 > 1 )
        {
          v24 = v10 + 1;
          v25 = v9 - 1;
          do
          {
            v26 = *v24++;
            v27 = *(_DWORD *)(v26 + 156);
            if ( v27 <= v11 )
              v27 = v11;
            v11 = v27;
            --v25;
          }
          while ( v25 );
        }
        Pool2 = ExAllocatePool2(0x100uLL);
        v13 = (_QWORD *)Pool2;
        if ( Pool2 )
        {
          v14 = v11;
          v15 = 0;
          v16 = (void *)(Pool2 + 24 * v14);
          v29 = (__int64)v16;
          if ( v9 )
          {
            v17 = 0LL;
            do
            {
              v18 = *(_QWORD *)(v17 + *(_QWORD *)(a1 + 872));
              memset_0(v16, 0, 4LL * *(unsigned int *)(v18 + 156));
              PopPepGetComponentVetoMasks(*(_QWORD *)(a1 + 56), v15, v29);
              v19 = 0LL;
              if ( *(_DWORD *)(v18 + 156) )
              {
                do
                {
                  v20 = 3 * v19;
                  v13[v20] = *(_QWORD *)(*(_QWORD *)(v18 + 160) + 24 * v19);
                  v13[v20 + 1] = *(_QWORD *)(*(_QWORD *)(v18 + 160) + 24 * v19 + 8);
                  LODWORD(v13[v20 + 2]) = *(_DWORD *)(*(_QWORD *)(v18 + 160) + 24 * v19 + 16);
                  v21 = *(_DWORD *)(v29 + 4 * v19);
                  v19 = (unsigned int)(v19 + 1);
                  HIDWORD(v13[v20 + 2]) = v21;
                }
                while ( (unsigned int)v19 < *(_DWORD *)(v18 + 156) );
                v2 = a2;
              }
              PopDiagTraceFxComponentRegistration(
                EventDescriptor,
                *(_DWORD *)(v18 + 152),
                *(_DWORD *)(v18 + 156),
                (__int64)v13);
              v23 = *(_QWORD *)(v18 + 424);
              if ( v23 )
              {
                LOBYTE(v22) = v2;
                PopFxTracePerfRegistration(v23, v22);
              }
              v16 = (void *)v29;
              ++v15;
              v17 += 8LL;
            }
            while ( v15 < v9 );
          }
          ExFreePoolWithTag(v13, 0x4D584650u);
        }
      }
    }
  }
}
