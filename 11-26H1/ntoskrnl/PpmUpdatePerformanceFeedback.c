/*
 * XREFs of PpmUpdatePerformanceFeedback @ 0x1402F7CD0
 * Callers:
 *     PpmContinueTimeAccumulation @ 0x140253F88 (PpmContinueTimeAccumulation.c)
 *     PpmSnapPerformanceAccumulation @ 0x14025568C (PpmSnapPerformanceAccumulation.c)
 *     PpmContinueActiveTimeAccumulation @ 0x1402F7C90 (PpmContinueActiveTimeAccumulation.c)
 *     PpmEndActiveTimeAccumulation @ 0x1402F9900 (PpmEndActiveTimeAccumulation.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmHvGetRuntimesForProcessor @ 0x1406149D0 (PpmHvGetRuntimesForProcessor.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall PpmUpdatePerformanceFeedback(__int64 a1, unsigned __int8 a2, __int64 a3, char a4, _QWORD *a5)
{
  _QWORD *v5; // r10
  bool v6; // zf
  char v8; // si
  __int64 v9; // rdx
  _DWORD *v10; // rdi
  LARGE_INTEGER *v11; // r15
  LARGE_INTEGER v12; // r13
  char v13; // r14
  __int64 v14; // rcx
  _DWORD *v15; // rbx
  __int64 i; // rcx
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r14
  LARGE_INTEGER v20; // rdi
  LARGE_INTEGER InterruptTimePrecise; // rax
  __int64 v22; // r14
  LARGE_INTEGER *v23; // rdi
  LARGE_INTEGER *v24; // r12
  signed __int64 v25; // r13
  __int64 v26; // rsi
  int v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // r8d
  __int64 v30; // r9
  __int64 v32; // rcx
  LARGE_INTEGER v33; // r9
  LONGLONG v34; // r8
  __int64 v35; // rdx
  unsigned int v36; // r10d
  unsigned __int64 v37; // r9
  LONGLONG v38; // rax
  __int64 v39; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v42; // eax
  __int64 v43; // rdx
  unsigned __int32 v44; // ett
  __int64 RuntimesForProcessor; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  char v48; // cl
  unsigned __int8 v49; // [rsp+30h] [rbp-D0h] BYREF
  char v50; // [rsp+31h] [rbp-CFh] BYREF
  char v51; // [rsp+32h] [rbp-CEh]
  int v52; // [rsp+34h] [rbp-CCh] BYREF
  int v53; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+40h] [rbp-C0h]
  LARGE_INTEGER v55; // [rsp+48h] [rbp-B8h] BYREF
  LONGLONG v56; // [rsp+50h] [rbp-B0h] BYREF
  LONGLONG v57; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER v58; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v59; // [rsp+68h] [rbp-98h]
  LARGE_INTEGER v60; // [rsp+70h] [rbp-90h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v62; // [rsp+80h] [rbp-80h] BYREF
  LARGE_INTEGER v63; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v64; // [rsp+90h] [rbp-70h]
  __int64 v65; // [rsp+98h] [rbp-68h]
  __int64 v66; // [rsp+A0h] [rbp-60h]
  LARGE_INTEGER v67; // [rsp+A8h] [rbp-58h] BYREF
  LARGE_INTEGER v68; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+C0h] [rbp-40h] BYREF
  LONGLONG *v70; // [rsp+E0h] [rbp-20h]
  __int64 v71; // [rsp+E8h] [rbp-18h]
  __int64 *v72; // [rsp+F0h] [rbp-10h]
  __int64 v73; // [rsp+F8h] [rbp-8h]
  LARGE_INTEGER *v74; // [rsp+100h] [rbp+0h]
  __int64 v75; // [rsp+108h] [rbp+8h]
  LARGE_INTEGER *v76; // [rsp+110h] [rbp+10h]
  __int64 v77; // [rsp+118h] [rbp+18h]
  unsigned __int8 *v78; // [rsp+120h] [rbp+20h]
  __int64 v79; // [rsp+128h] [rbp+28h]
  char *v80; // [rsp+130h] [rbp+30h]
  __int64 v81; // [rsp+138h] [rbp+38h]
  LARGE_INTEGER *v82; // [rsp+140h] [rbp+40h]
  __int64 v83; // [rsp+148h] [rbp+48h]
  LARGE_INTEGER *v84; // [rsp+150h] [rbp+50h]
  __int64 v85; // [rsp+158h] [rbp+58h]
  LARGE_INTEGER *v86; // [rsp+160h] [rbp+60h]
  __int64 v87; // [rsp+168h] [rbp+68h]
  LARGE_INTEGER *p_PerformanceCounter; // [rsp+170h] [rbp+70h]
  __int64 v89; // [rsp+178h] [rbp+78h]
  int *v90; // [rsp+180h] [rbp+80h]
  __int64 v91; // [rsp+188h] [rbp+88h]
  LARGE_INTEGER *v92; // [rsp+190h] [rbp+90h]
  __int64 v93; // [rsp+198h] [rbp+98h]
  LARGE_INTEGER *v94; // [rsp+1A0h] [rbp+A0h]
  __int64 v95; // [rsp+1A8h] [rbp+A8h]
  LARGE_INTEGER *v96; // [rsp+1B0h] [rbp+B0h]
  __int64 v97; // [rsp+1B8h] [rbp+B8h]
  LARGE_INTEGER *v98; // [rsp+1C0h] [rbp+C0h]
  __int64 v99; // [rsp+1C8h] [rbp+C8h]
  LARGE_INTEGER *v100; // [rsp+1D0h] [rbp+D0h]
  __int64 v101; // [rsp+1D8h] [rbp+D8h]
  LARGE_INTEGER *v102; // [rsp+1E0h] [rbp+E0h]
  __int64 v103; // [rsp+1E8h] [rbp+E8h]

  v5 = a5;
  v6 = *(_DWORD *)(a1 + 35120) == 3;
  v49 = a2;
  v8 = a3;
  v9 = 0LL;
  v64 = (_DWORD *)a1;
  v59 = 0LL;
  v10 = (_DWORD *)a1;
  v66 = (__int64)a5;
  v11 = 0LL;
  v52 = 0;
  v12.QuadPart = 0LL;
  v60.QuadPart = 0LL;
  v56 = 0LL;
  v53 = 0;
  v62 = 0LL;
  v55.QuadPart = 0LL;
  if ( v6 )
  {
    v13 = 1;
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 35856) + 8LL * stru_140E3EAA8.ForegroundLossTime) >> 1;
  }
  else
  {
    v13 = 0;
    v14 = 0LL;
  }
  v65 = v14;
  v15 = v10 + 8744;
  if ( !a2
    && (!*((_QWORD *)v10 + 4379)
     && (!*((_QWORD *)v10 + 4382) || v10[8594] == v10[8768] && v10[8593] == v10[8769])
     && (!(_BYTE)a3 || v14 == *((_QWORD *)v10 + 4385))
     || a4 && *((_BYTE *)v10 + 35114)) )
  {
    goto LABEL_37;
  }
  LOBYTE(a3) = 0;
  for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
  {
    v9 = *(_QWORD *)&v15[2 * (unsigned int)i + 6];
    if ( v9 && *(_BYTE *)(v9 + 32) )
    {
      if ( v8 )
        return 0;
      LOBYTE(a3) = 1;
    }
  }
  if ( !(_BYTE)a3 && !a2 && a4 )
  {
    v9 = 0LL;
    goto LABEL_37;
  }
  v51 = KeDisableInterrupts(i, v9, a3);
  KxAcquireSpinLock((PKSPIN_LOCK)v10 + 4372);
  v18 = _InterlockedExchange64((volatile __int64 *)v10 + 4379, 0LL);
  v54 = v18;
  if ( v13 )
  {
    RuntimesForProcessor = PpmHvGetRuntimesForProcessor(v10, &v55, &v62);
    v12 = v55;
    v59 = RuntimesForProcessor;
    v19 = RuntimesForProcessor;
    v18 = RuntimesForProcessor - v55.QuadPart - *((_QWORD *)v10 + 4386);
    v54 = v18;
    *((_QWORD *)v10 + 4386) = RuntimesForProcessor - v55.QuadPart;
  }
  else
  {
    v19 = 0LL;
  }
  *((_QWORD *)v10 + 4378) += v18;
  v20 = *(LARGE_INTEGER *)(v10 + 8818);
  v63 = v20;
  if ( v20.QuadPart )
  {
    v11 = (LARGE_INTEGER *)(v20.QuadPart + ((unsigned __int64)*(unsigned int *)(v20.QuadPart + 184) << 7) + 192);
    memset_0(v11, 0, 0x80uLL);
    if ( ++*(_DWORD *)(v20.QuadPart + 184) == 8 )
      *(_DWORD *)(v20.QuadPart + 184) = 0;
    v11->LowPart = KeGetPcr()->Prcb.Number;
    BYTE5(v11->QuadPart) = a2;
    BYTE4(v11->QuadPart) = 0;
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v18 = v54;
    v11[2].QuadPart = v54;
    v11[1] = InterruptTimePrecise;
    BYTE6(v11->QuadPart) = v8;
    v11[3] = *(LARGE_INTEGER *)(v15 + 12);
    v11[13].QuadPart = v19;
    v11[14] = v12;
  }
  v22 = 0LL;
  v23 = v11 + 5;
  v24 = v11 + 4;
  v25 = (char *)v15 - (char *)v11;
  do
  {
    v26 = *(LONGLONG *)((char *)&v23[-2].QuadPart + v25);
    if ( !v26 )
      goto LABEL_23;
    v6 = *(_BYTE *)(v26 + 33) == 0;
    v32 = *(_QWORD *)(v26 + 40);
    v58.QuadPart = 0LL;
    v57 = 0LL;
    if ( v6 )
    {
      guard_dispatch_icall_no_overrides(v32, &v52, v17);
      v36 = v52;
      goto LABEL_45;
    }
    guard_dispatch_icall_no_overrides(v32, v49, &v57);
    v33 = v58;
    v34 = v57;
    v60 = v58;
    v56 = v57;
    if ( v49 )
      goto LABEL_43;
    v35 = *(_QWORD *)(v26 + 16);
    if ( v57 != v35 )
    {
      *(_DWORD *)(v26 + 24) = (unsigned __int64)*(unsigned int *)(v26 + 36)
                            * (v58.QuadPart - *(_QWORD *)(v26 + 8))
                            / (v57 - v35);
LABEL_43:
      *(LARGE_INTEGER *)(v26 + 8) = v33;
      *(_QWORD *)(v26 + 16) = v34;
    }
    v36 = *(_DWORD *)(v26 + 24);
    v52 = v36;
LABEL_45:
    v18 = v54;
    if ( *(_BYTE *)(v26 + 33) )
    {
      v37 = v54 * v36;
      if ( v37 )
      {
        PerformanceCounter.QuadPart = 0LL;
        v18 = v54;
        if ( is_mul_ok(v37, 0x64uLL) )
          v17 = (100 * v37) >> 16;
        else
          v17 = 100 * (v37 >> 16) + ((100 * (v37 - (v37 >> 16 << 16))) >> 16);
      }
      else
      {
        v17 = 0LL;
      }
    }
    else
    {
      v17 = v54 * v36;
    }
    *(_QWORD *)&v15[2 * v22 + 16] = v17 + *(LONGLONG *)((char *)&v23[3].QuadPart + v25);
    if ( v11 )
    {
      if ( *(_BYTE *)(v26 + 33) )
      {
        v38 = v56;
        v24->LowPart = v36;
        v23->QuadPart = v38;
        v23[2] = v60;
        v23[4].QuadPart = v17;
        v23[6] = *(LARGE_INTEGER *)((char *)v23 + v25 + 24);
        v53 = *(_DWORD *)(v26 + 36);
      }
      else
      {
        v24[11].LowPart = v36;
      }
    }
    if ( (_DWORD)v22 == *((unsigned __int8 *)v15 + 136) )
      *((_QWORD *)v15 + 10) += v17;
LABEL_23:
    v22 = (unsigned int)(v22 + 1);
    v24 = (LARGE_INTEGER *)((char *)v24 + 4);
    ++v23;
  }
  while ( (unsigned int)v22 < 2 );
  if ( v11 && (unsigned int)dword_140E07608 > 5 )
  {
    v71 = 4LL;
    v73 = 4LL;
    v75 = 8LL;
    LODWORD(v56) = *(_DWORD *)(v63.QuadPart + 184);
    v70 = &v56;
    v77 = 4LL;
    v79 = 1LL;
    v81 = 1LL;
    LODWORD(v57) = v64[9];
    v72 = &v57;
    v63 = v11[1];
    v74 = &v63;
    v58.LowPart = v11->LowPart;
    v76 = &v58;
    v49 = BYTE5(v11->QuadPart);
    v78 = &v49;
    v50 = BYTE6(v11->QuadPart);
    v80 = &v50;
    v60 = v11[2];
    v82 = &v60;
    v67 = v11[3];
    v84 = &v67;
    v68 = v11[13];
    v86 = &v68;
    PerformanceCounter = v11[14];
    p_PerformanceCounter = &PerformanceCounter;
    v90 = &v53;
    v92 = v11 + 4;
    v94 = v11 + 5;
    v96 = v11 + 7;
    v98 = v11 + 9;
    v100 = v11 + 11;
    v102 = v11 + 15;
    v83 = 8LL;
    v85 = 8LL;
    v87 = 8LL;
    v89 = 8LL;
    v91 = 4LL;
    v93 = 8LL;
    v95 = 16LL;
    v97 = 16LL;
    v99 = 16LL;
    v101 = 16LL;
    v103 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E07608,
      (unsigned __int8 *)byte_140049F50,
      0LL,
      0LL,
      0x13u,
      &v69);
    v18 = v54;
  }
  if ( *((_BYTE *)v15 + 136) == 2 )
    *((_QWORD *)v15 + 10) += 100 * v18;
  v10 = v64;
  v27 = v64[8594] - v15[24];
  v28 = v64[8593] - v15[25];
  v29 = v28 + v27;
  if ( v28 + v27 )
  {
    v39 = *((_QWORD *)v15 + 10);
    *((_QWORD *)v15 + 10) = 0LL;
    v15[24] += v27;
    v15[25] += v28;
    if ( v28 )
    {
      v52 = v28 / v29;
      *((_QWORD *)v15 + 11) += v39 * (v28 / v29);
    }
  }
  *((_QWORD *)v15 + 13) = v65;
  KxReleaseSpinLock((PKSPIN_LOCK)v15);
  if ( v51 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v42 = *SchedulerAssist;
      do
      {
        v43 = v42;
        LODWORD(v43) = v42 & 0xFFDFFFFF;
        v44 = v42;
        v42 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v42 & 0xFFDFFFFF, v42);
      }
      while ( v44 != v42 );
      if ( (v42 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v43, SchedulerAssist, v30);
    }
    _enable();
  }
  v12 = v55;
  v5 = (_QWORD *)v66;
  v9 = v59;
LABEL_37:
  if ( v5 )
  {
    if ( !v9 )
    {
      v46 = PpmHvGetRuntimesForProcessor(v10, &v55, &v62);
      v5 = (_QWORD *)v66;
      v9 = v46;
      v12 = v55;
    }
    *v5 = v9;
    v47 = v62;
    v5[1] = v12.QuadPart;
    v48 = *((_BYTE *)v10 + 172);
    if ( v48 )
      v47 <<= v48;
    v5[2] = (v47 * (unsigned __int128)*((unsigned __int64 *)v10 + 22)) >> 64;
  }
  return 1;
}
