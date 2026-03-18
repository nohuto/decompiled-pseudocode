/*
 * XREFs of ACPIThermalLoopEx @ 0x140029C18
 * Callers:
 *     ACPIThermalLoop @ 0x140029C00 (ACPIThermalLoop.c)
 *     ACPIThermalStartDevice @ 0x1400BAC70 (ACPIThermalStartDevice.c)
 * Callees:
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     ACPIThermalTMPCallback @ 0x140029BA0 (ACPIThermalTMPCallback.c)
 *     ACPIThermalLoop @ 0x140029C00 (ACPIThermalLoop.c)
 *     AcpiDiagTraceThermalNotification @ 0x14002A200 (AcpiDiagTraceThermalNotification.c)
 *     ACPIThermalCompletePendingIrps @ 0x14002A640 (ACPIThermalCompletePendingIrps.c)
 *     AcpiDiagTraceTemperatureChange @ 0x14002A984 (AcpiDiagTraceTemperatureChange.c)
 *     ACPISetDeviceWorker @ 0x14002AAD4 (ACPISetDeviceWorker.c)
 *     ACPIDeviceHasFirmwareDependencies @ 0x14002AB9C (ACPIDeviceHasFirmwareDependencies.c)
 *     AcpiDiagTraceTemperatureTelemetry @ 0x140056A84 (AcpiDiagTraceTemperatureTelemetry.c)
 */

void __fastcall ACPIThermalLoopEx(__int64 a1, int a2, int a3)
{
  __int64 v3; // rsi
  KSPIN_LOCK *v4; // r14
  KIRQL v8; // al
  __int64 i; // rdx
  int v10; // ebp
  KIRQL v11; // r15
  char v12; // r12
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // edx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  KIRQL v30; // al
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // r9
  int v34; // edx
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // ecx

  v3 = *(_QWORD *)(a1 + 200);
  v4 = (KSPIN_LOCK *)(a1 + 184);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v10 = ~a2 & (*(_DWORD *)(a1 + 192) | a3);
  v11 = v8;
  *(_DWORD *)(a1 + 192) = v10;
  v12 = 1;
  if ( v10 >= 0 )
  {
    *(_DWORD *)(a1 + 192) = v10 | 0x80000000;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !v12 )
        {
          v11 = KeAcquireSpinLockRaiseToDpc(v4);
          v12 = 1;
        }
        v13 = *(_DWORD *)(a1 + 192);
        if ( (v13 & 0x40000000) != 0 )
          goto LABEL_17;
        if ( (v13 & 0x10000000) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v13 | 0x8000000;
          if ( (v13 & 0x8000000) == 0 )
            ACPISetDeviceWorker(a1, 0x2000LL);
        }
        v14 = *(_DWORD *)(a1 + 192);
        if ( (v14 & 0x8000000) != 0 )
        {
LABEL_17:
          *(_DWORD *)(a1 + 192) &= ~0x80000000;
          v4 = (KSPIN_LOCK *)(a1 + 184);
          goto LABEL_18;
        }
        if ( (v14 & 0x10) == 0 )
        {
          v29 = v14 | 0x40000010;
          v20 = 17LL;
          goto LABEL_55;
        }
        if ( (v14 & 8) != 0 )
          break;
        *(_DWORD *)(a1 + 192) = v14 | 0x40000008;
        KeReleaseSpinLock(v4, v11);
        v33 = *(unsigned int *)(v3 + 100);
        v34 = 1346589535;
LABEL_60:
        v12 = 0;
        if ( (unsigned int)ACPIGet(a1, v34, 546308096, v33, 4, (__int64)ACPIThermalComplete, a1, 0LL, 0LL) != 259 )
          ACPIThermalLoop(a1, 0x40000000LL);
      }
      v15 = *(_DWORD *)(a1 + 192);
      if ( (v14 & 2) != 0 )
      {
        if ( *(_QWORD *)(v3 + 120) )
          break;
      }
