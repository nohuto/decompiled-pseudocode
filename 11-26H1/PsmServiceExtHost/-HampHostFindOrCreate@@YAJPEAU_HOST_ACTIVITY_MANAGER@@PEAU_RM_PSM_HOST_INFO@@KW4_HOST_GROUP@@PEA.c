/*
 * XREFs of ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029A48
 * Callers:
 *     PsmHamRegisterProcess @ 0x18000F2D0 (PsmHamRegisterProcess.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180038EE0 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x180065F5C (-HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002933C (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029E80 (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APPLICATION@@@Z @ 0x180037690 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APP.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HampAppInfoInitialize@@YAXPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x180056D80 (-HampAppInfoInitialize@@YAXPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18006E6D4 (-HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@.c)
 *     ?RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KW4_HOST_GROUP@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18007F868 (-RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPL.c)
 *     memcmp_0 @ 0x1800A28B6 (memcmp_0.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampHostFindOrCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        struct _RM_HAM_ACTIVITY_HOST **a5)
{
  struct _RM_HAM_ACTIVITY_HOST *v8; // rsi
  __int64 v9; // r13
  struct _RM_HAM_ACTIVITY_HOST *v10; // r14
  __int64 v11; // rdi
  __int64 v12; // r8
  int v13; // ebx
  unsigned int v14; // r11d
  __int64 v15; // r10
  __int64 v16; // r9
  char *v17; // r13
  struct _RM_HAM_ACTIVITY_HOST *v18; // rcx
  const wchar_t *v19; // rbx
  unsigned int v21; // ebx
  ULONG v22; // eax
  int v23; // eax
  struct _HAM_APPLICATION *v24; // rdi
  __int64 v25; // rdx
  char *v26; // r14
  int v27; // [rsp+20h] [rbp-E0h]
  __int64 v28; // [rsp+30h] [rbp-D0h]
  struct _HAM_APPLICATION *v31; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  char *v33; // [rsp+58h] [rbp-A8h]
  struct _RM_HAM_ACTIVITY_HOST **v34; // [rsp+60h] [rbp-A0h]
  _BYTE v35[544]; // [rsp+70h] [rbp-90h] BYREF

  v34 = a5;
  v8 = 0LL;
  memset_0(v35, 0, 0x218uLL);
  v9 = *(_QWORD *)(a2 + 544);
  P = 0LL;
  v31 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v33 = (char *)a1 - 2360;
  RtlAcquireSRWLockShared((char *)a1 - 2328);
  v12 = 0LL;
  v13 = -1073741275;
  v14 = *((_DWORD *)a1 - 585);
  v15 = -1LL << (v14 & 0x1F);
  v16 = v15 & (HIBYTE(v9)
             + 37
             * (BYTE6(v9)
              + 37
              * (BYTE5(v9)
               + 37
               * (BYTE4(v9)
                + 37 * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883LL))))))));
  v28 = v16;
LABEL_2:
  if ( v12 )
    goto LABEL_5;
  if ( v14 >> 5 )
  {
    v12 = *((_QWORD *)a1 - 292)
        + 8LL
        * (((v14 >> 5) - 1) & (HIBYTE(v16)
                             - 877075889
                             + 442596621 * (unsigned __int8)v16
                             + 37
                             * (BYTE6(v16)
                              + 37
                              * (BYTE5(v16) + 37
                                            * (BYTE4(v16) + 37 * (BYTE3(v16) + 37 * (BYTE2(v16) + 37 * BYTE1(v16))))))));
LABEL_5:
    while ( 1 )
    {
      v12 = *(_QWORD *)v12;
      if ( (v12 & 1) != 0 )
        break;
      if ( v16 == (v15 & *(_QWORD *)(v12 + 8)) )
      {
        if ( !v12 )
          break;
        if ( v9 == *(_QWORD *)(v12 + 32) )
        {
          v13 = 0;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 16)) <= 1 )
            __fastfail(0xEu);
          v11 = v12;
          break;
        }
        goto LABEL_2;
      }
    }
  }
  v17 = v33;
  RtlReleaseSRWLockShared(v33 + 32);
  if ( v13 < 0 )
    goto LABEL_23;
  if ( *(_BYTE *)(v11 + 648) == a4 || a4 == 2 )
  {
    RmpAcquireGlobalLock();
    if ( (unsigned int)RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)(v11 + 56)) )
    {
      v10 = v18;
      v13 = 0;
    }
    else
    {
      v13 = -1073741275;
    }
    RmpReleaseGlobalLock();
    if ( v11 )
      RmpObjectRelease((char *)v11);
  }
  else
  {
    v13 = -1073741776;
    if ( v11 )
    {
      RmpObjectRelease((char *)v11);
      return (unsigned int)v13;
    }
  }
  if ( v13 < 0 )
  {
LABEL_23:
    if ( v10 )
      RmHamHostDereference(v10);
    if ( v13 == -1073741275 )
    {
      v21 = *(_DWORD *)(a2 + 532);
      v22 = RtlLengthSid((PSID)(a2 + 464));
      HampAppInfoInitialize(
        (const unsigned __int16 *)a2,
        (unsigned __int8 *)(a2 + 464),
        v22,
        v21,
        (struct _HAM_APPLICATION_INFO *)v35);
      v23 = HampAppFindOrCreate(a1, (struct _HAM_APPLICATION_INFO *)v35, (a3 >> 2) & 1, &v31);
      v24 = v31;
      v13 = v23;
      if ( v23 >= 0 )
      {
        RmpAcquireGlobalLock();
        LOBYTE(v27) = a4;
        v13 = RmHamFindOrCreateActivityHost(v17, a2, v24, a3, v27, &P, v28);
        RmpReleaseGlobalLock();
        v26 = (char *)P;
        if ( v13 >= 0 )
        {
          v8 = (struct _RM_HAM_ACTIVITY_HOST *)((char *)P + 56);
          v13 = 0;
        }
        else if ( v13 == -1058275322 )
        {
          if ( *(_DWORD *)(a2 + 536) == 4 )
            v13 = -1058275325;
          else
            HampAppQueueTerminate(v24, v25, 4864LL);
        }
        if ( v26 )
          RmpObjectRelease(v26);
      }
      if ( v24 )
        CemRcObjectDereference(v24);
    }
    if ( v13 < 0 )
      goto LABEL_34;
    goto LABEL_27;
  }
  v19 = (const wchar_t *)80;
  if ( v10 )
    v19 = (const wchar_t *)((char *)v10 + 24);
  if ( _wcsicmp((const wchar_t *)a2, v19) || memcmp_0((const void *)(a2 + 464), v19 + 232, 0x58uLL) )
  {
    v13 = -1073741584;
    goto LABEL_23;
  }
  v8 = v10;
LABEL_27:
  v13 = HampHostCheckCompletePackageInsertion(v8);
  if ( v13 >= 0 )
  {
    *v34 = v8;
    return (unsigned int)v13;
  }
LABEL_34:
  if ( v8 )
    RmHamHostDereference(v8);
  return (unsigned int)v13;
}
