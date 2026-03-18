/*
 * XREFs of ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x140357CC8
 * Callers:
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x140356CC0 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1403575E0 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_NI@Z @ 0x140045E34 (-VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDM.c)
 *     Feature_3472570682__private_IsEnabledDeviceUsageNoInline @ 0x140074858 (Feature_3472570682__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1402BF7C4 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1403986D4 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall MapGpuVirtualAddressToAllocation(struct ADAPTER_RENDER *a1, struct DXGALLOCATION *a2)
{
  DXGADAPTER *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r13
  int v7; // r15d
  int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // rsi
  struct DXGPROCESS *Current; // rax
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // rax
  const wchar_t *v16; // r9
  __int64 v18; // rax
  struct DXGPROCESS *v19; // rax
  int v20; // eax
  _BYTE v21[16]; // [rsp+50h] [rbp-69h] BYREF
  struct D3DDDI_MAPGPUVIRTUALADDRESS v22; // [rsp+60h] [rbp-59h] BYREF

  memset(&v22, 0, sizeof(v22));
  v4 = (DXGADAPTER *)*((_QWORD *)a1 + 2);
  v22.Protection.Value = 1LL;
  if ( DXGADAPTER::ReplicateGdiContent(v4) )
  {
    v6 = *((_QWORD *)a2 + 5);
    v7 = 0;
    v8 = 0;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGFASTMUTEX *const)(v6 + 80), 0);
    if ( (unsigned int)Feature_3472570682__private_IsEnabledDeviceUsageNoInline() )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
    v10 = *(_QWORD *)(v6 + 24);
    while ( v10 )
    {
      if ( *(_BYTE *)(*((_QWORD *)a1 + 2) + 209LL) )
      {
        Current = DXGPROCESS::GetCurrent(v9);
        v12 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)a1 + 2) + 4712LL),
                *((_DWORD *)Current + 122),
                *(const struct DXGDEVICE **)(v6 + 8),
                0,
                *(_DWORD *)(v10 + 20),
                &v22);
      }
      else
      {
        v12 = VIDMM_EXPORT::VidMmMapGpuVirtualAddress(
                *((VIDMM_EXPORT **)a1 + 95),
                *((struct VIDMM_GLOBAL **)a1 + 96),
                0LL,
                *(struct VIDMM_MULTI_ALLOC **)(v10 + 24),
                &v22,
                0,
                (*(_DWORD *)(v10 + 72) >> 12) & 0x3F);
      }
      v13 = v12;
      if ( v12 < 0 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 1754;
        goto LABEL_17;
      }
      v22.BaseAddress = v22.VirtualAddress;
      v9 = (*(_DWORD *)(v10 + 72) >> 12) & 0x3F;
      v14 = 1 << ((*(_DWORD *)(v10 + 72) >> 12) & 0x3F);
      if ( (v14 & v7) != 0 )
      {
        WdLogSingleEntry0(2LL);
        v15 = 1764LL;
        v16 = L"For GDI replication a resource should have only one allocation per physical adapter";
        goto LABEL_15;
      }
      v10 = *(_QWORD *)(v10 + 64);
      v7 |= v14;
      ++v8;
    }
    if ( v8 != *(_DWORD *)(*((_QWORD *)a1 + 2) + 296LL) )
    {
      WdLogSingleEntry0(2LL);
      v15 = 1773LL;
      v16 = L"For GDI replication a resource must have one allocation per physical adapter";
LABEL_15:
      WdLogGlobalForLineNumber = v15;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v16, v15, 0LL, 0LL, 0LL, 0LL);
      v13 = -1073741811;
LABEL_17:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v21);
      return v13;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v21);
    return 0LL;
  }
  v18 = *((_QWORD *)a1 + 2);
  if ( *(_BYTE *)(v18 + 209) )
  {
    v19 = DXGPROCESS::GetCurrent(v5);
    v20 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)a1 + 2) + 4712LL),
            *((_DWORD *)v19 + 122),
            *(const struct DXGDEVICE **)(*((_QWORD *)a2 + 5) + 8LL),
            0,
            *((_DWORD *)a2 + 5),
            &v22);
  }
  else
  {
    v20 = VIDMM_EXPORT::VidMmMapGpuVirtualAddress(
            *((VIDMM_EXPORT **)a1 + 95),
            *((struct VIDMM_GLOBAL **)a1 + 96),
            0LL,
            *((struct VIDMM_MULTI_ALLOC **)a2 + 3),
            &v22,
            0,
            *(_DWORD *)(v18 + 3188));
  }
  v13 = v20;
  if ( v20 >= 0 )
    return 0LL;
  WdLogSingleEntry1(3LL);
  WdLogGlobalForLineNumber = 1803;
  return v13;
}
