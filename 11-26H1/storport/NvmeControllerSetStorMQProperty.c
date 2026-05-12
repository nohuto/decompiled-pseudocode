/*
 * XREFs of NvmeControllerSetStorMQProperty @ 0x1400FAC28
 * Callers:
 *     NvmeAdapterFinalizeStorMQMiniportControllerStart @ 0x1400D52F4 (NvmeAdapterFinalizeStorMQMiniportControllerStart.c)
 *     NvmeAdapterStop @ 0x1400DEC40 (NvmeAdapterStop.c)
 *     NvmeAdapterStorMQControllerInitializeWorker @ 0x1400DF420 (NvmeAdapterStorMQControllerInitializeWorker.c)
 *     NvmeAdapterStorMQControllerRemoveWorker @ 0x1400DF4C0 (NvmeAdapterStorMQControllerRemoveWorker.c)
 *     NvmeControllerConfigure @ 0x1400F1AF4 (NvmeControllerConfigure.c)
 *     NvmeControllerEnable @ 0x1400F2B00 (NvmeControllerEnable.c)
 *     NvmeControllerIoCompletionQueueCreate @ 0x1400F69A4 (NvmeControllerIoCompletionQueueCreate.c)
 *     NvmeControllerIoSqToCqMapping @ 0x1400F74F8 (NvmeControllerIoSqToCqMapping.c)
 *     NvmeControllerIoSubmissionQueueCreate @ 0x1400F7BA8 (NvmeControllerIoSubmissionQueueCreate.c)
 *     NvmeControllerPowerDown @ 0x1400F7FE8 (NvmeControllerPowerDown.c)
 *     NvmeControllerProcessorToSqMapping @ 0x1400F91C4 (NvmeControllerProcessorToSqMapping.c)
 *     NvmeControllerRemove @ 0x1400F9AE8 (NvmeControllerRemove.c)
 *     NvmeControllerReset @ 0x1400FA490 (NvmeControllerReset.c)
 *     NvmeControllerStorMQInitializeAdminQueues @ 0x1400FAE10 (NvmeControllerStorMQInitializeAdminQueues.c)
 *     NvmeAdapterStorMQPowerUpDeviceLastStepA @ 0x140126DA8 (NvmeAdapterStorMQPowerUpDeviceLastStepA.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NvmeControllerSetStorMQProperty(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  ULONG_PTR v5; // rbx
  __int64 result; // rax

  v5 = a2;
  if ( *(_BYTE *)(a1 + 1728) != 1 )
    return 3238002694LL;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 128) + 528LL))(
             *(_QWORD *)(a1 + 1648) + 64LL,
             a2);
  if ( (a4 & 1) != 0 )
  {
    switch ( (unsigned int)v5 )
    {
      case 0x80000000:
      case 0x80000001:
      case 0x80000003:
      case 0x80000006:
      case 0x80000007:
      case 0x80000008:
      case 0x80000009:
        if ( !(_DWORD)result || (_DWORD)result == -1056964606 )
          return result;
        goto LABEL_15;
      case 0x80000002:
      case 0x80000004:
      case 0x80000005:
        return 3221225485LL;
      default:
        return result;
    }
  }
  if ( ((_DWORD)v5 == 20 || (_DWORD)v5 == 36 || (_DWORD)v5 == 40 || (_DWORD)v5 == 48) && (_DWORD)result )
LABEL_15:
    KeBugCheckEx(0xF0u, 6uLL, v5, (unsigned int)result, 0LL);
  return result;
}
