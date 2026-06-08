/*
 * XREFs of ComputeProcessorEnergyMsrEx @ 0x140006200
 * Callers:
 *     <none>
 * Callees:
 *     ProcLibTracePackageEnergyCounterUpdate @ 0x140002870 (ProcLibTracePackageEnergyCounterUpdate.c)
 *     ComputeProcessorEnergyMsr @ 0x140002920 (ComputeProcessorEnergyMsr.c)
 *     EnumerateNextDevice @ 0x1400040CC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1400048EC (ResetEnumerationContext.c)
 *     ProcLibTraceEnergyCounterUpdate @ 0x140008410 (ProcLibTraceEnergyCounterUpdate.c)
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 */

unsigned __int64 *__fastcall ComputeProcessorEnergyMsrEx(
        int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  __int64 v5; // r15
  unsigned __int64 v6; // rsi
  __int64 v7; // r13
  unsigned int SystemArgument1; // r10d
  __int64 v9; // rdi
  unsigned int i; // r9d
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  __int64 SystemArgument1_low; // r14
  unsigned int v14; // ebx
  unsigned int *p_ActiveThreadCount; // r12
  __int64 v16; // r14
  __int64 DpcData_high; // r15
  unsigned __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // r11
  __int64 v21; // r15
  __int128 *v22; // r12
  unsigned int *v23; // r13
  unsigned __int64 *v24; // rbx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // r8
  double v29; // xmm2_8
  double v30; // xmm1_8
  double v31; // xmm0_8
  double v32; // xmm1_8
  double v33; // xmm3_8
  double v34; // xmm0_8
  double v35; // xmm1_8
  int *v36; // rcx
  __int64 v37; // r10
  double *v38; // r9
  int v39; // eax
  __int64 v40; // r9
  double v41; // xmm1_8
  unsigned int *v42; // r10
  __int64 v43; // rbx
  double *v44; // r11
  signed __int64 v45; // rdx
  double v46; // xmm0_8
  unsigned __int64 v47; // rax
  int v48; // ecx
  double v49; // xmm1_8
  unsigned __int64 v50; // rax
  double v51; // xmm1_8
  __int64 *v52; // rdx
  __int64 v53; // r11
  double *v54; // r10
  double v55; // xmm0_8
  __int64 v56; // rax
  double v57; // xmm1_8
  __int64 v58; // rax
  double v59; // xmm0_8
  void **p_Reserved; // rax
  __int64 v61; // r9
  double *v62; // rcx
  double v63; // xmm0_8
  double v64; // xmm0_8
  double *v65; // rax
  __int64 v66; // r9
  double *v67; // rcx
  double v68; // xmm0_8
  double v69; // xmm0_8
  int v70; // ecx
  double v71; // xmm0_8
  double v72; // xmm0_8
  unsigned __int64 v73; // rax
  unsigned __int64 *result; // rax
  __int64 v76; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v77; // [rsp+48h] [rbp-C0h]
  unsigned __int64 *v78; // [rsp+50h] [rbp-B8h]
  __int128 v79; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v80; // [rsp+68h] [rbp-A0h]
  __int64 v81; // [rsp+78h] [rbp-90h]
  __int128 v82; // [rsp+80h] [rbp-88h] BYREF
  _OWORD v83[2]; // [rsp+90h] [rbp-78h] BYREF
  __int128 v84; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v85; // [rsp+C0h] [rbp-48h]
  _QWORD v86[3]; // [rsp+C8h] [rbp-40h]
  double v87[4]; // [rsp+E0h] [rbp-28h]
  _BYTE v88[32]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v89[40]; // [rsp+120h] [rbp+18h] BYREF

  v78 = a5;
  v5 = a3;
  v6 = 0LL;
  v77 = a3;
  v7 = a2;
  v81 = a2;
  v76 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v82 = 0LL;
  memset(v83, 0, sizeof(v83));
  if ( !a1 )
  {
    if ( (WPP_MAIN_CB.DeviceQueue.Type & 0x40) != 0 )
    {
      SystemArgument1 = (unsigned int)WPP_MAIN_CB.Dpc.SystemArgument1;
      v9 = 4LL;
      if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) <= 4 )
      {
        for ( i = 0; i < SystemArgument1; ++i )
        {
          v11 = __readmsr(*((_DWORD *)&WPP_MAIN_CB.Dpc.SystemArgument1 + i + 1));
          *((_DWORD *)&v84 + i) = v11;
          LODWORD(v11) = v11 - *((_DWORD *)&WPP_MAIN_CB.DeviceQueue.Lock + i);
          *((_DWORD *)v86 + i) = v11;
          if ( (unsigned int)v11 > 0x7FFFFFFF )
            goto LABEL_91;
        }
        if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
        {
          v12 = 0LL;
          SystemArgument1_low = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
          do
          {
            v14 = *(_DWORD *)((char *)v86 + v12);
            ProcLibTracePackageEnergyCounterUpdate(*(_DWORD *)((char *)&WPP_MAIN_CB.Dpc.SystemArgument1 + v12 + 4), v14);
            *(_DWORD *)((char *)&WPP_MAIN_CB.DeviceQueue.Lock + v12) = *(_DWORD *)((char *)&v84 + v12);
            *(_DWORD *)((char *)&v83[-1] + v12) = v14;
            v12 += 4LL;
            --SystemArgument1_low;
          }
          while ( SystemArgument1_low );
          v9 = 4LL;
        }
        if ( HIDWORD(WPP_MAIN_CB.Dpc.DpcData) )
        {
          p_ActiveThreadCount = &WPP_MAIN_CB.ActiveThreadCount;
          v16 = 0LL;
          DpcData_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
          do
          {
            v18 = __readmsr(*p_ActiveThreadCount);
            v19 = v18 - *(_QWORD *)((char *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong + v16);
            ProcLibTracePackageEnergyCounterUpdate(*p_ActiveThreadCount, v19);
            *(_QWORD *)((char *)v83 + v16) = v19;
            *(_QWORD *)((char *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong + v16) = v18;
            v16 += 8LL;
            v9 = 4LL;
            ++p_ActiveThreadCount;
            --DpcData_high;
          }
          while ( DpcData_high );
          v5 = v77;
        }
        DWORD2(v80) = 32;
        *(_QWORD *)&v79 = &qword_1400191E8;
        *((_QWORD *)&v79 + 1) = &qword_1400191E8;
        v85 = 0LL;
        v84 = 0LL;
        *(_QWORD *)&v80 = 0LL;
        ResetEnumerationContext((__int64 *)&v79);
        if ( !(unsigned int)EnumerateNextDevice((__int64 *)&v79, &v76) )
        {
          do
          {
            v21 = v76;
            v22 = &v84;
            v23 = (unsigned int *)&CounterId;
            v86[0] = 3LL;
            v24 = (unsigned __int64 *)(*(_QWORD *)(v76 + 368) + 24LL);
            do
            {
              v25 = *v24;
              v26 = *(v24 - 1);
              if ( v26 < *v24 )
                v27 = (unsigned __int64)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink->Flink + v26 - v25 + 1;
              else
                v27 = v26 - v25;
              ProcLibTraceEnergyCounterUpdate(v21, *v23, v27);
              *(_QWORD *)v22 += v27;
              v9 = 4LL;
              *v24 = v26;
              ++v23;
              v22 = (__int128 *)((char *)v22 + 8);
              v24 += 3;
              --v86[0];
            }
            while ( v86[0] );
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64 *)&v79, &v76) );
          v20 = v85;
          v5 = v77;
          v7 = v81;
        }
        v28 = 1000000 * v5 / (qword_140019AB8 * (unsigned __int64)(unsigned int)dword_140019AAC);
        if ( v28 && (_QWORD)v84 )
        {
          v29 = v84 < 0
              ? (double)(int)(BYTE8(v84) & 1 | (*((_QWORD *)&v84 + 1) >> 1))
              + (double)(int)(BYTE8(v84) & 1 | (*((_QWORD *)&v84 + 1) >> 1))
              : (double)SDWORD2(v84);
          v30 = v7 < 0
              ? (double)(int)(v7 & 1 | ((unsigned __int64)v7 >> 1))
              + (double)(int)(v7 & 1 | ((unsigned __int64)v7 >> 1))
              : (double)(int)v7;
          v31 = v5 < 0
              ? (double)(int)(v5 & 1 | ((unsigned __int64)v5 >> 1))
              + (double)(int)(v5 & 1 | ((unsigned __int64)v5 >> 1))
              : (double)(int)v5;
          v32 = v30 / v31;
          v33 = (__int64)v84 < 0
              ? (double)(int)(v84 & 1 | ((unsigned __int64)v84 >> 1))
              + (double)(int)(v84 & 1 | ((unsigned __int64)v84 >> 1))
              : (double)(int)v84;
          v87[0] = v29 / v33 * v32;
          if ( v20 )
          {
            if ( v20 < 0 )
              v34 = (double)(int)(v20 & 1 | ((unsigned __int64)v20 >> 1))
                  + (double)(int)(v20 & 1 | ((unsigned __int64)v20 >> 1));
            else
              v34 = (double)(int)v20;
            v87[2] = v32;
            v87[1] = v29 / v34 * v32;
            v87[3] = 1.0 - v32;
            if ( (WPP_MAIN_CB.DeviceQueue.Type & 1) != 0 )
            {
              if ( (WPP_MAIN_CB.DeviceQueue.Type & 1) == 1 && LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
              {
                if ( (v28 & 0x8000000000000000uLL) != 0LL )
                  v35 = (double)(int)(v28 & 1 | (v28 >> 1)) + (double)(int)(v28 & 1 | (v28 >> 1));
                else
                  v35 = (double)(int)v28;
                v36 = (int *)&v82;
                v37 = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
                v38 = (double *)v88;
                do
                {
                  v39 = *v36++;
                  *v38++ = (double)v39 * 1000000.0 * *(double *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink / v35;
                  --v37;
                }
                while ( v37 );
              }
            }
            else if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
            {
              v40 = (*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type >> 1) & 0x1FLL;
              if ( (v28 & 0x8000000000000000uLL) != 0LL )
                v41 = (double)(int)(v28 & 1 | (v28 >> 1)) + (double)(int)(v28 & 1 | (v28 >> 1));
              else
                v41 = (double)(int)v28;
              v42 = (unsigned int *)&v82;
              v43 = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
              v44 = (double *)v88;
              do
              {
                v45 = (unsigned __int64)*v42 << v40;
                if ( v45 < 0 )
                {
                  v47 = ((unsigned __int64)*v42 << v40) & 1 | ((unsigned __int64)*v42 << v40 >> 1);
                  v46 = (double)(int)v47 + (double)(int)v47;
                }
                else
                {
                  v46 = (double)(int)v45;
                }
                ++v42;
                *v44++ = v46 / v41;
                --v43;
              }
              while ( v43 );
            }
            if ( HIDWORD(WPP_MAIN_CB.Dpc.DpcData) )
            {
              v48 = qword_140019AC0 * v28;
              if ( ((qword_140019AC0 * v28) & 0x8000000000000000uLL) != 0LL )
              {
                v50 = v48 & 1 | ((qword_140019AC0 * v28) >> 1);
                v49 = (double)(int)v50 + (double)(int)v50;
              }
              else
              {
                v49 = (double)v48;
              }
              v51 = v49 / 1000000.0;
              v52 = (__int64 *)v83;
              v53 = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
              v54 = (double *)v89;
              do
              {
                if ( *v52 < 0 )
                {
                  v56 = *v52 & 1 | ((unsigned __int64)*v52 >> 1);
                  v55 = (double)(int)v56 + (double)(int)v56;
                }
                else
                {
                  v55 = (double)(int)*v52;
                }
                ++v52;
                *v54++ = v55 * 100.0 / v51;
                --v53;
              }
              while ( v53 );
            }
            v57 = *(double *)&WPP_MAIN_CB.DeviceLock.Header.Lock;
            v58 = 0LL;
            do
            {
              v59 = v87[v58] * *(double *)((char *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink + v58 * 8);
              ++v58;
              v57 = v57 + v59;
              --v9;
            }
            while ( v9 );
            if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
            {
              p_Reserved = &WPP_MAIN_CB.Reserved;
              v61 = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
              v62 = (double *)v88;
              do
              {
                v63 = *(double *)p_Reserved++;
                v64 = v63 * *v62++;
                v57 = v57 + v64;
                --v61;
              }
              while ( v61 );
            }
            if ( HIDWORD(WPP_MAIN_CB.Dpc.DpcData) )
            {
              v65 = (double *)&unk_140021D60;
              v66 = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
              v67 = (double *)v89;
              do
              {
                v68 = *v67++;
                v69 = v68 * *v65++;
                v57 = v57 + v69;
                --v66;
              }
              while ( v66 );
            }
            if ( v57 >= 0.0 && v57 <= (double)SHIDWORD(WPP_MAIN_CB.Dpc.DeferredContext) )
            {
              if ( v57 <= (double)(HIDWORD(WPP_MAIN_CB.Dpc.DeferredContext) >> 1) )
                goto LABEL_84;
              v70 = 100;
              if ( a4 <= 0x64 )
                v70 = a4;
              if ( v57 <= (double)(HIDWORD(WPP_MAIN_CB.Dpc.DeferredContext) * v70 / 0x64u) )
              {
LABEL_84:
                if ( (v28 & 0x8000000000000000uLL) != 0LL )
                  v71 = (double)(int)(v28 & 1 | (v28 >> 1)) + (double)(int)(v28 & 1 | (v28 >> 1));
                else
                  v71 = (double)(int)v28;
                v72 = v71 * v57;
                v73 = 0LL;
                if ( v72 >= 9.223372036854776e18 )
                {
                  v72 = v72 - 9.223372036854776e18;
                  if ( v72 < 9.223372036854776e18 )
                    v73 = 0x8000000000000000uLL;
                }
                v6 = v73 + (unsigned int)(int)v72;
              }
            }
          }
        }
      }
    }
    else
    {
      ComputeProcessorEnergyMsr(0, 0LL, 0LL, 0LL, v78);
      v6 = *v78;
    }
  }
LABEL_91:
  result = v78;
  *v78 = v6;
  return result;
}
