/*
 * XREFs of ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800058E0
 * Callers:
 *     ?RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180004DC0 (-RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONI.c)
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x180005000 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180005744 (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x180006178 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002409C (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall RmpPolicyComputeUsageLimits(
        struct _RM_USAGE_LIMIT_SETTINGS *a1,
        struct _RM_REMEDIATION_ACTIONS *a2,
        struct _RM_SYSTEM_MEMORY_METRICS *a3,
        unsigned __int64 a4,
        struct _RM_RESOURCE_USAGE_LIMITS *a5)
{
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // krA0_8
  __m128i v12; // xmm2
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // kr00_8
  unsigned __int64 v20; // kr10_8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // kr20_8
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // kr30_8
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // kr40_8
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // kr50_8
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // kr60_8
  unsigned __int64 v44; // r9
  unsigned __int64 v45; // kr70_8
  unsigned __int64 v46; // r9
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // kr80_8
  unsigned __int64 v49; // kr90_8
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // r8
  unsigned int v52; // ecx
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  unsigned __int64 v59; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v60; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v61; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v62; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v63; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-A8h] BYREF
  char *v65; // [rsp+68h] [rbp-98h]
  __int16 v66; // [rsp+70h] [rbp-90h] BYREF
  __int128 *v67; // [rsp+78h] [rbp-88h]
  __int16 v68; // [rsp+80h] [rbp-80h] BYREF
  __int128 v69; // [rsp+90h] [rbp-70h]
  __int128 v70; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v71; // [rsp+B0h] [rbp-50h]
  __int128 v72; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v73; // [rsp+D0h] [rbp-30h]
  __int128 v74; // [rsp+E0h] [rbp-20h]
  __m128i v75; // [rsp+F0h] [rbp-10h]
  __int128 v76; // [rsp+100h] [rbp+0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF
  void *v78; // [rsp+120h] [rbp+20h]
  int v79; // [rsp+128h] [rbp+28h]
  int v80; // [rsp+12Ch] [rbp+2Ch]
  unsigned __int64 *v81; // [rsp+130h] [rbp+30h]
  __int64 v82; // [rsp+138h] [rbp+38h]
  __int64 *v83; // [rsp+140h] [rbp+40h]
  __int64 v84; // [rsp+148h] [rbp+48h]
  __int16 *v85; // [rsp+150h] [rbp+50h]
  __int64 v86; // [rsp+158h] [rbp+58h]
  __int128 *v87; // [rsp+160h] [rbp+60h]
  __int64 v88; // [rsp+168h] [rbp+68h]
  __int16 *v89; // [rsp+170h] [rbp+70h]
  __int64 v90; // [rsp+178h] [rbp+78h]
  char *v91; // [rsp+180h] [rbp+80h]
  __int64 v92; // [rsp+188h] [rbp+88h]
  unsigned __int64 *v93; // [rsp+190h] [rbp+90h]
  __int64 v94; // [rsp+198h] [rbp+98h]
  unsigned __int64 *v95; // [rsp+1A0h] [rbp+A0h]
  __int64 v96; // [rsp+1A8h] [rbp+A8h]

  if ( *(_OWORD *)a5 != __PAIR128__(*((_QWORD *)a3 + 5), a4) )
  {
    v8 = *((_QWORD *)a3 + 5);
    *(_QWORD *)&v70 = 0LL;
    v9 = -1LL;
    *(_QWORD *)&v76 = 0LL;
    v10 = -1LL;
    v11 = *((unsigned int *)a1 + 5);
    v12 = 0LL;
    v72 = 0LL;
    v75 = 0LL;
    v13 = -1LL;
    v59 = 0LL;
    if ( is_mul_ok(a4, v11) )
      v13 = a4 * v11;
    v59 = 0LL;
    v14 = a4 - *(_QWORD *)a1;
    v15 = *((unsigned int *)a1 + 12);
    *(_QWORD *)&v69 = a4;
    v16 = v13 / 0x64;
    *((_QWORD *)&v69 + 1) = v8;
    v59 = 0LL;
    if ( v16 < v14 )
      v14 = v16;
    v17 = -1LL;
    v19 = v15;
    v18 = a4 * v15;
    *(_QWORD *)&v72 = v14;
    *((_QWORD *)&v71 + 1) = v14;
    if ( is_mul_ok(a4, v19) )
      v17 = v18;
    v20 = *((unsigned int *)a1 + 3);
    *((_QWORD *)&v76 + 1) = v17 / 0x64;
    v21 = -1LL;
    if ( is_mul_ok(a4, v20) )
      v10 = a4 * v20;
    v22 = v10 / 0x64;
    if ( is_mul_ok(v8, *((unsigned int *)a1 + 4)) )
      v21 = v8 * *((unsigned int *)a1 + 4);
    v23 = v21 / 0x64;
    if ( v22 >= v23 )
      v22 = v23;
    v24 = -1LL;
    if ( v14 < v22 )
      v22 = v14;
    v25 = *((unsigned int *)a1 + 2);
    *(_QWORD *)&v71 = v22;
    if ( is_mul_ok(a4, v25) )
      v24 = a4 * v25;
    v26 = *((unsigned int *)a1 + 6);
    v27 = v24 / 0x64;
    v59 = 0LL;
    if ( v22 < v27 )
      v27 = v22;
    v28 = *((_QWORD *)a3 + 5);
    *((_QWORD *)&v70 + 1) = v27;
    v29 = -1LL;
    v31 = v26;
    v30 = v28 * v26;
    if ( is_mul_ok(v28, v31) )
      v29 = v30;
    v32 = *((unsigned int *)a1 + 7);
    *(_QWORD *)&v73 = v29 / 0x64;
    v33 = -1LL;
    v35 = v32;
    v34 = v28 * v32;
    if ( is_mul_ok(v28, v35) )
      v33 = v34;
    v36 = *((unsigned int *)a1 + 8);
    *((_QWORD *)&v73 + 1) = v33 / 0x64;
    v37 = -1LL;
    v39 = v36;
    v38 = v28 * v36;
    if ( is_mul_ok(v28, v39) )
      v37 = v38;
    v40 = *((unsigned int *)a1 + 9);
    *(_QWORD *)&v74 = v37 / 0x64;
    v41 = -1LL;
    v43 = v40;
    v42 = v28 * v40;
    if ( is_mul_ok(v28, v43) )
      v41 = v42;
    *((_QWORD *)&v74 + 1) = v41 / 0x64;
    if ( *((_DWORD *)a2 + 10) )
    {
      v44 = -1LL;
      v45 = *((unsigned int *)a1 + 10);
      v59 = 0LL;
      if ( is_mul_ok(a4, v45) )
        v44 = a4 * v45;
      v46 = v44 / 0x64;
      v75.m128i_i64[0] = v46;
      v12 = v75;
    }
    else
    {
      v46 = 0LL;
    }
    if ( *((_DWORD *)a2 + 11) )
    {
      v48 = v28;
      v49 = *((unsigned int *)a1 + 11);
      v47 = v28 * v49;
      v50 = -1LL;
      v59 = 0LL;
      if ( is_mul_ok(v48, v49) )
        v50 = v47;
      v51 = v50 / 0x64;
      v75.m128i_i64[1] = v51;
      v12 = v75;
    }
    else
    {
      v51 = _mm_srli_si128(v12, 8).m128i_u64[0];
    }
    v52 = *((_DWORD *)a1 + 13);
    if ( v52 )
    {
      v59 = 0LL;
      if ( is_mul_ok(*((_QWORD *)a3 + 5), v52) )
        v9 = *((_QWORD *)a3 + 5) * v52;
      *(_QWORD *)&v76 = v9 / 0x64;
    }
    if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 1) != 0 && (qword_1800E1290 & 1) == qword_1800E1290 )
    {
      v61 = v51;
      v65 = (char *)&v72 + 8;
      v62 = v46;
      v67 = &v70;
      v63 = *((_QWORD *)a3 + 5);
      v66 = 5;
      v95 = &v61;
      v93 = &v62;
      v89 = &v66;
      v91 = (char *)&v72 + 8;
      v85 = &v68;
      v87 = &v70;
      v83 = &v63;
      v81 = &v59;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800E1280;
      v68 = 5;
      v59 = a4;
      v96 = 8LL;
      v94 = 8LL;
      v90 = 2LL;
      v92 = 40LL;
      v86 = 2LL;
      v88 = 40LL;
      v84 = 8LL;
      v82 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_1800E1280;
      v78 = &unk_1800D302B;
      UserData.Reserved = 2;
      v79 = 164;
      v80 = 1;
      v60 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
      v12 = v75;
    }
    v53 = v70;
    *(_OWORD *)a5 = v69;
    v54 = v71;
    *((_OWORD *)a5 + 1) = v53;
    v55 = v72;
    *((_OWORD *)a5 + 2) = v54;
    v56 = v73;
    *((_OWORD *)a5 + 3) = v55;
    v57 = v74;
    *((_OWORD *)a5 + 4) = v56;
    v58 = v76;
    *((_OWORD *)a5 + 5) = v57;
    *((__m128i *)a5 + 6) = v12;
    *((_OWORD *)a5 + 7) = v58;
  }
}
