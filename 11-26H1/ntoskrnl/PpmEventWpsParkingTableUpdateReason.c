/*
 * XREFs of PpmEventWpsParkingTableUpdateReason @ 0x14060EE30
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x14025B888 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmEventTraceControlCallback @ 0x1407DCAD0 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402767B0 (KeQueryMaximumProcessorCountEx.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14043BC70 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PpmEventWpsParkingTableUpdateReason(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rsi
  ULONG MaximumProcessorCount; // eax
  _DWORD *Pool2; // r14
  unsigned int i; // edi
  unsigned int v5; // ebx
  __int64 v6; // r15
  __int64 Prcb; // rdx
  int v8; // eax
  unsigned int v9; // [rsp+48h] [rbp-19h] BYREF
  int v10; // [rsp+4Ch] [rbp-15h] BYREF
  int v11; // [rsp+50h] [rbp-11h] BYREF
  unsigned __int16 *v12[2]; // [rsp+58h] [rbp-9h] BYREF
  __int16 v13; // [rsp+68h] [rbp+7h]
  int v14; // [rsp+6Ah] [rbp+9h]
  __int16 v15; // [rsp+6Eh] [rbp+Dh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp+Fh] BYREF
  int *v17; // [rsp+80h] [rbp+1Fh]
  __int64 v18; // [rsp+88h] [rbp+27h]
  _DWORD *v19; // [rsp+90h] [rbp+2Fh]
  int v20; // [rsp+98h] [rbp+37h]
  int v21; // [rsp+9Ch] [rbp+3Bh]

  v14 = 0;
  v1 = (const EVENT_DESCRIPTOR *)PPM_ETW_WPS_PARKING_UPDATE_REASON_RUNDOWN;
  v15 = 0;
  if ( !a1 )
    v1 = &PPM_ETW_WPS_PARKING_UPDATE_REASON;
  v9 = 0;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled((REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink, v1) )
    {
      MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
      v10 = *(_DWORD *)(PpmHeteroCapability + 4);
      v11 = MaximumProcessorCount * v10;
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        for ( i = 0; i < *(_DWORD *)(PpmHeteroCapability + 4); ++i )
        {
          v13 = 0;
          Pool2[3 * i] = i;
          v12[1] = (unsigned __int16 *)qword_140E0B638[0];
          v12[0] = (unsigned __int16 *)PpmCheckRegistered;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v9, v12) )
          {
            v5 = v9;
            KeGetPrcb(v9);
            v6 = 3LL * (i + v5 * v10);
            Pool2[v6] = i;
            Pool2[v6 + 1] = v5;
            Prcb = KeGetPrcb(v5);
            if ( PpmHeteroCapabilitySimulation && (PpmHeteroSimulationStateConfig & 2) != 0 || PpmHeteroHgsVendor != 3 )
              v8 = 0;
            else
              v8 = *(_DWORD *)(PpmHeteroWpsParkingTableEntry + *(unsigned __int16 *)(Prcb + 35450) + 4);
            Pool2[v6 + 2] = v8;
          }
        }
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&v10;
        v18 = 4LL;
        v17 = &v11;
        v19 = Pool2;
        v21 = 0;
        v20 = 12 * v11;
        EtwWriteEx(
          (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
          v1,
          0LL,
          0,
          0LL,
          0LL,
          3u,
          &UserData);
        ExFreePoolWithTag(Pool2, 0x654D5050u);
      }
    }
  }
}
