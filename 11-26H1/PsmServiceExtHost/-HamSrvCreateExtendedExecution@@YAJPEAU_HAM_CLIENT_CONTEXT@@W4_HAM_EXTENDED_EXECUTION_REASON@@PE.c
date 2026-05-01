/*
 * XREFs of ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180041E8C
 * Callers:
 *     HamRpcSrvCreateExtendedExecution @ 0x18007C830 (HamRpcSrvCreateExtendedExecution.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@K_KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x18002A6FC (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HampSrvTraceActivityCreateStart@@YAXXZ @ 0x180039830 (-HampSrvTraceActivityCreateStart@@YAXXZ.c)
 *     ?HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTIVITY_PROPERTIES@@KKE@Z @ 0x180039924 (-HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTI.c)
 *     ?HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180041190 (-HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180041CD8 (-HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x1800421D4 (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800426C0 (-RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampExtendedExecutionCheckPolicy@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEAU_RM_PSM_HOST_INFO@@W4_HAM_EXTENDED_EXECUTION_REASON@@@Z @ 0x180042714 (-HampExtendedExecutionCheckPolicy@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEAU_RM_PSM_HOST_INFO@@W.c)
 *     ?HampExtendedExecutionFormatDescription@@YAXW4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEAG@Z @ 0x18006C7F0 (-HampExtendedExecutionFormatDescription@@YAXW4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEAG@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvCreateExtendedExecution(__int64 a1, int a2, __int64 a3, __int64 *a4)
{
  __int64 v5; // r15
  __int64 v7; // r13
  struct _HAM_ACTIVITY *v8; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v9; // rdi
  unsigned int JobType; // r12d
  const unsigned __int16 *v11; // rdx
  int v12; // eax
  int v13; // ebx
  BOOL v14; // esi
  signed __int64 v15; // rdx
  unsigned __int16 *v16; // rcx
  __int64 v17; // r8
  unsigned __int16 v18; // ax
  unsigned __int16 *v19; // rax
  __int128 v20; // xmm0
  __int64 v21; // r8
  int v22; // eax
  unsigned int Pid; // eax
  BOOL v25; // [rsp+60h] [rbp-A0h]
  struct _HAM_ACTIVITY *v26; // [rsp+68h] [rbp-98h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v27; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v28; // [rsp+78h] [rbp-88h]
  union _RM_SID *v29; // [rsp+80h] [rbp-80h]
  unsigned __int64 v30; // [rsp+88h] [rbp-78h] BYREF
  __int64 *v31; // [rsp+90h] [rbp-70h]
  _OWORD v32[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v33; // [rsp+E0h] [rbp-20h]
  _BYTE v34[144]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v35[400]; // [rsp+180h] [rbp+80h] BYREF
  unsigned __int16 v36[232]; // [rsp+310h] [rbp+210h] BYREF
  unsigned __int16 v37[64]; // [rsp+4E0h] [rbp+3E0h] BYREF

  v5 = a2;
  v31 = a4;
  memset_0(v35, 0, 0x188uLL);
  v30 = 0LL;
  memset_0(v36, 0, sizeof(v36));
  memset_0(v32, 0, 0x44uLL);
  memset_0(v34, 0, 0x88uLL);
  HampSrvTraceActivityCreateStart();
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v34);
  v26 = 0LL;
  v7 = -1LL;
  v27 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v29 = 0LL;
  v28 = -1LL;
  JobType = 0;
  v25 = dword_1800E12B0 != 0;
  HampExtendedExecutionFormatDescription((unsigned int)v5, a3, v37);
  if ( (unsigned int)v5 <= 4 )
    v11 = (const unsigned __int16 *)(&EeResourcePolicyNames)[v5];
  else
    v11 = L"BAD_INPUT";
  HampActivityPropertiesInitialize(v37, v11, (struct _HAM_ACTIVITY_PROPERTIES *)v35);
  if ( (unsigned int)v5 > 4 )
  {
    v13 = -1073741584;
LABEL_19:
    if ( v8 )
      CemRcObjectDereference(v8);
    goto LABEL_21;
  }
  v12 = HampHostFindByClient(a1, 0, &v27, &v30);
  v9 = v27;
  v13 = v12;
  if ( v12 < 0 )
  {
LABEL_21:
    v14 = v25;
    goto LABEL_22;
  }
  v14 = v25;
  if ( *((_BYTE *)v27 + 592) )
  {
    v13 = -1073741811;
  }
  else
  {
    if ( v25 )
    {
      v15 = v27 - (struct _RM_HAM_ACTIVITY_HOST *)v36;
      v16 = v36;
      v17 = 232LL;
      do
      {
        if ( v17 == -2147483414 )
          break;
        v18 = *(unsigned __int16 *)((char *)v16 + v15 + 24);
        if ( !v18 )
          break;
        *v16++ = v18;
        --v17;
      }
      while ( v17 );
      v19 = v16 - 1;
      if ( v17 )
        v19 = v16;
      *v19 = 0;
      v20 = *(_OWORD *)((char *)v9 + 488);
      v28 = *((_QWORD *)v9 - 3);
      v32[0] = v20;
      v32[1] = *(_OWORD *)((char *)v9 + 504);
      v32[2] = *(_OWORD *)((char *)v9 + 520);
      v32[3] = *(_OWORD *)((char *)v9 + 536);
      v33 = *((_DWORD *)v9 + 138);
      v29 = (union _RM_SID *)v32;
    }
    JobType = RmHamHostGetJobType(v9);
    if ( JobType == 2 )
    {
      v13 = HampExtendedExecutionCheckPolicy(v35, *(_QWORD *)(a1 + 184), v21, (unsigned int)v5);
      if ( v13 < 0 )
        goto LABEL_22;
      v22 = HampActCreate(
              (struct _HAM_CLIENT_CONTEXT *)a1,
              (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL)
                                              - 48LL * *(unsigned __int8 *)(a1 + 164)
                                              - 16),
              v9,
              (struct _HAM_ACTIVITY_PROPERTIES *)v35,
              0,
              0LL,
              &v26);
      v8 = v26;
      v13 = v22;
      if ( v22 >= 0 )
      {
        v13 = 0;
        v7 = *((_QWORD *)v26 + 5);
        *v31 = v7;
      }
      goto LABEL_19;
    }
    v13 = -1073741790;
  }
LABEL_22:
  if ( v9 )
    RmHamHostDereference(v9);
  if ( v14 )
  {
    Pid = HampClientGetPid((struct _HAM_CLIENT_CONTEXT *)a1);
    HampSrvTraceActivityCreateStop(
      v13,
      v7,
      (struct _HAM_CLIENT_CONTEXT *)a1,
      v36,
      JobType,
      v29,
      v28,
      (struct _HAM_ACTIVITY_PROPERTIES *)v35,
      Pid,
      0,
      0);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v13;
}
