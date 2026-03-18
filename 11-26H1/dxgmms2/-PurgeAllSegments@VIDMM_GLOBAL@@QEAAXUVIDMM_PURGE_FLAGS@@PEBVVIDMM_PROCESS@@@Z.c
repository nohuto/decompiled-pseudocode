/*
 * XREFs of ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@@Z @ 0x1400E46C4
 * Callers:
 *     VidMmPurgeAllSegments @ 0x140042CA0 (VidMmPurgeAllSegments.c)
 * Callees:
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAUVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1400E49FC (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAUVIDMM_PAGIN.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1400F19EC (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 *     ?AddData@VIDMM_PURGE_TELEMETRY@@QEAAX_K0@Z @ 0x1401236F4 (-AddData@VIDMM_PURGE_TELEMETRY@@QEAAX_K0@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::PurgeAllSegments(__int64 a1, unsigned int a2, __int64 a3)
{
  char v6; // r14
  int v7; // edi
  __int64 v8; // rax
  int v9; // eax
  unsigned __int64 v10; // rax
  int v11; // ebx
  ULONG TimeIncrement; // eax
  _QWORD v13[12]; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 v14[2]; // [rsp+90h] [rbp+7h] BYREF

  if ( *(_DWORD *)(a1 + 40088) )
  {
    v6 = 0;
    v7 = 0;
    if ( (a2 & 0x26) != 0 )
    {
      v7 = MEMORY[0xFFFFF78000000320];
      v6 = 1;
    }
    *(_OWORD *)v14 = 0LL;
    memset(v13, 0, 0x58uLL);
    v13[0] = -4294967194LL;
    v13[7] = v14;
    v8 = *(_QWORD *)(a1 + 40520);
    LODWORD(v13[5]) = a2;
    v13[6] = a3;
    v9 = VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
           (VIDMM_GLOBAL *)a1,
           (struct _VIDMM_SYSTEM_COMMAND *)v13,
           **(struct VIDMM_PAGING_QUEUE ***)(v8 + 72),
           *(struct _VIDSCH_SYNC_OBJECT **)(32LL * ((*(_DWORD *)(**(_QWORD **)(v8 + 72) + 112LL) >> 5) & 0x1F)
                                          + *(_QWORD *)(v8 + 72)
                                          + 8),
           1);
    if ( v9 < 0 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 23LL, v9, a1, 0LL);
      WdLogGlobalForLineNumber = 213;
      JUMPOUT(0x1400E4859LL);
    }
    if ( v6 )
    {
      v10 = v14[0];
      if ( v14[0] )
      {
        v11 = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        VIDMM_PURGE_TELEMETRY::AddData((VIDMM_PURGE_TELEMETRY *)(a1 + 41392), v14[0], (v11 - v7) * TimeIncrement);
        v10 = v14[0];
      }
      *(_QWORD *)(a1 + 45440) = v10;
    }
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(0);
  }
  else
  {
    WdLogSingleEntry3(3LL, a1, a2, a3);
    WdLogGlobalForLineNumber = 9284;
  }
}
