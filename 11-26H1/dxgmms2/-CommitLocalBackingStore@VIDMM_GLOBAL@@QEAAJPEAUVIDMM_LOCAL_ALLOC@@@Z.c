/*
 * XREFs of ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400F4F2C
 * Callers:
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x14010CF0C (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@_N@Z @ 0x140127C48 (-OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 * Callees:
 *     ??1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ @ 0x14003BA5C (--1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400F57D0 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400F57F0 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitLocalBackingStore(VIDMM_GLOBAL *this, struct VIDMM_LOCAL_ALLOC *a2)
{
  VIDMM_PROCESS *v2; // rbp
  int v3; // ebx
  __int64 *v4; // rdi
  __int64 v7; // r14
  __int64 v8; // r8
  __int64 v9; // rcx
  VIDMM_PROCESS *v10; // rcx
  bool v11; // zf
  __int64 v13; // [rsp+30h] [rbp-88h] BYREF
  char v14[8]; // [rsp+40h] [rbp-78h] BYREF
  struct _KAPC_STATE v15; // [rsp+48h] [rbp-70h] BYREF
  VIDMM_PROCESS *v16; // [rsp+78h] [rbp-40h]

  v2 = (VIDMM_PROCESS *)*((_QWORD *)a2 + 1);
  v3 = 0;
  v4 = *(__int64 **)a2;
  v13 = 0LL;
  v7 = *v4;
  v16 = v2;
  VIDMM_PROCESS::SafeAttach(v2, &v15);
  v14[0] = 1;
  v9 = v4[27];
  if ( v9
    && (LOBYTE(v8) = (*((_BYTE *)a2 + 24) & 8) != 0,
        v3 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, char *, unsigned __int64))(*(_QWORD *)v9 + 144LL))(
               v9,
               v4[28],
               v8,
               (char *)a2 + 72,
               (unsigned __int64)&v13 & -(__int64)((v4[3] & 0x8000000) != 0)),
        v3 < 0) )
  {
    WdLogSingleEntry1(3LL, v4);
    WdLogGlobalForLineNumber = 28056;
    VIDMM_PROCESS_AUTOATTACH::~VIDMM_PROCESS_AUTOATTACH((VIDMM_PROCESS_AUTOATTACH *)v14);
  }
  else
  {
    v10 = *(VIDMM_PROCESS **)(*(_QWORD *)(*((_QWORD *)v2 + 4) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL))
                            + 8LL);
    _InterlockedAdd64(
      (volatile signed __int64 *)v10 + 38 * ((*(_DWORD *)(v7 + 52) >> 2) & 0x3F) + 29,
      *(_QWORD *)(v7 + 16));
    v11 = v14[0] == 0;
    *((_QWORD *)a2 + 2) = v13;
    if ( !v11 )
      VIDMM_PROCESS::SafeDetach(v10, &v15);
  }
  return (unsigned int)v3;
}
