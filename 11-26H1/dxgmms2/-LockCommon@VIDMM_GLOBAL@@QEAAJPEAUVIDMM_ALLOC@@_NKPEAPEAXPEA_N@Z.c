/*
 * XREFs of ?LockCommon@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NKPEAPEAXPEA_N@Z @ 0x1400E7D78
 * Callers:
 *     ?Lock2@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@KPEAPEAX@Z @ 0x1400E8148 (-Lock2@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@KPEAPEAX@Z.c)
 *     ?Lock1@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@KPEAPEAX@Z @ 0x140127978 (-Lock1@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14002C1F0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035970 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ValidateCommonLockParameters @ 0x140036320 (ValidateCommonLockParameters.c)
 *     ?HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ @ 0x14003797C (-HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ.c)
 *     NeedsApertureForLock @ 0x1400399DC (NeedsApertureForLock.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400E53F0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E71D0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?LockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N1KPEAPEAXPEA_N@Z @ 0x1400E8234 (-LockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N1KPEAPEAXPEA_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::LockCommon(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        bool a3,
        unsigned int a4,
        void **a5,
        bool *a6)
{
  BOOL v7; // ebx
  __int64 result; // rax
  int v10; // r14d
  __int64 *v11; // r13
  __int64 v12; // rsi
  int v13; // eax
  int v14; // r9d
  _DWORD *v15; // rax
  char v16; // r9
  char v17; // al
  char v18; // r9
  unsigned int v19; // r10d
  __int64 v20; // rcx
  int v21; // eax
  __int64 *v22; // rax
  __int64 v23; // rcx
  bool v24; // [rsp+58h] [rbp-69h] BYREF
  __int64 v25; // [rsp+60h] [rbp-61h]
  __int64 v26; // [rsp+68h] [rbp-59h] BYREF
  char v27; // [rsp+70h] [rbp-51h]
  _QWORD v28[18]; // [rsp+78h] [rbp-49h] BYREF

  v7 = a3;
  *a5 = 0LL;
  result = ValidateCommonLockParameters((__int64)this, a2);
  v10 = result;
  if ( (int)result < 0 )
    return result;
  v11 = *a2;
  v12 = **a2;
  v25 = *(_QWORD *)v12;
  v26 = v12 + 304;
  v24 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v12 + 304, 0LL);
  *(_QWORD *)(v12 + 312) = KeGetCurrentThread();
  v13 = *(_DWORD *)(v12 + 184);
  v27 = 1;
  if ( v13 && v7 != (*(_BYTE *)(v12 + 40) != 0) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 22738;
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v26);
    return 3221225485LL;
  }
  if ( !*((_DWORD *)v11 + 17) )
  {
    v14 = *(_DWORD *)(v12 + 24);
    v15 = *(_DWORD **)(v12 + 368);
    if ( (v14 & 0x8000000) != 0 )
    {
      v16 = v14 & 1;
      if ( (*v15 & 4) != 0 )
      {
        if ( !v16 && (*(_DWORD *)(*((_QWORD *)this + 3) + 444LL) & 8) == 0 )
        {
          WdLogSingleEntry0(1LL);
          v21 = 22762;
          goto LABEL_30;
        }
        goto LABEL_7;
      }
      if ( VIDMM_ALLOC::HasAnyResidencyReferences((VIDMM_ALLOC *)a2)
        && NeedsApertureForLock((__int64)this, (_DWORD *)v12)
        && !v18
        && (*(_DWORD *)(v12 + 24) & 4) == 0 )
      {
        WdLogSingleEntry0(v19);
        v21 = 22771;
LABEL_30:
        WdLogGlobalForLineNumber = v21;
        DxgkLogInternalTriageEvent(v20, 0x40000LL);
        *(_QWORD *)(v12 + 312) = 0LL;
        ExReleasePushLockExclusiveEx(v12 + 304, 0LL);
        KeLeaveCriticalRegion();
        return 3221225485LL;
      }
    }
    else if ( (v14 & 2) == 0 && (*v15 & 0x40000) != 0 )
    {
      WdLogSingleEntry0(1LL);
      v21 = 22783;
      goto LABEL_30;
    }
  }
LABEL_7:
  v26 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * ((*(_DWORD *)(v25 + 52) >> 2) & 0x3F));
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v12 + 136));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v12 + 216) + 104LL))(
    *(_QWORD *)(v12 + 216),
    *(_QWORD *)(v12 + 224));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 136));
  if ( (*(_DWORD *)(v25 + 56) & 0x10) != 0 )
  {
    v17 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 272LL))(v26, v11);
    v24 = v17;
  }
  else
  {
    v17 = v24;
  }
  if ( !v17 )
  {
    v10 = VIDMM_GLOBAL::LockInternal(this, (struct VIDMM_ALLOC *)a2, 0, a3, a4, a5, &v24);
    if ( v10 < 0 && (*(_DWORD *)(v25 + 56) & 0x10) != 0 )
      v24 = 1;
  }
  *(_QWORD *)(v12 + 312) = 0LL;
  ExReleasePushLockExclusiveEx(v12 + 304, 0LL);
  KeLeaveCriticalRegion();
  if ( v24 )
  {
    memset(v28, 0, 0x58uLL);
    LODWORD(v28[5]) = a4;
    LODWORD(v28[0]) = 208;
    v28[2] = a2;
    v28[4] = a5;
    v22 = a2[1];
    v23 = (*(_DWORD *)(v25 + 52) >> 2) & 0x3F;
    BYTE4(v28[5]) = a3;
    v10 = VIDMM_GLOBAL::QueueDeferredCommand(
            (struct VIDMM_WORKER_THREAD **)this,
            *(struct VIDMM_PAGING_QUEUE **)(32 * v23 + v22[9]),
            (struct _VIDMM_DEFERRED_COMMAND *)v28,
            1,
            0LL);
    *a6 = BYTE5(v28[5]);
  }
  if ( v10 >= 0 && !*((_BYTE *)this + 41068) )
    VIDMM_GLOBAL::WaitForAllPagingEngines(this, (struct VIDMM_GLOBAL_ALLOC *)v12);
  return (unsigned int)v10;
}
