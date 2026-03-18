/*
 * XREFs of ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CEC00
 * Callers:
 *     ?EnsureResident@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400AA0B4 (-EnsureResident@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CE52C (-PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DC7DC (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x14002B940 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     Feature_CommitPagetableInstrumentation__private_IsEnabledPreCheck @ 0x14003E51C (Feature_CommitPagetableInstrumentation__private_IsEnabledPreCheck.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1400CEDF8 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NP.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_PAGE_TABLE::CommitPageTable(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        struct VIDMM_ALLOC **a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // r15
  int v7; // ecx
  __int64 ***v8; // r12
  __int64 *v9; // r14
  __int64 v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // edx
  __int64 v17; // r8
  __int64 v19; // rax
  __int64 v20; // [rsp+20h] [rbp-30h]
  __int64 v21; // [rsp+40h] [rbp-10h] BYREF
  char v22; // [rsp+90h] [rbp+40h] BYREF
  int v23; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+58h] BYREF

  v3 = 0;
  *a3 = 0LL;
  v5 = *((_QWORD *)this + 3);
  if ( !v5 || (*(_DWORD *)(*(_QWORD *)v5 + 56LL) & 1) == 0 )
  {
    v6 = *((_QWORD *)a2 + 12);
    v7 = *((_DWORD *)a2 + 38) & 4;
    v8 = (__int64 ***)*((_QWORD *)this + 4);
    v22 = 0;
    v9 = **v8;
    *(_DWORD *)this |= 0x80000u;
    *((_BYTE *)v9 + 42) = 0;
    v10 = (int)VIDMM_GLOBAL::PageInOneAllocation(v6, v8, v7 != 0 ? 0 : 7, 0LL, &v22, a3, 0, -1LL);
    if ( v22 )
    {
      v11 = -1073741267;
      goto LABEL_9;
    }
    v11 = v10;
    if ( (int)v10 >= 0 )
    {
      v12 = *v9;
      v13 = *(__int64 **)(*(_QWORD *)(v6 + 40320) + 8LL * ((*(_DWORD *)(*v9 + 52) >> 2) & 0x3F));
      v23 = 0;
      v24 = 0LL;
      if ( (*(_DWORD *)(v12 + 56) & 4) != 0 )
      {
        v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9[27] + 80LL))(v9[27], v9[28]);
        v24 = v14;
      }
      else
      {
        v19 = *v13;
        v21 = 0LL;
        (*(void (__fastcall **)(__int64 *, __int64, int *, __int64 *, __int64 *))(v19 + 48))(v13, v12, &v23, &v21, &v24);
        v14 = v24;
      }
      v15 = *(_DWORD *)this & 0xF81FFFFF;
      v16 = v23 & 0x3F;
      *((_QWORD *)this + 1) = v14;
      *(_DWORD *)this = v15 | (v16 << 21);
      Feature_CommitPagetableInstrumentation__private_IsEnabledPreCheck();
      WdLogSingleEntry2(4LL, v8, v9);
      WdLogGlobalForLineNumber = 16876;
      if ( *((_QWORD *)this + 3) )
      {
        v11 = v10;
        if ( byte_14008A204 >= 0 )
          goto LABEL_9;
      }
      else
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 70LL, v6, this, v10);
        WdLogGlobalForLineNumber = 213;
      }
      LODWORD(v20) = (*(_DWORD *)this >> 21) & 0x3F;
      McTemplateK0pqx_EtwWriteTransfer((unsigned int)v20, &EventCommitPageTable, v17, v8, v20, *((_QWORD *)this + 1));
      v11 = v10;
    }
LABEL_9:
    *(_DWORD *)this &= ~0x80000u;
    return v11;
  }
  return v3;
}
