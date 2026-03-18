/*
 * XREFs of ?FreeGlobal@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX_N@Z @ 0x1400BAC40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x14001970C (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ??0VIDMM_PROCESS_AUTOATTACH@@QEAA@PEAVVIDMM_PROCESS@@_N@Z @ 0x14003B56C (--0VIDMM_PROCESS_AUTOATTACH@@QEAA@PEAVVIDMM_PROCESS@@_N@Z.c)
 *     ??1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ @ 0x14003BA5C (--1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ.c)
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x140043EF8 (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_ALLOC@@@Z @ 0x1400BAEFC (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_ALLOC@@@Z.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1400F8394 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_PROCESS_HEAP::FreeGlobal(VIDMM_PROCESS_HEAP *this, PVOID *Entry, void *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  PVOID *v7; // rbx
  int v8; // eax
  __int64 v9; // r8
  __int64 *v10; // r14
  int v11; // eax
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  bool v15; // zf
  __int64 v16; // rax
  int v17; // eax
  bool v18; // cc
  char *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // [rsp+28h] [rbp-80h]
  __int64 v22; // [rsp+30h] [rbp-78h]
  _BYTE v23[64]; // [rsp+40h] [rbp-68h] BYREF

  VIDMM_PROCESS_AUTOATTACH::VIDMM_PROCESS_AUTOATTACH(
    (VIDMM_PROCESS_AUTOATTACH *)v23,
    *((struct VIDMM_PROCESS **)this + 1),
    1);
  v5 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( PsGetCurrentProcess(v6) != v5 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  if ( (*(_DWORD *)Entry & 1) == 0 )
  {
    VIDMM_PROCESS_HEAP::FreeSmallAllocation(this, Entry);
    goto LABEL_27;
  }
  v7 = Entry + 1;
  v8 = *((_DWORD *)Entry + 6);
  if ( v8 != 3 && v8 != 4 )
  {
    if ( (unsigned int)(v8 - 5) > 1 )
    {
      MmUnsecureVirtualMemory(Entry[6]);
      v10 = (__int64 *)(Entry + 7);
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, char *, char *, __int64))VirtualMemoryInterface + 2))(
        -1LL,
        (char *)Entry + 8,
        (char *)Entry + 56,
        0x8000LL);
      goto LABEL_9;
    }
    MmUnmapViewInSystemSpace(*v7);
  }
  ObCloseHandle(Entry[5], ((unsigned __int64)Entry[5] & 0xFFFFFFFF80000000uLL) == 0);
  VidMmDereferenceObjectAsync(Entry[4]);
  v10 = (__int64 *)(Entry + 7);
LABEL_9:
  *(_QWORD *)(*((_QWORD *)this + 1) + 184LL) -= *v10;
  *(_QWORD *)(*((_QWORD *)this + 1) + 176LL) -= *v10;
  --*(_DWORD *)(*((_QWORD *)this + 1) + 196LL);
  v11 = *((_DWORD *)Entry + 6);
  v12 = (_QWORD *)*((_QWORD *)this + 1);
  if ( v11 == 1 )
  {
    v12[25] -= *v10;
    v13 = (_QWORD *)*((_QWORD *)this + 1);
    v13[26] -= *v10;
  }
  else
  {
    v15 = v11 == 2;
    v16 = *v10;
    if ( v15 )
    {
      v12[27] -= v16;
      v13 = (_QWORD *)*((_QWORD *)this + 1);
      v13[28] -= *v10;
    }
    else
    {
      v12[29] -= v16;
      v13 = (_QWORD *)*((_QWORD *)this + 1);
      v13[30] -= *v10;
    }
  }
  if ( (byte_14008A201 & 0x10) != 0 )
  {
    v17 = *((_DWORD *)Entry + 6);
    if ( v17 == 3 || (v18 = (unsigned int)(v17 - 4) <= 2, v19 = (char *)(Entry + 1), v18) )
      v19 = (char *)(Entry + 4);
    McTemplateK0qxxx_EtwWriteTransfer(
      (__int64)v13,
      &EventDestroyProcessAllocationDetails,
      v9,
      *(_DWORD *)(*((_QWORD *)this + 1) + 24LL),
      (char)Entry,
      *v10,
      *(_QWORD *)v19);
  }
  if ( (byte_14008A202 & 4) != 0 )
  {
    v20 = *((unsigned int *)Entry + 6);
    if ( (_DWORD)v20 == 3 || (unsigned int)(v20 - 4) <= 2 )
      v7 = Entry + 4;
    LODWORD(v22) = *(_DWORD *)(*((_QWORD *)this + 1) + 24LL);
    LODWORD(v21) = *((_DWORD *)Entry + 6);
    McTemplateK0pxqqt_EtwWriteTransfer(v20, &EventDestroyProcessAllocation, *v10, *v7, *v10, v21, v22, 0);
  }
  ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 64), Entry);
LABEL_27:
  VIDMM_PROCESS_AUTOATTACH::~VIDMM_PROCESS_AUTOATTACH((VIDMM_PROCESS_AUTOATTACH *)v23);
}
