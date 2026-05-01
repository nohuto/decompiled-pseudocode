/*
 * XREFs of ?RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180028E2C
 * Callers:
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000D5C8 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18001A85C (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 * Callees:
 *     ??R?$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z @ 0x180028630 (--R-$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z.c)
 *     memcmp_0 @ 0x1800A28B6 (memcmp_0.c)
 */

__int64 __fastcall RmpActivityHostFindByPsmId(
        struct _RM_SERVICE_GLOBALS *a1,
        const wchar_t *a2,
        struct _RM_ACTIVITY_HOST **a3)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // r13
  unsigned int v8; // ebp
  __int64 v9; // r9
  int v10; // r8d
  __int64 v12; // rdi

  v6 = 0LL;
  v7 = utl::hash<_RM_PSM_HOST_INFO>::operator()((__int64)a1, (unsigned __int64)a2);
  v8 = -1073741275;
  RtlAcquireSRWLockShared((char *)a1 + 32);
LABEL_2:
  v9 = v7 & (-1LL << (*((_BYTE *)a1 + 3356) & 0x1F));
  if ( v6 )
    goto LABEL_5;
  v10 = *((_DWORD *)a1 + 839) >> 5;
  if ( v10 )
  {
    v6 = *((_QWORD *)a1 + 420)
       + 8LL
       * ((v10 - 1) & (HIBYTE(v9)
                     - 877075889
                     + 442596621 * (unsigned __int8)v9
                     + 37
                     * (BYTE6(v9)
                      + 37
                      * (BYTE5(v9)
                       + 37 * (BYTE4(v9) + 37 * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (unsigned int)BYTE1(v9))))))));
LABEL_5:
    while ( 1 )
    {
      v6 = *(_QWORD *)v6;
      if ( (v6 & 1) != 0 )
        break;
      if ( v9 == ((-1LL << (*((_BYTE *)a1 + 3356) & 0x1F)) & *(_QWORD *)(v6 + 8)) )
      {
        if ( !v6 )
          break;
        v12 = v6 - 1392;
        if ( !_wcsicmp(a2, (const wchar_t *)(v6 - 1392 + 80)) && !memcmp_0(a2 + 232, (const void *)(v12 + 544), 0x58uLL) )
        {
          v8 = 0;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 16)) <= 1 )
            __fastfail(0xEu);
          *a3 = (struct _RM_ACTIVITY_HOST *)v12;
          break;
        }
        goto LABEL_2;
      }
    }
  }
  RtlReleaseSRWLockShared((char *)a1 + 32);
  return v8;
}
