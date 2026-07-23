/*
 * XREFs of PopThermalWorker @ 0x140AC58C0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IoReuseIrp @ 0x140267BC0 (IoReuseIrp.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopCheckAndHandleThermalConditions @ 0x1404E6660 (PopCheckAndHandleThermalConditions.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1406032D4 (PopInternalAddToDumpFile.c)
 *     PopFireThermalWmiEvent @ 0x14060A650 (PopFireThermalWmiEvent.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x14060C084 (PopDiagTraceThermalZoneEnumeration.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x14060C420 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x14060C554 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopDiagTraceActiveCooling @ 0x1407D55EC (PopDiagTraceActiveCooling.c)
 *     PopDiagTracePassiveCooling @ 0x1407D6A8C (PopDiagTracePassiveCooling.c)
 *     PopCheckThermalPolicy @ 0x140AC5D5C (PopCheckThermalPolicy.c)
 *     PopDiagTraceThermalCoolingMode @ 0x140AC5FFC (PopDiagTraceThermalCoolingMode.c)
 *     PopPrepareIoctl @ 0x140AFD904 (PopPrepareIoctl.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140B31158 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140B43630 (PopThermalUpdateActiveTimeTracking.c)
 */

__int64 __fastcall PopThermalWorker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *v4; // r15
  __int64 v6; // r14
  IRP *v7; // rbp
  struct _DEVICE_OBJECT *BugCheckParameter4; // r12
  int v9; // r8d
  int Status; // eax
  char v11; // al
  char v12; // cl
  char v13; // dl
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rax
  __int128 *v17; // r9
  IRP *v18; // rbx
  struct _IO_STACK_LOCATION *v19; // rax
  struct _IO_STACK_LOCATION *v20; // rax
  char v22; // al
  char v23; // r15
  int v24; // r13d
  __int64 v25; // rdx
  unsigned int v26; // edi
  unsigned int v27; // ebp
  char v28; // cl
  char v29; // al
  IRP *v30; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char v32; // cl
  int v33; // eax
  int v34; // ecx
  char v35; // al
  int v36; // r9d
  int v37; // eax
  int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // rcx
  unsigned int v41; // ecx
  char v42; // al
  char v43; // al
  char v44; // cl
  char v45; // al
  char v46; // al
  char v47; // [rsp+30h] [rbp-48h]
  char v48; // [rsp+31h] [rbp-47h] BYREF
  char v49; // [rsp+32h] [rbp-46h]
  int v50; // [rsp+34h] [rbp-44h] BYREF
  IRP *v51; // [rsp+38h] [rbp-40h]
  __int128 v52; // [rsp+40h] [rbp-38h] BYREF

  v4 = (struct _KTHREAD *)(a1 + 432);
  v47 = 0;
  v49 = 0;
  v48 = 0;
  v52 = 0LL;
  v50 = 0;
  v6 = MEMORY[0xFFFFF78000000008];
  v7 = *(IRP **)(a1 + 56);
  BugCheckParameter4 = *(struct _DEVICE_OBJECT **)(a1 + 48);
  v51 = v7;
  PopAcquireRwLockExclusive((unsigned __int64 *)(a1 + 432), a2, a3, a4);
  if ( *(_BYTE *)(a1 + 66) )
  {
    *(_BYTE *)(a1 + 64) = 0;
    goto LABEL_38;
  }
  Status = v7->IoStatus.Status;
  if ( Status < 0 )
  {
    if ( Status != -1073741536 && Status != -1073741667 )
    {
      if ( *(_BYTE *)(a1 + 64) != 7 )
      {
        *(_BYTE *)(a1 + 64) = 5;
LABEL_38:
        KeSetEvent((PRKEVENT)(a1 + 448), 0, 0);
        return PopReleaseRwLock(v4);
      }
      *(_BYTE *)(a1 + 64) = 1;
    }
    goto LABEL_4;
  }
  if ( *(_BYTE *)(a1 + 64) == 1 )
  {
    v22 = *(_BYTE *)(a1 + 65);
    *(_QWORD *)(a1 + 240) = v6;
    if ( (v22 & 2) == 0 )
    {
      *(_BYTE *)(a1 + 65) = v22 | 2;
      PopDiagTraceThermalZoneEnumeration(a1);
    }
    PopCheckThermalPolicy(a1, v6, &v48, &v50);
    KeSetEvent((PRKEVENT)(a1 + 472), 0, 0);
    v23 = v48;
    v24 = v50;
    goto LABEL_33;
  }
  if ( *(_BYTE *)(a1 + 64) != 2 )
  {
    switch ( *(_BYTE *)(a1 + 64) )
    {
      case 3:
        *(_BYTE *)(a1 + 69) = *(_BYTE *)(a1 + 70);
        break;
      case 4:
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 84);
        break;
      case 6:
        *(_BYTE *)(a1 + 505) = *(_BYTE *)(a1 + 144);
        *(_BYTE *)(a1 + 64) = 10;
        break;
      default:
        switch ( *(_BYTE *)(a1 + 64) )
        {
          case 7:
            *(_BYTE *)(a1 + 228) = 1;
            *(_BYTE *)(a1 + 64) = 8;
            break;
          case 8:
            break;
          case 0xA:
            *(_BYTE *)(a1 + 64) = 7;
            goto LABEL_4;
          default:
            PopInternalAddToDumpFile((__int64)v7, 0xD0u, (__int64)BugCheckParameter4);
            KeBugCheckEx(0xA0u, 0x500uLL, 5uLL, (ULONG_PTR)v7, (ULONG_PTR)BugCheckParameter4);
        }
        v41 = *(_DWORD *)(a1 + 216);
        v23 = v41 < 0x64;
        v42 = *(_BYTE *)(a1 + 65);
        v24 = 10 * (*(_DWORD *)(a1 + 80) - v41);
        if ( (v42 & 2) == 0 )
        {
          *(_BYTE *)(a1 + 65) = v42 | 2;
          PopDiagTraceThermalZoneEnumeration(a1);
        }
LABEL_33:
        v25 = *(unsigned __int8 *)(a1 + 69);
        v26 = *(_DWORD *)(a1 + 220);
        v27 = *(unsigned __int8 *)(a1 + 144);
        if ( v26 == (_DWORD)v25 )
        {
          v28 = *(_BYTE *)(a1 + 65);
          v29 = v28 & 4;
          if ( v26 >= v27 )
          {
            if ( !v29 )
              goto LABEL_42;
          }
          else if ( v29 )
          {
            goto LABEL_42;
          }
        }
        *(_BYTE *)(a1 + 70) = *(_BYTE *)(a1 + 220);
        PopThermalUpdateActiveTimeTracking(a1 + 504, v25);
        v43 = *(_BYTE *)(a1 + 65);
        v47 = 1;
        if ( v26 >= v27 )
        {
          if ( (v43 & 4) != 0 )
          {
            PopDiagTraceActiveCooling(a1 + 112, (__int64)BugCheckParameter4, 0, 0);
            PopDiagTraceActiveCooling(a1 + 112, (__int64)BugCheckParameter4, 0, 1u);
          }
        }
        else if ( (v43 & 4) == 0 )
        {
          PopDiagTraceActiveCooling(a1 + 112, (__int64)BugCheckParameter4, 1, 0);
          PopDiagTraceActiveCooling(a1 + 112, (__int64)BugCheckParameter4, 1, 1u);
          *(_QWORD *)(a1 + 248) = v6;
        }
        v44 = *(_BYTE *)(a1 + 65);
        if ( v26 < v27 )
          v28 = v44 | 4;
        else
          v28 = v44 & 0xFB;
        *(_BYTE *)(a1 + 65) = v28;
LABEL_42:
        if ( *(_DWORD *)(a1 + 216) == *(_DWORD *)(a1 + 80) )
        {
          v32 = v28 & 1;
          if ( v23 )
          {
            if ( v32 )
            {
LABEL_45:
              PopCheckAndHandleThermalConditions(a1);
              v11 = v47;
              v4 = (struct _KTHREAD *)(a1 + 432);
              v7 = v51;
              goto LABEL_5;
            }
          }
          else if ( !v32 )
          {
            goto LABEL_45;
          }
        }
        else
        {
          LOBYTE(v25) = *(_BYTE *)(a1 + 80);
          PopThermalUpdatePassiveTimeTracking(a1 + 504, v25);
          v33 = *(_DWORD *)(a1 + 216);
          v34 = *(_DWORD *)(a1 + 128);
          v49 = 1;
          *(_DWORD *)(a1 + 84) = v33;
          PopDiagTraceThermalZoneThrottlePerfTrack(v34, 100 - v33, (__int64)BugCheckParameter4);
        }
        PopDiagTracePassiveCooling(a1 + 112, (__int64)BugCheckParameter4, v23, v24, 0);
        v35 = *(_BYTE *)(a1 + 65);
        if ( v23 )
        {
          if ( (v35 & 1) == 0 )
          {
            PopDiagTracePassiveCooling(a1 + 112, (__int64)BugCheckParameter4, 1, v24, 1u);
            *(_QWORD *)(a1 + 256) = v6;
          }
        }
        else if ( (v35 & 1) != 0 )
        {
          PopDiagTracePassiveCooling(a1 + 112, (__int64)BugCheckParameter4, 0, v24, 1u);
          PopDiagTraceThermalZoneThrottleDurationPerfTrack(
            (v6 - *(_QWORD *)(a1 + 256)) / 0x2710uLL,
            (__int64)BugCheckParameter4);
        }
        v45 = *(_BYTE *)(a1 + 65);
        if ( v23 )
          v46 = v45 | 1;
        else
          v46 = v45 & 0xFE;
        *(_BYTE *)(a1 + 65) = v46;
        goto LABEL_45;
    }
