/*
 * XREFs of ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@_N@Z @ 0x1400B9644
 * Callers:
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAJ_KI_NW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAE@Z @ 0x1400BA5B8 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAJ_KI_NW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDM.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x140043EF8 (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x14004F82C (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKKK@Z @ 0x1400A4AD8 (-VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKKK@Z.c)
 *     ?GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4VIDMM_PROCESS_HEAP_MAPPING@@@Z @ 0x1400BB304 (-GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4VIDMM_PROCESS_HEAP_MAPPING@@@Z.c)
 *     ??0VIDMM_LINEAR_POOL@@QEAA@PEAX@Z @ 0x1400BF628 (--0VIDMM_LINEAR_POOL@@QEAA@PEAX@Z.c)
 *     ?Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX1@ZP6A_N1@Z@Z @ 0x1400BFD04 (-Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX1@ZP6A_N1@Z@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::AllocateBlock(
        __int64 a1,
        SIZE_T a2,
        unsigned int a3,
        unsigned int a4,
        __int64 *a5,
        char a6)
{
  unsigned __int64 v7; // rcx
  unsigned int v9; // ebx
  SIZE_T v10; // rcx
  VIDMM_LINEAR_POOL *v11; // r15
  void *v12; // r12
  int v13; // edi
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rcx
  HANDLE v18; // rax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  NTSTATUS inserted; // eax
  NTSTATUS v24; // eax
  VIDMM_LINEAR_POOL *v25; // rax
  VIDMM_LINEAR_POOL *v26; // rax
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  int v34; // ebx
  _QWORD *v35; // rax
  __int64 v36; // rcx
  PVOID v37; // r9
  __int64 BlockListHead; // rax
  _QWORD *v39; // r8
  __int64 v40; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 NewObject; // [rsp+20h] [rbp-50h]
  PHANDLE Handle; // [rsp+28h] [rbp-48h]
  __int64 v45; // [rsp+30h] [rbp-40h]
  __int64 v46; // [rsp+38h] [rbp-38h]
  PVOID Object; // [rsp+50h] [rbp-20h] BYREF
  SIZE_T Size; // [rsp+58h] [rbp-18h] BYREF
  HANDLE v49; // [rsp+60h] [rbp-10h] BYREF
  SIZE_T v50; // [rsp+68h] [rbp-8h] BYREF
  PVOID Address; // [rsp+B8h] [rbp+48h] BYREF
  int v52; // [rsp+C0h] [rbp+50h]

  v7 = a2 + a3;
  v52 = 0;
  v9 = 0;
  Address = 0LL;
  if ( v7 <= (unsigned int)dword_14008A47C )
    v7 = (unsigned int)dword_14008A47C;
  Object = 0LL;
  v49 = 0LL;
  v10 = (v7 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  *a5 = 0LL;
  Size = v10;
  v11 = 0LL;
  v12 = 0LL;
  if ( v10 < a2 )
    goto LABEL_58;
  if ( a4 != 3 )
  {
    if ( a4 == 4 )
    {
LABEL_23:
      v19 = 134479872;
      goto LABEL_25;
    }
    if ( a4 != 5 )
    {
      if ( a4 != 6 )
      {
        v9 = 8400896;
        v13 = 4;
        if ( a4 != 2 )
          v13 = 1028;
        v14 = 12288;
        if ( a4 != 2 )
          v14 = 8400896;
        v52 = v13;
        if ( !a6 )
          v9 = v14;
        if ( dword_14008A308 )
          v9 &= ~0x1000u;
        if ( (int)VidMmAllocateVirtualMemory(&Address, &Size, v9, v13, *(_DWORD *)(a1 + 288)) < 0 )
        {
          v9 &= ~0x800000u;
          v15 = VidMmAllocateVirtualMemory(&Address, &Size, v9, v13, *(_DWORD *)(a1 + 288));
          v16 = v15;
          if ( v15 < 0 )
          {
            Address = 0LL;
            _InterlockedIncrement(&dword_14008A748);
            WdLogSingleEntry1(6LL, v15);
            v46 = 0LL;
            v45 = 0LL;
            Handle = 0LL;
            NewObject = v16;
            WdLogGlobalForLineNumber = 2058;
            DxgkLogInternalTriageEvent(v17, 262145LL);
LABEL_63:
            if ( v12 )
              MmUnsecureVirtualMemory(v12);
            if ( Address )
            {
              VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
              (*((void (__fastcall **)(__int64, PVOID *, SIZE_T *, __int64, __int64, PHANDLE, __int64, __int64))VirtualMemoryInterface
               + 2))(
                -1LL,
                &Address,
                &Size,
                0x8000LL,
                NewObject,
                Handle,
                v45,
                v46);
              Address = 0LL;
            }
LABEL_73:
            if ( v11 )
              VIDMM_LINEAR_POOL::`scalar deleting destructor'(v11);
            return (unsigned int)v16;
          }
          v13 = v52;
        }
        if ( (v9 & 0x1000) != 0 )
        {
          v18 = MmSecureVirtualMemory(Address, Size, 4u);
          v52 = v13;
          v12 = v18;
          if ( !v18 )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 2079;
            LODWORD(v16) = -1073741801;
            goto LABEL_63;
          }
        }
        goto LABEL_34;
      }
      goto LABEL_23;
    }
  }
  v19 = 1208221696;
LABEL_25:
  v20 = *(_DWORD *)(a1 + 288) | v19;
  v50 = v10;
  LODWORD(v16) = MmCreateSection(&Object, 0LL, 0LL, &v50, 4, v20, -1LL, 0LL);
  if ( (int)v16 < 0 )
  {
    Object = 0LL;
    _InterlockedIncrement(&dword_14008A810);
    WdLogSingleEntry0(6LL);
    v46 = 0LL;
    v45 = 0LL;
    Handle = 0LL;
    WdLogGlobalForLineNumber = 1978;
    NewObject = 1978LL;
LABEL_27:
    v22 = 262145LL;
LABEL_28:
    DxgkLogInternalTriageEvent(v21, v22);
LABEL_59:
    if ( a4 != 3 && a4 != 4 )
    {
      if ( a4 != 5 && a4 != 6 )
        goto LABEL_63;
      if ( Address )
        MmUnmapViewInSystemSpace(Address);
    }
    if ( Object )
    {
      if ( v49 )
        ObCloseHandle(v49, ((unsigned __int64)v49 & 0xFFFFFFFF80000000uLL) == 0);
      ObfDereferenceObject(Object);
    }
    goto LABEL_73;
  }
  ObfReferenceObject(Object);
  inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, &v49);
  v16 = inserted;
  if ( inserted < 0 )
  {
    WdLogSingleEntry2(1LL, Object, inserted);
    WdLogGlobalForLineNumber = 1998;
    v46 = 0LL;
    v22 = 0x40000LL;
    v45 = 0LL;
    Handle = (PHANDLE)v16;
    NewObject = (__int64)Object;
    goto LABEL_28;
  }
  if ( a4 - 5 <= 1 )
  {
    v24 = MmMapViewInSystemSpace(Object, &Address, &Size);
    v16 = v24;
    if ( v24 < 0 )
    {
      _InterlockedIncrement(&dword_14008A80C);
      WdLogSingleEntry1(6LL, v24);
      WdLogGlobalForLineNumber = 2011;
      v46 = 0LL;
      v45 = 0LL;
      Handle = 0LL;
      NewObject = v16;
      goto LABEL_27;
    }
  }
LABEL_34:
  v25 = (VIDMM_LINEAR_POOL *)operator new(320LL, 0x37316956u, 64LL);
  if ( !v25 || (v26 = VIDMM_LINEAR_POOL::VIDMM_LINEAR_POOL(v25, 0LL), (v11 = v26) == 0LL) )
  {
    _InterlockedIncrement(&dword_14008A74C);
    WdLogSingleEntry0(6LL);
    v32 = 2094LL;
    goto LABEL_57;
  }
  v27 = VIDMM_LINEAR_POOL::Init(v26, Size, 0, 0LL, 0LL);
  v16 = v27;
  if ( v27 < 0 )
  {
    _InterlockedIncrement(&dword_14008A750);
    WdLogSingleEntry1(6LL, v27);
    WdLogGlobalForLineNumber = 2104;
    v46 = 0LL;
    v45 = 0LL;
    Handle = 0LL;
    NewObject = v16;
    goto LABEL_27;
  }
  v28 = operator new(104LL, 0x31316956u, 256LL);
  v30 = v28;
  if ( !v28 )
  {
    _InterlockedIncrement(&dword_14008A754);
    WdLogSingleEntry0(6LL);
    v32 = 2116LL;
LABEL_57:
    v46 = 0LL;
    v45 = 0LL;
    Handle = 0LL;
    NewObject = v32;
    WdLogGlobalForLineNumber = v32;
    DxgkLogInternalTriageEvent(v31, 262145LL);
LABEL_58:
    LODWORD(v16) = -1073741801;
    goto LABEL_59;
  }
  *(_QWORD *)v28 = a1;
  *(_DWORD *)(v28 + 24) = 0;
  *(_QWORD *)(v28 + 32) = Address;
  *(_QWORD *)(v28 + 40) = Size;
  v33 = 2;
  v34 = (v9 >> 23) & 1;
  *(_QWORD *)(v30 + 72) = v11;
  *(_QWORD *)(v30 + 56) = v12;
  *(_DWORD *)(v30 + 80) = a4;
  if ( a4 != 2 )
    v33 = 0;
  *(_DWORD *)(v30 + 48) = v52;
  *(_DWORD *)(v30 + 64) = v33 | v34;
  *(_QWORD *)(v30 + 88) = Object;
  *(_QWORD *)(v30 + 96) = v49;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL) + 24) = v30;
    WdLogGlobalForLineNumber = 2140;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL) += *(_QWORD *)(v30 + 40);
  ++*(_DWORD *)(*(_QWORD *)(a1 + 8) + 192LL);
  v35 = *(_QWORD **)(a1 + 8);
  v36 = *(_QWORD *)(v30 + 40);
  if ( a4 == 1 )
  {
    v35[26] += v36;
  }
  else if ( a4 == 2 )
  {
    v35[28] += v36;
  }
  else
  {
    v35[30] += v36;
  }
  if ( (byte_14008A202 & 4) != 0 )
  {
    v37 = Address;
    LODWORD(v46) = 1;
    if ( a4 - 3 <= 3 )
      v37 = Object;
    LODWORD(Handle) = a4;
    LODWORD(v45) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
    McTemplateK0pxqqt_EtwWriteTransfer(
      (unsigned int)v45,
      &EventCreateProcessAllocation,
      v29,
      v37,
      Size,
      Handle,
      v45,
      v46);
  }
  BlockListHead = VIDMM_PROCESS_HEAP::GetBlockListHead(a1, a4, v30 + 8);
  v40 = *(_QWORD *)BlockListHead;
  if ( *(_QWORD *)(*(_QWORD *)BlockListHead + 8LL) != BlockListHead )
    __fastfail(3u);
  v39[1] = BlockListHead;
  *v39 = v40;
  *(_QWORD *)(v40 + 8) = v39;
  *(_QWORD *)BlockListHead = v39;
  *a5 = v30;
  return (unsigned int)v16;
}
