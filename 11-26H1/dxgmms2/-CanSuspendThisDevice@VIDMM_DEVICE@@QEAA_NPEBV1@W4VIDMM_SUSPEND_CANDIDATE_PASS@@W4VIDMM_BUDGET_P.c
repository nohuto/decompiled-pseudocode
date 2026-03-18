/*
 * XREFs of ?CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEBV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x140100F78
 * Callers:
 *     VidMmDemoteAllocationsToFitGlobalAlloc @ 0x140100748 (VidMmDemoteAllocationsToFitGlobalAlloc.c)
 *     ?GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEBV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAPEAV2@@Z @ 0x14012540C (-GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEBV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W.c)
 * Callees:
 *     ?IsForegroundProcess@DXGPROCESS@@QEBA_NXZ @ 0x14004ACA0 (-IsForegroundProcess@DXGPROCESS@@QEBA_NXZ.c)
 */

bool __fastcall VIDMM_DEVICE::CanSuspendThisDevice(_QWORD *a1, _QWORD *a2, int a3, unsigned __int8 a4)
{
  __int64 v7; // r9
  char v8; // r8
  unsigned int i; // edx
  DXGPROCESS *v10; // rcx
  unsigned __int8 v11; // al
  __int64 v12; // rbx
  __int64 v13; // r11

  if ( a1 == a2 || !a1[3] || a1 == *(_QWORD **)(*a1 + 40520LL) || a3 != 2 && a2 && a1[1] == a2[1] )
    return 0;
  v7 = a1[2];
  v8 = 0;
  if ( v7 )
  {
    for ( i = 0; i < *(_DWORD *)(*a1 + 6952LL); ++i )
    {
      v12 = *(_QWORD *)(v7 + 8);
      v13 = 304LL * (unsigned __int16)i;
      if ( *(_QWORD *)(v13 + v12 + 208) > *(_QWORD *)(v13 + v12 + 32)
        || *(_QWORD *)(v13 + v12 + 216) > *(_QWORD *)(v13 + v12 + 40) )
      {
        v8 = 1;
        break;
      }
    }
    v10 = *(DXGPROCESS **)(*(_QWORD *)(v7 + 16) + 72LL);
    v11 = (*((_DWORD *)v10 + 102) & 4) != 0 ? 0 : 2 - DXGPROCESS::IsForegroundProcess(v10);
  }
  else
  {
    v11 = 2;
  }
  return v11 >= a4 && (a3 || v8);
}
