/*
 * XREFs of ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EEE@Z @ 0x140113A8C
 * Callers:
 *     ?AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400A9630 (-AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400CBEA0 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400CF348 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     RemoveVaRangeCb @ 0x1401139C4 (RemoveVaRangeCb.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1400389C0 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140038D60 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     Feature_3358814523__private_IsEnabledDeviceUsageNoInline @ 0x14004DC48 (Feature_3358814523__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1401061D4 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::RemoveVaRangeFromVad(
        CVirtualAddressAllocator *this,
        struct VIDMM_MAPPED_VA_RANGE *a2,
        char a3,
        char a4,
        unsigned __int8 a5)
{
  __int64 v5; // rsi
  int v7; // ecx
  __int64 **VidMmAllocFromOwner; // r8
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  char *v15; // rbx
  __int64 v16; // rbp
  __int64 v17; // rcx
  char **v18; // rax
  __int64 v19; // rdx
  char **v20; // rax

  v5 = *(_QWORD *)a2;
  v7 = *((_DWORD *)a2 + 18);
  if ( (v7 & 0x4000) != 0 )
  {
    RtlAvlRemoveNode(v5 + 24 * ((((unsigned __int64)*((unsigned int *)a2 + 18) >> 4) & 0x3F) + 4), (char *)a2 + 8);
    *((_DWORD *)a2 + 18) &= ~0x4000u;
    v7 = *((_DWORD *)a2 + 18);
  }
  VidMmAllocFromOwner = (__int64 **)GetVidMmAllocFromOwner(v7 & 0xF, *((_QWORD *)a2 + 8));
  if ( VidMmAllocFromOwner )
  {
    v12 = (_QWORD *)((char *)a2 + 32);
    v13 = *((_QWORD *)a2 + 4);
    if ( v13 )
    {
      if ( *(_QWORD **)(v13 + 8) != v12 )
        goto LABEL_26;
      v14 = (_QWORD *)*((_QWORD *)a2 + 5);
      if ( (_QWORD *)*v14 != v12 )
        goto LABEL_26;
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      *v12 = 0LL;
    }
    v15 = (char *)a2 + 48;
    if ( !*((_QWORD *)a2 + 6) )
      goto LABEL_16;
    v16 = **VidMmAllocFromOwner;
    if ( (unsigned int)Feature_3358814523__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !a5 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v16 + 192, 0LL);
      }
      v17 = *(_QWORD *)v15;
      if ( *(char **)(*(_QWORD *)v15 + 8LL) == v15 )
      {
        v18 = (char **)*((_QWORD *)a2 + 7);
        if ( *v18 == v15 )
        {
          *v18 = (char *)v17;
          *(_QWORD *)(v17 + 8) = v18;
          *(_QWORD *)v15 = 0LL;
          if ( a5 )
            goto LABEL_16;
          goto LABEL_15;
        }
      }
    }
    else
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v16 + 192, 0LL);
      v19 = *(_QWORD *)v15;
      if ( *(char **)(*(_QWORD *)v15 + 8LL) == v15 )
      {
        v20 = (char **)*((_QWORD *)a2 + 7);
        if ( *v20 == v15 )
        {
          *v20 = (char *)v19;
          *(_QWORD *)(v19 + 8) = v20;
          *(_QWORD *)v15 = 0LL;
LABEL_15:
          ExReleasePushLockExclusiveEx(v16 + 192, 0LL);
          KeLeaveCriticalRegion();
          goto LABEL_16;
        }
      }
    }
LABEL_26:
    __fastfail(3u);
  }
LABEL_16:
  --*(_DWORD *)(v5 + 76);
  if ( a4 )
    *(_QWORD *)a2 = 0LL;
  VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(a2);
  if ( a3 && (*(_BYTE *)(v5 + 72) & 0xF) == 3 && !*(_DWORD *)(v5 + 76) )
    CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(this, (struct VIDMM_VAD *)v5);
}
