/*
 * XREFs of ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJW4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400F75BC
 * Callers:
 *     ?Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAX_KW4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400F7A30 (-Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAX_KW4VIDMM_PAGE_PRIORITY@@_N@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKKK@Z @ 0x1400A4AD8 (-VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKKK@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1400F3100 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F658C (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1400F7508 (-Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z.c)
 *     ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400F7884 (-Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?VidMmiSetPriorityForMemoryPages@@YAXPEAX_KW4VIDMM_PAGE_PRIORITY@@@Z @ 0x1400F7960 (-VidMmiSetPriorityForMemoryPages@@YAXPEAX_KW4VIDMM_PAGE_PRIORITY@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x140109FF0 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Reset(__int64 a1, unsigned int a2, char a3)
{
  int v3; // r14d
  unsigned int v5; // edi
  char *v7; // rcx
  __int64 v8; // r8
  char v9; // r15
  struct VIDMM_RECYCLE_RANGE *v10; // rsi
  VIDMM_RECYCLE_HEAP_MGR *v11; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v12; // r12
  VIDMM_RECYCLE_HEAP_MGR *v13; // rdx
  __int64 v14; // rcx
  int v15; // edx
  int v16; // esi
  int v17; // eax
  NTSTATUS v18; // eax
  int v20; // eax
  unsigned __int64 v21; // [rsp+30h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-8h] BYREF
  ULONG_PTR NumberOfBytesToUnlock; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v24; // [rsp+88h] [rbp+48h]
  void *v25; // [rsp+98h] [rbp+58h] BYREF

  v24 = a2;
  v3 = 0;
  v21 = *(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 48);
  v5 = 0;
  v25 = 0LL;
  WdLogSingleEntry1(4LL, a1);
  WdLogGlobalForLineNumber = 3917;
  if ( *(_BYTE *)(a1 + 121) )
  {
    v5 = -1071775472;
LABEL_27:
    if ( (byte_14008A201 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)v7, &EventPerformanceWarning, v8, 18);
LABEL_19:
    if ( !v3 )
      return v5;
LABEL_20:
    VIDMM_RECYCLE_MULTIRANGE::Unmap((VIDMM_RECYCLE_MULTIRANGE *)a1);
    return v5;
  }
  v9 = 0;
  v10 = *(struct VIDMM_RECYCLE_RANGE **)(a1 + 64);
  v11 = *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(a1 + 80) + 32LL);
  v12 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v11 + 1);
  do
  {
    if ( *((_DWORD *)v10 + 16) == 3 )
    {
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v11, v10);
      LOBYTE(NumberOfBytesToUnlock) = 0;
      v20 = VIDMM_RECYCLE_RANGE::DebouncedUnlock(v10, (bool *)&NumberOfBytesToUnlock);
      if ( v20 < 0 )
      {
        WdLogSingleEntry3(
          3LL,
          v10,
          v20,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL) + 8LL) + 8LL) + 16LL));
        WdLogGlobalForLineNumber = 3955;
        VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v12, v10);
        v9 = 1;
      }
    }
    if ( v10 == *(struct VIDMM_RECYCLE_RANGE **)(a1 + 72) )
      break;
    v13 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v10 + 15);
    v14 = *((_QWORD *)v10 + 9);
    v10 = 0LL;
    v11 = (VIDMM_RECYCLE_HEAP_MGR *)(v14 + 72);
    if ( v13 != v11 )
      v10 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v13 - 120);
  }
  while ( !v9 );
  v15 = **(_DWORD **)(*(_QWORD *)(a1 + 80) + 32LL);
  if ( v15 == 3 || (unsigned int)(v15 - 4) <= 2 )
  {
    v16 = 1028;
    if ( v15 != 3 )
      v16 = 4;
    VIDMM_RECYCLE_MULTIRANGE::Map((VIDMM_RECYCLE_MULTIRANGE *)a1, 0LL, v21, 1u);
    if ( *(_BYTE *)(a1 + 120) && (v7 = *(char **)(a1 + 128)) != 0LL )
    {
      v7 += *(_QWORD *)(a1 + 136);
      v3 = 1;
      v25 = v7;
    }
    else
    {
      v5 = -1071775472;
    }
    if ( (v5 & 0x80000000) != 0 )
    {
LABEL_18:
      if ( v5 != -1071775472 )
        goto LABEL_19;
      goto LABEL_27;
    }
  }
  else
  {
    v25 = *(void **)(a1 + 48);
    v16 = 4;
    if ( v15 != 2 )
      v16 = 1028;
  }
  v17 = VidMmAllocateVirtualMemory(&v25, &v21, 0x80000u, v16, 0);
  v5 = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry1(2LL, v17);
    WdLogGlobalForLineNumber = 4033;
    goto LABEL_18;
  }
  VidMmiSetPriorityForMemoryPages(v25, v21, v24);
  if ( !a3 )
    goto LABEL_19;
  if ( v3 )
    goto LABEL_20;
  BaseAddress = v25;
  NumberOfBytesToUnlock = v21;
  v18 = ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &NumberOfBytesToUnlock, 1u);
  WdLogSingleEntry3(4LL, BaseAddress, NumberOfBytesToUnlock, v18);
  WdLogGlobalForLineNumber = 4058;
  return v5;
}