LABEL_4:
    v11 = 0;
    goto LABEL_5;
  }
  *(_BYTE *)(a1 + 67) = *(_BYTE *)(a1 + 68);
  PopDiagTraceThermalCoolingMode(BugCheckParameter4);
  if ( WmiThermalPolicyEventEnabled )
    PopFireThermalWmiEvent(*(_BYTE *)(a1 + 67));
  v11 = 1;
LABEL_5:
  v12 = v49;
  v13 = v11;
  if ( *(_BYTE *)(a1 + 69) != *(_BYTE *)(a1 + 70) )
    v13 = 1;
  v14 = *(_BYTE *)(a1 + 64);
  if ( *(_DWORD *)(a1 + 80) != *(_DWORD *)(a1 + 84) )
    v12 = 1;
  switch ( v14 )
  {
    case 6:
      goto LABEL_23;
    case 10:
      v36 = a1 + 1040;
      v37 = 16;
      v38 = 2703512;
LABEL_97:
      PopPrepareIoctl(*(_QWORD *)(a1 + 56), v38, 0, v36, v37, v37);
      goto LABEL_24;
    case 7:
LABEL_61:
      v36 = a1 + 204;
      v37 = 24;
      *(_DWORD *)(a1 + 204) = 1;
      v38 = 2703508;
      goto LABEL_97;
  }
  if ( v13 )
  {
    LOBYTE(v9) = 1;
    *(_BYTE *)(a1 + 64) = 3;
    PopPrepareIoctl(*(_QWORD *)(a1 + 56), 2719880, v9, a1 + 70, 4, 0);
    goto LABEL_24;
  }
  if ( v12 )
  {
    LOBYTE(v9) = 1;
    *(_BYTE *)(a1 + 64) = 4;
    PopPrepareIoctl(*(_QWORD *)(a1 + 56), 2719884, v9, a1 + 84, 4, 0);
    goto LABEL_24;
  }
  if ( *(unsigned __int8 *)(a1 + 67) != PopCoolingMode )
  {
    v30 = *(IRP **)(a1 + 56);
    *(_BYTE *)(a1 + 68) = PopCoolingMode;
    *(_BYTE *)(a1 + 64) = 2;
    IoReuseIrp(v30, -1073741637);
    CurrentStackLocation = v30->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 15;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2719876;
    CurrentStackLocation[-1].Parameters.Create.Options = 1;
    CurrentStackLocation[-1].Parameters.Read.Length = 0;
    v30->AssociatedIrp.MasterIrp = (struct _IRP *)(a1 + 68);
    goto LABEL_24;
  }
  if ( *(_BYTE *)(a1 + 228) )
  {
    *(_BYTE *)(a1 + 64) = 8;
    *(_BYTE *)(a1 + 208) = 1;
    goto LABEL_61;
  }
  v15 = 0LL;
  *(_BYTE *)(a1 + 64) = 1;
  if ( (*(_BYTE *)(a1 + 65) & 1) != 0 )
  {
    v16 = *(unsigned int *)(a1 + 104);
    if ( (_DWORD)v16 )
    {
      if ( v16 + *(_QWORD *)(a1 + 96) > v6 )
        v15 = v16 + *(_QWORD *)(a1 + 96);
      else
        *(_DWORD *)(a1 + 112) = 0;
    }
  }
  v17 = 0LL;
  if ( PopThermalPollingMode )
  {
    v39 = *(_QWORD *)(a1 + 232);
    if ( v39 )
    {
      v40 = *(_QWORD *)(a1 + 240) + v39;
      if ( v40 <= v6 )
      {
        *(_DWORD *)(a1 + 112) = 0;
        v15 = 0LL;
      }
      else if ( !v15 || v15 >= v40 )
      {
        v15 = v40;
      }
    }
    if ( !PopThermalPollingWakesAllowed )
    {
      *(_QWORD *)&v52 = 0LL;
      v17 = &v52;
      *((_QWORD *)&v52 + 1) = -1LL;
    }
  }
  if ( v15 )
    KeSetTimer2(a1 + 296, v6 - v15, 0LL, (__int64)v17);
LABEL_23:
  v18 = *(IRP **)(a1 + 56);
  IoReuseIrp(v18, -1073741637);
  v19 = v18->Tail.Overlay.CurrentStackLocation;
  v19[-1].MajorFunction = 15;
  v19[-1].Parameters.Read.ByteOffset.LowPart = 2703488;
  v19[-1].Parameters.Create.Options = 92;
  v19[-1].Parameters.Read.Length = 92;
  v18->AssociatedIrp.MasterIrp = (struct _IRP *)(a1 + 112);
LABEL_24:
  v20 = v7->Tail.Overlay.CurrentStackLocation;
  v20[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopThermalIrpComplete;
  v20[-1].Context = (PVOID)a1;
  v20[-1].Control = -32;
  IofCallDriver(BugCheckParameter4, v7);
  return PopReleaseRwLock(v4);
}
