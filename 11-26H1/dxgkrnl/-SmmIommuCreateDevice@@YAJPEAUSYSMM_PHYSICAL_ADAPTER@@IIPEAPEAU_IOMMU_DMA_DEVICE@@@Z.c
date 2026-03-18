/*
 * XREFs of ?SmmIommuCreateDevice@@YAJPEAUSYSMM_PHYSICAL_ADAPTER@@IIPEAPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1402852A8
 * Callers:
 *     SmmInitializeDmaDevices @ 0x140286178 (SmmInitializeDmaDevices.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SmmIommuCreateDevice(
        struct SYSMM_PHYSICAL_ADAPTER *a1,
        unsigned int a2,
        __int64 a3,
        struct _IOMMU_DMA_DEVICE **a4)
{
  __int64 v4; // r10
  __int128 *v6; // rcx
  int v7; // eax
  __int128 *v9; // [rsp+20h] [rbp-60h] BYREF
  __int128 *v10; // [rsp+28h] [rbp-58h]
  int v11; // [rsp+30h] [rbp-50h]
  __int64 v12; // [rsp+34h] [rbp-4Ch]
  int v13; // [rsp+3Ch] [rbp-44h]
  __int128 v14; // [rsp+40h] [rbp-40h] BYREF
  __int128 v15; // [rsp+50h] [rbp-30h]
  __int128 v16; // [rsp+60h] [rbp-20h] BYREF
  __int128 v17; // [rsp+70h] [rbp-10h]

  v4 = *((_QWORD *)a1 + 5);
  v12 = 0LL;
  v13 = 0;
  v6 = (__int128 *)&v9;
  v11 = 0;
  v10 = (__int128 *)&v9;
  v9 = (__int128 *)&v9;
  v7 = *((_DWORD *)a1 + 4);
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( (v7 & 8) != 0 )
  {
    LODWORD(v15) = 3;
    *(_QWORD *)&v14 = &v9;
    v6 = &v14;
    DWORD2(v15) = 1;
    *((_QWORD *)&v14 + 1) = &v9;
    v10 = &v14;
    v9 = &v14;
    BYTE12(v15) = 1;
  }
  if ( *((_DWORD *)a1 + 2) == 2 )
  {
    LODWORD(v17) = 1;
    *((_QWORD *)&v17 + 1) = a2 | 0x100000000LL;
    if ( *((__int128 ***)v6 + 1) != &v9 )
      __fastfail(3u);
    *(_QWORD *)&v16 = v6;
    *((_QWORD *)&v16 + 1) = &v9;
    *((_QWORD *)v6 + 1) = &v16;
    v9 = &v16;
  }
  return ((__int64 (__fastcall *)(__int64, __int128 **, struct _IOMMU_DMA_DEVICE **))qword_140169680)(v4, &v9, a4);
}
