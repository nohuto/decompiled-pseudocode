/*
 * XREFs of ?TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@T_LARGE_INTEGER@@PEA_N@Z @ 0x14011BE88
 * Callers:
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@T_LARGE_INTEGER@@PEA_N3@Z @ 0x14011BD74 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@W4_DXGK_MEMORY_TRANS.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A0274 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_D.c)
 *     AddPendingTemporaryResourceLegacy @ 0x1400BE18C (AddPendingTemporaryResourceLegacy.c)
 *     InitializeTransferParameterForLegacyTemporaryResource @ 0x1400BEC48 (InitializeTransferParameterForLegacyTemporaryResource.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::TransferMemoryFast(
        VIDMM_MEMORY_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2,
        enum _DXGK_MEMORY_TRANSFER_DIRECTION a3,
        union _LARGE_INTEGER a4,
        bool *a5)
{
  VIDMM_GLOBAL **v5; // rdi
  __int64 v7; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  int v14; // r12d
  __int64 v15; // r8
  __int64 v16; // r8
  char *v17; // r9
  VIDMM_GLOBAL *v18; // rdx
  char v19; // [rsp+48h] [rbp-41h]
  struct VIDMM_GLOBAL_ALLOC *v20; // [rsp+50h] [rbp-39h]
  _QWORD v21[2]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v22; // [rsp+68h] [rbp-21h]
  __int64 v23; // [rsp+70h] [rbp-19h]
  __int128 v24; // [rsp+78h] [rbp-11h]
  _QWORD v25[2]; // [rsp+88h] [rbp-1h] BYREF
  __int64 v26; // [rsp+98h] [rbp+Fh]
  __int64 v27; // [rsp+A0h] [rbp+17h]
  __int128 v28; // [rsp+A8h] [rbp+1Fh]
  char v29; // [rsp+E8h] [rbp+5Fh] BYREF

  v5 = (VIDMM_GLOBAL **)((char *)this + 8);
  v7 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v7 + 6984) & 0x400) != 0 )
    return 3223191809LL;
  v12 = *((unsigned __int16 *)this + 34);
  v13 = *((_QWORD *)a2 + 2);
  v20 = *(struct VIDMM_GLOBAL_ALLOC **)a2;
  v29 = 0;
  v19 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 40320) + 8 * v12) + 556LL) >> 7;
  v14 = (*(__int64 (__fastcall **)(_QWORD, struct VIDMM_PHYSICAL_ALLOC_LEGACY *, _QWORD, __int64, _BYTE, bool, char *))(**((_QWORD **)a2 + 27) + 64LL))(
          *((_QWORD *)a2 + 27),
          a2,
          0LL,
          v13,
          0,
          a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL,
          &v29);
  if ( v14 >= 0 )
  {
    if ( !v29 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, struct VIDMM_PHYSICAL_ALLOC_LEGACY *, char *))(**((_QWORD **)a2 + 27)
                                                                                            + 80LL))(
              *((_QWORD *)a2 + 27),
              a2,
              (char *)a2 + 152);
      if ( v14 >= 0 )
      {
LABEL_8:
        v16 = *(_QWORD *)a2;
        v25[0] = 0LL;
        v17 = (char *)a2 + 152;
        v25[1] = 0LL;
        v26 = 0LL;
        v27 = 0LL;
        v21[0] = 0LL;
        v21[1] = 0LL;
        v22 = 0LL;
        v23 = 0LL;
        v18 = *v5;
        v28 = 0LL;
        v24 = 0LL;
        if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
        {
          InitializeTransferParameterForLegacyTemporaryResource(v25, (__int64)v18, v16, (__int64)v17, v19, 0LL);
          v21[0] = a4.QuadPart;
          v22 = (unsigned __int64)v5 & -(__int64)(this != 0LL);
        }
        else
        {
          v25[0] = a4.QuadPart;
          v26 = (unsigned __int64)v5 & -(__int64)(this != 0LL);
          InitializeTransferParameterForLegacyTemporaryResource(v21, (__int64)v18, v16, (__int64)v17, v19, 0LL);
        }
        VIDMM_GLOBAL::MemoryTransfer(
          *v5,
          v20,
          *((_QWORD *)a2 + 2),
          0LL,
          (struct VIDMM_TRANSFER_PARAMETER *)v25,
          (struct VIDMM_TRANSFER_PARAMETER *)v21,
          0);
        if ( (*((_DWORD *)v20 + 8) & 4) != 0 )
        {
          WdLogSingleEntry1(4LL, v20);
          WdLogGlobalForLineNumber = 2474;
          *a5 = 1;
        }
        else
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(4LL) + 24) = a2;
            WdLogGlobalForLineNumber = 2483;
          }
          AddPendingTemporaryResourceLegacy(*((_QWORD *)this + 2), (__int64)a2 + 152);
        }
        if ( a3 != DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
          *((_BYTE *)*v5 + 41072) = 1;
        return (unsigned int)v14;
      }
      LOBYTE(v15) = a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL;
      (*(void (__fastcall **)(_QWORD, struct VIDMM_PHYSICAL_ALLOC_LEGACY *, __int64, _QWORD))(**((_QWORD **)a2 + 27)
                                                                                            + 72LL))(
        *((_QWORD *)a2 + 27),
        a2,
        v15,
        0LL);
    }
    if ( v14 >= 0 )
      goto LABEL_8;
  }
  return (unsigned int)v14;
}
