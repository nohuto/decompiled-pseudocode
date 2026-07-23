/*
 * XREFs of PpmPerfSnapDeliveredPerformance @ 0x140254FC0
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x1402547B0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmPerfAction @ 0x140254C00 (PpmPerfAction.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x1402540F0 (PpmHvSnapPerformanceAccumulation.c)
 *     PpmSnapPerformanceAccumulation @ 0x14025568C (PpmSnapPerformanceAccumulation.c)
 *     PpmPerfCheckForIllegalProcessorThrottle @ 0x140255980 (PpmPerfCheckForIllegalProcessorThrottle.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

char __fastcall PpmPerfSnapDeliveredPerformance(__int64 a1, char a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  char result; // al
  bool v8; // zf
  unsigned __int64 *v9; // rcx
  unsigned int *v10; // rdi
  _QWORD *v11; // r12
  __int64 v12; // r13
  bool v13; // r15
  unsigned __int64 *v14; // rdx
  __int64 v15; // r11
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rsi
  __int64 v27; // rcx
  unsigned __int64 v28; // r15
  unsigned int v29; // r8d
  __int64 v30; // rbx
  unsigned __int64 v31; // r10
  unsigned int i; // r11d
  __int64 v33; // r14
  __int64 v34; // r9
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  unsigned __int64 *v37; // r9
  __int64 v38; // r14
  unsigned __int64 *v39; // r9
  __int64 v40; // r14
  __int64 v41; // r11
  __int64 v42; // r13
  unsigned int v43; // ebx
  __int64 v44; // rsi
  __int64 v45; // r14
  unsigned int j; // r10d
  int v47; // r8d
  __int64 v48; // rdx
  __int64 v49; // rdx
  const EVENT_DESCRIPTOR *v50; // r10
  __int64 v51; // rcx
  unsigned __int64 Keyword; // r8
  unsigned __int8 v53; // al
  __int64 v54; // rcx
  unsigned __int64 v55; // r8
  unsigned __int8 v56; // al
  unsigned __int64 **v57; // rax
  unsigned __int64 *v58; // [rsp+40h] [rbp-59h] BYREF
  __int64 v59; // [rsp+48h] [rbp-51h]
  int v60; // [rsp+50h] [rbp-49h] BYREF
  int v61; // [rsp+58h] [rbp-41h] BYREF
  int v62; // [rsp+60h] [rbp-39h] BYREF
  unsigned __int64 v63; // [rsp+68h] [rbp-31h]
  __int64 v64; // [rsp+70h] [rbp-29h]
  unsigned __int64 v65; // [rsp+78h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-19h] BYREF
  int *v67; // [rsp+90h] [rbp-9h]
  __int64 v68; // [rsp+98h] [rbp-1h]
  unsigned __int64 *v69; // [rsp+A0h] [rbp+7h]
  __int64 v70; // [rsp+A8h] [rbp+Fh]
  unsigned __int64 **v71; // [rsp+B0h] [rbp+17h]
  __int64 v72; // [rsp+B8h] [rbp+1Fh]

  v3 = *(_QWORD *)(a1 + 16);
  v59 = v3;
  if ( !v3 )
    return 1;
  v8 = *(_BYTE *)(a1 + 68) == 0;
  v9 = (unsigned __int64 *)(v3 + 96);
  v10 = *(unsigned int **)(v3 + 152);
  v11 = *(_QWORD **)(v3 + 216);
  v58 = (unsigned __int64 *)(v3 + 96);
  if ( v8 )
  {
    v12 = 0LL;
    v64 = 0LL;
    v13 = 0;
    while ( 1 )
    {
      result = PpmHvSnapPerformanceAccumulation(a1, 0, a3, v9);
      if ( !a2 )
        break;
      v9 = v58;
      if ( result )
        goto LABEL_6;
    }
  }
  else
  {
    v12 = a1 - 35264;
    v13 = a1 - 35264 != (_QWORD)KeGetCurrentPrcb();
    v64 = a1 - 35264;
    result = PpmSnapPerformanceAccumulation((int)a1 - 35264, 0, v13, 1, (__int64)v9, v10);
  }
  if ( result )
  {
LABEL_6:
    v14 = v58;
    v15 = v59;
    v16 = *(_QWORD *)(v59 + 160);
    if ( *v58 <= v16 )
      return 0;
    v17 = *v58 - v16;
    v18 = v58[1] - *(_QWORD *)(v59 + 168);
    if ( v18 > v17 && v13 )
      return 0;
    if ( v12 && !v13 )
    {
      PpmPerfCheckForIllegalProcessorThrottle(v12);
      v19 = *(_QWORD *)(v12 + 35264);
      v20 = *(_QWORD *)(v12 + 35272);
      if ( v19 && v20 && *(_QWORD *)(v19 + 424) )
        guard_dispatch_icall_no_overrides(*(_QWORD *)(v20 + 8), PpmCheckTime, 0LL);
      v14 = v58;
      v15 = v59;
    }
    if ( v18 )
    {
      v21 = v14[3] - *(_QWORD *)(v15 + 184);
      v22 = (v14[4] - *(_QWORD *)(v15 + 192)) / v18;
      v23 = v21 / v18;
      if ( *(_QWORD *)a1 )
        v24 = *(unsigned int *)(*(_QWORD *)a1 + 456LL);
      else
        v24 = *(unsigned int *)(v12 + 68);
      v63 = v24;
      v25 = (v21 * v24 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
      v26 = ((v25 + ((v21 * v24 - v25) >> 1)) >> 6) / v18;
      if ( (_DWORD)v22 != *(_DWORD *)(v15 + 224) || (_DWORD)v23 != *(_DWORD *)(v15 + 228) )
      {
        LODWORD(v58) = v26;
        v62 = v23;
        v61 = v22;
        v60 = 0;
        if ( *(_BYTE *)(a1 + 68) )
        {
          v50 = &PPM_ETW_DELIVERED_PERF_CHANGE;
          LOWORD(v60) = *(unsigned __int8 *)(a1 - 35056);
          BYTE2(v60) = *(_BYTE *)(a1 - 35055);
          *(_QWORD *)&UserData.Size = 3LL;
        }
        else
        {
          v50 = (const EVENT_DESCRIPTOR *)PPM_ETW_DELIVERED_PERF_CHANGE_HV;
          v60 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL);
          *(_QWORD *)&UserData.Size = 4LL;
        }
        UserData.Ptr = (ULONGLONG)&v60;
        if ( PpmEtwRegistered )
        {
          if ( PpmEtwHandle )
          {
            if ( (v51 = *(_QWORD *)(PpmEtwHandle + 32), Keyword = v50->Keyword, *(_DWORD *)(v51 + 96))
              && ((v53 = *(_BYTE *)(v51 + 100), v50->Level <= v53) || !v53)
              && ((*(_DWORD *)(v51 + 104) & 0x40) != 0 && !Keyword
               || (Keyword & *(_QWORD *)(v51 + 112)) != 0
               && (Keyword & *(_QWORD *)(v51 + 120)) == *(_QWORD *)(v51 + 120))
              || *(_WORD *)(PpmEtwHandle + 102)
              && (v54 = *(_QWORD *)(PpmEtwHandle + 40), v55 = v50->Keyword, *(_DWORD *)(v54 + 96))
              && ((v56 = *(_BYTE *)(v54 + 100), v50->Level <= v56) || !v56)
              && ((*(_DWORD *)(v54 + 104) & 0x40) != 0 && !v55
               || (v55 & *(_QWORD *)(v54 + 112)) != 0 && (v55 & *(_QWORD *)(v54 + 120)) == *(_QWORD *)(v54 + 120)) )
            {
              if ( v17 && PopQpcFrequency && PopQpcFrequency != 1000000 )
              {
                v65 = 0LL;
                if ( is_mul_ok(v17, 0xF4240uLL) )
                  v17 = v17 * (unsigned __int128)0xF4240uLL / PopQpcFrequency;
                else
                  v17 = 1000000 * (v17 / PopQpcFrequency) + 1000000 * (v17 % PopQpcFrequency) / PopQpcFrequency;
              }
              v65 = v17;
              v67 = &v61;
              v69 = &v65;
              v68 = 4LL;
              v70 = 8LL;
              v72 = 4LL;
              if ( v50 == &PPM_ETW_DELIVERED_PERF_CHANGE )
                v57 = (unsigned __int64 **)&v62;
              else
                v57 = &v58;
              v71 = v57;
              EtwWriteEx(PpmEtwHandle, v50, 0LL, 0, 0LL, 0LL, 4u, &UserData);
              v15 = v59;
            }
          }
        }
      }
      if ( *(_BYTE *)(a1 + 68) )
      {
        v27 = 47LL;
        if ( (unsigned int)v26 / 0x64 < 0x2F )
          v27 = (unsigned int)v26 / 0x64;
        v28 = *(_QWORD *)v10 - *v11;
        v29 = 0;
        v58 = (unsigned __int64 *)(unsigned int)v27;
        v30 = *(_QWORD *)(v15 + 8 * v27 + 1016);
        do
        {
          while ( 1 )
          {
            v31 = 0LL;
            for ( i = 0; i < 2; ++i )
            {
              if ( v10[12] )
              {
                v33 = v10[12];
                v34 = v10[12] * (i + 2 * v29);
                do
                {
                  v35 = *(_QWORD *)&v10[2 * v34 + 14] - v11[v34 + 7];
                  v34 = (unsigned int)(v34 + 1);
                  v31 += v35;
                  --v33;
                }
                while ( v33 );
              }
            }
            if ( v31 >= v28 )
              v28 = 0LL;
            else
              v28 -= v31;
            v36 = v31 * (unsigned int)v26 / v63;
            if ( v29 )
              break;
            v39 = v58;
            v30 += v36;
            v40 = v59;
            *(_QWORD *)(v59 + 8LL * (_QWORD)v58 + 248) += v36;
            v29 = 1;
            *(_QWORD *)(v40 + 8LL * (_QWORD)v39 + 1016) = v30;
          }
          if ( v29 == 2 || v29 - 5 <= 1 )
          {
            v37 = v58;
            v38 = v59;
            *(_QWORD *)(v59 + 8LL * (_QWORD)v58 + 632) += v36;
          }
          else
          {
            v37 = v58;
            v38 = v59;
          }
          v30 += v36;
          ++v29;
          *(_QWORD *)(v38 + 8LL * (_QWORD)v37 + 1016) = v30;
        }
        while ( v29 < 7 );
        if ( v28 )
        {
          *(_QWORD *)(v38 + 8LL * (_QWORD)v37 + 248) += v28;
          *(_QWORD *)(v38 + 8LL * (_QWORD)v37 + 1016) = v30 + v28;
        }
        if ( !PpmHeteroHgsParkingEnabled )
          goto LABEL_38;
        v41 = 0LL;
        v42 = *(_QWORD *)(v64 + 35432);
        v63 = *(_QWORD *)(v64 + 35440);
        if ( !(_DWORD)PpmHeteroWorkloadClasses )
          goto LABEL_38;
        do
        {
          v43 = v10[12];
          v44 = 0LL;
          v45 = 0LL;
          for ( j = 0; j < 7; ++j )
          {
            v47 = 2 * j;
            v48 = *(_QWORD *)&v10[2 * (unsigned int)v41 + 14 + 2 * v47 * v43] - v11[(unsigned int)v41 + 7 + v47 * v43];
            if ( (unsigned int)(KiDynamicHeteroCpuPolicy[2 * j] - 3) > 1 )
              v45 += v48;
            else
              v44 += v48;
            v49 = *(_QWORD *)&v10[2 * (unsigned int)v41 + 14 + 2 * v43 * (v47 + 1)]
                - v11[(unsigned int)v41 + 7 + v43 * (v47 + 1)];
            if ( (unsigned int)(KiDynamicHeteroCpuPolicy[2 * j + 1] - 3) > 1 )
              v45 += v49;
            else
              v44 += v49;
          }
          *(_QWORD *)(v63 + 8 * v41 + 8) = v45;
          *(_QWORD *)(v42 + 8 * v41 + 8) = v44;
          v41 = (unsigned int)(v41 + 1);
        }
        while ( (unsigned int)v41 < (unsigned int)PpmHeteroWorkloadClasses );
      }
    }
    v38 = v59;
LABEL_38:
    *(_OWORD *)(v38 + 160) = *(_OWORD *)(v38 + 96);
    *(_OWORD *)(v38 + 176) = *(_OWORD *)(v38 + 112);
    *(_OWORD *)(v38 + 192) = *(_OWORD *)(v38 + 128);
    *(_QWORD *)(v38 + 208) = *(_QWORD *)(v38 + 144);
    memmove(v11, v10, (int)(112 * v10[12] + 56));
    return 1;
  }
  return result;
}