LABEL_11:
      if ( (v15 & 4) == 0 )
      {
        v20 = 4LL;
        *(_DWORD *)(a1 + 192) = v15 | 0x40000004;
        goto LABEL_53;
      }
      if ( (v15 & 1) == 0 )
      {
        v20 = 1LL;
        *(_DWORD *)(a1 + 192) = v15 | 0x40000001;
        goto LABEL_53;
      }
      if ( (v15 & 0x100) != 0 )
      {
        LOBYTE(i) = *(_BYTE *)(*(_QWORD *)(a1 + 200) + 274LL);
        if ( (v15 & 2) != 0 && (v15 & 0x200) == 0 && (_BYTE)i )
        {
          v20 = 512LL;
          *(_DWORD *)(a1 + 192) = v15 | 0x44000200;
          goto LABEL_53;
        }
        if ( (v15 & 0x20000000) != 0 && (v15 & 2) != 0 )
          goto LABEL_17;
        if ( *(_BYTE *)(v3 + 273) || (v15 & 2) != 0 )
        {
          if ( (v15 & 0x40) == 0 )
          {
            *(_DWORD *)(a1 + 192) = v15 | 0x40;
            AcpiDiagTraceThermalNotification(v3, a1, 128LL);
          }
          v25 = *(_DWORD *)(a1 + 192);
          if ( (v25 & 0x80u) == 0 )
          {
            *(_DWORD *)(a1 + 192) = v25 | 0x80;
            AcpiDiagTraceThermalNotification(v3, a1, 129LL);
          }
          v26 = *(_DWORD *)(a1 + 192);
          if ( (v26 & 0x800) == 0 )
          {
            *(_DWORD *)(a1 + 192) = v26 | 0x800;
            AcpiDiagTraceTemperatureChange(v3, a1);
          }
          v27 = *(_DWORD *)(a1 + 192);
          if ( (v27 & 0x4000) == 0 )
          {
            *(_DWORD *)(a1 + 192) = v27 | 0x4000;
            AcpiDiagTraceTemperatureTelemetry(a1, i);
          }
          v28 = *(_DWORD *)(a1 + 192);
          if ( (v28 & 0x1000) != 0 )
          {
            if ( !(unsigned __int8)ACPIThermalCompletePendingIrps(a1, i) )
              goto LABEL_17;
          }
          else
          {
            *(_DWORD *)(a1 + 192) = v28 | 0x1000;
            KeReleaseSpinLock(v4, v11);
            v12 = 0;
            v30 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
            v31 = (_QWORD *)qword_14008F888;
            v11 = v30;
            v32 = (_QWORD *)(a1 + 208);
            if ( *(__int64 **)qword_14008F888 != &AcpiThermalZoneList )
              __fastfail(3u);
            *(_QWORD *)(a1 + 216) = qword_14008F888;
            *v32 = &AcpiThermalZoneList;
            *v31 = v32;
            qword_14008F888 = a1 + 208;
            KeReleaseSpinLock(&AcpiThermalConstraintLock, v11);
          }
        }
        else
        {
          ++*(_DWORD *)v3;
          v16 = *(_DWORD *)(a1 + 192) | 2;
          *(_DWORD *)(a1 + 192) = v16;
          if ( (_BYTE)i )
          {
            v29 = v16 | 0x44000200;
            v20 = 514LL;
LABEL_55:
            *(_DWORD *)(a1 + 192) = v29;
            goto LABEL_53;
          }
          if ( *(_QWORD *)(v3 + 112) )
          {
            *(_DWORD *)(a1 + 192) = v16 | 0x40000000;
            KeReleaseSpinLock(v4, v11);
            *(_OWORD *)(v3 + 136) = 0LL;
            *(_OWORD *)(v3 + 152) = 0LL;
            *(_QWORD *)(v3 + 168) = 0LL;
            v12 = 0;
            if ( !(unsigned __int8)ACPIDeviceHasFirmwareDependencies(a1, v17, v18) || *(_DWORD *)(a1 + 548) == 1 )
            {
              v19 = AMLIAsyncEvalObject(*(__int64 **)(v3 + 112), v3 + 136, 0, 0LL, ACPIThermalTMPCallback, a1);
              if ( v19 != 259 )
                goto LABEL_25;
            }
            else
            {
              v19 = -1073741661;
LABEL_25:
              ACPIThermalTMPCallback(*(_QWORD *)(v3 + 112), v19, v3 + 136, a1);
            }
          }
          else
          {
            *(_DWORD *)(a1 + 192) = v16 & 0xEFFFFFFF;
          }
        }
      }
      else
      {
        v20 = 256LL;
        *(_DWORD *)(a1 + 192) = v15 | 0x40000100;
LABEL_53:
        ACPISetDeviceWorker(a1, v20);
      }
    }
    v21 = *(_DWORD *)(v3 + 104);
    if ( v21 )
    {
      v22 = *(_DWORD *)(v3 + 108);
      if ( v22 > v21 && *(_DWORD *)(v3 + 16) <= v22 - v21 )
        *(_DWORD *)(a1 + 192) = v14 & 0xFFFFFBFF;
      v23 = *(_DWORD *)(v3 + 104);
      if ( ~*(_DWORD *)(v3 + 108) > v23 && *(_DWORD *)(v3 + 16) >= v23 + *(_DWORD *)(v3 + 108) )
        *(_DWORD *)(a1 + 192) &= ~0x400u;
    }
    v24 = *(_DWORD *)(v3 + 20);
    if ( v24 )
    {
      if ( *(_DWORD *)(v3 + 108) < v24 )
      {
        if ( *(_DWORD *)(v3 + 16) < v24 )
          goto LABEL_69;
        goto LABEL_68;
      }
      if ( *(_DWORD *)(v3 + 108) > v24 && *(_DWORD *)(v3 + 16) <= v24 )
LABEL_68:
        *(_DWORD *)(a1 + 192) &= ~0x400u;
    }
