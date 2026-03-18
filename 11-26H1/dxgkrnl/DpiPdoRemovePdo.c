/*
 * XREFs of DpiPdoRemovePdo @ 0x140444378
 * Callers:
 *     DpiPdoRemovePdoObjects @ 0x140256E10 (DpiPdoRemovePdoObjects.c)
 *     DpiPdoAddPdo @ 0x140442608 (DpiPdoAddPdo.c)
 *     DpiPdoHandleChildConnectionChange @ 0x140443F48 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline @ 0x14008592C (Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline.c)
 *     DpiFdoRemovePdoFromPdoList @ 0x140245E78 (DpiFdoRemovePdoFromPdoList.c)
 *     ?DmmResetOrginalVideoOutputTechnologies@@YAJQEAXI@Z @ 0x14025BDCC (-DmmResetOrginalVideoOutputTechnologies@@YAJQEAXI@Z.c)
 *     ?MonitorRemovePhysicalMonitor@@YAJPEAXIEPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042C640 (-MonitorRemovePhysicalMonitor@@YAJPEAXIEPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall DpiPdoRemovePdo(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned __int8 *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v5; // rbp
  unsigned int v6; // esi
  __int64 *v9; // r10
  __int64 *v10; // rdi
  __int64 *v11; // rcx
  int v12; // r8d
  __int64 v13; // rdx
  int v15; // eax
  __int64 v16; // rcx
  __int64 *v17; // rax
  void *v18; // rcx
  bool v19; // zf
  NTSTATUS v20; // eax
  __int64 v21; // rbp
  __int64 **v22; // rax

  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0;
  v9 = *(__int64 **)(v5 + 3784);
  v10 = v9;
  v11 = (__int64 *)*v9;
  if ( (__int64 *)*v9 == v9 )
  {
LABEL_5:
    v6 = -1073741811;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 6656;
    return v6;
  }
  v12 = *(_DWORD *)(a2 + 24);
  while ( 1 )
  {
    v13 = *((unsigned int *)v10 + 126);
    if ( (_DWORD)v13 == v12 )
      break;
    v10 = v11;
    v11 = (__int64 *)*v11;
    if ( v11 == v9 )
      goto LABEL_5;
  }
  if ( !a3 || *((_DWORD *)v10 + 124) != 1 || *((_BYTE *)v10 + 511) )
  {
LABEL_16:
    if ( (unsigned int)Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline() )
    {
      DpiFdoRemovePdoFromPdoList(v5, v10);
    }
    else
    {
      v16 = *v10;
      if ( *(__int64 **)(*v10 + 8) != v10 )
        goto LABEL_30;
      v17 = (__int64 *)v10[1];
      if ( (__int64 *)*v17 != v10 )
        goto LABEL_30;
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      --*(_DWORD *)(v5 + 3800);
      if ( *((_DWORD *)v10 + 124) == 1 )
        --*(_DWORD *)(v5 + 3804);
    }
    *((_BYTE *)v10 + 508) = 0;
    KeWaitForSingleObject((PVOID)(v5 + 3544), Executive, 0, 0, 0LL);
    *(_QWORD *)(a2 + 48) = 0LL;
    KeReleaseMutex((PRKMUTEX)(v5 + 3544), 0);
    v18 = (void *)v10[116];
    if ( v18 )
    {
      ExFreePoolWithTag(v18, 0);
      v10[116] = 0LL;
    }
    WdLogSingleEntry1(4LL);
    v19 = *((_BYTE *)v10 + 509) == 0;
    WdLogGlobalForLineNumber = 6749;
    if ( v19 )
    {
      v20 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)v10 + 2, (PVOID)a2, File, 1u, 0x20u);
      v6 = v20;
      if ( v20 >= 0 )
      {
        IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)v10 + 2, (PVOID)a2, 0x20u);
        IoQueueWorkItem((PIO_WORKITEM)v10[119], (PIO_WORKITEM_ROUTINE)DpiPdoDestroyPdo, DelayedWorkQueue, 0LL);
      }
      else
      {
        WdLogSingleEntry3(0LL, 275LL, 21LL, v20);
        WdLogGlobalForLineNumber = 6765;
      }
      return v6;
    }
    v21 = v5 + 3808;
    v22 = *(__int64 ***)(v21 + 8);
    if ( *v22 == (__int64 *)v21 )
    {
      *v10 = v21;
      v10[1] = (__int64)v22;
      *v22 = v10;
      *(_QWORD *)(v21 + 8) = v10;
      return v6;
    }
LABEL_30:
    __fastfail(3u);
  }
  v15 = MonitorRemovePhysicalMonitor(*(char **)(v5 + 4032), v13, 0, a4, a5);
  if ( v15 != 128 )
  {
    if ( v15 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 6690;
    }
    v6 = DmmResetOrginalVideoOutputTechnologies(*(DXGADAPTER **)(v5 + 4032), *((_DWORD *)v10 + 126));
    if ( (v6 & 0x80000000) != 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 6700;
    }
    goto LABEL_16;
  }
  return 128LL;
}
