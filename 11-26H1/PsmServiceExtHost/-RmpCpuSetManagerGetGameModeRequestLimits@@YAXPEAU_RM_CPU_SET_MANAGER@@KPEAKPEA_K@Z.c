/*
 * XREFs of ?RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@KPEAKPEA_K@Z @ 0x18006A860
 * Callers:
 *     ?RmSrvGameModeGetLargestValidResourceRequest@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x18008260C (-RmSrvGameModeGetLargestValidResourceRequest@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESO.c)
 *     ?RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180087678 (-RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUE.c)
 * Callees:
 *     ?RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18006EB6C (-RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 */

void __fastcall RmpCpuSetManagerGetGameModeRequestLimits(
        struct _RM_CPU_SET_MANAGER *a1,
        char a2,
        unsigned int *a3,
        unsigned __int64 *a4)
{
  __int64 v4; // r11
  struct _RM_CPU_SET_MANAGER *v5; // r10
  int v6; // ecx
  char v10; // bl
  unsigned int v11; // ecx
  int v12; // edx
  unsigned int SystemReserveTarget; // eax
  unsigned int v14; // r8d
  unsigned __int64 v15; // r9

  v4 = 0LL;
  v5 = a1;
  v6 = *((_DWORD *)a1 + 348);
  v10 = 0;
  if ( v6 == -1 )
  {
    v12 = -1;
  }
  else
  {
    v11 = v6 - 256;
    v10 = v11;
    v4 = HIWORD(v11);
    *((_QWORD *)v5 + v4 + 11) |= 1LL << v11;
    ++*((_DWORD *)v5 + 349);
    v12 = *((_DWORD *)v5 + 348);
  }
  if ( (a2 & 1) != 0 )
  {
    v14 = *((_DWORD *)v5 + 349) - *((_DWORD *)v5 + 351);
  }
  else
  {
    SystemReserveTarget = RmpCpuSetManagerGetSystemReserveTarget(v5);
    v14 = *((_DWORD *)v5 + 349) - SystemReserveTarget;
  }
  v15 = *((_QWORD *)v5 + 11);
  if ( v14 >= 0x40 )
    v14 = 64;
  if ( v12 != -1 )
  {
    *((_QWORD *)v5 + v4 + 11) &= ~(1LL << v10);
    --*((_DWORD *)v5 + 349);
  }
  *a3 = v14;
  *a4 = v15;
}
