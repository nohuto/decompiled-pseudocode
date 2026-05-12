/*
 * XREFs of RaidUnitSetSystemPowerIrp @ 0x14003CFDC
 * Callers:
 *     RaidUnitSetPowerIrp @ 0x14003CC5C (RaidUnitSetPowerIrp.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x140004AB0 (RaUnitAcquireRemoveLock.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1400BC4F8 (StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitSetSystemPowerIrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  POWER_STATE v6; // ebx
  int v7; // edi
  int v8; // edx
  char v9; // cl
  REQUEST_POWER_COMPLETE *v10; // r14
  void *Context; // r15
  NTSTATUS v12; // r13d
  unsigned __int64 v13; // r8
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  bool v16; // zf
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  int *v19; // rax
  void *v20; // rdx
  __int64 v21; // rdx
  _BYTE *v22; // r9
  unsigned __int8 v23; // bl
  char v24; // r11
  char v25; // r14
  char v26; // r10
  char v27; // r15
  char *v28; // r15
  __int64 v29; // rax
  unsigned __int64 v30; // r12
  __int64 v31; // r8
  int v32; // ecx
  char v33; // r12
  char v34; // cl
  char v35; // r8
  char v36; // al
  char *v37; // r10
  unsigned int v38; // eax
  char v40; // [rsp+60h] [rbp-68h]
  char v41; // [rsp+61h] [rbp-67h]
  int v42; // [rsp+64h] [rbp-64h]
  unsigned int v43; // [rsp+68h] [rbp-60h]
  __int128 v44; // [rsp+70h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a2 + 184);
  v5 = *(int *)(v4 + 24);
  v6.SystemState = (_SYSTEM_POWER_STATE)DevicePowerStateTable[v5];
  if ( (*(_DWORD *)(v4 + 8) & 0x400000) != 0 && (_DWORD)v5 == 6 && v6.SystemState == PowerSystemSleeping3 )
    *(_DWORD *)(a1 + 3620) |= 1u;
  LOBYTE(v7) = 0;
  v8 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 32LL);
  if ( (_DWORD)v5 == 1 || (v9 = 1, *(_DWORD *)(a1 + 544) >= (int)v5) )
    v9 = 0;
  *(_BYTE *)(a1 + 556) = v9;
  *(_DWORD *)(a1 + 544) = v5;
  *(_DWORD *)(a1 + 552) = v8;
  if ( v9 )
  {
    if ( (_DWORD)v5 == 5 )
      StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged(a1);
    v10 = RaidUnitSetDevicePowerCompletionRoutine;
    Context = (void *)a2;
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  }
  else
  {
    v10 = RaidUnitDeviceStackPowerUpCompletion;
    Context = (void *)a1;
  }
  RaUnitAcquireRemoveLock(a1, a2, 1);
  v12 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(a1 + 8), 2u, v6, v10, Context, 0LL);
  if ( v12 == 259 )
  {
    if ( v6.SystemState == PowerSystemWorking )
      *(_BYTE *)(a1 + 504) |= 0x80u;
    else
      *(_BYTE *)(a1 + 505) |= 1u;
    v12 = 0;
  }
  if ( !*(_BYTE *)(a1 + 556) || v12 < 0 )
  {
    v13 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v14 = *(_DWORD *)(v13 + *(_QWORD *)(a1 + 40));
    while ( (v14 & 1) == 0 )
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + *(_QWORD *)(a1 + 40)), v14 - 2, v14);
      if ( v15 == v14 )
        goto LABEL_27;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
LABEL_27:
    v16 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v12;
    if ( v16 )
      goto LABEL_93;
    v44 = 0LL;
    IoGetActivityIdIrp(a2, &v44);
    v18 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v18 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
      {
        v20 = &EventNonReadWriteRequestComplete;
        goto LABEL_92;
      }
LABEL_93:
      IofCompleteRequest((PIRP)a2, 0);
      goto LABEL_94;
    }
    if ( *(_BYTE *)v18 != 15 )
    {
      if ( *(_BYTE *)v18 == 27 )
      {
        if ( *(_BYTE *)(v18 + 1) == 7 && !*(_DWORD *)(v18 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v19 = *(int **)(a2 + 56);
            if ( v19 )
              v7 = *v19;
            McTemplateK0pqd_EtwWriteTransfer(v17, v18, (unsigned int)&v44, a2, v7, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_93;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v20 = &EventPnpRequestComplete;
LABEL_92:
          McTemplateK0pd_EtwWriteTransfer(v17, v20, &v44, a2, *(_DWORD *)(a2 + 48));
          goto LABEL_93;
        }
      }
      goto LABEL_93;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_93;
    v21 = *(_QWORD *)(v18 + 8);
    v22 = 0LL;
    v40 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    if ( *(_BYTE *)(v21 + 2) == 40 )
    {
      v28 = 0LL;
      v41 = 0;
      if ( *(_DWORD *)(v21 + 20) )
        goto LABEL_93;
      v29 = 0LL;
      v42 = 0;
      v43 = *(_DWORD *)(v21 + 56);
      if ( !v43 )
        goto LABEL_93;
      do
      {
        v17 = *(unsigned int *)(v21 + 4 * v29 + 120);
        if ( (unsigned int)v17 >= 0x80 )
        {
          v30 = *(unsigned int *)(v21 + 16);
          if ( (unsigned int)v17 < (unsigned int)v30 )
          {
            v31 = (unsigned int)v17;
            v32 = *(_DWORD *)(v17 + v21) - 64;
            if ( v32 )
            {
              LODWORD(v17) = v32 - 1;
              if ( (_DWORD)v17 )
              {
                if ( (_DWORD)v17 == 1 )
                {
                  LODWORD(v17) = v31 + 40;
                  if ( v31 + 40 <= v30 )
                  {
                    if ( *(_DWORD *)(v31 + v21 + 12) )
                      v28 = (char *)(v31 + v21 + 32);
                    v22 = *(_BYTE **)(v31 + v21 + 24);
LABEL_52:
                    v33 = *(_BYTE *)(v31 + v21 + 8);
                    v23 = *(_BYTE *)(v31 + v21 + 9);
                    goto LABEL_61;
                  }
                }
              }
              else
              {
                LODWORD(v17) = v31 + 56;
                if ( v31 + 56 <= v30 )
                {
                  v41 = 1;
                  if ( *(_BYTE *)(v31 + v21 + 10) )
                    v28 = (char *)(v31 + v21 + 24);
                  v22 = *(_BYTE **)(v31 + v21 + 16);
                  v23 = *(_BYTE *)(v31 + v21 + 9);
                  v40 = *(_BYTE *)(v31 + v21 + 8);
                }
              }
            }
            else
            {
              LODWORD(v17) = v31 + 40;
              if ( v31 + 40 <= v30 )
              {
                if ( *(_BYTE *)(v31 + v21 + 10) )
                  v28 = (char *)(v31 + v21 + 24);
                v22 = *(_BYTE **)(v31 + v21 + 16);
                goto LABEL_52;
              }
            }
            if ( v41 )
              break;
          }
        }
        v29 = (unsigned int)(v42 + 1);
        v42 = v29;
      }
      while ( (unsigned int)v29 < v43 );
      v33 = v40;
LABEL_61:
      if ( !v28 )
        goto LABEL_93;
      v34 = *v28;
      v27 = 0;
    }
    else
    {
      v34 = *(_BYTE *)(v21 + 72);
      v22 = *(_BYTE **)(v21 + 32);
      v23 = *(_BYTE *)(v21 + 11);
      v33 = *(_BYTE *)(v21 + 4);
      if ( *(_BYTE *)(v21 + 2) )
        goto LABEL_93;
    }
    LOBYTE(v17) = v34 - 8;
    if ( (v17 & 0x5D) != 0 )
      goto LABEL_93;
    v35 = *(_BYTE *)(v21 + 3);
    if ( v35 == 1 || !v22 || !v23 )
    {
LABEL_86:
      if ( byte_140173441 < 0 )
      {
        if ( !v27 )
        {
          v26 = 0;
          v25 = 0;
          v24 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v17,
          v21,
          (unsigned int)&v44,
          a2,
          *(_DWORD *)(a2 + 48),
          v35,
          v33,
          v24,
          v25,
          v26,
          a2);
      }
      goto LABEL_93;
    }
    v36 = *v22 & 0x7F;
    if ( v36 == 114 || v36 == 115 )
    {
      v17 = (unsigned __int64)&v22[v23];
      LOBYTE(v21) = 0;
      if ( (unsigned __int64)(v22 + 8) > v17 )
        goto LABEL_84;
      v25 = v22[2];
      v24 = v22[1] & 0xF;
      v26 = v22[3];
    }
    else
    {
      v17 = (unsigned __int64)&v22[v23];
      LOBYTE(v21) = 0;
      if ( (unsigned __int64)(v22 + 8) > v17 )
        goto LABEL_84;
      v37 = v22 + 13;
      v24 = v22[2] & 0xF;
      v38 = v23;
      if ( (unsigned int)(unsigned __int8)v22[7] + 8 <= v23 )
        v38 = (unsigned __int8)v22[7] + 8;
      v17 = (unsigned __int64)&v22[v38];
      if ( (unsigned __int64)v37 <= v17 )
        v25 = v22[12];
      if ( (unsigned __int64)(v22 + 14) > v17 )
        v26 = 0;
      else
        v26 = *v37;
    }
    LOBYTE(v21) = 1;
LABEL_84:
    if ( (_BYTE)v21 )
      v27 = 1;
    goto LABEL_86;
  }
  v12 = 259;
LABEL_94:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 58LL, &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids, a1, a2, v12);
  }
  return (unsigned int)v12;
}
