/*
 * XREFs of ?MakeOneVirtualAddressRangeNotResidentSubrange@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_K1@Z @ 0x14009FD24
 * Callers:
 *     ?MakeVirtualAddressRangeNotResidentSubrange@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1E@Z @ 0x1400A01D4 (-MakeVirtualAddressRangeNotResidentSubrange@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1E@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140030100 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140038F20 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400CF280 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@EE@Z @ 0x140106574 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

void __fastcall VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResidentSubrange(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        unsigned __int64 a3,
        __int64 a4)
{
  VIDMM_GLOBAL *v5; // r13
  VIDMM_PROCESS *v6; // rbp
  unsigned int v7; // r8d
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // r15
  unsigned int v9; // ecx
  size_t v10; // rbx
  struct _KTHREAD *v11; // rcx
  unsigned int v12; // edi
  _QWORD *v13; // r14
  _QWORD *v14; // rsi
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r8
  __int64 v17; // r12
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned int v22; // r8d
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 i; // rbx
  CVirtualAddressAllocator *v28; // rax
  unsigned __int64 v30; // [rsp+30h] [rbp-488h]
  char *v32; // [rsp+40h] [rbp-478h]
  VIDMM_PROCESS *v34; // [rsp+50h] [rbp-468h]
  char v35[8]; // [rsp+58h] [rbp-460h] BYREF
  char *v36; // [rsp+60h] [rbp-458h]
  int v37; // [rsp+68h] [rbp-450h]
  unsigned __int64 v38[64]; // [rsp+70h] [rbp-448h] BYREF
  unsigned __int64 v39[64]; // [rsp+270h] [rbp-248h] BYREF

  *((_BYTE *)a2 + 26) = 0;
  v5 = this;
  v32 = (char *)this + 24;
  v6 = *(VIDMM_PROCESS **)(*(_QWORD *)a2 + 8LL);
  v34 = v6;
  if ( (*((_DWORD *)v6 + 34) & 2) != 0 )
    v7 = (*(_DWORD *)(***(_QWORD ***)a2 + 52LL) >> 2) & 0x3F;
  else
    v7 = -1;
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              v6,
                              *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                              v7);
  if ( VirtualAddressAllocator )
  {
    v9 = *((_DWORD *)v5 + 1738);
    if ( v9 )
    {
      v10 = 8LL * v9;
      memset(v39, -1, v10);
      memset(v38, 0, v10 & 0xFFFFFFFFFFFFFFF8uLL);
    }
    v11 = (struct _KTHREAD *)*((_QWORD *)VirtualAddressAllocator + 9);
    v12 = 0;
    v36 = (char *)VirtualAddressAllocator + 64;
    v37 = 0;
    if ( v11 != KeGetCurrentThread() )
      DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v35);
    v13 = (_QWORD *)((char *)a2 + 648);
    v14 = (_QWORD *)*v13;
    if ( (_QWORD *)*v13 != v13 )
    {
      v15 = a3;
      while ( 1 )
      {
        if ( (v14[5] & 0x1C00) != 0 )
        {
          v16 = v14[6];
          v17 = v14[9];
          v18 = v14[10];
          v30 = v16;
          if ( a4 )
          {
            v19 = v15 + v17 - v16;
            v20 = v19 + a4;
            if ( v15 >= v16 )
            {
              v14[6] = v15;
              v21 = v19 + a4;
              if ( v20 >= v18 )
                v21 = v18;
            }
            else
            {
              v21 = v14[10];
              v19 = v14[9];
              if ( v20 < v18 )
                v21 = v20;
            }
            if ( v21 <= v19 )
              goto LABEL_27;
            v14[9] = v19;
            v14[10] = v21;
          }
          CVirtualAddressAllocator::UncommitVirtualAddressRange(
            VirtualAddressAllocator,
            (struct VIDMM_MAPPED_VA_RANGE *)(v14 - 4),
            0LL,
            0,
            1u);
          v22 = *((_DWORD *)v14 + 10);
          v23 = (v22 >> 4) & 0x3F;
          v24 = v39[v23];
          if ( v24 >= v14[9] )
            v24 = v14[9];
          v25 = v14[10];
          v39[v23] = v24;
          v26 = v38[v23];
          if ( v26 <= v25 )
            v26 = v25;
          v38[v23] = v26;
          v12 |= 1 << ((v22 >> 4) & 0x3F);
          if ( a4 )
          {
            v14[6] = v30;
            v14[9] = v17;
            v14[10] = v18;
          }
        }
LABEL_27:
        v14 = (_QWORD *)*v14;
        if ( v14 == v13 )
        {
          v5 = this;
          v6 = v34;
          break;
        }
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v35);
    if ( (*((_BYTE *)v5 + 41064) & 2) != 0 )
    {
      for ( i = 0LL; v12; v12 >>= 1 )
      {
        if ( (v12 & 1) != 0 )
        {
          v28 = VIDMM_PROCESS::GetVirtualAddressAllocator(v6, *(_DWORD *)(*(_QWORD *)v32 + 240LL), i);
          CVirtualAddressAllocator::FlushGpuVaTlb(v28, i, v39[i], v38[i]);
        }
        i = (unsigned int)(i + 1);
      }
    }
  }
}
