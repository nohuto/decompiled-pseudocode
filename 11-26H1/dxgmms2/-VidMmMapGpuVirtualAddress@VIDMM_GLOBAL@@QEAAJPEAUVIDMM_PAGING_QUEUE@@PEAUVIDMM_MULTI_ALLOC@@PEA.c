/*
 * XREFs of ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_NI@Z @ 0x14010ED7C
 * Callers:
 *     VidMmMapGpuVirtualAddress @ 0x14003B380 (VidMmMapGpuVirtualAddress.c)
 *     ?VidMmMapContextAllocationCb@VIDMM_GLOBAL@@QEAA_KPEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z @ 0x14010EC44 (-VidMmMapContextAllocationCb@VIDMM_GLOBAL@@QEAA_KPEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_N@Z @ 0x14010EFB0 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_AL.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmMapGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_MULTI_ALLOC *a3,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a4,
        bool a5,
        unsigned int a6)
{
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA Value; // rax
  __int64 v10; // rax
  int v12; // r14d
  unsigned int i; // ebp
  __int64 v14; // rcx

  Value = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)a4->Protection.Value;
  if ( (*(_BYTE *)&Value & 8) != 0 )
  {
    if ( (*(_BYTE *)&Value & 7) != 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 20008;
      return 3221225485LL;
    }
    v10 = *(_BYTE *)&Value & 4;
  }
  else
  {
    v10 = *(_BYTE *)&Value & 4;
    if ( !(_DWORD)v10 )
    {
      if ( a3 )
        goto LABEL_4;
      goto LABEL_13;
    }
  }
  if ( a3 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 20016;
    return 3221225485LL;
  }
LABEL_13:
  if ( (a4->Protection.Value & 8) == 0 && !v10 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 20022;
    return 3221225485LL;
  }
LABEL_4:
  a4->BaseAddress &= 0xFFFFFFFFFFFFF000uLL;
  a4->MinimumAddress &= 0xFFFFFFFFFFFFF000uLL;
  a4->MaximumAddress &= 0xFFFFFFFFFFFFF000uLL;
  if ( a2 )
    return VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(this, a2, a3, a4, a5);
  v12 = 0;
  if ( a6 == -1 )
  {
    for ( i = 0; i < *((_DWORD *)this + 1738); ++i )
    {
      v12 = VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
              this,
              *(struct VIDMM_PAGING_QUEUE **)(*(_QWORD *)(*((_QWORD *)a3 + 1) + 72LL) + 32LL * i),
              a3,
              a4,
              0);
      if ( v12 < 0 )
      {
        WdLogSingleEntry1(1LL, i);
        WdLogGlobalForLineNumber = 20048;
        goto LABEL_24;
      }
      a4->BaseAddress = a4->VirtualAddress;
    }
  }
  else
  {
    v12 = VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
            this,
            *(struct VIDMM_PAGING_QUEUE **)(*(_QWORD *)(*((_QWORD *)a3 + 1) + 72LL) + 32LL * a6),
            a3,
            a4,
            0);
    if ( v12 < 0 )
    {
      WdLogSingleEntry1(1LL, a6);
      WdLogGlobalForLineNumber = 20060;
LABEL_24:
      DxgkLogInternalTriageEvent(v14, 0x40000LL);
    }
  }
  return (unsigned int)v12;
}
