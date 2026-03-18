/*
 * XREFs of ?UpdateCurrentUpgradedGpuVaRange@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1400A270C
 * Callers:
 *     ?VidMmStartFaultAndStall@@YAXPEAVVIDMM_GLOBAL@@@Z @ 0x14004EE34 (-VidMmStartFaultAndStall@@YAXPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140030100 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400CF280 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UpdateCurrentUpgradedGpuVaRange(
        VIDMM_GLOBAL *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 v8; // rdi
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  __int64 *i; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r11
  _BYTE v15[8]; // [rsp+20h] [rbp-28h] BYREF
  char *v16; // [rsp+28h] [rbp-20h]
  int v17; // [rsp+30h] [rbp-18h]

  v6 = *((_QWORD *)a2 + 6);
  v8 = *(_QWORD *)(v6 + 32);
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              *(VIDMM_PROCESS **)(v6 + 8),
                              *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                              0xFFFFFFFF);
  v17 = 0;
  v16 = (char *)VirtualAddressAllocator + 64;
  if ( *((struct _KTHREAD **)VirtualAddressAllocator + 9) != KeGetCurrentThread() )
    DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v15);
  *((_QWORD *)this + 5574) = -1LL;
  *((_QWORD *)this + 5575) = 0LL;
  for ( i = *(__int64 **)(v8 + 608); i != (__int64 *)(v8 + 608); i = (__int64 *)*i )
  {
    if ( (i[5] & 0x1C00) != 0 )
    {
      v11 = i[6];
      v12 = i[9];
      v13 = i[10];
      v14 = v12 + a3 - v11;
      if ( a3 >= v11 )
        v12 += a3 - v11;
      if ( a4 + v14 < v13 )
        v13 = a4 + v14;
      if ( v13 > v12 )
      {
        if ( v13 > *((_QWORD *)this + 5575) )
          *((_QWORD *)this + 5575) = v13;
        if ( v12 < *((_QWORD *)this + 5574) )
          *((_QWORD *)this + 5574) = v12;
      }
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
}
