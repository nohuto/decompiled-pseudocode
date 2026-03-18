/*
 * XREFs of ACPIDevicePowerProcessPhase3 @ 0x14001AD90
 * Callers:
 *     ACPIDevicePowerDpc @ 0x140019030 (ACPIDevicePowerDpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001B3DC (WPP_RECORDER_SF_.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x14001B704 (ACPIIsPowerNodeMissingDependencies.c)
 *     WPP_RECORDER_SF_qsL @ 0x14001C7BC (WPP_RECORDER_SF_qsL.c)
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     ACPIDeviceCompletePhase3Off @ 0x14003B300 (ACPIDeviceCompletePhase3Off.c)
 *     WPP_RECORDER_SF_qL @ 0x14003B520 (WPP_RECORDER_SF_qL.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 ACPIDevicePowerProcessPhase3()
{
  unsigned int v0; // edi
  char v1; // bp
  char v2; // dl
  char v3; // r13
  __int64 *v4; // r12
  __int64 v5; // rbx
  __int64 *v6; // rcx
  _QWORD *v7; // r9
  __int32 v8; // ecx
  _QWORD *v9; // r8
  __int64 v10; // rdx
  int v11; // eax
  char v12; // r8
  __int64 *v13; // rsi
  __int64 v14; // rbx
  unsigned int v15; // eax
  bool v16; // zf
  __int64 v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // r15
  const char *v21; // r14
  __int64 (__fastcall *v22)(); // rsi
  int v23; // edx
  unsigned int v24; // edi
  __int64 v25; // rax
  int v26; // edx
  char v27; // [rsp+80h] [rbp+8h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      10,
      70,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids);
  v0 = 0;
  v1 = 0;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  while ( 2 )
  {
    if ( Phase3PendingOffWorkCount )
    {
      v2 = 1;
    }
    else
    {
      v2 = 0;
      Phase3CurrentOffResourceOrder = -1;
    }
    v27 = v2;
    if ( Phase3PendingOnWorkCount )
    {
      v3 = 1;
    }
    else
    {
      v3 = 0;
      Phase3CurrentOnResourceOrder = 0;
    }
    if ( !Phase3PendingOnWorkCount && !Phase3PendingOffWorkCount )
      v1 = 1;
    v4 = (__int64 *)AcpiPowerNodeList;
    ++Phase3PendingOnWorkCount;
LABEL_10:
    while ( 2 )
    {
      if ( v4 == &AcpiPowerNodeList
        || (v5 = (__int64)v4, v6 = v4, v4 = (__int64 *)*v4, v3)
        && *((unsigned __int8 *)v6 + 40) > (unsigned int)Phase3CurrentOnResourceOrder )
      {
        v12 = 0;
        goto LABEL_21;
      }
      if ( !v2
        || *((unsigned __int8 *)v6 + 40) <= (unsigned int)Phase3CurrentOffResourceOrder
        || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 64), 1, 1) != 3 )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 64), 4, 3) != 3 )
          continue;
        v1 = 0;
        v7 = *(_QWORD **)(v5 + 48);
        v8 = 0;
        if ( v7 == (_QWORD *)(v5 + 48) )
          goto LABEL_48;
        while ( 1 )
        {
          v9 = v7;
          v10 = *(v7 - 1);
          v7 = (_QWORD *)*v7;
          if ( _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 552), 0, 0) && *((_BYTE *)v9 - 16) )
            goto LABEL_45;
          v11 = *(_DWORD *)(v10 + 544);
          if ( v11 == *((_DWORD *)v9 - 5) )
            break;
LABEL_46:
          if ( v7 == (_QWORD *)(v5 + 48) )
          {
            v2 = v27;
LABEL_48:
            _InterlockedExchange((volatile __int32 *)(v5 + 24), v8);
            v18 = *(_QWORD *)(v5 + 16);
            if ( (v18 & 0x440) == 0 && ((v18 & 0x2220) != 0 || v8) )
            {
              _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 64), 1, 4);
              ++Phase3PendingOnWorkCount;
              *(_DWORD *)(v5 + 68) = 0;
              KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
              v19 = (__int64 *)(v5 + 88);
              if ( (*(_QWORD *)(v5 + 16) & 0x2000) == 0 )
                v19 = (__int64 *)(v5 + 72);
              v20 = *v19;
              v21 = "_RST";
              v22 = ACPIDeviceCompletePhase3Reset;
              if ( (*(_QWORD *)(v5 + 16) & 0x2000LL) == 0 )
              {
                v21 = "_ON";
                v22 = ACPIDeviceCompletePhase3On;
              }
              if ( (unsigned __int8)ACPIIsPowerNodeMissingDependencies(v5) )
              {
                v24 = -1073741661;
              }
              else
              {
                v24 = AMLIAsyncEvalObject(v20, 0, 0, 0, (__int64)v22, v5);
                v25 = *(_QWORD *)(v5 + 16);
                if ( (v25 & 0x2000) != 0 )
                  *(_QWORD *)(v5 + 16) = v25 & 0xFFFFFFFFFFFFDFFFuLL;
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_qsL(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v23,
                  10,
                  71,
                  (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
                  v5,
                  (__int64)v21,
                  v24);
              if ( v24 != 259 )
                ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64))v22)(v20, v24, 0LL, v5);
              KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
              v2 = v27;
              v16 = v24 == 259;
              v0 = 0;
              if ( v16 && !v3 )
              {
                Phase3CurrentOnResourceOrder = *(unsigned __int8 *)(v5 + 40);
                v3 = 1;
              }
            }
            goto LABEL_10;
          }
        }
        if ( v11 == 4 )
        {
          if ( ((*(_DWORD *)(v10 + 8) & 0x800LL) == 0 || (*(_DWORD *)(v10 + 1008) & 0x10000000) != 0)
            && !*(_BYTE *)(v10 + 665) )
          {
            goto LABEL_46;
          }
        }
        else if ( v11 == 1 )
        {
          *(_BYTE *)(v10 + 665) = 0;
        }
LABEL_45:
        ++v8;
        goto LABEL_46;
      }
      break;
    }
    v12 = 1;
LABEL_21:
    if ( !--Phase3PendingOnWorkCount )
    {
      Phase3CurrentOnResourceOrder = 0;
      goto LABEL_23;
    }
    if ( !v3 )
    {
LABEL_23:
      if ( v4 == &AcpiPowerNodeList || v12 )
      {
        do
        {
          ++Phase3PendingOffWorkCount;
          v13 = (__int64 *)qword_140090CF8;
          while ( v13 != &AcpiPowerNodeList )
          {
            v14 = (__int64)v13;
            v13 = (__int64 *)v13[1];
            v15 = *(unsigned __int8 *)(v14 + 40);
            if ( v15 <= Phase3CurrentOffResourceOrder )
            {
              if ( v2 && v15 < Phase3CurrentOffResourceOrder )
                break;
              if ( _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 64), 1, 4) == 4 )
              {
                ++Phase3PendingOffWorkCount;
                v1 = 0;
                *(_DWORD *)(v14 + 68) = 0;
                KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
                if ( (unsigned __int8)ACPIIsPowerNodeMissingDependencies(v14) )
                {
                  v0 = -1073741661;
                }
                else if ( (AcpiOverrideAttributes & 0x4000000) == 0 || !AcpiKsrInProgress )
                {
                  v0 = AMLIAsyncEvalObject(*(_QWORD *)(v14 + 80), 0, 0, 0, (__int64)ACPIDeviceCompletePhase3Off, v14);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v26) = 4;
                  WPP_RECORDER_SF_qL(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v26,
                    10,
                    72,
                    (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
                    v14,
                    v0);
                }
                if ( v0 != 259 )
                  ACPIDeviceCompletePhase3Off(*(_QWORD *)(v14 + 80), v0, 0LL, v14);
                KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
                if ( v0 == 259 )
                {
                  v2 = 1;
                  v27 = 1;
                  Phase3CurrentOffResourceOrder = *(unsigned __int8 *)(v14 + 40);
                }
                else
                {
                  v2 = v27;
                }
                v0 = 0;
              }
            }
          }
          v16 = Phase3PendingOffWorkCount == 1;
          v27 = v2;
          --Phase3PendingOffWorkCount;
          if ( v16 )
          {
            v2 = 0;
            Phase3CurrentOffResourceOrder = -1;
            v27 = 0;
          }
          else if ( v2 )
          {
            goto LABEL_39;
          }
        }
        while ( v13 != &AcpiPowerNodeList );
        if ( v1 )
          break;
      }
      continue;
    }
    break;
  }
LABEL_39:
  if ( Phase3PendingOnWorkCount > 0 || Phase3PendingOffWorkCount > 0 )
    v1 = 0;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  return v1 == 0 ? 0x103 : 0;
}
