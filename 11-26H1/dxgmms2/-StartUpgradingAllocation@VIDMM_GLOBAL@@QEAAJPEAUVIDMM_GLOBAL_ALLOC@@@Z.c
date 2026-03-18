/*
 * XREFs of ?StartUpgradingAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A7958
 * Callers:
 *     ?DoUpgrade64KPages@@YAXPEAUVIDMM_WORKER_THREAD@@@Z @ 0x140099884 (-DoUpgrade64KPages@@YAXPEAUVIDMM_WORKER_THREAD@@@Z.c)
 * Callees:
 *     McTemplateK0ppxx_EtwWriteTransfer @ 0x14003886C (McTemplateK0ppxx_EtwWriteTransfer.c)
 *     ?VidMmGetFullPfnArray@@YAPEB_KPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14003E1A4 (-VidMmGetFullPfnArray@@YAPEB_KPEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memmove @ 0x14005B8C0 (memmove.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1_N2@Z @ 0x14010BB78 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1_N2@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::StartUpgradingAllocation(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  SIZE_T v5; // r13
  unsigned int *v6; // r15
  __int64 v7; // r14
  SIZE_T v8; // rax
  SIZE_T v9; // rax
  SIZE_T v10; // r15
  void *v11; // rcx
  __int64 Pool2; // rax
  const unsigned __int64 *FullPfnArray; // rax
  unsigned int v14; // ecx
  unsigned int v15; // r14d
  unsigned int v16; // eax
  unsigned int v17; // r15d
  __int64 v18; // rax
  _BYTE *v19; // r14
  unsigned int v20; // r14d
  __int64 v21; // rax
  unsigned int i; // r14d
  unsigned int v23; // ecx
  SIZE_T v24; // rdx
  SIZE_T v25; // rax
  SIZE_T v26; // r12
  SIZE_T v27; // r14
  unsigned int v28; // r15d
  __int64 v29; // r8
  struct _MDL *v30; // r9
  unsigned int v32; // [rsp+40h] [rbp-B8h]
  __int64 v33; // [rsp+48h] [rbp-B0h]
  __int64 v34; // [rsp+50h] [rbp-A8h]
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-68h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
  v6 = (unsigned int *)((char *)this + 44664);
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0ppxx_EtwWriteTransfer(
      *(_QWORD *)(*((_QWORD *)a2 + 6) + 16LL),
      &VidMmUpgradeAllocationStart,
      *((_QWORD *)a2 + 6),
      a2,
      v5,
      v5 / *v6,
      *(_QWORD *)(*((_QWORD *)a2 + 6) + 16LL));
  *((_QWORD *)this + 5579) = a2;
  *((_QWORD *)this + 5570) = 0LL;
  v7 = *(_QWORD *)(*((_QWORD *)a2 + 6) + 16LL);
  v33 = v7;
  *((_QWORD *)this + 5572) = v7;
  *((_QWORD *)this + 5588) = 0LL;
  v34 = ((v7 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL) - v7;
  v8 = v5;
  if ( (unsigned __int64)*v6 + v34 < v5 )
    v8 = *v6 + v34;
  *((_QWORD *)this + 5571) = v8;
  *((_QWORD *)this + 5576) = v8;
  *((_QWORD *)this + 5573) = v7 + v8;
  *((_DWORD *)this + 11162) = 0;
  v9 = MmSizeOfMdl(0LL, v5);
  v10 = v9;
  v11 = (void *)*((_QWORD *)this + 5577);
  if ( v11 )
  {
    if ( v9 <= *((_QWORD *)this + 5578) )
      goto LABEL_10;
    ExFreePoolWithTag(v11, 0);
    *((_QWORD *)this + 5578) = 0LL;
  }
  Pool2 = ExAllocatePool2(64LL, v10, 1630562646LL);
  *((_QWORD *)this + 5577) = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  *((_QWORD *)this + 5578) = v10;
  *(_QWORD *)Pool2 = 0LL;
  *(_WORD *)(Pool2 + 8) = 8 * (((v5 + (v7 & 0xFFF) + 4095) >> 12) + 6);
  *(_WORD *)(Pool2 + 10) = 0;
  *(_QWORD *)(Pool2 + 32) = v7 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(Pool2 + 44) = v7 & 0xFFF;
  *(_DWORD *)(Pool2 + 40) = v5;
  FullPfnArray = VidMmGetFullPfnArray(a2);
  memmove((void *)(*((_QWORD *)this + 5577) + 48LL), FullPfnArray, 8 * (v5 >> 12));
LABEL_10:
  v14 = *((_DWORD *)this + 11166);
  v15 = v5 / v14 + 1;
  v32 = v15;
  v16 = *((_DWORD *)this + 11164);
  if ( v15 > v16 || v14 != *((_DWORD *)this + 11165) )
  {
    *((_DWORD *)this + 11165) = v14;
    if ( *((_QWORD *)this + 5584) )
    {
      v17 = 0;
      if ( v16 )
      {
        do
        {
          v18 = *((_QWORD *)this + 5584);
          v19 = *(_BYTE **)(v18 + 8LL * v17);
          if ( v19 )
          {
            if ( (v19[10] & 2) != 0 )
              MmUnlockPages(*(PMDL *)(v18 + 8LL * v17));
            ExFreePoolWithTag(v19, 0);
          }
          ++v17;
        }
        while ( v17 < *((_DWORD *)this + 11164) );
        v15 = v32;
      }
      ExFreePoolWithTag(*((PVOID *)this + 5584), 0);
    }
    v20 = v15 + 5;
    v21 = ExAllocatePool2(64LL, 8LL * v20, 1630562646LL);
    *((_QWORD *)this + 5584) = v21;
    if ( v21 )
    {
      *((_DWORD *)this + 11164) = v20;
      for ( i = 0; i < *((_DWORD *)this + 11164); ++i )
      {
        v23 = *((_DWORD *)this + 11165);
        v24 = v23 + 0x10000;
        if ( i )
          v24 = v23;
        v25 = MmSizeOfMdl(0LL, v24);
        *(_QWORD *)(*((_QWORD *)this + 5584) + 8LL * i) = ExAllocatePool2(64LL, v25, 1630562646LL);
        if ( !*(_QWORD *)(*((_QWORD *)this + 5584) + 8LL * i) )
          return 3221225495LL;
      }
      goto LABEL_28;
    }
    return 3221225495LL;
  }
LABEL_28:
  v26 = v5;
  v27 = v34 + *((unsigned int *)this + 11165);
  v28 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(*((_QWORD *)a2 + 6) + 8LL) + 16LL), &ApcState);
  v29 = v33;
  while ( v26 && v28 < *((_DWORD *)this + 11164) )
  {
    v30 = *(struct _MDL **)(*((_QWORD *)this + 5584) + 8LL * v28);
    if ( v27 >= v26 )
      v27 = v26;
    v30->Next = 0LL;
    v30->Size = 8 * (((v27 + (v29 & 0xFFF) + 4095) >> 12) + 6);
    v30->MdlFlags = 0;
    v30->StartVa = (PVOID)(v29 & 0xFFFFFFFFFFFFF000uLL);
    v30->ByteOffset = v29 & 0xFFF;
    v30->ByteCount = v27;
    MmProbeAndLockPages(v30, 0, (LOCK_OPERATION)(~(unsigned __int8)(*((_DWORD *)a2 + 6) >> 5) & 2));
    v26 -= v27;
    v29 = v27 + v33;
    v33 += v27;
    v27 = *((unsigned int *)this + 11165);
    ++v28;
  }
  *((_DWORD *)this + 11163) = v28;
  VIDMM_GLOBAL::UnlockAllocation(this, *((struct VIDMM_LOCAL_ALLOC **)a2 + 6), 0LL, v5, 0, 0);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 27) + 88LL))(*((_QWORD *)a2 + 27));
  KeUnstackDetachProcess(&ApcState);
  *((_DWORD *)a2 + 6) |= 0x80000000;
  *((_QWORD *)a2 + 8) = *((_QWORD *)this + 5577);
  return 0LL;
}
