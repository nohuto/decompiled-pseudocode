/*
 * XREFs of NvmeAdapterDisconnectControllerInternal @ 0x1400D4F2C
 * Callers:
 *     NvmeAdapterCleanupSubsystemPort @ 0x1400D36DC (NvmeAdapterCleanupSubsystemPort.c)
 *     NvmeAdapterStop @ 0x1400DEC40 (NvmeAdapterStop.c)
 *     NvmeAdapterDisconnectController @ 0x140199708 (NvmeAdapterDisconnectController.c)
 * Callees:
 *     McTemplateK0qjzsh_EtwWriteTransfer @ 0x1400D2120 (McTemplateK0qjzsh_EtwWriteTransfer.c)
 *     NvmeAdapterCleanupFabricNvmeController @ 0x1400E5018 (NvmeAdapterCleanupFabricNvmeController.c)
 *     NvmeAdapterDeleteNvmeController @ 0x1400E74A8 (NvmeAdapterDeleteNvmeController.c)
 *     NvmeAdapterStopFabricNvmeControllerOperations @ 0x1400EE7B4 (NvmeAdapterStopFabricNvmeControllerOperations.c)
 */

__int64 __fastcall NvmeAdapterDisconnectControllerInternal(__int64 a1, __int64 a2, const char *a3, char a4)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = a2;
  if ( (byte_14017344A & 2) != 0 )
    McTemplateK0qjzsh_EtwWriteTransfer(
      a1,
      &EventNVMeoFDisconnectController,
      (__int64)a3,
      *(_DWORD *)(a1 + 56),
      a1 + 1048,
      *(const wchar_t **)(a1 + 1032),
      a3,
      *(_WORD *)(a2 + 4));
  NvmeAdapterStopFabricNvmeControllerOperations(a2, 0LL);
  NvmeAdapterCleanupFabricNvmeController(a2);
  v6 = *(_QWORD *)(a2 + 1664);
  if ( v6 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v6 + 16));
    *(_QWORD *)(a2 + 1664) = 0LL;
  }
  result = *(_QWORD *)(a2 + 1672);
  if ( result )
  {
    _InterlockedDecrement((volatile signed __int32 *)(result + 16));
    *(_QWORD *)(a2 + 1672) = 0LL;
  }
  if ( a4 )
    return NvmeAdapterDeleteNvmeController(&v8);
  return result;
}
