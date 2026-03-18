/*
 * XREFs of ?CloseFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@UEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1400A4F90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140031E00 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035970 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400D4C18 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400D51C0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E68D8 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::CloseFenceStorageSlot(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3)
{
  struct VIDMM_GLOBAL_ALLOC ****v5; // rdi
  struct VIDMM_DEVICE *v6; // rcx
  VIDMM_GLOBAL *v8; // rbp
  struct VIDMM_GLOBAL_ALLOC ***v9; // rbx
  struct VIDMM_GLOBAL_ALLOC **v10; // rax
  int v11; // ecx
  bool v12; // r8
  int v13; // eax
  struct VIDMM_GLOBAL_ALLOC *v14; // rbx
  _BYTE v16[16]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v17[12]; // [rsp+40h] [rbp-68h] BYREF

  if ( (*((_BYTE *)a3 + 40) & 4) != 0 )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v16,
      (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 80),
      1);
    v5 = (struct VIDMM_GLOBAL_ALLOC ****)*((_QWORD *)this + 19);
    if ( v5 )
    {
      v6 = (struct VIDMM_DEVICE *)v5[2];
      if ( v6 == a2 && (*((_DWORD *)v5 + 7))-- == 1 )
      {
        v8 = *(VIDMM_GLOBAL **)v6;
        v9 = *v5;
        memset(v17, 0, 0x58uLL);
        v10 = *v9;
        LODWORD(v17[0]) = 200;
        v17[2] = v9;
        v11 = *(_DWORD *)(*(_QWORD *)*v10 + 52LL);
        *((_DWORD *)v9 + 8) |= 1u;
        HIDWORD(v17[0]) = (unsigned __int8)v11 >> 2;
        v13 = VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(v8, (struct _VIDMM_SYSTEM_COMMAND *)v17, v12);
        if ( v13 < 0 )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 5LL, 200LL, v13, 0LL);
          WdLogGlobalForLineNumber = 213;
        }
        KeWaitForSingleObject(*v5 + 9, Executive, 0, 0, 0LL);
        v14 = ***v5;
        VIDMM_GLOBAL::CloseOneAllocation(
          v8,
          (struct VIDMM_ALLOC *)*v5,
          0LL,
          0,
          (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)3,
          0LL);
        *v5 = 0LL;
        VIDMM_GLOBAL::DestroyOneAllocation(v8, 0LL, v14, 0);
        operator delete(v5);
        *((_QWORD *)this + 19) = 0LL;
      }
    }
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v16);
  }
  return 0LL;
}
