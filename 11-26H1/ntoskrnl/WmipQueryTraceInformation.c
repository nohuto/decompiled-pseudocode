/*
 * XREFs of WmipQueryTraceInformation @ 0x14082F2A4
 * Callers:
 *     WdipSemGetLoggerDroppedEventCount @ 0x140AD7DEC (WdipSemGetLoggerDroppedEventCount.c)
 *     WmiQueryTraceInformation @ 0x140B6C6A0 (WmiQueryTraceInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     EtwpReleaseLoggerContext @ 0x1409194B8 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x140B2CAA0 (EtwQueryTraceHandleByLoggerName.c)
 */

__int64 __fastcall WmipQueryTraceInformation(int a1, int *a2, unsigned int a3, _DWORD *a4, unsigned int *a5, char a6)
{
  unsigned __int64 v7; // r13
  unsigned int v10; // r12d
  struct _LIST_ENTRY *Flink; // rcx
  _DWORD *v12; // r9
  int v13; // r14d
  int v14; // r14d
  int v15; // r14d
  int v16; // r14d
  int v17; // r14d
  unsigned int v18; // r14d
  unsigned int i; // r15d
  unsigned __int64 v20; // rcx
  int v21; // edx
  __int64 result; // rax
  unsigned int *v23; // rax
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // ecx
  int v28; // edx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned int v31; // eax
  __int64 v32; // rax
  int v33; // r14d
  int v34; // r14d
  int v35; // r14d
  int v36; // r14d
  int v37; // r14d
  int v38; // r14d
  __int64 *v39; // rdx
  __int64 *v40; // rax
  unsigned int v41; // eax
  __int64 v42; // rax
  unsigned int v43; // ecx
  unsigned int v44; // r14d
  __int64 v45; // r13
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 ULong64FromUser; // rax
  __int64 v49; // rdx
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v51; // rbx
  int v52; // eax
  int *v53; // rcx
  int v54; // eax
  int *v55; // rcx
  int v56; // eax
  int *v57; // rcx
  int v58; // eax
  int *v59; // rcx
  int v60; // eax
  int *v61; // rcx
  int v62; // eax
  int *v63; // rcx
  int v64; // eax
  unsigned int ULongFromUser; // eax
  __int64 v66; // rax
  int v67; // r15d
  __int64 v68; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v69; // [rsp+30h] [rbp-38h]
  struct _LIST_ENTRY *v70; // [rsp+38h] [rbp-30h]
  __int64 v71; // [rsp+40h] [rbp-28h]
  __int64 v72; // [rsp+48h] [rbp-20h]
  unsigned int v73; // [rsp+90h] [rbp+28h]

  v7 = a3;
  v10 = 0;
  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  v70 = Flink;
  if ( a4 )
  {
    if ( a6 )
    {
      RtlWriteULongToUser(a4, 0);
      Flink = v70;
    }
    else
    {
      *v12 = 0;
    }
  }
  if ( a1 > 7 )
  {
    v33 = a1 - 8;
    if ( !v33 )
    {
      if ( (_DWORD)v7 != 4 )
        return 3221225476LL;
      if ( !a5 )
        return 3221225520LL;
      if ( a6 )
        ULongFromUser = RtlReadULongFromUser(a5);
      else
        ULongFromUser = *a5;
      v66 = EtwpAcquireLoggerContextByLoggerId(v70, ULongFromUser, 0LL);
      if ( !v66 )
        return 3221226021LL;
      v67 = *(_DWORD *)(v66 + 240);
      EtwpReleaseLoggerContext(v66, 0LL);
      if ( !a2 )
        goto LABEL_246;
      if ( !a6 )
      {
        *a2 = v67;
        goto LABEL_246;
      }
      v28 = v67;
      goto LABEL_244;
    }
    v34 = v33 - 1;
    if ( !v34 )
    {
      if ( !a5 )
        return 3221225715LL;
      if ( !a4 )
        return 3221225714LL;
      if ( a6 )
        RtlWriteULongToUser(a4, 32);
      else
        *a4 = 32;
      if ( (unsigned int)v7 < 0x20 )
        return 3221225476LL;
      if ( !a2 )
        return 3221225712LL;
      if ( a6 )
        ULong64FromUser = RtlReadULong64FromUser(a5);
      else
        ULong64FromUser = *(_QWORD *)a5;
      v68 = ULong64FromUser;
      v49 = (unsigned __int16)ULong64FromUser;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v51 = (_DWORD *)EtwpAcquireLoggerContextByLoggerId(v70, v49, 0LL);
      if ( v51 )
      {
        if ( a6 )
          RtlWriteULongToUser(a2, 1);
        else
          *a2 = 1;
        v52 = v51[1];
        v53 = a2 + 1;
        if ( a6 )
          RtlWriteULongToUser(v53, v52);
        else
          *v53 = v52;
        v54 = v51[56];
        v55 = a2 + 2;
        if ( a6 )
          RtlWriteULongToUser(v55, v54);
        else
          *v55 = v54;
        v56 = v51[59];
        v57 = a2 + 3;
        if ( a6 )
          RtlWriteULongToUser(v57, v56);
        else
          *v57 = v56;
        v58 = v51[3];
        v59 = a2 + 4;
        if ( a6 )
          RtlWriteULongToUser(v59, v58);
        else
          *v59 = v58;
        v60 = v51[52];
        v61 = a2 + 5;
        if ( a6 )
          RtlWriteULongToUser(v61, v60);
        else
          *v61 = v60;
        v62 = v51[50];
        v63 = a2 + 7;
        if ( a6 )
          RtlWriteULongToUser(v63, v62);
        else
          *v63 = v62;
        v64 = v51[53];
        if ( a6 )
          RtlWriteULongToUser(a2 + 6, v64);
        else
          a2[6] = v64;
        EtwpReleaseLoggerContext(v51, 0LL);
      }
      else
      {
        v10 = -1073741162;
      }
      KeLeaveCriticalRegion();
      return v10;
    }
    v35 = v34 - 1;
    if ( !v35 )
    {
      v71 = 0LL;
      v69 = 0;
      if ( (_DWORD)v7 != 8 )
        return 3221225476LL;
      if ( !a5 )
        return 3221225520LL;
      if ( a6 )
        v41 = RtlReadULongFromUser(a5);
      else
        v41 = *a5;
      LODWORD(v68) = v41;
      v42 = EtwpAcquireLoggerContextByLoggerId(v70, v41, 0LL);
      v72 = v42;
      if ( !v42 )
        return 3221226021LL;
      v43 = KeNumberProcessors_0;
      v73 = KeNumberProcessors_0;
      v44 = 0;
      v45 = 0LL;
      while ( 1 )
      {
        v69 = v44;
        if ( v44 >= v43 )
          break;
        v46 = *(_QWORD *)(v42 + 1360);
        if ( v46 == EtwpHostSiloState )
          v47 = *(_QWORD *)(KeGetPrcb(v44) + 35816) + 320LL;
        else
          v47 = *(_QWORD *)(v46 + 4416) + ((unsigned __int64)v44 << 6);
        v45 += *(_QWORD *)(*(_QWORD *)(v47 + 8) + 8LL * (unsigned int)v68);
        v71 = v45;
        ++v44;
        v42 = v72;
        v43 = v73;
      }
      EtwpReleaseLoggerContext(v42, 0LL);
      if ( !a2 )
        goto LABEL_41;
      if ( !a6 )
      {
        *(_QWORD *)a2 = v45;
        goto LABEL_41;
      }
      v25 = v45;
      goto LABEL_39;
    }
    v36 = v35 - 1;
    if ( v36 )
    {
      v37 = v36 - 1;
      if ( !v37 )
      {
        if ( a4 )
        {
          if ( a6 )
            RtlWriteULongToUser(a4, 120);
          else
            *a4 = 120;
        }
        if ( LOBYTE(stru_140F03830.CycleTime) <= 1u )
          return 3221225635LL;
        if ( (_DWORD)v7 != 120 )
          return 3221225476LL;
        if ( !a2 )
          return 3221225712LL;
        if ( a6 )
          RtlCopyToUser(a2, EtwpAllNotifyRoutines, 0x78uLL);
        else
          RtlCopyVolatileMemory(a2, EtwpAllNotifyRoutines, 0x78uLL);
        return 0;
      }
      v38 = v37 - 1;
      if ( v38 )
      {
        if ( v38 != 2 )
          return 3221225475LL;
        if ( a4 )
        {
          if ( a6 )
            RtlWriteULongToUser(a4, 8);
          else
            *a4 = 8;
        }
        if ( LOBYTE(stru_140F03830.CycleTime) <= 1u )
          return 3221225635LL;
        if ( (_DWORD)v7 != 8 )
          return 3221225476LL;
        if ( !a2 )
          return 3221225712LL;
        if ( a6 )
        {
          v39 = (__int64 *)&EtwpWdfNotifyRoutines;
LABEL_168:
          RtlWriteULong64ToUser(a2, (__int64)v39);
          return 0;
        }
        v40 = (__int64 *)&EtwpWdfNotifyRoutines;
      }
      else
      {
        if ( a4 )
        {
          if ( a6 )
            RtlWriteULongToUser(a4, 8);
          else
            *a4 = 8;
        }
        if ( LOBYTE(stru_140F03830.CycleTime) <= 1u )
          return 3221225635LL;
        if ( (_DWORD)v7 != 8 )
          return 3221225476LL;
        if ( !a2 )
          return 3221225712LL;
        if ( a6 )
        {
          v39 = (__int64 *)&EtwpFltIoNotifyRoutines;
          goto LABEL_168;
        }
        v40 = (__int64 *)&EtwpFltIoNotifyRoutines;
      }
    }
    else
    {
      if ( a4 )
      {
        if ( a6 )
          RtlWriteULongToUser(a4, 8);
        else
          *a4 = 8;
      }
      if ( LOBYTE(stru_140F03830.CycleTime) <= 1u )
        return 3221225635LL;
      if ( (_DWORD)v7 != 8 )
        return 3221225476LL;
      if ( !a2 )
        return 3221225712LL;
      if ( a6 )
      {
        v39 = &EtwpDiskIoNotifyRoutines;
        goto LABEL_168;
      }
      v40 = &EtwpDiskIoNotifyRoutines;
    }
    *(_QWORD *)a2 = v40;
    return 0;
  }
  if ( a1 != 7 )
  {
    if ( !a1 )
    {
      if ( (_DWORD)v7 != 4 )
        return 3221225476LL;
      if ( !a5 )
        return 3221225520LL;
      if ( a6 )
        v32 = RtlReadULong64FromUser(a5 + 2);
      else
        v32 = *((_QWORD *)a5 + 1);
      v68 = v32;
      if ( !v32 || v32 == 0xFFFFFFFFLL )
        return 3221225480LL;
      v27 = (unsigned __int16)v32;
      if ( (unsigned int)(unsigned __int16)v32 >= LODWORD(v70[1].Flink) )
        return 3221225480LL;
      goto LABEL_55;
    }
    v13 = a1 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( !v14 )
      {
        if ( (unsigned int)v7 < 4 )
          return 3221225476LL;
        if ( !a5 )
          return 3221225520LL;
        if ( a6 )
          v29 = RtlReadULong64FromUser(a5 + 2);
        else
          v29 = *((_QWORD *)a5 + 1);
        v68 = v29;
        if ( !v29 || v29 == 0xFFFFFFFF )
          return 3221225480LL;
        v30 = HIDWORD(v29);
        if ( !a2 )
          goto LABEL_246;
        if ( a6 )
        {
          v28 = v30;
          goto LABEL_244;
        }
        *a2 = v30;
LABEL_246:
        if ( !a4 )
          return v10;
        if ( !a6 )
        {
          *a4 = 4;
          return v10;
        }
        v21 = 4;
        goto LABEL_249;
      }
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( !v17 )
            return (unsigned int)-1073741821;
          if ( v17 == 1 )
          {
            if ( (unsigned int)v7 < 8 || !a2 )
              return 3221225476LL;
            v18 = 0;
            for ( i = 1; i < LODWORD(Flink[1].Flink); ++i )
            {
              v72 = EtwpAcquireLoggerContextByLoggerId(Flink, i, 0LL);
              if ( v72 )
              {
                LODWORD(v68) = v18 + 1;
                if ( 8 * (unsigned __int64)(v18 + 1) <= v7 )
                {
                  if ( a6 )
                    RtlWriteULong64ToUser(&a2[2 * v18], i);
                  else
                    *(_QWORD *)&a2[2 * v18] = i;
                }
                EtwpReleaseLoggerContext(v72, 0LL);
                v18 = v68;
              }
              Flink = v70;
            }
            v20 = 8LL * v18;
            if ( v20 > v7 )
              v10 = 261;
            if ( !a4 )
              return v10;
            if ( a6 )
            {
              v21 = 8 * v18;
LABEL_249:
              RtlWriteULongToUser(a4, v21);
              return v10;
            }
            *a4 = v20;
            return v10;
          }
          return 3221225475LL;
        }
        if ( (_DWORD)v7 != 8 )
          return 3221225476LL;
        v23 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(Flink, 1LL, 0LL);
        if ( !v23 )
          return 3221226021LL;
        v24 = *v23;
        v68 = v24;
        EtwpReleaseLoggerContext(v23, 0LL);
        if ( !a2 )
        {
LABEL_41:
          if ( !a4 )
            return v10;
          if ( a6 )
          {
            v21 = 8;
            goto LABEL_249;
          }
          *a4 = 8;
          return v10;
        }
        if ( !a6 )
        {
          *(_QWORD *)a2 = v24;
          goto LABEL_41;
        }
        v25 = (unsigned int)v24;
LABEL_39:
        RtlWriteULong64ToUser(a2, v25);
        goto LABEL_41;
      }
      if ( (unsigned int)v7 < 4 )
        return 3221225476LL;
      if ( !a5 )
        return 3221225520LL;
      if ( a6 )
        v26 = RtlReadULong64FromUser(a5 + 2);
      else
        v26 = *((_QWORD *)a5 + 1);
      v68 = v26;
      if ( !v26 || v26 == 0xFFFFFFFFLL )
        return 3221225480LL;
      v27 = BYTE2(v26);
