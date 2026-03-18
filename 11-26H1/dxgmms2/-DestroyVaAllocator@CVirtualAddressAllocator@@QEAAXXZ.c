/*
 * XREFs of ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x140104C9C
 * Callers:
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x14009B8C0 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x14009CB9C (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400C7AF4 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x140104B4C (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1401294CC (--1VIDMM_PROCESS@@QEAA@XZ.c)
 * Callees:
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x14000471C (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003EE84 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x140104E78 (-FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1401050F8 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 */

void __fastcall CVirtualAddressAllocator::DestroyVaAllocator(CVirtualAddressAllocator *this)
{
  __int64 v1; // rax
  struct _RTL_BALANCED_NODE *v3; // rcx
  struct _RTL_BALANCED_NODE *v4; // rcx
  __int64 v5; // rax
  VIDMM_DEVICE *v6; // rcx
  struct _RTL_BALANCED_NODE *v7; // rdx
  struct _RTL_BALANCED_NODE **v8; // rax
  ULONG_PTR ParentValue; // rdi
  unsigned __int64 v10; // rdi
  struct _RTL_BALANCED_NODE *v11; // rdx
  struct _RTL_BALANCED_NODE **v12; // rax
  ULONG_PTR v13; // rdi
  unsigned __int64 v14; // rdi
  char *v15; // rdi
  unsigned int i; // esi
  VIDMM_PAGE_DIRECTORY **v17; // r14

  v1 = *((_QWORD *)this + 13);
  if ( v1 )
  {
    v15 = (char *)this + 96;
    if ( byte_14008A202 < 0 )
      McTemplateK0ppp_EtwWriteTransfer(
        (__int64)this,
        &DestroyGpuVirtualAddressAllocator,
        *(_QWORD *)(*(_QWORD *)(v1 + 72) + 64LL),
        this,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 72) + 64LL) + 80LL),
        *(_QWORD *)(*(_QWORD *)v15 + 24LL));
    for ( i = 0; i < *(_DWORD *)(*(_QWORD *)v15 + 6952LL); ++i )
    {
      v17 = (VIDMM_PAGE_DIRECTORY **)(*((_QWORD *)this + 16) + 32LL * i);
      if ( v17 && *v17 )
      {
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(*v17, this, 0LL);
        *v17 = 0LL;
      }
    }
  }
  v3 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v7 = v3;
          if ( !v3->Children[0] )
            break;
          v3 = v3->Children[0];
          v7->Children[0] = 0LL;
        }
        v8 = &v3->Children[1];
        if ( !v3->Children[1] )
          break;
        v3 = v3->Children[1];
        *v8 = 0LL;
      }
      ParentValue = v3->ParentValue;
      FreeVadAvl(v3, this);
      v10 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v10 )
        break;
      v3 = (struct _RTL_BALANCED_NODE *)v10;
    }
  }
  *((_QWORD *)this + 6) = 0LL;
  v4 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v11 = v4;
          if ( !v4->Children[0] )
            break;
          v4 = v4->Children[0];
          v11->Children[0] = 0LL;
        }
        v12 = &v4->Children[1];
        if ( !v4->Children[1] )
          break;
        v4 = v4->Children[1];
        *v12 = 0LL;
      }
      v13 = v4->ParentValue;
      FreeVadAvl(v4, this);
      v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v14 )
        break;
      v4 = (struct _RTL_BALANCED_NODE *)v14;
    }
  }
  *((_QWORD *)this + 7) = 0LL;
  v5 = *((_QWORD *)this + 13);
  if ( v5 )
  {
    if ( (*(_DWORD *)(v5 + 136) & 2) == 0 )
    {
      v6 = (VIDMM_DEVICE *)*((_QWORD *)this + 14);
      if ( v6 )
        VIDMM_DEVICE::`scalar deleting destructor'(v6);
    }
  }
  operator delete(*((void **)this + 16));
  operator delete(this);
}
