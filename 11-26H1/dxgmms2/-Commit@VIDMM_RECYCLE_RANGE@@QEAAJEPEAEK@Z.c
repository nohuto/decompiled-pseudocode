/*
 * XREFs of ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAEK@Z @ 0x1400AD068
 * Callers:
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAEK@Z @ 0x1400ACF54 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAEK@Z.c)
 * Callees:
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x14001970C (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKKK@Z @ 0x1400A4AD8 (-VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKKK@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1400F439C (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F658C (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?UpdateUnlockAgingOnTransition@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x14010FA88 (-UpdateUnlockAgingOnTransition@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_RANGE::Commit(
        VIDMM_RECYCLE_RANGE *this,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned int a4)
{
  __int64 v4; // rdx
  VIDMM_RECYCLE_HEAP_MGR *v8; // rcx
  __int64 v9; // rdx
  void *v10; // r8
  int v11; // edx
  int v12; // r9d
  int v13; // eax
  __int64 v14; // r8
  unsigned int v15; // esi
  __int64 v16; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  void *v24; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 v25; // [rsp+70h] [rbp+8h] BYREF

  v4 = *((int *)this + 16);
  if ( !(_DWORD)v4 )
  {
    v10 = (void *)*((_QWORD *)this + 4);
    v25 = *((_QWORD *)this + 5) - (_QWORD)v10;
    v11 = **(_DWORD **)(*((_QWORD *)this + 9) + 32LL);
    if ( v11 != 9 && v11 != 10 )
    {
      if ( (unsigned int)(v11 - 3) > 3 )
      {
        if ( v11 == 2 || (v12 = 1028, v11 == 8) )
          v12 = 4;
        v24 = v10;
        v13 = VidMmAllocateVirtualMemory(&v24, &v25, 0x1000u, v12, a4);
        v15 = v13;
        if ( v13 < 0 )
        {
          _InterlockedIncrement(&dword_14008A7E8);
          WdLogSingleEntry1(6LL, v13);
          WdLogGlobalForLineNumber = 1226;
          DxgkLogInternalTriageEvent(v16, 262145LL);
          return v15;
        }
        if ( dword_14008A520 && *((_DWORD *)this + 20) && g_IsInternalRelease )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
          WdLogGlobalForLineNumber = 213;
        }
        if ( (byte_14008A201 & 0x10) != 0 )
        {
          v18 = *((_QWORD *)this + 9);
          v19 = *(_QWORD *)(v18 + 32);
          if ( *(_DWORD *)v19 == 3 || (unsigned int)(*(_DWORD *)v19 - 4) <= 2 )
            v20 = *(_QWORD *)(v18 + 56);
          else
            v20 = *((_QWORD *)this + 4);
          McTemplateK0qxxx_EtwWriteTransfer(
            v20,
            &EventCreateProcessAllocationDetails,
            v14,
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) + 8LL) + 24LL),
            (char)this,
            v25,
            v20);
        }
        goto LABEL_32;
      }
      if ( !dword_14008A520 || *((_DWORD *)this + 20) || !g_IsInternalRelease )
      {
LABEL_32:
        v9 = 1LL;
        goto LABEL_33;
      }
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 213;
    }
    if ( dword_14008A520 && !*((_DWORD *)this + 20) && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 213;
      goto LABEL_46;
    }
    goto LABEL_32;
  }
  v8 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(v4 - 4);
  if ( (_DWORD)v4 == 4 )
    goto LABEL_9;
  if ( (_DWORD)v4 != 5 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 0LL, v4, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v8, this);
  if ( !dword_14008A520 || *((_DWORD *)this + 20) || !g_IsInternalRelease )
    goto LABEL_32;
  g_DxgMmsBugcheckExportIndex = 1;
  WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
  WdLogGlobalForLineNumber = 213;
LABEL_9:
  VIDMM_RECYCLE_HEAP_MGR::UpdateUnlockAgingOnTransition(
    *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
    this);
  if ( dword_14008A520 && *((_DWORD *)this + 20) <= 1u )
  {
    if ( g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 213;
    }
  }
  v9 = 3LL;
LABEL_33:
  VIDMM_RECYCLE_RANGE::Transition(this, v9);
  v21 = *((_DWORD *)this + 20);
  if ( !v21 )
  {
    *((_DWORD *)this + 20) = 1;
    goto LABEL_49;
  }
  v22 = v21 - 1;
  if ( !v22 )
  {
LABEL_49:
    *((_BYTE *)this + 84) = 0;
    return 0LL;
  }
  v23 = v22 - 1;
  if ( !v23 )
  {
LABEL_46:
    *((_DWORD *)this + 20) = 3;
LABEL_47:
    *((_BYTE *)this + 84) = *a3;
    return 0LL;
  }
  if ( v23 == 1 )
    goto LABEL_47;
  return 0LL;
}
