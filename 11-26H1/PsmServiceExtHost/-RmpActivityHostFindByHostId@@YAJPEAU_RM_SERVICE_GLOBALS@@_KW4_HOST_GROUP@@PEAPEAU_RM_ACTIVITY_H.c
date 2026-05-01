/*
 * XREFs of ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KW4_HOST_GROUP@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002F890
 * Callers:
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002F224 (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18002F650 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KW4_HOST_GROUP@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18007F868 (-RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPL.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

__int64 __fastcall RmpActivityHostFindByHostId(__int64 a1, __int64 a2, char a3, char **a4)
{
  char *v8; // rdi
  __int64 v9; // r11
  __int64 v10; // r10
  int v11; // ebx
  __int64 v12; // r9
  int v13; // r8d

  v8 = 0LL;
  RtlAcquireSRWLockShared(a1 + 32);
  v9 = -1LL << (*(_DWORD *)(a1 + 20) & 0x1F);
  v10 = 0LL;
  v11 = -1073741275;
  v12 = v9 & (HIBYTE(a2)
            + 37
            * (BYTE6(a2)
             + 37
             * (BYTE5(a2)
              + 37
              * (BYTE4(a2)
               + 37 * (BYTE3(a2) + 37 * (BYTE2(a2) + 37 * (BYTE1(a2) + 37 * ((unsigned __int8)a2 + 11623883LL))))))));
LABEL_2:
  if ( v10 )
    goto LABEL_5;
  v13 = *(_DWORD *)(a1 + 20) >> 5;
  if ( v13 )
  {
    v10 = *(_QWORD *)(a1 + 24)
        + 8LL
        * ((v13 - 1) & (HIBYTE(v12)
                      - 877075889
                      + 442596621 * (unsigned __int8)v12
                      + 37
                      * (BYTE6(v12)
                       + 37
                       * (BYTE5(v12)
                        + 37 * (BYTE4(v12) + 37 * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * (unsigned int)BYTE1(v12))))))));
LABEL_5:
    while ( 1 )
    {
      v10 = *(_QWORD *)v10;
      if ( (v10 & 1) != 0 )
        break;
      if ( v12 == (v9 & *(_QWORD *)(v10 + 8)) )
      {
        if ( !v10 )
          break;
        if ( a2 == *(_QWORD *)(v10 + 32) )
        {
          v11 = 0;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v10 + 16)) <= 1 )
            __fastfail(0xEu);
          v8 = (char *)v10;
          break;
        }
        goto LABEL_2;
      }
    }
  }
  RtlReleaseSRWLockShared(a1 + 32);
  if ( v11 >= 0 )
  {
    if ( v8[648] == a3 || a3 == 2 )
    {
      *a4 = v8;
      return 0;
    }
    else
    {
      v11 = -1073741776;
      if ( v8 )
        RmpObjectRelease(v8);
    }
  }
  return (unsigned int)v11;
}
