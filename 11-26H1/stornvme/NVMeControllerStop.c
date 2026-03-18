/*
 * XREFs of NVMeControllerStop @ 0x140017BD4
 * Callers:
 *     NVMeHwAdapterControl @ 0x140007FB0 (NVMeHwAdapterControl.c)
 * Callees:
 *     IoQueuesDeletion @ 0x14000C4A0 (IoQueuesDeletion.c)
 *     IoQueuesFreeResources @ 0x14000D2C0 (IoQueuesFreeResources.c)
 *     FreeProcessorInfo @ 0x14000EAC0 (FreeProcessorInfo.c)
 *     NVMeDisableThrottling @ 0x1400107A0 (NVMeDisableThrottling.c)
 *     NVMePowerCleanUp @ 0x140011500 (NVMePowerCleanUp.c)
 *     FreeMsiInfo @ 0x1400115A0 (FreeMsiInfo.c)
 *     AdminQueuesFreeResources @ 0x140011A00 (AdminQueuesFreeResources.c)
 *     NVMeFreeHostMemoryBuffer @ 0x140017CC0 (NVMeFreeHostMemoryBuffer.c)
 *     memset @ 0x140032A40 (memset.c)
 */

char __fastcall NVMeControllerStop(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // si
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 i; // rdi
  __int64 v17; // r8

  v5 = 1;
  if ( !_bittest((const signed __int32 *)(a1 + 24), 0x11u) )
    v5 = IoQueuesDeletion(a1, a2, a3, a4);
  NVMePowerCleanUp(a1, a2, a3, a4);
  if ( !_bittest((const signed __int32 *)(a1 + 24), 0x11u) && *(_QWORD *)(a1 + 3720) )
    NVMeFreeHostMemoryBuffer(a1);
  IoQueuesFreeResources(a1);
  AdminQueuesFreeResources(a1, v6, v7, v8);
  FreeProcessorInfo((_QWORD *)a1, v9, v10, v11);
  FreeMsiInfo(a1, v12, v13, v14);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 224); i = (unsigned int)(i + 1) )
    {
      v17 = *(_QWORD *)(a1 + 8 * i + 1672);
      if ( v17 )
        StorPortExtendedFunction(1LL, a1, v17, v15);
    }
  }
  memset((void *)(a1 + 1672), 0, 0x7F8uLL);
  *(_DWORD *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 224) = 0;
  NVMeDisableThrottling(a1);
  return v5;
}
