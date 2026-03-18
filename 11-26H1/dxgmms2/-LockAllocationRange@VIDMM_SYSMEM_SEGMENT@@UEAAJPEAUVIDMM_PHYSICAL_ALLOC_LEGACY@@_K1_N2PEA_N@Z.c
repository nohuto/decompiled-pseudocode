/*
 * XREFs of ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K1_N2PEA_N@Z @ 0x1400BC9A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ @ 0x14003BA5C (--1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memmove @ 0x14005B8C0 (memmove.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2_N@Z @ 0x1400A2004 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2_N@.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E71D0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400F57D0 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAPEAX@Z @ 0x14011BB3C (-VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAPEAX@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX@Z @ 0x14011EAA4 (-VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX@Z.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::LockAllocationRange(
        VIDMM_GLOBAL **this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2,
        unsigned __int64 a3,
        size_t a4,
        bool a5,
        bool a6,
        bool *a7)
{
  __int64 v11; // rdi
  _QWORD *v12; // rax
  int v13; // ebx
  __int64 v14; // r9
  __int64 v15; // r8
  struct VIDMM_PHYSICAL_ALLOC_LEGACY *v16; // r13
  VIDMM_PROCESS *v17; // rcx
  struct VIDMM_LOCAL_ALLOC *v18; // rdx
  const void *v19; // rax
  __int64 v20; // rax
  VIDMM_GLOBAL *v21; // rcx
  int v22; // r12d
  __int64 v23; // rcx
  void *v25; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-C0h]
  VIDMM_SYSMEM_SEGMENT *v27; // [rsp+60h] [rbp-B8h]
  size_t Size; // [rsp+68h] [rbp-B0h]
  __int64 v29; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v30; // [rsp+78h] [rbp-A0h]
  struct VIDMM_PHYSICAL_ALLOC_LEGACY *v31; // [rsp+80h] [rbp-98h]
  char v32[8]; // [rsp+90h] [rbp-88h] BYREF
  struct _KAPC_STATE v33; // [rsp+98h] [rbp-80h] BYREF
  VIDMM_PROCESS *v34; // [rsp+C8h] [rbp-50h]

  v31 = a2;
  v27 = (VIDMM_SYSMEM_SEGMENT *)this;
  v30 = a3;
  Size = a4;
  v11 = *(_QWORD *)a2;
  v29 = v11;
  v26 = *(_QWORD *)(v11 + 48);
  if ( g_IsInternalReleaseOrDbg )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v12[3] = v11;
    v12[4] = a3;
    v12[5] = a4;
    WdLogGlobalForLineNumber = 820;
  }
  *a7 = 0;
  if ( (*((_DWORD *)a2 + 48) & 2) == 0 )
  {
    v13 = 1;
    v16 = a2;
LABEL_9:
    v17 = *(VIDMM_PROCESS **)(v26 + 8);
    v32[0] = 0;
    v34 = v17;
    v18 = (struct VIDMM_LOCAL_ALLOC *)**(unsigned int **)(v11 + 368);
    if ( ((unsigned __int8)v18 & 8) == 0 )
    {
      VIDMM_PROCESS::SafeAttach(v17, &v33);
      v32[0] = 1;
    }
    if ( a5 )
    {
      if ( a6 )
      {
        v25 = 0LL;
        v19 = VidMmMapViewOfAllocation((struct VIDMM_GLOBAL_ALLOC *)v11, a3, a4, &v25);
        if ( v19 )
        {
          memmove(*((void **)this[1] + 5659), v19, a4);
          VidMmUnmapViewOfAllocation((struct VIDMM_GLOBAL_ALLOC *)v11, v25);
        }
        else
        {
          memset(*((void **)this[1] + 5659), 0, a4);
          *(_DWORD *)(v11 + 24) |= 0x10000u;
        }
      }
      v20 = *((_QWORD *)this[1] + 5660) + 48LL;
      goto LABEL_23;
    }
    v21 = this[1];
    if ( (*((_DWORD *)v21 + 1746) & 4) != 0 )
    {
      _InterlockedAdd(&dword_14008A6E4, 1u);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 979;
      DxgkLogInternalTriageEvent(0LL, 262145LL);
      v22 = -1071775487;
    }
    else
    {
      v22 = VIDMM_GLOBAL::ProbeAndLockAllocation(v21, v18, (struct VIDMM_GLOBAL_ALLOC *)v11, a3, a4, 1);
      if ( v22 >= 0 )
      {
        v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, size_t))(**(_QWORD **)(v11 + 216) + 72LL))(
                *(_QWORD *)(v11 + 216),
                *(_QWORD *)(v11 + 224),
                a3,
                a4);
        v13 = 0;
LABEL_23:
        *((_QWORD *)v16 + 21) = v20;
        *((_QWORD *)a2 + 23) = a4;
        *((_QWORD *)a2 + 22) = a3;
        *((_DWORD *)a2 + 48) = v13 & 0xFFFFFFFB | *((_DWORD *)a2 + 48) & 0xFFFFFFFA | 2;
        VIDMM_PROCESS_AUTOATTACH::~VIDMM_PROCESS_AUTOATTACH((VIDMM_PROCESS_AUTOATTACH *)v32);
        return 0LL;
      }
      _InterlockedAdd(&dword_14008A6E4, 1u);
      WdLogSingleEntry3(6LL, v11, a3, a4);
      WdLogGlobalForLineNumber = 1003;
      DxgkLogInternalTriageEvent(v23, 262145LL);
    }
    VIDMM_PROCESS_AUTOATTACH::~VIDMM_PROCESS_AUTOATTACH((VIDMM_PROCESS_AUTOATTACH *)v32);
    return (unsigned int)v22;
  }
  if ( a3 != *((_QWORD *)a2 + 22) || a4 != *((_QWORD *)a2 + 23) )
  {
    VIDMM_GLOBAL::WaitForAllPagingEngines(this[1], (struct VIDMM_GLOBAL_ALLOC *)v11);
    v13 = 1;
    LOBYTE(v14) = 1;
    LOBYTE(v15) = a6;
    v16 = a2;
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct VIDMM_PHYSICAL_ALLOC_LEGACY *, __int64, __int64))*this + 9))(
      this,
      a2,
      v15,
      v14);
    goto LABEL_9;
  }
  *a7 = 1;
  return 0LL;
}
