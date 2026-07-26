/*
 * XREFs of ?ndisImmediateReadWriteSharedMemory@@YAXPEAXKPEAEKE@Z @ 0x1400DA2F0
 * Callers:
 *     NdisImmediateReadSharedMemory @ 0x1400DA530 (NdisImmediateReadSharedMemory.c)
 *     NdisImmediateWriteSharedMemory @ 0x1400DA5E0 (NdisImmediateWriteSharedMemory.c)
 * Callees:
 *     ?ndisTranslateResources@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HT_LARGE_INTEGER@@PEAT2@PEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1400929A8 (-ndisTranslateResources@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HT_LARGE_INTEGER@@PEAT2@PEAPEAU_CM_PARTIAL.c)
 *     ndisEndMapping @ 0x1400DA150 (ndisEndMapping.c)
 *     ndisStartMapping @ 0x1400DA3E0 (ndisStartMapping.c)
 */

void __fastcall ndisImmediateReadWriteSharedMemory(
        _QWORD *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  __int64 v5; // rcx
  int v9; // r14d
  int v10; // r15d
  int v11; // ecx
  void *v12; // rax
  signed __int32 v13[8]; // [rsp+0h] [rbp-50h] BYREF
  union _LARGE_INTEGER v14; // [rsp+40h] [rbp-10h] BYREF
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v15; // [rsp+48h] [rbp-8h] BYREF
  __int64 v16; // [rsp+80h] [rbp+30h] BYREF
  PHYSICAL_ADDRESS BusAddress; // [rsp+88h] [rbp+38h] BYREF

  v5 = a1[1];
  v9 = *(_DWORD *)(v5 + 3720);
  v10 = *(_DWORD *)(v5 + 3724);
  v15 = 0LL;
  LOBYTE(BusAddress.LowPart) = 0;
  v16 = 0LL;
  v14.QuadPart = 0LL;
  if ( !(unsigned int)ndisTranslateResources((struct _NDIS_MINIPORT_BLOCK *)v5, 3, (union _LARGE_INTEGER)a2, &v14, &v15) )
  {
    v11 = -1;
    LODWORD(v16) = v14.LowPart;
    if ( !v15 )
      v11 = v9;
    if ( (int)ndisStartMapping(v11, v10, a2, a4, 0, (__int64)&v16, (PHYSICAL_ADDRESS)&BusAddress) >= 0 )
    {
      v12 = (void *)v16;
      if ( a5 )
      {
        qmemcpy(a3, (const void *)v16, a4);
      }
      else
      {
        qmemcpy((void *)v16, a3, a4);
        _InterlockedOr(v13, 0);
      }
      ndisEndMapping(v12, a4, BusAddress.QuadPart);
    }
  }
}