LABEL_55:
      if ( a2 )
      {
        if ( a6 )
        {
          v28 = v27;
LABEL_244:
          RtlWriteULongToUser(a2, v28);
          goto LABEL_246;
        }
        *a2 = v27;
      }
      goto LABEL_246;
    }
    if ( (_DWORD)v7 != 8 )
      return 3221225476LL;
    if ( !a5 )
      return 3221225520LL;
    if ( a6 )
      v31 = RtlReadULongFromUser(a5);
    else
      v31 = *a5;
    if ( v31 >= LODWORD(v70[1].Flink) )
      return 3221225480LL;
    v68 = 0LL;
    if ( !v31 )
      LOWORD(v31) = -1;
    LOWORD(v68) = v31;
LABEL_86:
    if ( !a2 )
      goto LABEL_41;
    if ( !a6 )
    {
      *(_QWORD *)a2 = v68;
      goto LABEL_41;
    }
    v25 = v68;
    goto LABEL_39;
  }
  if ( KeGetCurrentThread()->PreviousMode )
    ProbeForRead(*((volatile void **)a5 + 1), *(unsigned __int16 *)a5, 2u);
  if ( (_DWORD)v7 != 8 )
    return 3221225476LL;
  v68 = 0LL;
  result = EtwQueryTraceHandleByLoggerName(a5, &v68);
  v10 = result;
  if ( (int)result >= 0 )
    goto LABEL_86;
  return result;
}
