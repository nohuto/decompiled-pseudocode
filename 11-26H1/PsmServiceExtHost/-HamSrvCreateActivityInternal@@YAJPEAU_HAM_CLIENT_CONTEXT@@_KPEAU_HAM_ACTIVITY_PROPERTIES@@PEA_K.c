/*
 * XREFs of ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180046760
 * Callers:
 *     ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180039C10 (-HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029658 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@K_KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x18002A6FC (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HampSrvTraceActivityCreateStart@@YAXXZ @ 0x180039830 (-HampSrvTraceActivityCreateStart@@YAXXZ.c)
 *     ?HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTIVITY_PROPERTIES@@KKE@Z @ 0x180039924 (-HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTI.c)
 *     ?RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800426C0 (-RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HamSrvCreateActivityInternal(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        struct _HAM_ACTIVITY_PROPERTIES *a3,
        unsigned __int64 *a4)
{
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  int v10; // r8d
  const unsigned __int16 *v11; // rbp
  unsigned int JobType; // r14d
  union _RM_SID *v13; // r15
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v15; // rbx
  unsigned int v16; // edi
  char *v17; // rax
  int v18; // eax
  struct _HAM_ACTIVITY *v19; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v21; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int64 v22; // [rsp+B8h] [rbp+10h]
  struct _HAM_ACTIVITY *v23; // [rsp+C0h] [rbp+18h] BYREF
  unsigned __int64 *v24; // [rsp+C8h] [rbp+20h]

  v24 = a4;
  v22 = a2;
  HampSrvTraceActivityCreateStart();
  v7 = *((unsigned __int8 *)a1 + 164);
  v8 = -1LL;
  v9 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  v10 = *(_DWORD *)a3 >> 25;
  v11 = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  JobType = 0;
  v13 = 0LL;
  Host = RmHamFindHost(v9 - 48 * v7 - 16, a2, v10 & 1, &v21);
  v15 = v21;
  v16 = Host;
  if ( Host >= 0 )
  {
    v11 = (const unsigned __int16 *)((char *)v21 + 24);
    if ( v21 )
      v17 = (char *)v21 - 56;
    else
      v17 = 0LL;
    v13 = (union _RM_SID *)(v17 + 544);
    JobType = RmHamHostGetJobType(v21);
    v18 = HampActCreate(
            a1,
            (struct _HOST_ACTIVITY_MANAGER *)((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL)
                                            - 48LL * *((unsigned __int8 *)a1 + 164)
                                            - 16),
            v15,
            a3,
            0,
            0LL,
            &v23);
    v19 = v23;
    v16 = v18;
    if ( v18 >= 0 )
    {
      v16 = 0;
      v8 = *((_QWORD *)v23 + 5);
      *v24 = v8;
    }
    if ( v19 )
      CemRcObjectDereference(v19);
  }
  HampSrvTraceActivityCreateStop(v16, v8, 0LL, v11, JobType, v13, v22, a3, 0, 0, 0);
  if ( v15 )
    RmHamHostDereference(v15);
  return v16;
}
