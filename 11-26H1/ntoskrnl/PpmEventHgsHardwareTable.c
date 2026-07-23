/*
 * XREFs of PpmEventHgsHardwareTable @ 0x1404E42EC
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x140517458 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     KeQueryMaximumProcessorCountEx @ 0x140275D20 (KeQueryMaximumProcessorCountEx.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PpmEventHgsHardwareTable(char a1)
{
  const EVENT_DESCRIPTOR *v2; // rsi
  _BYTE *Pool2; // rdi
  unsigned __int64 v4; // r14
  __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned int v7; // r15d
  __int64 Prcb; // rax
  unsigned int v9; // r9d
  __int64 v10; // r10
  unsigned int i; // eax
  char v12; // r8
  __int64 v13; // rcx
  char v14; // al
  unsigned int v15; // [rsp+48h] [rbp-39h] BYREF
  ULONG MaximumProcessorCount; // [rsp+4Ch] [rbp-35h] BYREF
  int v17; // [rsp+50h] [rbp-31h] BYREF
  int v18; // [rsp+54h] [rbp-2Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  ULONG *p_MaximumProcessorCount; // [rsp+78h] [rbp-9h]
  __int64 v21; // [rsp+80h] [rbp-1h]
  unsigned int *v22; // [rsp+88h] [rbp+7h]
  __int64 v23; // [rsp+90h] [rbp+Fh]
  int *v24; // [rsp+98h] [rbp+17h]
  __int64 v25; // [rsp+A0h] [rbp+1Fh]
  _BYTE *v26; // [rsp+A8h] [rbp+27h]
  int v27; // [rsp+B0h] [rbp+2Fh]
  int v28; // [rsp+B4h] [rbp+33h]

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v2 = (const EVENT_DESCRIPTOR *)PPM_ETW_WPS_DYNAMIC_TABLE_RUNDOWN;
  if ( !a1 )
    v2 = &PPM_ETW_WPS_DYNAMIC_TABLE_CHANGED;
  v15 = *(_DWORD *)(PpmHeteroCapability + 4);
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, v2) )
    {
      v17 = MaximumProcessorCount * v15;
      Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        v4 = PpmCheckRegistered.Bitmap[0];
        LOWORD(v5) = 0;
        UserData.Ptr = (ULONGLONG)&v18;
        p_MaximumProcessorCount = &MaximumProcessorCount;
        v22 = &v15;
        v24 = &v17;
        v18 = (unsigned __int8)PpmHeteroHgsThreadEnabled;
        *(_QWORD *)&UserData.Size = 4LL;
        v21 = 4LL;
        v23 = 4LL;
        v25 = 4LL;
        while ( 1 )
        {
          while ( v4 )
          {
            _BitScanForward64(&v6, v4);
            v4 &= ~(1LL << v6);
            v7 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int16)v5].Flink
                 + (unsigned __int8)v6);
            Prcb = KeGetPrcb(v7);
            v9 = 0;
            v10 = *(_QWORD *)(Prcb + 35424);
            for ( i = v15; v9 < v15; i = v15 )
            {
              v12 = *(_BYTE *)(v10 + 4LL * v9 + 7);
              v13 = 5LL * (v9 + v7 * i);
              v14 = *(_BYTE *)(v10 + 4LL * v9 + 6);
              *(_DWORD *)&Pool2[2 * v13 + 4] = v9++;
              Pool2[2 * v13 + 8] = v14;
              Pool2[2 * v13 + 9] = v12;
              *(_DWORD *)&Pool2[2 * v13] = v7;
            }
          }
          v5 = (unsigned __int16)(v5 + 1);
          if ( (unsigned int)v5 >= PpmCheckRegistered.Count )
            break;
          v4 = PpmCheckRegistered.Bitmap[v5];
        }
        v26 = Pool2;
        v28 = 0;
        v27 = 10 * v17;
        EtwWriteEx(PpmEtwHandle, v2, 0LL, 0, 0LL, 0LL, 5u, &UserData);
        ExFreePoolWithTag(Pool2, 0x654D5050u);
      }
    }
  }
}
