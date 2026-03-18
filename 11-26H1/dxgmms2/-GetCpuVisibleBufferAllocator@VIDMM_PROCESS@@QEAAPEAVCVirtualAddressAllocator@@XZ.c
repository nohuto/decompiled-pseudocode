/*
 * XREFs of ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x140104B4C
 * Callers:
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x140099D34 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1401048C4 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x140104998 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x140104B4C (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0CVirtualAddressAllocator@@QEAA@XZ @ 0x1400C7AA0 (--0CVirtualAddressAllocator@@QEAA@XZ.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1400C8FA4 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1400CBDB4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x140104B4C (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x140104C9C (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 */

struct CVirtualAddressAllocator *__fastcall VIDMM_PROCESS::GetCpuVisibleBufferAllocator(VIDMM_PROCESS *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  VIDMM_PROCESS *v5; // rbx
  __int64 v6; // rcx
  CVirtualAddressAllocator *v7; // rax
  CVirtualAddressAllocator *v8; // rax
  CVirtualAddressAllocator *v9; // r10
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // r8
  CVirtualAddressAllocator *v15; // rcx
  _BYTE v16[40]; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v17; // [rsp+70h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 9);
  if ( (*(_DWORD *)(v2 + 408) & 0x100) != 0 )
  {
    v5 = 0LL;
    v6 = *(_QWORD *)(*(_QWORD *)(v2 + 592) + 64LL);
    if ( v6 )
      v5 = *(VIDMM_PROCESS **)(v6 + 8);
    return VIDMM_PROCESS::GetCpuVisibleBufferAllocator(v5);
  }
  else
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v16, (struct _KTHREAD **)this + 34);
    v3 = 0LL;
    if ( *((_QWORD *)this + 33) )
      goto LABEL_3;
    v7 = (CVirtualAddressAllocator *)operator new(160LL, 0x4B677844u, 256LL);
    if ( v7 )
    {
      v8 = CVirtualAddressAllocator::CVirtualAddressAllocator(v7);
      *((_QWORD *)this + 33) = v8;
      v9 = v8;
      if ( v8 )
      {
        v10 = *((_QWORD *)this + 9);
        v11 = *(_DWORD *)(v10 + 408);
        if ( (v11 & 0x100) != 0 )
          v12 = *(_QWORD *)(v10 + 592);
        else
          v12 = v10 & -(__int64)((v11 & 0x80u) != 0);
        v13 = CVirtualAddressAllocator::InitializeVaAllocator(
                v9,
                *(_QWORD *)(*(_QWORD *)(v12 + 592) + 264LL),
                0,
                0LL,
                0LL);
        v15 = (CVirtualAddressAllocator *)*((_QWORD *)this + 33);
        if ( v13 < 0 )
        {
          CVirtualAddressAllocator::DestroyVaAllocator(v15);
          *((_QWORD *)this + 33) = 0LL;
          goto LABEL_4;
        }
        CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
          (struct _KTHREAD **)v15,
          0x1000uLL,
          v14,
          0LL,
          0LL,
          0x1000u,
          &v17);
LABEL_3:
        v3 = *((_QWORD *)this + 33);
LABEL_4:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16);
        return (struct CVirtualAddressAllocator *)v3;
      }
    }
    else
    {
      *((_QWORD *)this + 33) = 0LL;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16);
    return 0LL;
  }
}
