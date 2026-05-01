/*
 * XREFs of ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x18005B1D8
 * Callers:
 *     ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x180083094 (-RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@Ex.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmpResourceSetTableFindEmSetById(
        struct _RM_OBJECT_TABLE *a1,
        __int64 a2,
        struct ExecutionModel::ResourceSet **a3)
{
  __int64 v4; // rdi
  __int64 v7; // r11
  __int64 v8; // r9
  int v9; // esi
  __int64 v10; // r10
  int v11; // r8d
  int v12; // ebx
  struct ExecutionModel::ResourceSet *v13; // rcx

  v4 = 0LL;
  RtlAcquireSRWLockShared((char *)a1 + 16);
  v7 = -1LL << (*((_DWORD *)a1 + 1) & 0x1F);
  v8 = 0LL;
  v9 = -1073741275;
  v10 = v7 & (HIBYTE(a2)
            + 37
            * (BYTE6(a2)
             + 37
             * (BYTE5(a2)
              + 37
              * (BYTE4(a2)
               + 37 * (BYTE3(a2) + 37 * (BYTE2(a2) + 37 * (BYTE1(a2) + 37 * ((unsigned __int8)a2 + 11623883LL))))))));
LABEL_2:
  if ( v8 )
    goto LABEL_5;
  v11 = *((_DWORD *)a1 + 1) >> 5;
  if ( v11 )
  {
    v8 = *((_QWORD *)a1 + 1)
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
      v8 = *(_QWORD *)v8;
      if ( (v8 & 1) != 0 )
        break;
      if ( v10 == (v7 & *(_QWORD *)(v8 + 8)) )
      {
        if ( !v8 )
          break;
        if ( a2 == *(_QWORD *)(v8 + 32) )
        {
          v9 = 0;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v8 + 16)) <= 1 )
            __fastfail(0xEu);
          v4 = v8;
          break;
        }
        goto LABEL_2;
      }
    }
  }
  RtlReleaseSRWLockShared((char *)a1 + 16);
  v12 = 0;
  if ( v9 < 0 )
  {
    v12 = v9;
    v4 = 0LL;
  }
  if ( v12 >= 0 )
  {
    v13 = *(struct ExecutionModel::ResourceSet **)(v4 + 48);
    *a3 = v13;
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v13 + 8LL))(v13);
    v12 = 0;
  }
  if ( v4 )
    RmpObjectRelease((char *)v4);
  return (unsigned int)v12;
}
