/*
 * XREFs of ProcLibTraceGetProcessorIdleStatesV2 @ 0x1400442FC
 * Callers:
 *     ProcLibTraceControlCallback @ 0x14002C260 (ProcLibTraceControlCallback.c)
 *     InitPepIdleStates @ 0x140039D3C (InitPepIdleStates.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1400041F8 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

void __fastcall ProcLibTraceGetProcessorIdleStatesV2(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v3; // rsi
  _DWORD *v4; // rbx
  unsigned int v5; // r14d
  _BYTE *Pool2; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  struct _PROCESSOR_NUMBER v11; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  unsigned __int8 *p_Number; // [rsp+50h] [rbp+7h]
  __int64 v14; // [rsp+58h] [rbp+Fh]
  _DWORD *v15; // [rsp+60h] [rbp+17h]
  __int64 v16; // [rsp+68h] [rbp+1Fh]
  _BYTE *v17; // [rsp+70h] [rbp+27h]
  unsigned int v18; // [rsp+78h] [rbp+2Fh]
  int i; // [rsp+7Ch] [rbp+33h]

  v11 = 0;
  v3 = (const EVENT_DESCRIPTOR *)&PPM_ETW_GET_IDLE_STATES_V2;
  if ( a2 )
    v3 = &PPM_ETW_GET_IDLE_STATES_V2_RUNDOWN;
  if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v3) )
  {
    v4 = *(_DWORD **)(a1 + 1144);
    if ( v4 )
    {
      if ( ProcLibGetProcessorNumber(a1, &v11) >= 0 )
      {
        v5 = 29 * *v4;
        Pool2 = (_BYTE *)ExAllocatePool2(256LL, v5, 1919119952LL);
        if ( Pool2 )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
            WdfDriverGlobals,
            qword_1400191B8,
            0LL);
          v7 = 0LL;
          v17 = Pool2;
          v18 = v5;
          for ( i = 0; (unsigned int)v7 < *v4; *(_DWORD *)&Pool2[v9 + 25] = v4[v8 + 3] )
          {
            v8 = 3 * v7;
            v9 = 29LL * (unsigned int)v7;
            v10 = v4[3 * v7 + 1];
            v7 = (unsigned int)(v7 + 1);
            Pool2[v9 + 12] = (v10 >> 3) & 0xF;
            *(_DWORD *)&Pool2[v9 + 4] = (v4[v8 + 1] >> 1) & 1;
            *(_DWORD *)&Pool2[v9] = v4[v8 + 1] & 1;
            *(_DWORD *)&Pool2[v9 + 8] = (v4[v8 + 1] >> 2) & 1;
            *(_DWORD *)&Pool2[v9 + 13] = (v4[v8 + 1] >> 7) & 1;
            *(_DWORD *)&Pool2[v9 + 17] = (v4[v8 + 1] >> 8) & 1;
            *(_DWORD *)&Pool2[v9 + 21] = v4[v8 + 2];
          }
          UserData.Ptr = (unsigned __int64)&v11;
          v14 = 1LL;
          p_Number = &v11.Number;
          *(_QWORD *)&UserData.Size = 2LL;
          v15 = v4;
          v16 = 4LL;
          EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v3, 0LL, (ULONG)4, &UserData);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
            WdfDriverGlobals,
            qword_1400191B8);
          ExFreePoolWithTag(Pool2, (ULONG)1919119952);
        }
      }
    }
  }
}
