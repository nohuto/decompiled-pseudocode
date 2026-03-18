/*
 * XREFs of ?InitializeForHardware@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1401F64DC
 * Callers:
 *     ?Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1403717C0 (-Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?SysMmDestroyPasidDevice@@YAJPEAU_IOMMU_DMA_PASID_DEVICE@@@Z @ 0x140286F24 (-SysMmDestroyPasidDevice@@YAJPEAU_IOMMU_DMA_PASID_DEVICE@@@Z.c)
 */

__int64 __fastcall DXGPROCESS_ADAPTER_INFO_PASID_DATA::InitializeForHardware(
        DXGPROCESS_ADAPTER_INFO_PASID_DATA *this,
        struct DXGADAPTER *a2)
{
  _QWORD *v3; // rbx
  __int64 i; // rbp
  __int64 v6; // r13
  __int64 v7; // r12
  int v8; // eax
  __int64 v9; // r15
  int v10; // eax
  int v11; // eax

  v3 = (_QWORD *)((char *)this + 24);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 4); i = (unsigned int)(i + 1) )
  {
    v6 = *((_QWORD *)a2 + 379);
    v7 = 352LL * (unsigned int)i;
    if ( (*(_DWORD *)(v7 + v6 + 16) & 1) != 0 )
    {
      v3 = (_QWORD *)((char *)this + 24);
      v8 = ExShareAddressSpaceWithDevice(
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + v6 + 8) + 64LL) + 152LL),
             *((_QWORD *)this + 3) + 4 * i);
      v9 = v8;
      if ( v8 < 0 )
      {
        WdLogSingleEntry2(2LL, a2, v8);
        WdLogGlobalForLineNumber = 7021;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to get PASID for the adapter 0x%I64x. Status: 0x%I64x",
          (__int64)a2,
          v9,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v9;
      }
    }
    if ( (*(_DWORD *)(v7 + v6 + 16) & 0x40) != 0 )
    {
      v10 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))qword_140169690)(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 28) + 360LL) + 48 * i + 24),
              *((_QWORD *)this + 4) + 8 * i,
              *v3 + 4 * i);
      v9 = v10;
      if ( v10 < 0 )
      {
        WdLogSingleEntry2(2LL, a2, v10);
        WdLogGlobalForLineNumber = 7030;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to create Pasid device for adapter 0x%I64x. Status: 0x%I64x",
          (__int64)a2,
          v9,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v9;
      }
      v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1401696A0)(
              *((_QWORD *)this + 5),
              *(_QWORD *)(*((_QWORD *)this + 4) + 8 * i));
      v9 = v11;
      if ( v11 < 0 )
      {
        WdLogSingleEntry2(2LL, a2, v11);
        WdLogGlobalForLineNumber = 7036;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to attach Pasid device for adapter 0x%I64x. Status: 0x%I64x",
          (__int64)a2,
          v9,
          0LL,
          0LL,
          0LL);
        SysMmDestroyPasidDevice(*(struct _IOMMU_DMA_PASID_DEVICE **)(*((_QWORD *)this + 4) + 8 * i));
        *(_QWORD *)(*((_QWORD *)this + 4) + 8 * i) = 0LL;
        return (unsigned int)v9;
      }
    }
    else
    {
      v3 = (_QWORD *)((char *)this + 24);
    }
  }
  return 0LL;
}
