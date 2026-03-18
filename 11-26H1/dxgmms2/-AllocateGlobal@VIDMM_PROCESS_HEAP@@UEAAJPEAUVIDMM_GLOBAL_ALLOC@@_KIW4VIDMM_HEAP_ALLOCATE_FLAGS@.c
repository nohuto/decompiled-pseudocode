/*
 * XREFs of ?AllocateGlobal@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_KIW4VIDMM_HEAP_ALLOCATE_FLAGS@@PEAXW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAE@Z @ 0x1400B9D00
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x14001970C (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x140037998 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140038394 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x140043EF8 (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKKK@Z @ 0x1400A4AD8 (-VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKKK@Z.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAJ_KI_NW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAE@Z @ 0x1400BA5B8 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAJ_KI_NW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_PROCESS_HEAP::AllocateGlobal(
        __int64 a1,
        __int64 a2,
        SIZE_T a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        int a7,
        _QWORD *a8,
        PVOID *a9,
        _BYTE *a10)
{
  __int64 v10; // rdi
  _QWORD *v12; // rcx
  int v13; // r13d
  __int64 v14; // rbx
  __int64 v15; // r9
  _QWORD *v16; // rcx
  PVOID *v17; // rbx
  _BYTE *v18; // r8
  SIZE_T v19; // rdx
  unsigned int SmallAllocation; // ebx
  __int64 v21; // rcx
  __int64 v22; // r8
  _DWORD *v24; // rax
  int v25; // esi
  _DWORD *v26; // r14
  __int64 v27; // rdi
  __int64 v28; // rcx
  int v29; // edi
  unsigned int v30; // ecx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r8
  int v35; // ecx
  NTSTATUS inserted; // eax
  __int64 v37; // rdx
  NTSTATUS v38; // eax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  PVOID v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // r8
  _QWORD *v43; // rax
  _QWORD *v44; // rcx
  PVOID v45; // r9
  PVOID v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 NewObject; // [rsp+20h] [rbp-79h]
  PHANDLE Handle; // [rsp+28h] [rbp-71h]
  PHANDLE Handlea; // [rsp+28h] [rbp-71h]
  int Handleb; // [rsp+28h] [rbp-71h]
  __int64 v53; // [rsp+30h] [rbp-69h]
  __int64 v54; // [rsp+38h] [rbp-61h]
  PVOID Address; // [rsp+50h] [rbp-49h] BYREF
  PVOID Object; // [rsp+58h] [rbp-41h] BYREF
  int v57; // [rsp+60h] [rbp-39h]
  int v58; // [rsp+68h] [rbp-31h] BYREF
  __int64 v59; // [rsp+70h] [rbp-29h]
  char v60; // [rsp+78h] [rbp-21h]
  HANDLE v61; // [rsp+80h] [rbp-19h] BYREF
  HANDLE v62; // [rsp+88h] [rbp-11h]
  SIZE_T v63; // [rsp+90h] [rbp-9h] BYREF
  PPAGED_LOOKASIDE_LIST Lookaside; // [rsp+98h] [rbp-1h]
  int v65; // [rsp+E0h] [rbp+47h]
  SIZE_T Size; // [rsp+F0h] [rbp+57h] BYREF

  Size = a3;
  v10 = a4;
  v58 = -1;
  v59 = 0LL;
  if ( (qword_14008A010 & 2) != 0 )
  {
    v60 = 1;
    v58 = 8004;
    if ( (byte_14008A202 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 8004);
  }
  else
  {
    v60 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v13 = a5 & 4;
  Address = 0LL;
  Object = 0LL;
  v61 = 0LL;
  v57 = 0;
  v65 = 0;
  v62 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
    v12[3] = Size;
    v12[4] = v10;
    v12[5] = a1;
    WdLogGlobalForLineNumber = 295;
  }
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  if ( PsGetCurrentProcess(v12) != v14 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  v16 = a8;
  v17 = a9;
  v18 = a10;
  v19 = Size;
  *a8 = 0LL;
  *v17 = 0LL;
  *v18 = 0;
  if ( v19 < (unsigned int)dword_14008A478 )
  {
    LOBYTE(v15) = v13 != 0;
    SmallAllocation = VIDMM_PROCESS_HEAP::AllocateSmallAllocation(a1, v19, (unsigned int)v10, v15, a7, v16, v17, v18);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58);
    if ( v60 )
    {
      if ( (byte_14008A202 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v58);
    }
    return SmallAllocation;
  }
  Lookaside = (PPAGED_LOOKASIDE_LIST)(a1 + 64);
  v24 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 64));
  v25 = a7;
  v26 = v24;
  if ( !v24 )
  {
    LODWORD(v27) = -1073741801;
    _InterlockedIncrement(&dword_14008A744);
    WdLogSingleEntry0(6LL);
    Handlea = 0LL;
    NewObject = 332LL;
    WdLogGlobalForLineNumber = 332;
LABEL_41:
    v37 = 262145LL;
    goto LABEL_42;
  }
  memset(v24, 0, 0x70uLL);
  switch ( v25 )
  {
    case 3:
      goto LABEL_33;
    case 4:
LABEL_32:
      v35 = 134479872;
LABEL_34:
      Handleb = *(_DWORD *)(a1 + 288) | v35;
      v63 = Size;
      LODWORD(v27) = MmCreateSection(&Object, 0LL, 0LL, &v63, 4, Handleb, -1LL, 0LL);
      if ( (int)v27 < 0 )
      {
        Object = 0LL;
        _InterlockedIncrement(&dword_14008A810);
        WdLogSingleEntry0(6LL);
        Handlea = 0LL;
        WdLogGlobalForLineNumber = 374;
        NewObject = 374LL;
        goto LABEL_41;
      }
      ObfReferenceObject(Object);
      inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, &v61);
      v27 = inserted;
      if ( inserted < 0 )
      {
        WdLogSingleEntry2(1LL, Object, inserted);
        v37 = 0x40000LL;
        Handlea = (PHANDLE)v27;
        NewObject = (__int64)Object;
        WdLogGlobalForLineNumber = 394;
LABEL_42:
        DxgkLogInternalTriageEvent(v28, v37);
        if ( v25 != 3 && v25 != 4 )
        {
          if ( v25 != 5 && v25 != 6 )
          {
LABEL_46:
            if ( Address )
            {
              VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
              (*((void (__fastcall **)(__int64, PVOID *, SIZE_T *, __int64, __int64, PHANDLE, _QWORD, _QWORD))VirtualMemoryInterface
               + 2))(
                -1LL,
                &Address,
                &Size,
                0x8000LL,
                NewObject,
                Handlea,
                0LL,
                0LL);
            }
LABEL_54:
            if ( v26 )
              ExFreeToPagedLookasideList(Lookaside, v26);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58);
            if ( v60 && (byte_14008A202 & 1) != 0 )
              McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v58);
            return (unsigned int)v27;
          }
          if ( Address )
            MmUnmapViewInSystemSpace(Address);
        }
        v40 = Object;
        if ( Object )
        {
          if ( v61 )
          {
            ObCloseHandle(v61, ((unsigned __int64)v61 & 0xFFFFFFFF80000000uLL) == 0);
            v40 = Object;
          }
          ObfDereferenceObject(v40);
        }
        goto LABEL_54;
      }
      if ( (unsigned int)(v25 - 5) <= 1 )
      {
        v38 = MmMapViewInSystemSpace(Object, &Address, &Size);
        v27 = v38;
        if ( v38 < 0 )
        {
          _InterlockedIncrement(&dword_14008A80C);
          WdLogSingleEntry1(6LL, v38);
          Handlea = 0LL;
          NewObject = v27;
          WdLogGlobalForLineNumber = 407;
          goto LABEL_41;
        }
      }
      goto LABEL_60;
    case 5:
LABEL_33:
      v35 = 1208221696;
      goto LABEL_34;
    case 6:
      goto LABEL_32;
  }
  v29 = 4;
  if ( v25 != 2 )
    v29 = 1028;
  v30 = 8400896;
  v31 = 12288;
  v57 = v29;
  if ( v25 != 2 )
    v31 = 8400896;
  if ( !v13 )
    v30 = v31;
  v65 = v30;
  if ( (int)VidMmAllocateVirtualMemory(&Address, &Size, v30, v29, *(_DWORD *)(a1 + 288)) < 0 )
  {
    v65 = 12288;
    LODWORD(v27) = VidMmAllocateVirtualMemory(&Address, &Size, 0x3000u, v29, *(_DWORD *)(a1 + 288));
    if ( (int)v27 < 0 )
    {
      Address = 0LL;
      _InterlockedIncrement(&dword_14008A7E8);
      WdLogSingleEntry0(6LL);
      v33 = 454LL;
LABEL_31:
      Handlea = 0LL;
      NewObject = v33;
      WdLogGlobalForLineNumber = v33;
      DxgkLogInternalTriageEvent(v32, 262145LL);
      goto LABEL_46;
    }
  }
  v62 = MmSecureVirtualMemory(Address, Size, 4u);
  if ( !v62 )
  {
    LODWORD(v27) = -1073741801;
    _InterlockedIncrement(&dword_14008A7E8);
    WdLogSingleEntry0(6LL);
    v33 = 472LL;
    goto LABEL_31;
  }
LABEL_60:
  *v26 |= 1u;
  *((_QWORD *)v26 + 7) = Size;
  *((_QWORD *)v26 + 6) = v62;
  *((_BYTE *)v26 + 72) = 0;
  *((_QWORD *)v26 + 1) = Address;
  v26[4] = v57;
  v26[5] = v65;
  *((_QWORD *)v26 + 4) = Object;
  *((_QWORD *)v26 + 5) = v61;
  v43 = a8;
  v26[6] = v25;
  *((_QWORD *)v26 + 10) = 0LL;
  *v43 = v26;
  if ( (unsigned int)(v25 - 5) <= 1 )
    *v17 = Address;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 176LL) += Size;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL) += Size;
  ++*(_DWORD *)(*(_QWORD *)(a1 + 8) + 196LL);
  v44 = *(_QWORD **)(a1 + 8);
  if ( v25 == 1 )
  {
    v44[25] += Size;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 208LL) += Size;
  }
  else if ( v25 == 2 )
  {
    v44[27] += Size;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 224LL) += Size;
  }
  else
  {
    v44[29] += Size;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 240LL) += Size;
  }
  if ( (byte_14008A202 & 4) != 0 )
  {
    v45 = Address;
    LODWORD(v54) = 0;
    if ( (unsigned int)(v25 - 3) <= 3 )
      v45 = Object;
    LODWORD(Handle) = v25;
    LODWORD(v53) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
    McTemplateK0pxqqt_EtwWriteTransfer(
      (unsigned int)v53,
      &EventCreateProcessAllocation,
      v34,
      v45,
      Size,
      Handle,
      v53,
      v54);
  }
  if ( (byte_14008A201 & 0x10) != 0 )
  {
    v46 = Address;
    if ( (unsigned int)(v25 - 3) <= 3 )
      v46 = Object;
    McTemplateK0qxxx_EtwWriteTransfer(
      (__int64)v46,
      &EventCreateProcessAllocationDetails,
      v34,
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
      (char)v26,
      Size,
      (char)v46);
  }
  *a10 = 1;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58);
  if ( v60 && (byte_14008A202 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer(v47, &EventProfilerExit, v48, v58);
  return 0LL;
}
