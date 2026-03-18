/*
 * XREFs of ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_N@Z @ 0x14010EFB0
 * Callers:
 *     ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_NI@Z @ 0x14010ED7C (-VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEA.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14002E900 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     Feature_3358814523__private_IsEnabledDeviceUsageNoInline @ 0x14004DC48 (Feature_3358814523__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsageNoInline @ 0x14004DCBC (Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400CB248 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1400CC7D4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400CF280 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEBU_DXGK_ADL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1400E4860 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUE.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x140105EE0 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_PAGING_QUEUE@@_K@Z @ 0x140115C54 (-RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 ***a3,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a4,
        bool a5)
{
  D3DGPU_SIZE_T *p_SizeInPages; // rdi
  D3DGPU_SIZE_T SizeInPages; // r8
  int v8; // r10d
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  unsigned __int64 *v11; // r12
  VIDMM_GLOBAL *v13; // rdx
  __int64 v14; // r9
  D3DGPU_SIZE_T OffsetInPages; // rax
  D3DGPU_SIZE_T v16; // rcx
  __int64 result; // rax
  D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE *p_Protection; // r15
  VIDMM_PROCESS *v19; // r13
  __int64 v20; // rcx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  struct CVirtualAddressAllocator *v22; // rbp
  __int64 v23; // r8
  __int64 v24; // rax
  volatile signed __int32 *v25; // rdi
  bool v26; // zf
  VIDMM_GLOBAL *v27; // r15
  unsigned int v28; // esi
  struct VIDMM_PAGING_QUEUE *v29; // rcx
  struct _DXGK_ADL *BaseAddress; // [rsp+28h] [rbp-B0h]
  unsigned __int64 *MinimumAddress; // [rsp+30h] [rbp-A8h]
  struct VIDMM_VAD_PENDING_OPERATION *MaximumAddress; // [rsp+38h] [rbp-A0h]
  _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE v33; // [rsp+48h] [rbp-90h]
  UINT64 DriverProtection; // [rsp+50h] [rbp-88h]
  struct VIDMM_VAD_PENDING_OPERATION *v35; // [rsp+80h] [rbp-58h] BYREF
  D3DGPU_SIZE_T v36; // [rsp+88h] [rbp-50h]
  unsigned int v39; // [rsp+F0h] [rbp+18h]
  unsigned int v40; // [rsp+F8h] [rbp+20h]
  unsigned int v41; // [rsp+100h] [rbp+28h]

  p_SizeInPages = &a4->SizeInPages;
  SizeInPages = a4->SizeInPages;
  v40 = (*((_DWORD *)a2 + 28) >> 5) & 0x1F;
  v8 = 4096;
  v39 = 4096;
  v9 = SizeInPages << 12;
  v10 = 0LL;
  v36 = SizeInPages << 12;
  v11 = (unsigned __int64 *)((unsigned __int64)&a4->PagingFenceValue & -(__int64)a5);
  v41 = 0;
  v13 = this;
  if ( a3 )
  {
    v14 = ***a3;
    if ( !SizeInPages )
    {
      v9 = *(_QWORD *)(v14 + 16);
      v36 = v9;
    }
    if ( *((_BYTE *)a3 + 24) )
      a4->Protection.Value &= ~1uLL;
    OffsetInPages = a4->OffsetInPages;
    v16 = *(_QWORD *)(v14 + 16) >> 12;
    if ( OffsetInPages >= v16 )
    {
      WdLogSingleEntry1(3LL, a4->OffsetInPages);
      WdLogGlobalForLineNumber = 19838;
      return 3221225485LL;
    }
    if ( v16 - OffsetInPages < v9 >> 12 && (*((_BYTE *)v13 + 41065) & 2) == 0 )
    {
      WdLogSingleEntry1(3LL, SizeInPages);
      WdLogGlobalForLineNumber = 19849;
      return 3221225485LL;
    }
    p_SizeInPages = &a4->SizeInPages;
    v41 = 1;
    p_Protection = &a4->Protection;
    if ( *(_DWORD *)(v14 + 32) > 0x1000u )
      v8 = *(_DWORD *)(v14 + 32);
    v39 = v8;
    v19 = (VIDMM_PROCESS *)(*a3)[1];
  }
  else
  {
    v20 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
    if ( v20 )
      v19 = *(VIDMM_PROCESS **)(v20 + 8);
    else
      v19 = 0LL;
    v13 = this;
    p_Protection = &a4->Protection;
    if ( (*(_BYTE *)&a4->Protection.0 & 4) != 0 )
      v41 = 6;
  }
  if ( !v9 )
  {
    WdLogSingleEntry1(3LL, *p_SizeInPages);
    WdLogGlobalForLineNumber = 19871;
    return 3221225485LL;
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              v19,
                              *(_DWORD *)(*((_QWORD *)v13 + 3) + 240LL),
                              0xFFFFFFFF);
  v22 = VirtualAddressAllocator;
  if ( !VirtualAddressAllocator )
  {
    WdLogSingleEntry0(3LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 19880;
    return result;
  }
  DriverProtection = a4->DriverProtection;
  v33.0 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)p_Protection->Value;
  MaximumAddress = (struct VIDMM_VAD_PENDING_OPERATION *)a4->MaximumAddress;
  MinimumAddress = (unsigned __int64 *)a4->MinimumAddress;
  BaseAddress = (struct _DXGK_ADL *)a4->BaseAddress;
  v23 = a4->OffsetInPages << 12;
  v35 = 0LL;
  v24 = CVirtualAddressAllocator::MapVirtualAddressRange(
          VirtualAddressAllocator,
          (struct _RTL_AVL_TREE *)a3,
          v23,
          v41,
          v36,
          (unsigned __int64)BaseAddress,
          (unsigned __int64)MinimumAddress,
          (unsigned __int64)MaximumAddress,
          v39,
          v33,
          DriverProtection,
          v40,
          (void **)&v35,
          1,
          1);
  v25 = (volatile signed __int32 *)v24;
  if ( !v24 )
  {
    WdLogSingleEntry0(2LL);
    result = 3221225473LL;
    WdLogGlobalForLineNumber = 19906;
    return result;
  }
  v26 = (*(_BYTE *)&p_Protection->0 & 8) == 0;
  a4->VirtualAddress = *(_QWORD *)(v24 + 104);
  a4->PagingFenceValue = 0LL;
  if ( v26 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v24 + 136));
    v27 = this;
    v28 = VIDMM_GLOBAL::CommitVirtualAddressRange(
            this,
            v22,
            a2,
            (struct VIDMM_MAPPED_VA_RANGE *)v24,
            0,
            (const struct _DXGK_ADL *)&xmmword_140060B68,
            v11,
            v35);
    if ( v28 == 259 )
    {
      v29 = a2;
      if ( a3 && (*((_DWORD *)a3 + 7) & 0x20) != 0 )
      {
        a3[98] = (__int64 **)a2;
        a3[101] = (__int64 **)*v11;
      }
      goto LABEL_32;
    }
  }
  else
  {
    if ( (unsigned int)Feature_3358814523__private_IsEnabledDeviceUsageNoInline()
      && (unsigned int)Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsageNoInline() )
    {
      _InterlockedIncrement(v25 + 34);
    }
    v27 = this;
    v28 = VIDMM_GLOBAL::UncommitVirtualAddressRange(this, v22, (struct VIDMM_MAPPED_VA_RANGE *)v25, 0, v35);
  }
  v29 = a2;
LABEL_32:
  if ( v11 )
    v10 = *v11;
  VIDMM_GLOBAL::RecordVaPagingHistoryMapGpuVa(v27, v19, (struct VIDMM_MAPPED_VA_RANGE *)v25, v29, v10);
  VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe((VIDMM_MAPPED_VA_RANGE *)v25, (struct _KTHREAD **)v22);
  return v28;
}
