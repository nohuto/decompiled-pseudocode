/*
 * XREFs of DpReadDeviceSpace @ 0x14004DE30
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x14019C2FC (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 *     ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1403BE250 (-CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?ReadVirtualFunctionConfig@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@@Z @ 0x140404C00 (-ReadVirtualFunctionConfig@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpReadDeviceSpace(__int64 a1, __int64 a2, void *a3, ULONG Offset, ULONG Length, ULONG *a6)
{
  unsigned int v6; // ebx
  __int64 v7; // r10
  int v8; // eax
  __int64 (__fastcall *v9)(_QWORD, __int64, void *); // rsi
  ULONG BusDataByOffset; // eax
  __int64 (__fastcall *v12)(_QWORD, void *, _QWORD, _QWORD); // rax

  v6 = 0;
  if ( a1 && a3 && a6 )
  {
    *a6 = 0;
    v7 = *(_QWORD *)(a1 + 64);
    if ( !v7 )
      goto LABEL_15;
    if ( *(_DWORD *)(v7 + 16) != 1953656900 )
      goto LABEL_15;
    v8 = *(_DWORD *)(v7 + 20);
    if ( v8 != 3 && v8 != 2 )
      goto LABEL_15;
    switch ( (_DWORD)a2 )
    {
      case 0:
      case 0x52696350:
        v9 = *(__int64 (__fastcall **)(_QWORD, __int64, void *))(v7 + 616);
        if ( !v9 )
        {
          v6 = -1073741823;
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 2805;
          return v6;
        }
        BusDataByOffset = v9(*(_QWORD *)(v7 + 568), a2, a3);
        break;
      case 0x80000000:
        BusDataByOffset = HalGetBusDataByOffset(PCIConfiguration, 0, 0, a3, Offset, Length);
        break;
      case 0x80000001:
        if ( v8 != 2 )
        {
          v6 = -1073741811;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 2751;
          return v6;
        }
        if ( (*(_DWORD *)(v7 + 4124) & 4) == 0 )
        {
          v6 = -1071774661;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 2762;
          return v6;
        }
        v12 = *(__int64 (__fastcall **)(_QWORD, void *, _QWORD, _QWORD))(v7 + 3072);
        if ( !v12 )
        {
          v6 = -1073741823;
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 2772;
          return v6;
        }
        BusDataByOffset = v12(*(_QWORD *)(v7 + 3048), a3, Offset, Length);
        break;
      default:
LABEL_15:
        v6 = -1073741811;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 2731;
        return v6;
    }
    *a6 = BusDataByOffset;
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 2818;
  }
  else
  {
    v6 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2708;
  }
  return v6;
}
