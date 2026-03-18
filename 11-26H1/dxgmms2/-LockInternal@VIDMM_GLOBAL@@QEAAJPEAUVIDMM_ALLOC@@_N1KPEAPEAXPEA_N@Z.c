/*
 * XREFs of ?LockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N1KPEAPEAXPEA_N@Z @ 0x1400E8234
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CFED0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?LockCommon@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NKPEAPEAXPEA_N@Z @ 0x1400E7D78 (-LockCommon@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NKPEAPEAXPEA_N@Z.c)
 * Callees:
 *     ??0VIDMM_PROCESS_AUTOATTACH@@QEAA@PEAVVIDMM_PROCESS@@_N@Z @ 0x14003B56C (--0VIDMM_PROCESS_AUTOATTACH@@QEAA@PEAVVIDMM_PROCESS@@_N@Z.c)
 *     ??1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ @ 0x14003BA5C (--1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1400D1900 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     MapInSystemMemory @ 0x140115020 (MapInSystemMemory.c)
 *     ?VidMmRecordLock@@YAXPEAUVIDMM_GLOBAL_STATISTICS@@KKH@Z @ 0x140115EC0 (-VidMmRecordLock@@YAXPEAUVIDMM_GLOBAL_STATISTICS@@KKH@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::LockInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned int a5,
        void **a6,
        bool *a7)
{
  void **v8; // rbp
  unsigned int v10; // r12d
  unsigned int v11; // r15d
  volatile signed __int32 **v12; // rdx
  unsigned int v13; // r8d
  __int64 result; // rax
  volatile signed __int32 *v15; // rsi
  __int64 *v16; // rbx
  __int64 v17; // r14
  __int64 v18; // r8
  __int64 v19; // rcx
  int v20; // ebp
  int v21; // eax
  __int64 v22; // rax
  _BYTE v23[64]; // [rsp+40h] [rbp-98h] BYREF

  v8 = a6;
  v10 = a4;
  v11 = a3;
  if ( VIDMM_GLOBAL::IsTdrPending(this) )
  {
    WdLogSingleEntry3(3LL, v12, v11, v10);
    result = 3221226166LL;
    WdLogGlobalForLineNumber = 23227;
    return result;
  }
  v15 = *v12;
  v16 = *(__int64 **)*v12;
  v17 = *v16;
  if ( !*((_DWORD *)v16 + 46) )
  {
    VIDMM_PROCESS_AUTOATTACH::VIDMM_PROCESS_AUTOATTACH(
      (VIDMM_PROCESS_AUTOATTACH *)v23,
      *((struct VIDMM_PROCESS **)v15 + 1),
      1);
    if ( (*(_DWORD *)(v17 + 56) & 0x10) != 0 )
    {
      LOBYTE(v18) = v11;
      v19 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * ((*(_DWORD *)(v17 + 52) >> 2) & 0x3F));
      v20 = (*(__int64 (__fastcall **)(__int64, struct VIDMM_ALLOC *, __int64, bool *))(*(_QWORD *)v19 + 280LL))(
              v19,
              a2,
              v18,
              a7);
      if ( v20 < 0 )
      {
        WdLogSingleEntry1(3LL, a2);
        WdLogGlobalForLineNumber = 23252;
LABEL_10:
        VIDMM_PROCESS_AUTOATTACH::~VIDMM_PROCESS_AUTOATTACH((VIDMM_PROCESS_AUTOATTACH *)v23);
        return (unsigned int)v20;
      }
    }
    if ( (*(_DWORD *)(v17 + 56) & 0x10) == 0 )
    {
      v20 = MapInSystemMemory(v15);
      if ( v20 < 0 )
      {
        WdLogSingleEntry1(3LL, a2);
        WdLogGlobalForLineNumber = 23268;
        goto LABEL_10;
      }
    }
    VIDMM_PROCESS_AUTOATTACH::~VIDMM_PROCESS_AUTOATTACH((VIDMM_PROCESS_AUTOATTACH *)v23);
    v8 = a6;
  }
  _InterlockedIncrement((volatile signed __int32 *)v16 + 46);
  _InterlockedIncrement(v15 + 17);
  v21 = *((_DWORD *)v16 + 7);
  *((_BYTE *)v16 + 40) = v10;
  if ( (v21 & 0x30) != 0 )
  {
    v22 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16[27] + 160LL))(v16[27], v16[28]);
  }
  else if ( (*(_DWORD *)v16[46] & 8) != 0 || (a5 & 0x400) != 0 )
  {
    v22 = v16[26];
    if ( !v22 )
    {
      WdLogSingleEntry2(3LL, a2, -1073741637LL);
      result = 3221225659LL;
      WdLogGlobalForLineNumber = 23293;
      return result;
    }
  }
  else
  {
    v22 = *((_QWORD *)v15 + 2);
  }
  *v8 = (void *)v22;
  *((_BYTE *)v16 + 42) = 1;
  VidMmRecordLock((VIDMM_GLOBAL *)((char *)this + 7136), a5, v13, v11);
  return 0LL;
}
