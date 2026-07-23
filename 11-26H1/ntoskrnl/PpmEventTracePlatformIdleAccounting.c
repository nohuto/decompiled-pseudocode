/*
 * XREFs of PpmEventTracePlatformIdleAccounting @ 0x140B440D8
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x1404237D8 (PpmTranslatePlatformIdleAccounting.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void PpmEventTracePlatformIdleAccounting()
{
  __int64 v0; // rdi
  int v1; // r15d
  _QWORD *Pool2; // rbx
  unsigned int v3; // eax
  __int64 i; // r9
  __int64 v5; // r8
  __int64 v6; // rdx
  ULONG v7; // r14d
  __int64 v8; // rax
  void *v9; // rsi
  char v10; // [rsp+38h] [rbp-39h] BYREF
  __int16 v11; // [rsp+3Ch] [rbp-35h] BYREF
  unsigned int v12; // [rsp+40h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-29h] BYREF
  __int16 *v14; // [rsp+58h] [rbp-19h]
  __int64 v15; // [rsp+60h] [rbp-11h]
  char *v16; // [rsp+68h] [rbp-9h]
  __int64 v17; // [rsp+70h] [rbp-1h]
  unsigned int *v18; // [rsp+78h] [rbp+7h]
  __int64 v19; // [rsp+80h] [rbp+Fh]
  _QWORD *v20; // [rsp+88h] [rbp+17h]
  int v21; // [rsp+90h] [rbp+1Fh]
  int v22; // [rsp+94h] [rbp+23h]
  __int64 v23; // [rsp+98h] [rbp+27h]
  __int64 v24; // [rsp+A0h] [rbp+2Fh]

  v11 = 32;
  v10 = 64;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PLATFORM_IDLE_ACCOUNTING_RUNDOWN) )
    {
      if ( PpmPlatformStates )
      {
        v0 = *(_QWORD *)(PpmPlatformStates + 48);
        v12 = *(_DWORD *)(v0 + 4);
        v1 = 80 * v12;
        Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
        if ( Pool2 )
        {
          v3 = v12;
          for ( i = 0LL; (unsigned int)i < v12; v3 = v12 )
          {
            v5 = 1032LL * (unsigned int)i;
            v6 = 10 * i;
            i = (unsigned int)(i + 1);
            Pool2[v6 + 1] = *(_QWORD *)(v5 + v0 + 120) + *(_QWORD *)(v5 + v0 + 216);
            Pool2[v6 + 2] = *(_QWORD *)(v5 + v0 + 128) + *(_QWORD *)(v5 + v0 + 208);
            Pool2[v6 + 3] = *(_QWORD *)(v5 + v0 + 144);
            Pool2[v6 + 4] = *(_QWORD *)(v5 + v0 + 136);
            Pool2[v6 + 7] = *(_QWORD *)(v5 + v0 + 104);
            Pool2[v6 + 8] = *(_QWORD *)(v5 + v0 + 96);
            Pool2[v6 + 9] = *(_QWORD *)(v5 + v0 + 88);
            Pool2[v6] = *(_QWORD *)(v5 + v0 + 168) + *(_QWORD *)(v5 + v0 + 224);
            Pool2[v6 + 5] = *(_QWORD *)(v5 + v0 + 184);
            Pool2[v6 + 6] = *(_QWORD *)(v5 + v0 + 176);
          }
          v7 = 664 * v3 + 32;
          v8 = ExAllocatePool2(0x40uLL);
          v9 = (void *)v8;
          if ( v8 )
          {
            PpmTranslatePlatformIdleAccounting(v0, v8);
            v14 = &v11;
            UserData.Ptr = (ULONGLONG)v9;
            v16 = &v10;
            UserData.Size = v7;
            v18 = &v12;
            UserData.Reserved = 0;
            v23 = v0 + 16;
            v15 = 2LL;
            v17 = 1LL;
            v19 = 4LL;
            v20 = Pool2;
            v21 = v1;
            v22 = 0;
            v24 = 8LL;
            EtwWrite(PpmEtwHandle, &PPM_ETW_PLATFORM_IDLE_ACCOUNTING_RUNDOWN, 0LL, 6u, &UserData);
            ExFreePoolWithTag(v9, 0x654D5050u);
          }
          ExFreePoolWithTag(Pool2, 0x654D5050u);
        }
      }
    }
  }
}
