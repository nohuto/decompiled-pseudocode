/*
 * XREFs of ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_ALLOC@@@Z @ 0x1400BAEFC
 * Callers:
 *     ?FreeGlobal@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX_N@Z @ 0x1400BAC40 (-FreeGlobal@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX_N@Z.c)
 * Callees:
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x14001970C (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14002C1F0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1400BAA9C (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1400FBCD4 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_PROCESS_HEAP::FreeSmallAllocation(VIDMM_PROCESS_HEAP *this, char *Entry)
{
  char *v2; // rdi
  __int64 *v3; // rsi
  _QWORD *v6; // rax
  void *v7; // rcx
  __int64 *v8; // r12
  char *v9; // rdx
  __int64 v10; // rax
  char v11; // bp
  __int64 *v12; // rsi
  char *v13; // r15
  __int64 v14; // r8
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v16; // r8
  _QWORD *v17; // rcx
  int v18; // edx
  __int64 v19; // rax
  int v20; // eax
  int v21; // [rsp+28h] [rbp-40h]
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF

  v2 = Entry + 56;
  v3 = (__int64 *)(Entry + 8);
  if ( g_IsInternalReleaseOrDbg )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v6[3] = *(_QWORD *)v2;
    v6[4] = *((_QWORD *)Entry + 2);
    v6[5] = *v3;
    WdLogGlobalForLineNumber = 1045;
  }
  if ( Entry[72] )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 21LL, this, Entry, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  DXGFASTMUTEX::Acquire((VIDMM_PROCESS_HEAP *)((char *)this + 16));
  v7 = (void *)*((_QWORD *)Entry + 4);
  v8 = v3;
  v9 = v2;
  if ( v7 )
  {
    MmUnsecureVirtualMemory(v7);
    v9 = Entry + 56;
    *((_QWORD *)Entry + 4) = 0LL;
    v8 = (__int64 *)(Entry + 8);
  }
  v10 = *v3;
  v11 = 1;
  v12 = v8;
  if ( *(_DWORD *)(v10 + 24) != 1 )
  {
    v13 = v2;
    v14 = *((_QWORD *)Entry + 2) + *(_QWORD *)(v10 + 32);
    v22 = v14;
    if ( !*(_QWORD *)(v10 + 56) )
    {
      v13 = v9;
      if ( !*(_QWORD *)(v10 + 88) )
      {
        v2 = Entry + 56;
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        (*((void (__fastcall **)(__int64, __int64 *, char *, __int64))VirtualMemoryInterface + 2))(
          -1LL,
          &v22,
          Entry + 56,
          0x4000LL);
        goto LABEL_13;
      }
      v12 = (__int64 *)(Entry + 8);
    }
    LOBYTE(v21) = 1;
    (*(void (__fastcall **)(VIDMM_PROCESS_HEAP *, char *, __int64, _QWORD, int, int))(*(_QWORD *)this + 32LL))(
      this,
      Entry,
      v14,
      *(_QWORD *)v2,
      4,
      v21);
    v2 = v13;
  }
LABEL_13:
  VIDMM_LINEAR_POOL::Free(*(VIDMM_LINEAR_POOL **)(*v8 + 72), *((PVOID *)Entry + 3));
  *(_QWORD *)(*((_QWORD *)this + 1) + 176LL) -= *(_QWORD *)v2;
  v17 = (_QWORD *)*((_QWORD *)this + 1);
  v18 = *(_DWORD *)(*v8 + 80);
  v19 = *(_QWORD *)v2;
  if ( v18 == 1 )
  {
    v17[25] -= v19;
  }
  else if ( v18 == 2 )
  {
    v17[27] -= v19;
  }
  else
  {
    v17[29] -= v19;
  }
  --*(_DWORD *)(*((_QWORD *)Entry + 1) + 24LL);
  if ( (byte_14008A201 & 0x10) != 0 )
  {
    v20 = *(_DWORD *)(*v12 + 80);
    if ( v20 != 3 && (unsigned int)(v20 - 4) > 2 )
      v11 = 0;
    McTemplateK0qxxx_EtwWriteTransfer(
      *v12,
      &EventDestroyProcessAllocationDetails,
      v16,
      *(_DWORD *)(*((_QWORD *)this + 1) + 24LL),
      (char)Entry,
      *((_QWORD *)Entry + 7),
      *(_QWORD *)((v11 != 0 ? 0x38 : 0) + *v12 + 32));
    v12 = (__int64 *)(Entry + 8);
  }
  if ( !*(_DWORD *)(*v12 + 24) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v17) + 24) = *v12;
      WdLogGlobalForLineNumber = 1158;
    }
    VIDMM_PROCESS_HEAP::FreeBlock(this, (struct _VIDMM_PROCESS_HEAP_BLOCK *)*v12);
  }
  ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 64), Entry);
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 2);
}
