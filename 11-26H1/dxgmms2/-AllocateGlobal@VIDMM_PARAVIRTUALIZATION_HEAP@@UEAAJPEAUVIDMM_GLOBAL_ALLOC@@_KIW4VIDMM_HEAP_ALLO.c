/*
 * XREFs of ?AllocateGlobal@VIDMM_PARAVIRTUALIZATION_HEAP@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_KIW4VIDMM_HEAP_ALLOCATE_FLAGS@@PEAXW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAE@Z @ 0x1400B4EB0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x140104998 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 */

__int64 __fastcall VIDMM_PARAVIRTUALIZATION_HEAP::AllocateGlobal(
        VIDMM_PROCESS **a1,
        __int64 a2,
        SIZE_T a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        _QWORD *a9,
        _BYTE *a10)
{
  PVOID MappedSystemVa; // rbp
  __int64 v14; // rax
  __int64 v15; // r14
  int v16; // ecx
  unsigned int v17; // r8d
  int v18; // edx
  int v19; // eax
  PMDL PagesForMdl; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // rcx
  __int64 v27; // rcx
  MEMORY_CACHING_TYPE CacheType[2]; // [rsp+20h] [rbp-48h]
  ULONG Flags[2]; // [rsp+28h] [rbp-40h]
  __int64 v30; // [rsp+30h] [rbp-38h]
  __int64 v31; // [rsp+38h] [rbp-30h]

  MappedSystemVa = 0LL;
  v14 = operator new(40LL, 0x62326956u, 256LL);
  v15 = v14;
  if ( !v14 )
  {
    _InterlockedIncrement(dword_14008A8E8);
    WdLogSingleEntry1(6LL, a2);
    WdLogGlobalForLineNumber = 478;
    DxgkLogInternalTriageEvent(v27, 262145LL);
    LODWORD(v23) = -1073741801;
    return (unsigned int)v23;
  }
  v16 = *(_DWORD *)(v14 + 32);
  *(_QWORD *)(v14 + 8) = a3;
  v17 = *(_DWORD *)(a2 + 28);
  v18 = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(v17 >> 4)) & 1;
  *(_DWORD *)(v14 + 32) = v18;
  v19 = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)(*(_DWORD *)(a2 + 28) >> 5)) & 2;
  *(_DWORD *)(v15 + 32) = v19;
  if ( (v17 & 0x10) == 0 )
  {
    if ( (v19 & 2) == 0 )
    {
      LODWORD(v23) = -1073741822;
      goto LABEL_16;
    }
    goto LABEL_14;
  }
  PagesForMdl = MmAllocatePagesForMdlEx(
                  0LL,
                  (PHYSICAL_ADDRESS)-1LL,
                  0LL,
                  a3,
                  (MEMORY_CACHING_TYPE)(2 - ((**(_DWORD **)(a2 + 368) & 4) != 0)),
                  4u);
  *(_QWORD *)v15 = PagesForMdl;
  if ( PagesForMdl )
  {
    if ( (PagesForMdl->MdlFlags & 5) != 0 )
      MappedSystemVa = PagesForMdl->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000010u);
    if ( !MappedSystemVa )
    {
      WdLogSingleEntry0(1LL);
      v22 = 506LL;
      goto LABEL_5;
    }
    v24 = VIDMM_PROCESS::MapHostAddressesToGuest(
            a1[1],
            *(struct _MDL **)v15,
            a3,
            (void **)(v15 + 16),
            (unsigned __int64 *)(v15 + 24));
    v23 = v24;
    if ( v24 < 0 )
    {
      WdLogSingleEntry1(1LL, v24);
      v31 = 0LL;
      v30 = 0LL;
      *(_QWORD *)Flags = 0LL;
      *(_QWORD *)CacheType = v23;
      WdLogGlobalForLineNumber = 518;
      DxgkLogInternalTriageEvent(v25, 0x40000LL);
      goto LABEL_16;
    }
LABEL_14:
    *a8 = v15;
    *a9 = MappedSystemVa;
    *a10 = 1;
    return 0LL;
  }
  WdLogSingleEntry0(1LL);
  v22 = 498LL;
LABEL_5:
  v31 = 0LL;
  v30 = 0LL;
  *(_QWORD *)Flags = 0LL;
  *(_QWORD *)CacheType = v22;
  WdLogGlobalForLineNumber = v22;
  DxgkLogInternalTriageEvent(v21, 0x40000LL);
  LODWORD(v23) = -1073741801;
LABEL_16:
  (*((void (__fastcall **)(VIDMM_PROCESS **, __int64, PVOID, _QWORD, MEMORY_CACHING_TYPE *, ULONG *, __int64, __int64))*a1
   + 17))(
    a1,
    v15,
    MappedSystemVa,
    0LL,
    *(MEMORY_CACHING_TYPE **)CacheType,
    *(ULONG **)Flags,
    v30,
    v31);
  return (unsigned int)v23;
}
