/*
 * XREFs of ProcLibTraceCoordinatedIdleStates @ 0x1400464E0
 * Callers:
 *     ProcLibTraceControlCallback @ 0x14002C260 (ProcLibTraceControlCallback.c)
 *     RegisterKernelCoordinatedStates @ 0x140038C78 (RegisterKernelCoordinatedStates.c)
 *     UpdateKernelCoordinatedStates @ 0x140039CB4 (UpdateKernelCoordinatedStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 */

void __fastcall ProcLibTraceCoordinatedIdleStates(char a1)
{
  unsigned int *v1; // rbx
  int *Pool2; // rsi
  _BYTE *v4; // rdi
  const EVENT_DESCRIPTOR *v5; // r14
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // eax
  const EVENT_DESCRIPTOR *v11; // r12
  unsigned int v12; // edx
  __int64 v13; // rax
  int v14; // r10d
  int v15; // r9d
  unsigned int v16; // r8d
  unsigned int v17; // edx
  unsigned int v18; // eax
  __int64 v19; // r14
  unsigned int v20; // eax
  __int64 v21; // r10
  unsigned int v22; // r11d
  __int64 v23; // r9
  unsigned int *v24; // r15
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  int v28; // eax
  int v29; // [rsp+38h] [rbp-59h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+3Ch] [rbp-55h] BYREF
  unsigned int v31; // [rsp+40h] [rbp-51h] BYREF
  int v32; // [rsp+44h] [rbp-4Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-49h] BYREF
  int *v34; // [rsp+58h] [rbp-39h]
  __int64 v35; // [rsp+60h] [rbp-31h]
  int *v36; // [rsp+68h] [rbp-29h]
  __int64 v37; // [rsp+70h] [rbp-21h]
  struct _PROCESSOR_NUMBER *p_ProcNumber; // [rsp+78h] [rbp-19h]
  __int64 v39; // [rsp+80h] [rbp-11h]
  unsigned __int8 *p_Number; // [rsp+88h] [rbp-9h]
  __int64 v41; // [rsp+90h] [rbp-1h]
  unsigned int *v42; // [rsp+98h] [rbp+7h]
  __int64 v43; // [rsp+A0h] [rbp+Fh]
  _BYTE *v44; // [rsp+A8h] [rbp+17h]
  int v45; // [rsp+B0h] [rbp+1Fh]
  int v46; // [rsp+B4h] [rbp+23h]

  v1 = (unsigned int *)qword_140019868;
  v31 = 0;
  v29 = 0;
  Pool2 = 0LL;
  v32 = 0;
  v4 = 0LL;
  ProcNumber = 0;
  if ( qword_140019868 )
  {
    v5 = (const EVENT_DESCRIPTOR *)&PPM_ETW_GET_COORDINATED_IDLE_STATES;
    if ( a1 )
      v5 = &PPM_ETW_GET_COORDINATED_IDLE_STATES_RUNDOWN;
    if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v5) )
    {
      Pool2 = (int *)ExAllocatePool2(256LL, 12LL * *v1, 1919119952LL);
      if ( !Pool2 )
        return;
      if ( *v1 )
      {
        v6 = 0;
        v7 = 0LL;
        do
        {
          Pool2[3 * v7] = v1[80 * v7 + 84];
          v8 = 3LL * v6;
          v9 = 80LL * v6;
          Pool2[v8 + 1] = v1[v9 + 85];
          Pool2[v8 + 2] = v1[v9 + 87];
          v6 = v29 + 1;
          v29 = v6;
          v7 = v6;
        }
        while ( v6 < *v1 );
      }
      UserData.Ptr = (unsigned __int64)v1;
      *(_QWORD *)&UserData.Size = 4LL;
      v10 = *v1;
      v34 = Pool2;
      v35 = 12 * v10;
      EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v5, 0LL, (ULONG)2, &UserData);
    }
    v11 = (const EVENT_DESCRIPTOR *)&PPM_ETW_GET_COORDINATED_DEPENDENCY;
    if ( a1 )
      v11 = &PPM_ETW_GET_COORDINATED_DEPENDENCY_RUNDOWN;
    if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v11) )
    {
      v29 = 0;
      v12 = 0;
      if ( *v1 )
      {
        v13 = 0LL;
        v14 = 0;
        v15 = 0;
        do
        {
          v16 = v1[80 * v13 + 86];
          if ( v12 >= v16 )
          {
            v15 = v14;
            v16 = v12;
          }
          v12 = v16;
          v13 = (unsigned int)(v15 + 1);
          v29 = v13;
          v14 = ++v15;
        }
        while ( (unsigned int)v13 < *v1 );
      }
      v4 = (_BYTE *)ExAllocatePool2(256LL, 13LL * v12, 1919119952LL);
      if ( v4 )
      {
        v17 = 0;
        v29 = 0;
        if ( *v1 )
        {
          v18 = 0;
          do
          {
            v31 = 0;
            v19 = 80LL * v18;
            if ( v1[v19 + 87] )
            {
              v20 = 0;
              do
              {
                v21 = *(_QWORD *)&v1[v19 + 90];
                v22 = 0;
                v23 = 16LL * v20;
                v24 = (unsigned int *)(v23 + v21 + 4);
                if ( *v24 )
                {
                  do
                  {
                    v25 = *(_QWORD *)(v23 + v21 + 8);
                    v26 = v22++;
                    v27 = 13 * v26;
                    v4[v27] = *(_BYTE *)(v25 + 4 * v26);
                    *(_DWORD *)&v4[v27 + 1] = *(unsigned __int8 *)(v25 + 4 * v26 + 1);
                    *(_DWORD *)&v4[v27 + 5] = *(unsigned __int8 *)(v25 + 4 * v26 + 2);
                    *(_DWORD *)&v4[v27 + 9] = *(unsigned __int8 *)(v25 + 4 * v26 + 3);
                  }
                  while ( v22 < *v24 );
                }
                if ( *(_DWORD *)(v23 + v21) == -1 )
                {
                  v32 = 0;
                  ProcNumber.Group = 0;
                  ProcNumber.Number = 0;
                }
                else
                {
                  v32 = 1;
                  KeGetProcessorNumberFromIndex(*(ULONG *)(v23 + v21), &ProcNumber);
                }
                UserData.Ptr = (unsigned __int64)&v29;
                *(_QWORD *)&UserData.Size = 4LL;
                v34 = (int *)&v31;
                v35 = 4LL;
                v36 = &v32;
                v37 = 4LL;
                p_ProcNumber = &ProcNumber;
                p_Number = &ProcNumber.Number;
                v39 = 2LL;
                v41 = 1LL;
                v42 = v24;
                v43 = 4LL;
                v28 = 13 * *v24;
                v44 = v4;
                v46 = 0;
                v45 = v28;
                EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v11, 0LL, (ULONG)7, &UserData);
                v20 = v31 + 1;
                v31 = v20;
              }
              while ( v20 < v1[v19 + 87] );
              v17 = v29;
            }
            v29 = ++v17;
            v18 = v17;
          }
          while ( v17 < *v1 );
        }
      }
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, (ULONG)1919119952);
    if ( v4 )
      ExFreePoolWithTag(v4, (ULONG)1919119952);
  }
}
