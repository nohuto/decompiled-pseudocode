/*
 * XREFs of ?RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180087678
 * Callers:
 *     ?RmSrvGameModeRegisterPairedAuxiliaryProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1K@Z @ 0x1800828F0 (-RmSrvGameModeRegisterPairedAuxiliaryProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_.c)
 *     ?RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@K@Z @ 0x180082B78 (-RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 * Callees:
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@KPEAKPEA_K@Z @ 0x18006A860 (-RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@KPEAKPEA_K@Z.c)
 */

bool __fastcall RmpGameModeIsResourceRequestValid(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a2,
        __int64 a3)
{
  int v5; // eax
  unsigned int v7; // eax
  unsigned int v8; // esi
  int v9; // ebx
  __int64 v10; // rbp
  unsigned int v11; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  if ( *(_DWORD *)a2 != 6 )
    return 0;
  v5 = *((_DWORD *)a2 + 8) & 1;
  if ( (*((_BYTE *)a2 + 32) & 4) != 0 )
  {
    if ( !v5 )
      return 0;
  }
  else if ( v5
         && (*((_DWORD *)a2 + 1)
          || *((_QWORD *)a2 + 1)
          || *((_DWORD *)a2 + 4) != 10
          || *((_DWORD *)a2 + 5) != 50
          || *((_DWORD *)a2 + 6) != 30
          || (*((_BYTE *)a2 + 32) & 8) != 0) )
  {
    return 0;
  }
  v7 = RtlNumberOfSetBitsUlongPtr(*((_QWORD *)a2 + 1), a2, a3);
  v8 = *((_DWORD *)a2 + 1);
  if ( v8 < v7 )
    return 0;
  if ( v8 > 0x40 )
    return 0;
  v9 = *((_DWORD *)a2 + 7);
  v10 = *((_QWORD *)a2 + 1);
  v11 = 0;
  v12 = 0LL;
  RmpAcquireGlobalLock();
  RmpCpuSetManagerGetGameModeRequestLimits(
    (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 792),
    (v9 & 0x40) != 0,
    &v11,
    &v12);
  RmpReleaseGlobalLock();
  if ( v8 > v11
    || (~v12 & v10) != 0
    || *((_BYTE *)a2 + 36) && *((_BYTE *)a2 + 36) != 2 && *((_BYTE *)a2 + 36) != 3 && *((_BYTE *)a2 + 36) != 6 )
  {
    return 0;
  }
  return (unsigned int)(*((_DWORD *)a2 + 4) - 2) <= 8
      && (unsigned int)(*((_DWORD *)a2 + 5) + *((_DWORD *)a2 + 6)) <= 0x64
      && (*((_BYTE *)a2 + 28) & 0x18) != 0x18;
}
