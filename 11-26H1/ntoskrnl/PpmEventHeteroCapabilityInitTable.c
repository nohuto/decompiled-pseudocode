/*
 * XREFs of PpmEventHeteroCapabilityInitTable @ 0x1407E0BEC
 * Callers:
 *     PpmHeteroCompleteInitTablePhase @ 0x1407DA80C (PpmHeteroCompleteInitTablePhase.c)
 *     PpmHeteroPopulateRelativeCapability @ 0x1407DA910 (PpmHeteroPopulateRelativeCapability.c)
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PpmEventHeteroCapabilityInitTable(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v2; // rsi
  unsigned int v4; // ecx
  bool v5; // zf
  _DWORD *Pool2; // rdi
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // [rsp+38h] [rbp-9h] BYREF
  int v13; // [rsp+3Ch] [rbp-5h] BYREF
  BOOL v14; // [rsp+40h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  int *v16; // [rsp+58h] [rbp+17h]
  __int64 v17; // [rsp+60h] [rbp+1Fh]
  BOOL *v18; // [rsp+68h] [rbp+27h]
  __int64 i; // [rsp+70h] [rbp+2Fh]
  _DWORD *v20; // [rsp+78h] [rbp+37h]
  int v21; // [rsp+80h] [rbp+3Fh]
  int v22; // [rsp+84h] [rbp+43h]

  v2 = (const EVENT_DESCRIPTOR *)PPM_ETW_HETERO_CAPABILITY_INIT_TABLE_RUNDOWN;
  if ( !a2 )
    v2 = &PPM_ETW_HETERO_CAPABILITY_INIT_TABLE_CHANGED;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, v2) )
    {
      if ( a1 )
      {
        v4 = *(_DWORD *)a1;
        v13 = *(_DWORD *)(a1 + 4);
        v5 = *(_BYTE *)(a1 + 8) == 0;
        v12 = v4;
        v14 = !v5;
        Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
        if ( Pool2 )
        {
          UserData.Ptr = (ULONGLONG)&v12;
          v7 = 0LL;
          *(_QWORD *)&UserData.Size = 4LL;
          v16 = &v13;
          v18 = &v14;
          v8 = v12;
          v17 = 4LL;
          for ( i = 4LL; (unsigned int)v7 < v12; v8 = v12 )
          {
            Pool2[3 * v7] = v7;
            v9 = *(_QWORD *)(a1 + 32);
            if ( v9 )
              LODWORD(v9) = *(_DWORD *)(v9 + 4 * v7);
            Pool2[3 * v7 + 1] = v9;
            v10 = *(_QWORD *)(a1 + 40);
            if ( v10 )
              v11 = *(_DWORD *)(v10 + 4 * v7);
            else
              v11 = 0;
            Pool2[3 * v7 + 2] = v11;
            v7 = (unsigned int)(v7 + 1);
          }
          v21 = 12 * v8;
          v20 = Pool2;
          v22 = 0;
          EtwWrite(PpmEtwHandle, v2, 0LL, 4u, &UserData);
          ExFreePoolWithTag(Pool2, 0x654D5050u);
        }
      }
    }
  }
}
