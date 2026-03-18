/*
 * XREFs of DpiRequestDevicePowerIrp @ 0x140032C50
 * Callers:
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1400323CC (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     DpiRequestDevicePowerState @ 0x140032628 (DpiRequestDevicePowerState.c)
 *     ?PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z @ 0x14006F354 (-PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z.c)
 *     DpiRequestDeviceDirectedPowerIrp @ 0x1400858B8 (DpiRequestDeviceDirectedPowerIrp.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall DpiRequestDevicePowerIrp(__int64 a1, POWER_STATE a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  NTSTATUS result; // eax
  NTSTATUS v7; // ebp
  unsigned int i; // edi
  __int64 v9; // rbp

  WdLogSingleEntry3(9LL, a1, a2.SystemState, 0LL);
  WdLogGlobalForLineNumber = 4679;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&Dxgk_DpiRequestDevicePowerIrp);
  v4 = *(unsigned int *)(a1 + 4440);
  if ( (unsigned int)v4 >= 3 )
  {
    *(_DWORD *)(a1 + 4440) = 0;
    v4 = 0LL;
  }
  v5 = a1 + 8 * (v4 + 2 * (v4 + 278));
  *(_DWORD *)(v5 + 20) = 0;
  *(_QWORD *)(v5 + 8) = 0LL;
  *(POWER_STATE *)(v5 + 16) = a2;
  *(_QWORD *)v5 = MEMORY[0xFFFFF78000000014];
  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 64), 0LL, File, 1u, 0x20u);
  if ( result >= 0 )
  {
    result = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(a1 + 24), 2u, a2, DpiRuntimePowerIrpCompletion, (PVOID)v5, 0LL);
    v7 = result;
    if ( result != 259 )
    {
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 64), 0LL, 0x20u);
      *(_QWORD *)(v5 + 8) = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(v5 + 20) = v7;
      result = WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 4734;
    }
    ++*(_DWORD *)(a1 + 4440);
    if ( *(_DWORD *)(a1 + 504) )
    {
      if ( *(_BYTE *)(a1 + 508) == 1 )
      {
        for ( i = 1; i < *(_DWORD *)(a1 + 2840); ++i )
        {
          v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 2832) + 8LL * i) + 64LL);
          result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v9 + 64), 0LL, File, 1u, 0x20u);
          if ( result >= 0 )
          {
            result = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(v9 + 24), 2u, a2, DpiRuntimePowerIrpCompletion, 0LL, 0LL);
            if ( result != 259 )
            {
              IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v9 + 64), 0LL, 0x20u);
              result = WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 4760;
            }
          }
        }
      }
    }
  }
  return result;
}
