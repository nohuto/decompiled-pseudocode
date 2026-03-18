/*
 * XREFs of ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1400BAA9C
 * Callers:
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAJ_KI_NW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAE@Z @ 0x1400BA5B8 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAJ_KI_NW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDM.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_ALLOC@@@Z @ 0x1400BAEFC (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_ALLOC@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x140043EF8 (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x14004F82C (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1400F8394 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::FreeBlock(VIDMM_PROCESS_HEAP *this, struct _VIDMM_PROCESS_HEAP_BLOCK *a2)
{
  char *v2; // rax
  __int64 v4; // r8
  char **v6; // rdx
  int v7; // eax
  __int64 *v8; // rsi
  int v9; // eax
  _QWORD *v10; // rcx
  void *v11; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // rcx
  bool v16; // al
  VIDMM_LINEAR_POOL *v17; // rcx

  v2 = (char *)a2 + 8;
  v4 = *((_QWORD *)a2 + 1);
  if ( *(struct _VIDMM_PROCESS_HEAP_BLOCK **)(v4 + 8) != (struct _VIDMM_PROCESS_HEAP_BLOCK *)((char *)a2 + 8)
    || (v6 = (char **)*((_QWORD *)a2 + 2), *v6 != v2) )
  {
    __fastfail(3u);
  }
  *v6 = (char *)v4;
  *(_QWORD *)(v4 + 8) = v6;
  v7 = *((_DWORD *)a2 + 20);
  if ( v7 == 3 || v7 == 4 )
    goto LABEL_7;
  if ( (unsigned int)(v7 - 5) <= 1 )
  {
    MmUnmapViewInSystemSpace(*((PVOID *)a2 + 4));
LABEL_7:
    ObCloseHandle(*((HANDLE *)a2 + 12), (*((_QWORD *)a2 + 12) & 0xFFFFFFFF80000000uLL) == 0);
    VidMmDereferenceObjectAsync(*((PVOID *)a2 + 11));
    v8 = (__int64 *)((char *)a2 + 40);
    goto LABEL_8;
  }
  v11 = (void *)*((_QWORD *)a2 + 7);
  if ( v11 )
    MmUnsecureVirtualMemory(v11);
  v8 = (__int64 *)((char *)a2 + 40);
  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
  (*((void (__fastcall **)(__int64, char *, char *, __int64))VirtualMemoryInterface + 2))(
    -1LL,
    (char *)a2 + 32,
    (char *)a2 + 40,
    0x8000LL);
LABEL_8:
  *(_QWORD *)(*((_QWORD *)this + 1) + 184LL) -= *v8;
  --*(_DWORD *)(*((_QWORD *)this + 1) + 192LL);
  v9 = *((_DWORD *)a2 + 20);
  v10 = (_QWORD *)*((_QWORD *)this + 1);
  if ( v9 == 1 )
  {
    v10[26] -= *v8;
  }
  else
  {
    v13 = v9 == 2;
    v14 = *v8;
    if ( v13 )
      v10[28] -= v14;
    else
      v10[30] -= v14;
  }
  if ( (byte_14008A202 & 4) != 0 )
  {
    v15 = *((unsigned int *)a2 + 20);
    v16 = (_DWORD)v15 == 3 || (unsigned int)(v15 - 4) <= 2;
    McTemplateK0pxqqt_EtwWriteTransfer(
      v15,
      &EventDestroyProcessAllocation,
      *v8,
      *(_QWORD *)((char *)a2 + (v16 ? 0x38 : 0) + 32),
      *v8,
      *((_DWORD *)a2 + 20),
      *(_DWORD *)(*((_QWORD *)this + 1) + 24LL),
      1);
  }
  v17 = (VIDMM_LINEAR_POOL *)*((_QWORD *)a2 + 9);
  if ( v17 )
    VIDMM_LINEAR_POOL::`scalar deleting destructor'(v17);
  operator delete(a2);
}
