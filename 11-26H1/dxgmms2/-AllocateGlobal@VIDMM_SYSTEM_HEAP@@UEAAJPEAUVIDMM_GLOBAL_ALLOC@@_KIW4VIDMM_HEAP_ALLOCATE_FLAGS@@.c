/*
 * XREFs of ?AllocateGlobal@VIDMM_SYSTEM_HEAP@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_KIW4VIDMM_HEAP_ALLOCATE_FLAGS@@PEAXW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAE@Z @ 0x1400ADC90
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x140099D34 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z.c)
 *     ?GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ @ 0x140110D54 (-GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ.c)
 */

__int64 __fastcall VIDMM_SYSTEM_HEAP::AllocateGlobal(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        char a5,
        PVOID Object,
        __int64 a7,
        __int64 *a8,
        _QWORD *a9,
        _BYTE *a10)
{
  _DWORD *v10; // rax
  int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // rsi
  int v17; // edx
  PVOID v18; // rcx
  int v19; // r8d
  unsigned int v20; // r8d
  int v21; // r15d
  unsigned int v22; // r15d
  void *CurrentPartitionHandle; // rax
  int v24; // eax
  void **v25; // rbp
  __int64 v26; // rcx
  PVOID v27; // rcx
  NTSTATUS inserted; // eax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v34; // rcx
  __int64 NewObject; // [rsp+20h] [rbp-78h]
  PHANDLE Handle; // [rsp+28h] [rbp-70h]
  unsigned __int64 *v37; // [rsp+30h] [rbp-68h]
  void **v38; // [rsp+38h] [rbp-60h]
  ULONG_PTR ViewSize[9]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v40; // [rsp+A8h] [rbp+10h] BYREF
  HANDLE v41; // [rsp+B0h] [rbp+18h] BYREF

  v10 = *(_DWORD **)(a2 + 368);
  ViewSize[0] = a3;
  v14 = *v10 & 0x20000000;
  v15 = operator new(56LL, 0x64316956u, 256LL);
  v16 = v15;
  if ( !v15 )
  {
    _InterlockedAdd(&dword_14008A8D0, 1u);
    WdLogSingleEntry1(6LL, a2);
    WdLogGlobalForLineNumber = 752;
    DxgkLogInternalTriageEvent(v34, 262145LL);
    LODWORD(v25) = -1073741801;
    goto LABEL_25;
  }
  v17 = *(_DWORD *)(v15 + 48) ^ ((unsigned __int8)*(_DWORD *)(v15 + 48) ^ (unsigned __int8)(*(_DWORD *)(a2 + 28) >> 2)) & 8;
  v18 = Object;
  *(_DWORD *)(v15 + 48) = v17;
  v19 = (**(_DWORD **)(a2 + 368) >> 2) & 1;
  *(_QWORD *)(v15 + 16) = a3;
  v20 = v17 & 0xFFFFFFFE | v19;
  *(_DWORD *)(v15 + 48) = v20;
  if ( v18 )
  {
    *(_QWORD *)v15 = v18;
    *(_DWORD *)(v15 + 48) = v20 | 2;
    ObfReferenceObject(v18);
    goto LABEL_13;
  }
  v40 = a3;
  v21 = (((v20 & 1) == 0) << 30) + 134479872;
  if ( (a5 & 1) != 0 )
  {
    v21 |= 0x80000u;
    v40 = (a3 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  }
  v22 = *(_DWORD *)(a1 + 20) | v21;
  CurrentPartitionHandle = VIDMM_PROCESS::GetCurrentPartitionHandle();
  v24 = MmCreateSection(v16, 0LL, 0LL, &v40, 4, v22, CurrentPartitionHandle, 0LL);
  v25 = (void **)v24;
  if ( v24 >= 0 )
  {
    if ( v14 || (*(_DWORD *)(v16 + 48) & 8) != 0 )
    {
      v27 = *(PVOID *)v16;
      v41 = 0LL;
      ObfReferenceObject(v27);
      inserted = ObInsertObject(*(PVOID *)v16, 0LL, 0, 0, 0LL, &v41);
      v25 = (void **)inserted;
      if ( inserted < 0 )
      {
        WdLogSingleEntry2(1LL, a2, inserted);
        v38 = 0LL;
        v37 = 0LL;
        Handle = v25;
        NewObject = a2;
        WdLogGlobalForLineNumber = 859;
        goto LABEL_20;
      }
      ObCloseHandle(v41, ((unsigned __int64)v41 & 0xFFFFFFFF80000000uLL) == 0);
      *(_DWORD *)(v16 + 48) |= 4u;
    }
LABEL_13:
    LODWORD(v25) = MmMapViewInSystemSpace(*(PVOID *)v16, (PVOID *)(v16 + 8), ViewSize);
    if ( (int)v25 < 0 )
    {
      _InterlockedAdd(&dword_14008A8D8, 1u);
      WdLogSingleEntry1(6LL, a2);
      WdLogGlobalForLineNumber = 876;
      v38 = 0LL;
      v37 = 0LL;
      v30 = 262145LL;
      Handle = 0LL;
      NewObject = a2;
LABEL_21:
      DxgkLogInternalTriageEvent(v29, v30);
      goto LABEL_22;
    }
    if ( (*(_DWORD *)(v16 + 48) & 8) == 0 )
      goto LABEL_23;
    v31 = operator new(24LL, 0x63326956u, 256LL);
    *(_QWORD *)(v16 + 24) = v31;
    if ( !v31 )
    {
      _InterlockedAdd(&dword_14008A8D4, 1u);
      WdLogSingleEntry1(6LL, a2);
      WdLogGlobalForLineNumber = 893;
      v38 = 0LL;
      v37 = 0LL;
      Handle = 0LL;
      NewObject = a2;
      DxgkLogInternalTriageEvent(v32, 262145LL);
      LODWORD(v25) = -1073741801;
      goto LABEL_22;
    }
    LODWORD(v25) = VIDMM_PROCESS::MapHostVirtualAddressToGuest(
                     *(VIDMM_PROCESS **)(a1 + 8),
                     *(_QWORD *)v16,
                     a3,
                     0LL,
                     4u,
                     (void **)(v31 + 8),
                     (unsigned __int64 *)(v31 + 16));
    if ( (int)v25 >= 0 )
    {
LABEL_23:
      *a10 = 1;
      *a9 = *(_QWORD *)(v16 + 8);
      *a8 = v16;
      return 0LL;
    }
    WdLogSingleEntry0(1LL);
    v38 = 0LL;
    v37 = 0LL;
    Handle = 0LL;
    NewObject = 909LL;
    WdLogGlobalForLineNumber = 909;
LABEL_20:
    v30 = 0x40000LL;
    goto LABEL_21;
  }
  _InterlockedAdd(&dword_14008A870, 1u);
  WdLogSingleEntry4(6LL, a2, v40, v22, v24);
  v38 = v25;
  v37 = (unsigned __int64 *)v22;
  Handle = (PHANDLE)v40;
  NewObject = a2;
  WdLogGlobalForLineNumber = 824;
  DxgkLogInternalTriageEvent(v26, 262145LL);
LABEL_22:
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, PHANDLE, unsigned __int64 *, void **))(*(_QWORD *)a1 + 136LL))(
    a1,
    v16,
    *(_QWORD *)(v16 + 8),
    0LL,
    NewObject,
    Handle,
    v37,
    v38);
LABEL_25:
  *a10 = 0;
  *a8 = 0LL;
  *a9 = 0LL;
  return (unsigned int)v25;
}
