/*
 * XREFs of ?PageInPageTableOrDirectory@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGE_TABLE_BASE@@PEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU3@@Z @ 0x1400CE330
 * Callers:
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CE298 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 * Callees:
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x14002B940 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     Feature_CommitPagetableInstrumentation__private_IsEnabledPreCheck @ 0x14003E51C (Feature_CommitPagetableInstrumentation__private_IsEnabledPreCheck.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1400CEDF8 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NP.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_GLOBAL::PageInPageTableOrDirectory(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGE_TABLE_BASE *a2,
        __int64 ***a3,
        char a4,
        bool *a5,
        struct VIDMM_ALLOC **a6)
{
  bool *v7; // rbx
  __int64 *v10; // r14
  __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 *v14; // rcx
  bool *v15; // rcx
  unsigned int v16; // eax
  int v17; // edx
  __int64 v18; // r8
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // [rsp+20h] [rbp-48h]
  struct VIDMM_ALLOC **v22; // [rsp+28h] [rbp-40h]
  __int64 v23; // [rsp+78h] [rbp+10h] BYREF
  int v24; // [rsp+88h] [rbp+20h] BYREF

  v7 = a5;
  v10 = **a3;
  *(_DWORD *)a2 |= 0x80000u;
  v22 = a6;
  *((_BYTE *)v10 + 42) = 0;
  v11 = (int)VIDMM_GLOBAL::PageInOneAllocation(this, a3, a4 == 0 ? 7 : 0, 0LL, v7, v22, 0, -1LL);
  if ( *v7 )
  {
    result = 3221226029LL;
    goto LABEL_7;
  }
  result = (unsigned int)v11;
  if ( (int)v11 >= 0 )
  {
    v13 = *v10;
    v14 = *(__int64 **)(*((_QWORD *)this + 5040) + 8LL * ((*(_DWORD *)(*v10 + 52) >> 2) & 0x3F));
    v24 = 0;
    a5 = 0LL;
    if ( (*(_DWORD *)(v13 + 56) & 4) != 0 )
    {
      v15 = (bool *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10[27] + 80LL))(v10[27], v10[28]);
      a5 = v15;
    }
    else
    {
      v20 = *v14;
      v23 = 0LL;
      (*(void (__fastcall **)(__int64 *, __int64, int *, __int64 *, bool **))(v20 + 48))(v14, v13, &v24, &v23, &a5);
      v15 = a5;
    }
    v16 = *(_DWORD *)a2 & 0xF81FFFFF;
    v17 = v24 & 0x3F;
    *((_QWORD *)a2 + 1) = v15;
    *(_DWORD *)a2 = v16 | (v17 << 21);
    Feature_CommitPagetableInstrumentation__private_IsEnabledPreCheck();
    WdLogSingleEntry2(4LL, a3, v10);
    v19 = *((_QWORD *)a2 + 3) == 0LL;
    WdLogGlobalForLineNumber = 16876;
    if ( v19 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 70LL, this, a2, v11);
      WdLogGlobalForLineNumber = 213;
    }
    else
    {
      result = (unsigned int)v11;
      if ( byte_14008A204 >= 0 )
        goto LABEL_7;
    }
    LODWORD(v21) = (*(_DWORD *)a2 >> 21) & 0x3F;
    McTemplateK0pqx_EtwWriteTransfer((unsigned int)v21, &EventCommitPageTable, v18, a3, v21, *((_QWORD *)a2 + 1));
    result = (unsigned int)v11;
  }
LABEL_7:
  *(_DWORD *)a2 &= ~0x80000u;
  return result;
}
