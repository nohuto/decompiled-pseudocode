/*
 * XREFs of SmStoreCompletePendingDecompress @ 0x14043C438
 * Callers:
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140391FE0 (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 *     ?StDmCompletePendingReads@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@KPEAK@Z @ 0x140641514 (-StDmCompletePendingReads@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1.c)
 * Callees:
 *     SmHwAcceleratorPartitionMgrFreeDescriptor @ 0x14043C534 (SmHwAcceleratorPartitionMgrFreeDescriptor.c)
 *     SmHwAcceleratorWaitForRequest @ 0x140643C40 (SmHwAcceleratorWaitForRequest.c)
 */

__int64 __fastcall SmStoreCompletePendingDecompress(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // esi
  int v5; // r12d
  __int64 v8; // r13
  int v9; // eax
  int v10; // ebx
  unsigned int v11; // r15d
  unsigned int i; // edi
  int v13; // eax
  int v15; // [rsp+70h] [rbp+8h] BYREF
  int v16; // [rsp+78h] [rbp+10h] BYREF
  __int64 v17; // [rsp+80h] [rbp+18h]

  v17 = a3;
  v4 = 0;
  v15 = 0;
  v16 = 0;
  v5 = 2048;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 3200) + 2136LL);
  v9 = *(_DWORD *)(a1 + 2176);
  if ( v9 != 2 )
    v5 = 4096;
  v10 = 0;
  v11 = (v9 == 2) + 1;
  for ( i = 0; i < v11; ++i )
  {
    v13 = SmHwAcceleratorWaitForRequest(a2, i, a3, (unsigned int)&v15, (__int64)&v16);
    if ( v13 == 258 )
      return 258;
    if ( v13 >= 0 )
    {
      if ( v15 != v5 )
        v13 = -1073741566;
      v4 += v16;
    }
    LODWORD(a3) = v17;
    if ( v13 >= 0 )
      v13 = v10;
    v10 = v13;
  }
  if ( v10 >= 0 && a4 != -1 && a4 != v4 )
    v10 = -1073741761;
  SmHwAcceleratorPartitionMgrFreeDescriptor(v8, a2);
  return (unsigned int)v10;
}
