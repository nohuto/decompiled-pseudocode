/*
 * XREFs of ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K1_N2PEA_N@Z @ 0x1400BD5B0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ @ 0x14003BA5C (--1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memmove @ 0x14005B8C0 (memmove.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_GLOBAL@@@Z @ 0x1400A4C5C (-VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_GLOBAL@@@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E71D0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400F57D0 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAPEAX@Z @ 0x14011BB3C (-VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAPEAX@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX@Z @ 0x14011EAA4 (-VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::LockAllocationRange(
        VIDMM_APERTURE_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2,
        unsigned __int64 a3,
        size_t a4,
        bool a5,
        bool a6,
        bool *a7)
{
  bool *v12; // rcx
  __int64 v13; // rbx
  _QWORD *v14; // rax
  int v15; // esi
  __int64 v16; // r9
  __int64 v17; // r8
  VIDMM_PROCESS *v18; // rcx
  const void *v19; // rax
  struct _MDL *v20; // rax
  struct VIDMM_GLOBAL *v21; // r9
  __int64 v22; // rcx
  void *v24; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-C0h]
  VIDMM_APERTURE_SEGMENT *v26; // [rsp+60h] [rbp-B8h]
  size_t Size; // [rsp+68h] [rbp-B0h]
  __int64 v28; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v29; // [rsp+78h] [rbp-A0h]
  struct VIDMM_PHYSICAL_ALLOC_LEGACY *v30; // [rsp+80h] [rbp-98h]
  char v31[8]; // [rsp+90h] [rbp-88h] BYREF
  struct _KAPC_STATE v32; // [rsp+98h] [rbp-80h] BYREF
  VIDMM_PROCESS *v33; // [rsp+C8h] [rbp-50h]

  v26 = this;
  v30 = a2;
  v29 = a3;
  Size = a4;
  v12 = a7;
  v24 = a7;
  v13 = *(_QWORD *)a2;
  v28 = v13;
  v25 = *(_QWORD *)(v13 + 48);
  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(a7);
    v14[3] = v13;
    v14[4] = a3;
    v14[5] = a4;
    WdLogGlobalForLineNumber = 1182;
    v12 = (bool *)v24;
  }
  *v12 = 0;
  if ( (*((_DWORD *)a2 + 48) & 2) == 0 )
  {
    v15 = 1;
LABEL_9:
    v18 = *(VIDMM_PROCESS **)(v25 + 8);
    v31[0] = 0;
    v33 = v18;
    if ( (**(_DWORD **)(v13 + 368) & 8) == 0 )
    {
      VIDMM_PROCESS::SafeAttach(v18, &v32);
      v31[0] = 1;
    }
    if ( a5 )
    {
      if ( a6 )
      {
        v24 = 0LL;
        v19 = VidMmMapViewOfAllocation((struct VIDMM_GLOBAL_ALLOC *)v13, a3, a4, &v24);
        if ( v19 )
        {
          memmove(*(void **)(*((_QWORD *)this + 1) + 45272LL), v19, a4);
          VidMmUnmapViewOfAllocation((struct VIDMM_GLOBAL_ALLOC *)v13, v24);
        }
        else
        {
          memset(*(void **)(*((_QWORD *)this + 1) + 45272LL), 0, a4);
          *(_DWORD *)(v13 + 24) |= 0x10000u;
        }
      }
      v20 = *(struct _MDL **)(*((_QWORD *)this + 1) + 45280LL);
      goto LABEL_23;
    }
    v21 = (struct VIDMM_GLOBAL *)*((_QWORD *)this + 1);
    if ( (*((_DWORD *)v21 + 1746) & 4) != 0 )
    {
      _InterlockedAdd(&dword_14008A6E4, 1u);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1350;
      v22 = 0LL;
    }
    else
    {
      v20 = VidMmiProbeAndLockAllocation((struct VIDMM_GLOBAL_ALLOC *)v13, a3, a4, v21);
      if ( v20 )
      {
        v15 = 0;
LABEL_23:
        *((_QWORD *)a2 + 21) = v20;
        *((_QWORD *)a2 + 23) = a4;
        *((_QWORD *)a2 + 22) = a3;
        *((_DWORD *)a2 + 48) = v15 | *((_DWORD *)a2 + 48) & 0xFFFFFFFE | 6;
        VIDMM_PROCESS_AUTOATTACH::~VIDMM_PROCESS_AUTOATTACH((VIDMM_PROCESS_AUTOATTACH *)v31);
        return 0LL;
      }
      _InterlockedAdd(&dword_14008A6E4, 1u);
      WdLogSingleEntry3(6LL, v13, a3, a4);
      WdLogGlobalForLineNumber = 1363;
    }
    DxgkLogInternalTriageEvent(v22, 262145LL);
    VIDMM_PROCESS_AUTOATTACH::~VIDMM_PROCESS_AUTOATTACH((VIDMM_PROCESS_AUTOATTACH *)v31);
    return 3223191809LL;
  }
  if ( a3 != *((_QWORD *)a2 + 22) || a4 != *((_QWORD *)a2 + 23) )
  {
    VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), (struct VIDMM_GLOBAL_ALLOC *)v13);
    (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct VIDMM_PHYSICAL_ALLOC_LEGACY *, char *))(*(_QWORD *)this + 88LL))(
      this,
      a2,
      (char *)a2 + 152);
    v15 = 1;
    LOBYTE(v16) = 1;
    LOBYTE(v17) = a6;
    (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct VIDMM_PHYSICAL_ALLOC_LEGACY *, __int64, __int64))(*(_QWORD *)this + 72LL))(
      this,
      a2,
      v17,
      v16);
    goto LABEL_9;
  }
  *v12 = 1;
  return 0LL;
}
