/*
 * XREFs of ?InvalidateCache@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAUVIDMM_MULTI_ALLOC@@_K3@Z @ 0x14009F738
 * Callers:
 *     VidMmInvalidateCache @ 0x14004D6E0 (VidMmInvalidateCache.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140035B48 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140035F90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0VIDMM_PROCESS_AUTOATTACH@@QEAA@PEAVVIDMM_PROCESS@@_N@Z @ 0x14003B56C (--0VIDMM_PROCESS_AUTOATTACH@@QEAA@PEAVVIDMM_PROCESS@@_N@Z.c)
 *     ??1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ @ 0x14003BA5C (--1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     VidMmFlushCpuCacheWorker @ 0x1400A2FFC (VidMmFlushCpuCacheWorker.c)
 *     ?GetCacheInvalidationAddress@VIDMM_PARAVIRTUALIZATION_HEAP@@QEAAPEAXPEBUVIDMM_HEAP_ALLOC@@@Z @ 0x1400B5260 (-GetCacheInvalidationAddress@VIDMM_PARAVIRTUALIZATION_HEAP@@QEAAPEAXPEBUVIDMM_HEAP_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InvalidateCache(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_MULTI_GLOBAL_ALLOC *a3,
        struct VIDMM_MULTI_GLOBAL_ALLOC ***a4,
        unsigned __int64 a5,
        unsigned __int64 Length)
{
  unsigned int v6; // ebx
  struct VIDMM_MULTI_GLOBAL_ALLOC *v8; // rdi
  struct VIDMM_MULTI_GLOBAL_ALLOC **v10; // r14
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // r15
  VIDMM_PARAVIRTUALIZATION_HEAP *v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  VIDMM_PARAVIRTUALIZATION_HEAP *i; // rax
  unsigned __int64 v18; // rsi
  _QWORD *v19; // rax
  unsigned __int64 v20; // rdx
  char v21; // r8
  struct VIDMM_MULTI_GLOBAL_ALLOC *CacheInvalidationAddress; // rbp
  __int64 v23; // rcx
  _BYTE v24[16]; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v25[64]; // [rsp+60h] [rbp-88h] BYREF

  v6 = 0;
  v8 = a3;
  v10 = 0LL;
  if ( !*((_BYTE *)this + 7043) && (!a2 || (*(_DWORD *)(*((_QWORD *)a2 + 9) + 408LL) & 0x1000) == 0) )
  {
    WdLogSingleEntry0(4LL);
    result = 0LL;
    WdLogGlobalForLineNumber = 26540;
    return result;
  }
  if ( a4 )
  {
    v10 = *a4;
    v8 = **a4;
  }
  else if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 26551;
    DxgkLogInternalTriageEvent(v12, 0x40000LL);
    return 3221225485LL;
  }
  v13 = *(_QWORD *)v8;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct VIDMM_MULTI_GLOBAL_ALLOC *)((char *)v8 + 136), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  if ( !a4 )
  {
    if ( !a2 )
    {
      WdLogSingleEntry0(1LL);
      v16 = 26574;
LABEL_13:
      WdLogGlobalForLineNumber = v16;
LABEL_14:
      DxgkLogInternalTriageEvent(v15, 0x40000LL);
      DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v24);
      return 3221225485LL;
    }
    v14 = (struct VIDMM_MULTI_GLOBAL_ALLOC *)((char *)v8 + 112);
    for ( i = (VIDMM_PARAVIRTUALIZATION_HEAP *)*((_QWORD *)v8 + 14); i != v14; i = *(VIDMM_PARAVIRTUALIZATION_HEAP **)i )
    {
      if ( *((struct VIDMM_PROCESS **)i - 5) == a2 )
      {
        v10 = (struct VIDMM_MULTI_GLOBAL_ALLOC **)((char *)i - 48);
        break;
      }
    }
    if ( !v10 )
    {
      WdLogSingleEntry0(1LL);
      v16 = 26594;
      goto LABEL_13;
    }
  }
  v18 = Length;
  if ( g_IsInternalReleaseOrDbg )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdTrace();
    v19[3] = a4;
    v19[4] = a5;
    v19[5] = Length;
    WdLogGlobalForLineNumber = 26600;
  }
  if ( !Length )
    v18 = *(_QWORD *)(v13 + 16);
  v20 = *(_QWORD *)(v13 + 16);
  if ( a5 >= v20 )
  {
    WdLogSingleEntry1(1LL, v20);
    WdLogGlobalForLineNumber = 26613;
    goto LABEL_14;
  }
  if ( v18 > v20 - a5 )
  {
    WdLogSingleEntry1(1LL, v20);
    WdLogGlobalForLineNumber = 26621;
    goto LABEL_14;
  }
  v21 = 0;
  if ( (*((_DWORD *)v8 + 7) & 0x50) != 0 )
  {
    CacheInvalidationAddress = (struct VIDMM_MULTI_GLOBAL_ALLOC *)VIDMM_PARAVIRTUALIZATION_HEAP::GetCacheInvalidationAddress(
                                                                    v14,
                                                                    *((const struct VIDMM_HEAP_ALLOC **)v8 + 28));
    v21 = 1;
  }
  else if ( (**((_DWORD **)v8 + 46) & 8) != 0 )
  {
    CacheInvalidationAddress = (struct VIDMM_MULTI_GLOBAL_ALLOC *)*((_QWORD *)v8 + 26);
  }
  else
  {
    CacheInvalidationAddress = v10[2];
  }
  if ( CacheInvalidationAddress )
  {
    if ( *((_DWORD *)v8 + 18) == 2 && (*(_DWORD *)(v13 + 56) & 4) != 0 )
    {
      VIDMM_PROCESS_AUTOATTACH::VIDMM_PROCESS_AUTOATTACH((VIDMM_PROCESS_AUTOATTACH *)v25, v10[1], v21);
      v6 = VidMmFlushCpuCacheWorker((char *)CacheInvalidationAddress + a5, v18);
      VIDMM_PROCESS_AUTOATTACH::~VIDMM_PROCESS_AUTOATTACH((VIDMM_PROCESS_AUTOATTACH *)v25);
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, v8);
    WdLogGlobalForLineNumber = 26664;
    DxgkLogInternalTriageEvent(v23, 0x40000LL);
    v6 = -1073741811;
  }
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v24);
  return v6;
}
