/*
 * XREFs of PpmUpdatePerformanceFeedback @ 0x1403ECDF0
 * Callers:
 *     PpmContinueTimeAccumulation @ 0x140252628 (PpmContinueTimeAccumulation.c)
 *     PpmSnapPerformanceAccumulation @ 0x140253D2C (PpmSnapPerformanceAccumulation.c)
 *     PpmEndActiveTimeAccumulation @ 0x1403EC8C0 (PpmEndActiveTimeAccumulation.c)
 *     PpmContinueActiveTimeAccumulation @ 0x1403ECDB0 (PpmContinueActiveTimeAccumulation.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmHvGetRuntimesForProcessor @ 0x140611B90 (PpmHvGetRuntimesForProcessor.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

char __fastcall PpmUpdatePerformanceFeedback(__int64 a1, unsigned __int8 a2, char a3, char a4, _QWORD *a5)
{
  _QWORD *v5; // r10
  bool v6; // zf
  __int64 v9; // rdx
  _DWORD *v10; // rdi
  unsigned int *v11; // r15
  __int64 v12; // r13
  char v13; // r14
  __int64 v14; // rcx
  _DWORD *v15; // rbx
  char v16; // r8
  unsigned int i; // ecx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r14
  __int64 v21; // rdi
  __int64 InterruptTimePrecise; // rax
  __int64 v23; // r14
  _QWORD *v24; // rdi
  unsigned int *v25; // r12
  signed __int64 v26; // r13
  __int64 v27; // rsi
  int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // r8d
  __int64 v31; // r9
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // rdx
  unsigned int v37; // r10d
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v44; // eax
  __int64 v45; // rdx
  unsigned __int32 v46; // ett
  __int64 RuntimesForProcessor; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  char v50; // cl
  unsigned __int8 v51; // [rsp+30h] [rbp-D0h] BYREF
  char v52; // [rsp+31h] [rbp-CFh] BYREF
  bool v53; // [rsp+32h] [rbp-CEh]
  int v54; // [rsp+34h] [rbp-CCh] BYREF
  int v55; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v56; // [rsp+40h] [rbp-C0h]
  __int64 v57; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v58; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v60; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v61; // [rsp+68h] [rbp-98h]
  __int64 v62; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v63; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v64; // [rsp+80h] [rbp-80h] BYREF
  __int64 v65; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v66; // [rsp+90h] [rbp-70h]
  __int64 v67; // [rsp+98h] [rbp-68h]
  __int64 v68; // [rsp+A0h] [rbp-60h]
  __int64 v69; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v70; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v72; // [rsp+E0h] [rbp-20h]
  __int64 v73; // [rsp+E8h] [rbp-18h]
  __int64 *v74; // [rsp+F0h] [rbp-10h]
  __int64 v75; // [rsp+F8h] [rbp-8h]
  __int64 *v76; // [rsp+100h] [rbp+0h]
  __int64 v77; // [rsp+108h] [rbp+8h]
  __int64 *v78; // [rsp+110h] [rbp+10h]
  __int64 v79; // [rsp+118h] [rbp+18h]
  unsigned __int8 *v80; // [rsp+120h] [rbp+20h]
  __int64 v81; // [rsp+128h] [rbp+28h]
  char *v82; // [rsp+130h] [rbp+30h]
  __int64 v83; // [rsp+138h] [rbp+38h]
  __int64 *v84; // [rsp+140h] [rbp+40h]
  __int64 v85; // [rsp+148h] [rbp+48h]
  __int64 *v86; // [rsp+150h] [rbp+50h]
  __int64 v87; // [rsp+158h] [rbp+58h]
  __int64 *v88; // [rsp+160h] [rbp+60h]
  __int64 v89; // [rsp+168h] [rbp+68h]
  unsigned __int64 *v90; // [rsp+170h] [rbp+70h]
  __int64 v91; // [rsp+178h] [rbp+78h]
  int *v92; // [rsp+180h] [rbp+80h]
  __int64 v93; // [rsp+188h] [rbp+88h]
  _DWORD *v94; // [rsp+190h] [rbp+90h]
  __int64 v95; // [rsp+198h] [rbp+98h]
  _DWORD *v96; // [rsp+1A0h] [rbp+A0h]
  __int64 v97; // [rsp+1A8h] [rbp+A8h]
  _DWORD *v98; // [rsp+1B0h] [rbp+B0h]
  __int64 v99; // [rsp+1B8h] [rbp+B8h]
  _DWORD *v100; // [rsp+1C0h] [rbp+C0h]
  __int64 v101; // [rsp+1C8h] [rbp+C8h]
  _DWORD *v102; // [rsp+1D0h] [rbp+D0h]
  __int64 v103; // [rsp+1D8h] [rbp+D8h]
  _DWORD *v104; // [rsp+1E0h] [rbp+E0h]
  __int64 v105; // [rsp+1E8h] [rbp+E8h]

  v5 = a5;
  v6 = *(_DWORD *)(a1 + 35120) == 3;
  v51 = a2;
  v9 = 0LL;
  v66 = (_DWORD *)a1;
  v61 = 0LL;
  v10 = (_DWORD *)a1;
  v68 = (__int64)a5;
  v11 = 0LL;
  v54 = 0;
  v12 = 0LL;
  v62 = 0LL;
  v58 = 0LL;
  v55 = 0;
  v64 = 0LL;
  v57 = 0LL;
  if ( v6 )
  {
    v13 = 1;
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 35856) + 8LL * stru_140E3E928.ForegroundLossTime) >> 1;
  }
  else
  {
    v13 = 0;
    v14 = 0LL;
  }
  v67 = v14;
  v15 = v10 + 8744;
  if ( !a2
    && (!*((_QWORD *)v10 + 4379)
     && (!*((_QWORD *)v10 + 4382) || v10[8594] == v10[8768] && v10[8593] == v10[8769])
     && (!a3 || v14 == *((_QWORD *)v10 + 4385))
     || a4 && *((_BYTE *)v10 + 35114)) )
  {
    goto LABEL_37;
  }
  v16 = 0;
  for ( i = 0; i < 2; ++i )
  {
    v18 = *(_QWORD *)&v15[2 * i + 6];
    if ( v18 && *(_BYTE *)(v18 + 32) )
    {
      if ( a3 )
        return 0;
      v16 = 1;
    }
  }
  if ( !v16 && !a2 && a4 )
  {
    v9 = 0LL;
    goto LABEL_37;
  }
  v53 = KeDisableInterrupts();
  KxAcquireSpinLock((PKSPIN_LOCK)v10 + 4372);
  v19 = _InterlockedExchange64((volatile __int64 *)v10 + 4379, 0LL);
  v56 = v19;
  if ( v13 )
  {
    RuntimesForProcessor = PpmHvGetRuntimesForProcessor(v10, &v57, &v64);
    v12 = v57;
    v61 = RuntimesForProcessor;
    v20 = RuntimesForProcessor;
    v19 = RuntimesForProcessor - v57 - *((_QWORD *)v10 + 4386);
    v56 = v19;
    *((_QWORD *)v10 + 4386) = RuntimesForProcessor - v57;
  }
  else
  {
    v20 = 0LL;
  }
  *((_QWORD *)v10 + 4378) += v19;
  v21 = *((_QWORD *)v10 + 4409);
  v65 = v21;
  if ( v21 )
  {
    v11 = (unsigned int *)(v21 + ((unsigned __int64)*(unsigned int *)(v21 + 184) << 7) + 192);
    memset_0(v11, 0, 0x80uLL);
    if ( ++*(_DWORD *)(v21 + 184) == 8 )
      *(_DWORD *)(v21 + 184) = 0;
    *v11 = KeGetPcr()->Prcb.Number;
    *((_BYTE *)v11 + 5) = a2;
    *((_BYTE *)v11 + 4) = 0;
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v63);
    v19 = v56;
    *((_QWORD *)v11 + 2) = v56;
    *((_QWORD *)v11 + 1) = InterruptTimePrecise;
    *((_BYTE *)v11 + 6) = a3;
    *((_QWORD *)v11 + 3) = *((_QWORD *)v15 + 6);
    *((_QWORD *)v11 + 13) = v20;
    *((_QWORD *)v11 + 14) = v12;
  }
  v23 = 0LL;
  v24 = v11 + 10;
  v25 = v11 + 8;
  v26 = (char *)v15 - (char *)v11;
  do
  {
    v27 = *(_QWORD *)((char *)v24 + v26 - 16);
    if ( !v27 )
      goto LABEL_23;
    v6 = *(_BYTE *)(v27 + 33) == 0;
    v33 = *(_QWORD *)(v27 + 40);
    v60 = 0LL;
    v59 = 0LL;
    if ( v6 )
    {
      guard_dispatch_icall_no_overrides(v33, &v54);
      v37 = v54;
      goto LABEL_45;
    }
    guard_dispatch_icall_no_overrides(v33, v51);
    v34 = v60;
    v35 = v59;
    v62 = v60;
    v58 = v59;
    if ( v51 )
      goto LABEL_43;
    v36 = *(_QWORD *)(v27 + 16);
    if ( v59 != v36 )
    {
      *(_DWORD *)(v27 + 24) = (unsigned __int64)*(unsigned int *)(v27 + 36) * (v60 - *(_QWORD *)(v27 + 8)) / (v59 - v36);
LABEL_43:
      *(_QWORD *)(v27 + 8) = v34;
      *(_QWORD *)(v27 + 16) = v35;
    }
    v37 = *(_DWORD *)(v27 + 24);
    v54 = v37;
LABEL_45:
    v19 = v56;
    if ( *(_BYTE *)(v27 + 33) )
    {
      v38 = v56 * v37;
      if ( v38 )
      {
        v63 = 0LL;
        v19 = v56;
        if ( is_mul_ok(v38, 0x64uLL) )
          v39 = (100 * v38) >> 16;
        else
          v39 = 100 * (v38 >> 16) + ((100 * (v38 - (v38 >> 16 << 16))) >> 16);
      }
      else
      {
        v39 = 0LL;
      }
    }
    else
    {
      v39 = v56 * v37;
    }
    *(_QWORD *)&v15[2 * v23 + 16] = v39 + *(_QWORD *)((char *)v24 + v26 + 24);
    if ( v11 )
    {
      if ( *(_BYTE *)(v27 + 33) )
      {
        v40 = v58;
        *v25 = v37;
        *v24 = v40;
        v24[2] = v62;
        v24[4] = v39;
        v24[6] = *(_QWORD *)((char *)v24 + v26 + 24);
        v55 = *(_DWORD *)(v27 + 36);
      }
      else
      {
        v25[22] = v37;
      }
    }
    if ( (_DWORD)v23 == *((unsigned __int8 *)v15 + 136) )
      *((_QWORD *)v15 + 10) += v39;
LABEL_23:
    v23 = (unsigned int)(v23 + 1);
    ++v25;
    ++v24;
  }
  while ( (unsigned int)v23 < 2 );
  if ( v11 && (unsigned int)dword_140E075D0 > 5 )
  {
    v73 = 4LL;
    v75 = 4LL;
    v77 = 8LL;
    LODWORD(v58) = *(_DWORD *)(v65 + 184);
    v72 = &v58;
    v79 = 4LL;
    v81 = 1LL;
    v83 = 1LL;
    LODWORD(v59) = v66[9];
    v74 = &v59;
    v65 = *((_QWORD *)v11 + 1);
    v76 = &v65;
    LODWORD(v60) = *v11;
    v78 = &v60;
    v51 = *((_BYTE *)v11 + 5);
    v80 = &v51;
    v52 = *((_BYTE *)v11 + 6);
    v82 = &v52;
    v62 = *((_QWORD *)v11 + 2);
    v84 = &v62;
    v69 = *((_QWORD *)v11 + 3);
    v86 = &v69;
    v70 = *((_QWORD *)v11 + 13);
    v88 = &v70;
    v63 = *((_QWORD *)v11 + 14);
    v90 = &v63;
    v92 = &v55;
    v94 = v11 + 8;
    v96 = v11 + 10;
    v98 = v11 + 14;
    v100 = v11 + 18;
    v102 = v11 + 22;
    v104 = v11 + 30;
    v85 = 8LL;
    v87 = 8LL;
    v89 = 8LL;
    v91 = 8LL;
    v93 = 4LL;
    v95 = 8LL;
    v97 = 16LL;
    v99 = 16LL;
    v101 = 16LL;
    v103 = 16LL;
    v105 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E075D0,
      (unsigned __int8 *)byte_140049950,
      0LL,
      0LL,
      0x13u,
      &v71);
    v19 = v56;
  }
  if ( *((_BYTE *)v15 + 136) == 2 )
    *((_QWORD *)v15 + 10) += 100 * v19;
  v10 = v66;
  v28 = v66[8594] - v15[24];
  v29 = v66[8593] - v15[25];
  v30 = v29 + v28;
  if ( v29 + v28 )
  {
    v41 = *((_QWORD *)v15 + 10);
    *((_QWORD *)v15 + 10) = 0LL;
    v15[24] += v28;
    v15[25] += v29;
    if ( v29 )
    {
      v54 = v29 / v30;
      *((_QWORD *)v15 + 11) += v41 * (v29 / v30);
    }
  }
  *((_QWORD *)v15 + 13) = v67;
  KxReleaseSpinLock((PKSPIN_LOCK)v15);
  if ( v53 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v44 = *SchedulerAssist;
      do
      {
        v45 = v44;
        LODWORD(v45) = v44 & 0xFFDFFFFF;
        v46 = v44;
        v44 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v44 & 0xFFDFFFFF, v44);
      }
      while ( v46 != v44 );
      if ( (v44 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v45, SchedulerAssist, v31);
    }
    _enable();
  }
  v12 = v57;
  v5 = (_QWORD *)v68;
  v9 = v61;
LABEL_37:
  if ( v5 )
  {
    if ( !v9 )
    {
      v48 = PpmHvGetRuntimesForProcessor(v10, &v57, &v64);
      v5 = (_QWORD *)v68;
      v9 = v48;
      v12 = v57;
    }
    *v5 = v9;
    v49 = v64;
    v5[1] = v12;
    v50 = *((_BYTE *)v10 + 172);
    if ( v50 )
      v49 <<= v50;
    v5[2] = (v49 * (unsigned __int128)*((unsigned __int64 *)v10 + 22)) >> 64;
  }
  return 1;
}
