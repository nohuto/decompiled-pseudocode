/*
 * XREFs of ?MapCpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@_N3PEAPEAXK@Z @ 0x140117910
 * Callers:
 *     ?MapCpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAXK@Z @ 0x14011787C (-MapCpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAXK@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x14009A394 (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::MapCpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_DEVICE *a3,
        struct VIDMM_MONITORED_FENCE_STORAGE *a4,
        bool a5,
        bool a6,
        void **a7,
        unsigned int a8)
{
  void **v8; // r13
  char *v11; // rbp
  char *v12; // r14
  char *i; // rax
  __int64 Pool2; // rax
  char *v15; // rsi
  __int64 *v16; // r15
  __int64 v17; // rax
  unsigned int v18; // r12d
  unsigned __int64 v19; // rbx
  __int64 v20; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v22; // edi
  char **v24; // rcx
  char *v25; // rax
  __int64 v26; // rcx
  void *v27; // rbp
  __int64 v28; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v29; // rax
  __int64 v30; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v31; // [rsp+B0h] [rbp+18h] BYREF
  struct VIDMM_MONITORED_FENCE_STORAGE *v32; // [rsp+B8h] [rbp+20h]

  v32 = a4;
  v31 = (unsigned __int64)a3;
  v8 = a7;
  *a7 = 0LL;
  if ( a2 && (*(_DWORD *)(*((_QWORD *)a2 + 9) + 408LL) & 0x100) != 0 )
  {
    if ( !*((_QWORD *)this + 26) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1219;
      DxgkLogInternalTriageEvent(v26, 262146LL);
    }
    *v8 = (void *)*((_QWORD *)this + 26);
    return 0LL;
  }
  else
  {
    v11 = (char *)this + 80;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    v12 = (char *)this + 48;
    *((_QWORD *)v11 + 1) = KeGetCurrentThread();
    for ( i = (char *)*((_QWORD *)this + 6); i != v12; i = *(char **)i )
    {
      v15 = i - 16;
      if ( a2 == *((struct VIDMM_PROCESS **)i - 1) )
      {
        ++*((_DWORD *)v15 + 8);
LABEL_14:
        *v8 = (void *)(*(_QWORD *)v15 + *((unsigned int *)v32 + 4));
        *((_QWORD *)v11 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v11, 0LL);
        KeLeaveCriticalRegion();
        return 0LL;
      }
    }
    Pool2 = ExAllocatePool2(64LL, 40LL, 1700882774LL);
    v15 = (char *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 32) = 1;
      v16 = (__int64 *)((char *)a2 + 16);
      *(_QWORD *)(Pool2 + 8) = a2;
      v17 = *((_QWORD *)a2 + 2);
      a7 = 0LL;
      v18 = a8;
      v30 = v17;
      v31 = 4096LL;
      if ( !a8 )
      {
        if ( PsGetProcessWow64Process(v17) || (v18 = 2, a5) )
          v18 = 4;
      }
      v19 = v31;
      v20 = *((_QWORD *)this + 14);
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      v22 = (*((__int64 (__fastcall **)(__int64, __int64, char *, _QWORD, unsigned __int64, void ***, unsigned __int64 *, int, _DWORD, unsigned int))VirtualMemoryInterface
             + 3))(
              v20,
              v30,
              v15,
              0LL,
              v19,
              &a7,
              &v31,
              2,
              0,
              v18);
      if ( v22 >= 0 )
      {
        if ( !a5 || !a6 || (v22 = VidMmiEnsureVirtualAddressRangeValid(*(void **)v15, v31), v22 >= 0) )
        {
          v24 = (char **)*((_QWORD *)v12 + 1);
          v25 = v15 + 16;
          if ( *v24 != v12 )
            __fastfail(3u);
          *(_QWORD *)v25 = v12;
          *((_QWORD *)v15 + 3) = v24;
          *v24 = v25;
          *((_QWORD *)v12 + 1) = v25;
          goto LABEL_14;
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1340;
      }
    }
    else
    {
      v22 = -1073741801;
      v16 = (__int64 *)((char *)a2 + 16);
    }
    *((_QWORD *)v11 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    if ( v15 )
    {
      v27 = *(void **)v15;
      if ( *(_QWORD *)v15 )
      {
        v28 = *v16;
        v29 = DxgkGetVirtualMemoryInterface();
        (*((void (__fastcall **)(__int64, void *))v29 + 4))(v28, v27);
      }
      ExFreePoolWithTag(v15, 0);
    }
    return (unsigned int)v22;
  }
}
