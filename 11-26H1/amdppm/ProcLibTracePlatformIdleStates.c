/*
 * XREFs of ProcLibTracePlatformIdleStates @ 0x140042220
 * Callers:
 *     ProcLibTraceControlCallback @ 0x140024B00 (ProcLibTraceControlCallback.c)
 *     RegisterKernelPlatformStates @ 0x140036AE4 (RegisterKernelPlatformStates.c)
 *     UpdateKernelPlatformStates @ 0x1400370BC (UpdateKernelPlatformStates.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 */

void __fastcall ProcLibTracePlatformIdleStates(char a1)
{
  _DWORD *v1; // rsi
  _WORD *Pool2; // rdi
  const EVENT_DESCRIPTOR *v3; // r15
  unsigned int v4; // edx
  __int64 v5; // rax
  int v6; // r9d
  int v7; // r8d
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  ULONG v11; // r9d
  char *v12; // r14
  unsigned int *v13; // r13
  unsigned int v14; // r12d
  __int64 v15; // rbx
  __int64 v16; // rdx
  unsigned int v17; // eax
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-69h] BYREF
  int v19; // [rsp+3Ch] [rbp-65h] BYREF
  int v20; // [rsp+40h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-59h] BYREF
  char *v22; // [rsp+58h] [rbp-49h]
  __int64 v23; // [rsp+60h] [rbp-41h]
  char *v24; // [rsp+68h] [rbp-39h]
  __int64 v25; // [rsp+70h] [rbp-31h]
  int *v26; // [rsp+78h] [rbp-29h]
  __int64 v27; // [rsp+80h] [rbp-21h]
  char *v28; // [rsp+88h] [rbp-19h]
  __int64 v29; // [rsp+90h] [rbp-11h]
  char *v30; // [rsp+98h] [rbp-9h]
  __int64 v31; // [rsp+A0h] [rbp-1h]
  char *v32; // [rsp+A8h] [rbp+7h]
  __int64 v33; // [rsp+B0h] [rbp+Fh]
  _WORD *v34; // [rsp+B8h] [rbp+17h]
  int v35; // [rsp+C0h] [rbp+1Fh]
  int v36; // [rsp+C4h] [rbp+23h]

  v1 = Src;
  v20 = 0;
  Pool2 = 0LL;
  ProcNumber = 0;
  if ( Src )
  {
    v3 = (const EVENT_DESCRIPTOR *)&PPM_ETW_GET_PLATFORM_IDLE_STATE;
    if ( a1 )
      v3 = &PPM_ETW_GET_PLATFORM_IDLE_STATE_RUNDOWN;
    if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v3) )
    {
      v4 = 0;
      if ( !v1[1] )
        goto LABEL_12;
      v5 = 0LL;
      v6 = 0;
      v7 = 0;
      do
      {
        v8 = v1[12 * v5 + 16];
        v9 = v8;
        if ( v8 <= v4 )
        {
          v7 = v6;
          v9 = v4;
        }
        v4 = v9;
        v5 = (unsigned int)(v7 + 1);
        v6 = v5;
        ++v7;
      }
      while ( (unsigned int)v5 < v1[1] );
      if ( !(_DWORD)v9 || (Pool2 = (_WORD *)ExAllocatePool2(256LL, 12 * v9, 1919119952LL)) != 0LL )
      {
LABEL_12:
        v19 = 0;
        if ( v1[1] )
        {
          v10 = 0LL;
          do
          {
            *(_QWORD *)&UserData.Size = 4LL;
            v23 = 2LL;
            v11 = 7;
            v25 = 1LL;
            v12 = (char *)&v1[12 * v10 + 12];
            UserData.Ptr = (unsigned __int64)&v19;
            v22 = v12;
            v24 = v12 + 2;
            v13 = (unsigned int *)(v12 + 16);
            v20 = (unsigned __int8)v12[4];
            v26 = &v20;
            v28 = v12 + 8;
            v30 = v12 + 12;
            v27 = 4LL;
            v29 = 4LL;
            v31 = 4LL;
            v32 = v12 + 16;
            v33 = 4LL;
            if ( *((_DWORD *)v12 + 4) )
            {
              v14 = 0;
              do
              {
                v15 = v14;
                KeGetProcessorNumberFromIndex(*(ULONG *)(*((_QWORD *)v12 + 5) + 8LL * v14), &ProcNumber);
                v16 = 3LL * v14;
                Pool2[2 * v16] = ProcNumber.Group;
                ++v14;
                LOBYTE(Pool2[2 * v16 + 1]) = ProcNumber.Number;
                HIBYTE(Pool2[2 * v16 + 1]) = *(_BYTE *)(*((_QWORD *)v12 + 5) + 8 * v15 + 4);
                *(_DWORD *)&Pool2[2 * v16 + 2] = *(unsigned __int8 *)(*((_QWORD *)v12 + 5) + 8 * v15 + 5);
                *(_DWORD *)&Pool2[2 * v16 + 4] = *(unsigned __int8 *)(*((_QWORD *)v12 + 5) + 8 * v15 + 6);
                v17 = *v13;
              }
              while ( v14 < *v13 );
              v34 = Pool2;
              v11 = 8;
              v35 = 12 * v17;
              v36 = 0;
            }
            EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v3, 0LL, v11, &UserData);
            v10 = (unsigned int)(v19 + 1);
            v19 = v10;
          }
          while ( (unsigned int)v10 < v1[1] );
        }
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, (ULONG)1919119952);
      }
    }
  }
}
