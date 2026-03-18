/*
 * XREFs of ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1400CC50C
 * Callers:
 *     ?IterateHwReservedRangesCallback@@YAJ_K0PEAX@Z @ 0x14009FA70 (-IterateHwReservedRangesCallback@@YAJ_K0PEAX@Z.c)
 *     ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1400CDDC0 (-VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_PAGING_QUEUE@@PEA.c)
 *     ?VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE@@@Z @ 0x14011D998 (-VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESS.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1400CCB80 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1400CD7F4 (-InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1400CD8CC (-CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x140105A6C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::ReserveVirtualAddressRange(
        CVirtualAddressAllocator *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        enum _D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE a7,
        unsigned __int64 a8,
        unsigned __int8 a9,
        unsigned __int64 *a10,
        struct VIDMM_MAPPED_VA_RANGE **a11,
        char a12)
{
  unsigned __int8 v12; // di
  __int64 v17; // rax
  struct VIDMM_MAPPED_VA_RANGE **v18; // rsi
  unsigned __int64 v19; // r13
  struct _RTL_AVL_TREE *v20; // rdx
  int v21; // eax
  struct VIDMM_VAD *v22; // rdi
  unsigned int v23; // ebp
  unsigned int v24; // r8d
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE v25; // r14
  struct VIDMM_MAPPED_VA_RANGE *ReservedVaRange; // rax
  unsigned __int64 *v27; // rax
  _BYTE v29[32]; // [rsp+50h] [rbp-48h] BYREF
  struct VIDMM_VAD *v30; // [rsp+A0h] [rbp+8h] BYREF

  v12 = a12;
  if ( a12 )
  {
    v17 = *((_QWORD *)this + 13);
    if ( v17 )
    {
      if ( (*(_DWORD *)(v17 + 136) & 2) != 0 )
        v12 = *(_BYTE *)(*((_QWORD *)this + 12) + 40096LL) != 0 ? a12 : 0;
    }
  }
  v18 = a11;
  v30 = 0LL;
  if ( a11 )
    *a11 = 0LL;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v29, (struct _KTHREAD **)this + 8);
  v19 = a5;
  v21 = CVirtualAddressAllocator::AllocateVirtualAddressRange(this, v20, a2, a3, a4, a5, a6, &v30, v12);
  v22 = v30;
  v23 = v21;
  if ( v21 < 0 )
  {
    WdLogSingleEntry5(3LL, this, a2, a3, a4, v19);
    WdLogGlobalForLineNumber = 2135;
  }
  else
  {
    CVirtualAddressAllocator::InsertVadToReservedList(this, v30);
    if ( a7 == D3DDDIGPUVIRTUALADDRESS_RESERVE_NO_COMMIT )
    {
LABEL_14:
      v27 = a10;
      *((_DWORD *)v22 + 18) ^= ((unsigned __int16)*((_DWORD *)v22 + 18) ^ (unsigned __int16)(a9 << 11)) & 0x800;
      *v27 = *((_QWORD *)v22 + 3);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
      return 0LL;
    }
    if ( (unsigned int)a7 > D3DDDIGPUVIRTUALADDRESS_RESERVE_ZERO )
    {
      WdLogSingleEntry2(3LL, this, a7);
      WdLogGlobalForLineNumber = 2123;
      v23 = -1073741811;
    }
    else
    {
      v25.0 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)5LL;
      if ( a7 != D3DDDIGPUVIRTUALADDRESS_RESERVE_ZERO )
        v25.0 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)8LL;
      ReservedVaRange = CVirtualAddressAllocator::CreateReservedVaRange(
                          this,
                          v22,
                          v24,
                          *((_QWORD *)v22 + 3),
                          *((_QWORD *)v22 + 4) - *((_QWORD *)v22 + 3),
                          v25,
                          a8);
      if ( ReservedVaRange )
      {
        *v18 = ReservedVaRange;
        goto LABEL_14;
      }
      v23 = -1073741801;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry3)(3LL, this, a2, v25.0);
      WdLogGlobalForLineNumber = 2116;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
  if ( v22 )
    CVirtualAddressAllocator::FreeVirtualAddressRange(this, *((_QWORD *)v22 + 3));
  return v23;
}
