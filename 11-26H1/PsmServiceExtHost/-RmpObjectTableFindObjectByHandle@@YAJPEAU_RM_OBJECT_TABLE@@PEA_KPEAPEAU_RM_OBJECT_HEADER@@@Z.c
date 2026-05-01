/*
 * XREFs of ?RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x18002A52C
 * Callers:
 *     ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x18002A22C (-RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z.c)
 *     ?RmSrvCpuSetManagerReleaseProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z @ 0x180082360 (-RmSrvCpuSetManagerReleaseProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z.c)
 *     ?RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z @ 0x1800853A4 (-RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpObjectTableFindObjectByHandle(
        struct _RM_OBJECT_TABLE *a1,
        unsigned __int64 *a2,
        struct _RM_OBJECT_HEADER **a3)
{
  __int64 v6; // rbp
  __int64 v7; // r9
  __int64 v8; // r11
  unsigned int v9; // ebx
  __int64 v10; // r10
  int v11; // r8d

  RtlAcquireSRWLockShared((char *)a1 + 16);
  v6 = *a2;
  v7 = 0LL;
  v8 = -1LL << (*((_DWORD *)a1 + 1) & 0x1F);
  v9 = -1073741275;
  v10 = v8 & (HIBYTE(v6)
            + 37
            * (BYTE6(v6)
             + 37
             * (BYTE5(v6)
              + 37
              * (BYTE4(v6)
               + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883LL))))))));
LABEL_2:
  if ( v7 )
    goto LABEL_5;
  v11 = *((_DWORD *)a1 + 1) >> 5;
  if ( v11 )
  {
    v7 = *((_QWORD *)a1 + 1)
       + 8LL
       * ((v11 - 1) & (HIBYTE(v10)
                     - 877075889
                     + 442596621 * (unsigned __int8)v10
                     + 37
                     * (BYTE6(v10)
                      + 37
                      * (BYTE5(v10)
                       + 37 * (BYTE4(v10) + 37 * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (unsigned int)BYTE1(v10))))))));
LABEL_5:
    while ( 1 )
    {
      v7 = *(_QWORD *)v7;
      if ( (v7 & 1) != 0 )
        break;
      if ( v10 == (v8 & *(_QWORD *)(v7 + 8)) )
      {
        if ( !v7 )
          break;
        if ( v6 == *(_QWORD *)(v7 + 32) )
        {
          v9 = 0;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 16)) <= 1 )
            __fastfail(0xEu);
          *a3 = (struct _RM_OBJECT_HEADER *)v7;
          break;
        }
        goto LABEL_2;
      }
    }
  }
  RtlReleaseSRWLockShared((char *)a1 + 16);
  return v9;
}