LABEL_69:
    v35 = *(_DWORD *)(v3 + 28);
    if ( !v35 )
      goto LABEL_76;
    if ( *(_DWORD *)(v3 + 108) >= v35 )
    {
      if ( *(_DWORD *)(v3 + 108) <= v35 || *(_DWORD *)(v3 + 16) > v35 )
      {
LABEL_76:
        v36 = *(_DWORD *)(v3 + 76);
        if ( !v36 )
          goto LABEL_83;
        if ( *(_DWORD *)(v3 + 108) >= v36 )
        {
          if ( *(_DWORD *)(v3 + 108) <= v36 || *(_DWORD *)(v3 + 16) > v36 )
          {
LABEL_83:
            v37 = *(_DWORD *)(v3 + 24);
            if ( !v37 )
              goto LABEL_90;
            if ( *(_DWORD *)(v3 + 108) >= v37 )
            {
              if ( *(_DWORD *)(v3 + 108) <= v37 || *(_DWORD *)(v3 + 16) > v37 )
              {
LABEL_90:
                for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(v3 + 32); i = (unsigned int)(i + 1) )
                {
                  v38 = *(_DWORD *)(v3 + 4LL * (unsigned int)i + 36);
                  if ( v38 )
                  {
                    if ( *(_DWORD *)(v3 + 108) >= v38 )
                    {
                      if ( *(_DWORD *)(v3 + 108) <= v38 || *(_DWORD *)(v3 + 16) > v38 )
                        continue;
LABEL_97:
                      *(_DWORD *)(a1 + 192) &= ~0x400u;
                      continue;
                    }
                    if ( *(_DWORD *)(v3 + 16) >= v38 )
                      goto LABEL_97;
                  }
                }
                v15 = *(_DWORD *)(a1 + 192);
                if ( (v15 & 0x400) == 0 )
                {
                  *(_DWORD *)(a1 + 192) = v15 & 0xBFFFF9FF | 0x40000400;
                  *(_DWORD *)(v3 + 108) = *(_DWORD *)(v3 + 16);
                  KeReleaseSpinLock(v4, v11);
                  v33 = *(unsigned int *)(v3 + 108);
                  v34 = 1230259295;
                  goto LABEL_60;
                }
                goto LABEL_11;
              }
            }
            else if ( *(_DWORD *)(v3 + 16) < v37 )
            {
              goto LABEL_90;
            }
            *(_DWORD *)(a1 + 192) &= ~0x400u;
            goto LABEL_90;
          }
        }
        else if ( *(_DWORD *)(v3 + 16) < v36 )
        {
          goto LABEL_83;
        }
        *(_DWORD *)(a1 + 192) &= ~0x400u;
        goto LABEL_83;
      }
    }
    else if ( *(_DWORD *)(v3 + 16) < v35 )
    {
      goto LABEL_76;
    }
    *(_DWORD *)(a1 + 192) &= ~0x400u;
    goto LABEL_76;
  }
LABEL_18:
  KeReleaseSpinLock(v4, v11);
}
