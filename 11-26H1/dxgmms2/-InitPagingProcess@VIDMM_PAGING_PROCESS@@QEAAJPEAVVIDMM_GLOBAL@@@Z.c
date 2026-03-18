/*
 * XREFs of ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400AAA6C
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1400A320C (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z @ 0x140036260 (-GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x14009B8C0 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 *     ?InitForPagingProcess@VIDMM_DEVICE@@QEAAJXZ @ 0x1400A7330 (-InitForPagingProcess@VIDMM_DEVICE@@QEAAJXZ.c)
 *     ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1400C7944 (--0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400CB9E0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 */

__int64 __fastcall VIDMM_PAGING_PROCESS::InitPagingProcess(VIDMM_PAGING_PROCESS *this, struct VIDMM_GLOBAL *a2)
{
  VIDMM_PROCESS *v2; // rax
  unsigned int v5; // esi
  VIDMM_DEVICE *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  void *KmdProcessHandle; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx

  v2 = g_pVidMmSystemProcess;
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = v2;
  v5 = -1073741823;
  v6 = (VIDMM_DEVICE *)operator new(400LL, 0x38306956u, 256LL);
  if ( v6 )
    v6 = VIDMM_DEVICE::VIDMM_DEVICE(v6, a2, 0LL);
  *((_QWORD *)this + 1) = v6;
  if ( !v6 )
  {
    _InterlockedIncrement(&dword_14008A8C4);
    WdLogSingleEntry0(6LL);
    v8 = 262145LL;
    WdLogGlobalForLineNumber = 9898;
LABEL_12:
    DxgkLogInternalTriageEvent(v7, v8);
    VIDMM_PAGING_PROCESS::DestroyPagingProcess(this);
    return v5;
  }
  if ( !*((_BYTE *)a2 + 41067) )
  {
    v9 = VIDMM_PROCESS::OpenAdapter(g_pVidMmSystemProcess, a2);
    v5 = v9;
    if ( v9 < 0 )
    {
      WdLogSingleEntry1(1LL, v9);
      WdLogGlobalForLineNumber = 9907;
LABEL_11:
      v8 = 0x40000LL;
      goto LABEL_12;
    }
    *((_BYTE *)a2 + 41067) = 1;
  }
  v10 = VIDMM_DEVICE::InitForPagingProcess(*((VIDMM_DEVICE **)this + 1));
  v5 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry1(1LL, v10);
    WdLogGlobalForLineNumber = 9921;
    goto LABEL_11;
  }
  if ( (*(_BYTE *)(*((_QWORD *)this + 2) + 41064LL) & 0x10) != 0 )
  {
    KmdProcessHandle = DXGPROCESS::GetKmdProcessHandle(
                         *(DXGPROCESS **)(*(_QWORD *)this + 72LL),
                         *(_DWORD *)(*((_QWORD *)a2 + 3) + 240LL));
    v13 = 0LL;
    for ( *((_QWORD *)this + 3) = KmdProcessHandle;
          (unsigned int)v13 < *((_DWORD *)a2 + 1738);
          v13 = (unsigned int)(v13 + 1) )
    {
      v14 = *((_QWORD *)this + v13 + 4);
      if ( v14 )
        *(_QWORD *)(v14 + 112) = *((_QWORD *)this + 1);
    }
  }
  return 0LL;
}
