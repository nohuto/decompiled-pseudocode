/*
 * XREFs of PpmEventWpsParkingTableUpdateReason @ 0x140612074
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x140517458 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     KeQueryMaximumProcessorCountEx @ 0x140275D20 (KeQueryMaximumProcessorCountEx.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline @ 0x14060D2B8 (Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PpmEventWpsParkingTableUpdateReason(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rdi
  ULONG MaximumProcessorCount; // eax
  _DWORD *Pool2; // rsi
  unsigned int i; // ebx
  unsigned int v5; // r14d
  __int64 Prcb; // r15
  __int64 v7; // r12
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // [rsp+48h] [rbp-29h] BYREF
  int v11; // [rsp+4Ch] [rbp-25h] BYREF
  int v12; // [rsp+50h] [rbp-21h] BYREF
  unsigned __int16 *v13[2]; // [rsp+58h] [rbp-19h] BYREF
  __int16 v14; // [rsp+68h] [rbp-9h]
  int v15; // [rsp+6Ah] [rbp-7h]
  __int16 v16; // [rsp+6Eh] [rbp-3h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-1h] BYREF
  int *v18; // [rsp+80h] [rbp+Fh]
  __int64 v19; // [rsp+88h] [rbp+17h]
  _DWORD *v20; // [rsp+90h] [rbp+1Fh]
  int v21; // [rsp+98h] [rbp+27h]
  int v22; // [rsp+9Ch] [rbp+2Bh]

  v15 = 0;
  v1 = (const EVENT_DESCRIPTOR *)PPM_ETW_WPS_PARKING_UPDATE_REASON_RUNDOWN;
  v16 = 0;
  if ( !a1 )
    v1 = &PPM_ETW_WPS_PARKING_UPDATE_REASON;
  v10 = 0;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, v1) )
    {
      MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
      v11 = *(_DWORD *)(PpmHeteroCapability + 4);
      v12 = MaximumProcessorCount * v11;
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        for ( i = 0; i < *(_DWORD *)(PpmHeteroCapability + 4); ++i )
        {
          v14 = 0;
          Pool2[3 * i] = i;
          v13[1] = (unsigned __int16 *)PpmCheckRegistered.Bitmap[0];
          v13[0] = (unsigned __int16 *)&PpmCheckRegistered;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v10, v13) )
          {
            v5 = v10;
            Prcb = KeGetPrcb(v10);
            v7 = 3LL * (i + v5 * v11);
            Pool2[v7] = i;
            Pool2[v7 + 1] = v5;
            if ( (unsigned int)Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline() )
            {
              v9 = *(_DWORD *)(*(_QWORD *)(Prcb + 35456) + 4LL);
            }
            else
            {
              v8 = KeGetPrcb(v5);
              if ( PpmHeteroCapabilitySimulation && (PpmHeteroSimulationStateConfig & 2) != 0 || PpmHeteroHgsVendor != 3 )
                v9 = 0;
              else
                v9 = *(_DWORD *)(PpmHeteroWpsParkingTableEntry + *(unsigned __int16 *)(v8 + 35450) + 4);
            }
            Pool2[v7 + 2] = v9;
          }
        }
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&v11;
        v19 = 4LL;
        v18 = &v12;
        v20 = Pool2;
        v22 = 0;
        v21 = 12 * v12;
        EtwWriteEx(PpmEtwHandle, v1, 0LL, 0, 0LL, 0LL, 3u, &UserData);
        ExFreePoolWithTag(Pool2, 0x654D5050u);
      }
    }
  }
}
