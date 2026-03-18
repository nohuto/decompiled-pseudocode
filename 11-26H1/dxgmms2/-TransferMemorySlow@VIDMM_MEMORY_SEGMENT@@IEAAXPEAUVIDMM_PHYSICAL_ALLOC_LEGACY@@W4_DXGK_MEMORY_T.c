/*
 * XREFs of ?TransferMemorySlow@VIDMM_MEMORY_SEGMENT@@IEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@T_LARGE_INTEGER@@@Z @ 0x1400BF250
 * Callers:
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@T_LARGE_INTEGER@@PEA_N3@Z @ 0x14011BD74 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@W4_DXGK_MEMORY_TRANS.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     Use64KbPagesForTransfer @ 0x14009BE14 (Use64KbPagesForTransfer.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A0274 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_D.c)
 *     InitializeTransferParameterForLegacyTemporaryResource @ 0x1400BEC48 (InitializeTransferParameterForLegacyTemporaryResource.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1400D1900 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E71D0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::TransferMemorySlow(
        VIDMM_MEMORY_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2,
        enum _DXGK_MEMORY_TRANSFER_DIRECTION a3,
        union _LARGE_INTEGER a4)
{
  VIDMM_GLOBAL **v4; // r13
  __int64 v5; // r10
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r8
  unsigned __int64 v11; // rdi
  __int64 v12; // r15
  __int64 v13; // rcx
  int v14; // r11d
  unsigned __int64 v15; // rdi
  _QWORD *v16; // r12
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r8
  VIDMM_GLOBAL *v20; // rdx
  char *v21; // r9
  __int64 v22; // r9
  __int64 v23; // r8
  int v24; // [rsp+28h] [rbp-79h]
  int v25; // [rsp+30h] [rbp-71h]
  char v26; // [rsp+48h] [rbp-59h]
  bool v27; // [rsp+49h] [rbp-58h]
  _QWORD *v28; // [rsp+50h] [rbp-51h]
  struct VIDMM_GLOBAL_ALLOC *v29; // [rsp+58h] [rbp-49h]
  _QWORD v30[2]; // [rsp+60h] [rbp-41h] BYREF
  __int64 v31; // [rsp+70h] [rbp-31h]
  unsigned __int64 v32; // [rsp+78h] [rbp-29h]
  __int128 v33; // [rsp+80h] [rbp-21h]
  _QWORD v34[2]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-1h]
  unsigned __int64 v36; // [rsp+A8h] [rbp+7h]
  __int128 v37; // [rsp+B0h] [rbp+Fh]
  char v39; // [rsp+110h] [rbp+6Fh] BYREF
  enum _DXGK_MEMORY_TRANSFER_DIRECTION v40; // [rsp+118h] [rbp+77h]

  v40 = a3;
  v4 = (VIDMM_GLOBAL **)((char *)this + 8);
  v5 = *((unsigned __int16 *)this + 34);
  v29 = *(struct VIDMM_GLOBAL_ALLOC **)a2;
  v7 = *((_QWORD *)this + 1);
  v8 = 0LL;
  v9 = *((_QWORD *)a2 + 2);
  v39 = 0;
  v11 = v9 >> 1;
  v26 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 40320) + 8 * v5) + 556LL) >> 7;
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v7 + 40320) + 8 * v5) + 556LL) >= 0
    || (v12 = 0x10000LL, !Use64KbPagesForTransfer((__int64)a2, (__int64)this)) )
  {
    v12 = 4096LL;
  }
  if ( v9 )
  {
    do
    {
      if ( VIDMM_GLOBAL::IsTdrPending(*v4) )
        return;
      v15 = ~(v12 - 1) & (v12 + v11 - 1);
      if ( (*(_DWORD *)(v13 + 6984) & 0x800) == 0 || v12 == v15 )
      {
        v16 = (_QWORD *)((char *)a2 + 216);
        LOBYTE(v25) = v14 == 1;
        v27 = v14 == 1;
        LOBYTE(v24) = v12 == v15;
        v17 = (*(__int64 (__fastcall **)(_QWORD, struct VIDMM_PHYSICAL_ALLOC_LEGACY *, unsigned __int64, unsigned __int64, int, int, char *))(**((_QWORD **)a2 + 27) + 64LL))(
                *((_QWORD *)a2 + 27),
                a2,
                v8,
                v15,
                v24,
                v25,
                &v39);
        if ( v17 >= 0 )
        {
          if ( !v39 )
            v17 = (*(__int64 (__fastcall **)(_QWORD, struct VIDMM_PHYSICAL_ALLOC_LEGACY *, char *))(*(_QWORD *)*v16
                                                                                                  + 80LL))(
                    *v16,
                    a2,
                    (char *)a2 + 152);
          v28 = (_QWORD *)((char *)a2 + 216);
          if ( v17 >= 0 )
          {
            v19 = *(_QWORD *)a2;
            v20 = *v4;
            v21 = (char *)a2 + 152;
            v37 = 0LL;
            v34[0] = 0LL;
            v33 = 0LL;
            v34[1] = 0LL;
            v35 = 0LL;
            v36 = 0LL;
            v30[0] = 0LL;
            v30[1] = 0LL;
            v31 = 0LL;
            v32 = 0LL;
            if ( v40 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
            {
              InitializeTransferParameterForLegacyTemporaryResource(v34, (__int64)v20, v19, (__int64)v21, v26, v8);
              v30[0] = a4.QuadPart;
              v32 = v8;
              v31 = (unsigned __int64)v4 & -(__int64)(this != 0LL);
            }
            else
            {
              v34[0] = a4.QuadPart;
              v36 = v8;
              v35 = (unsigned __int64)v4 & -(__int64)(this != 0LL);
              InitializeTransferParameterForLegacyTemporaryResource(v30, (__int64)v20, v19, (__int64)v21, v26, v8);
            }
            VIDMM_GLOBAL::MemoryTransfer(
              *v4,
              v29,
              v15,
              v8,
              (struct VIDMM_TRANSFER_PARAMETER *)v34,
              (struct VIDMM_TRANSFER_PARAMETER *)v30,
              0);
            VIDMM_GLOBAL::WaitForAllPagingEngines(*v4, v29);
            (*(void (__fastcall **)(_QWORD, struct VIDMM_PHYSICAL_ALLOC_LEGACY *, char *))(*(_QWORD *)*v28 + 88LL))(
              *v28,
              a2,
              (char *)a2 + 152);
            LOBYTE(v22) = 1;
            LOBYTE(v23) = v27;
            (*(void (__fastcall **)(_QWORD, struct VIDMM_PHYSICAL_ALLOC_LEGACY *, __int64, __int64))(*(_QWORD *)*v28 + 72LL))(
              *v28,
              a2,
              v23,
              v22);
            v8 += v15;
            v11 = *((_QWORD *)a2 + 2) - v8;
            continue;
          }
          LOBYTE(v18) = v27;
          (*(void (__fastcall **)(_QWORD, struct VIDMM_PHYSICAL_ALLOC_LEGACY *, __int64, _QWORD))(*(_QWORD *)*v16 + 72LL))(
            *v16,
            a2,
            v18,
            0LL);
        }
      }
      v11 = v15 >> 1;
    }
    while ( v8 != *((_QWORD *)a2 + 2) );
  }
}
