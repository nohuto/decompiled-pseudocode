/*
 * XREFs of NvmeControllerQueryStorMQProperty @ 0x1400F958C
 * Callers:
 *     NvmeAdapterFinalizeStorMQMiniportControllerStart @ 0x1400D52F4 (NvmeAdapterFinalizeStorMQMiniportControllerStart.c)
 *     NvmeControllerEnable @ 0x1400F2B00 (NvmeControllerEnable.c)
 *     NvmeControllerGetReadyTimeout @ 0x1400F4AD0 (NvmeControllerGetReadyTimeout.c)
 *     NvmeControllerInitializeAdminQueue @ 0x1400F5F24 (NvmeControllerInitializeAdminQueue.c)
 *     NvmeControllerIoSqToCqMapping @ 0x1400F74F8 (NvmeControllerIoSqToCqMapping.c)
 *     NvmeControllerPowerDown @ 0x1400F7FE8 (NvmeControllerPowerDown.c)
 *     NvmeControllerProcessorToSqMapping @ 0x1400F91C4 (NvmeControllerProcessorToSqMapping.c)
 *     NvmeControllerRemove @ 0x1400F9AE8 (NvmeControllerRemove.c)
 *     NvmeControllerReset @ 0x1400FA490 (NvmeControllerReset.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NvmeControllerQueryStorMQProperty(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  ULONG_PTR v5; // rbx
  __int64 result; // rax

  v5 = a2;
  if ( *(_BYTE *)(a1 + 1728) != 1 )
    return 3238002694LL;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 128) + 520LL))(
             *(_QWORD *)(a1 + 1648) + 64LL,
             a2);
  if ( (a4 & 1) == 0
    && (!(_DWORD)v5 || (_DWORD)v5 == 8 || (_DWORD)v5 == 20 || (_DWORD)v5 == 28 || (_DWORD)v5 == 36 || (_DWORD)v5 == 104) )
  {
    if ( (_DWORD)result )
      KeBugCheckEx(0xF0u, 6uLL, v5, (unsigned int)result, 0LL);
  }
  return result;
}
