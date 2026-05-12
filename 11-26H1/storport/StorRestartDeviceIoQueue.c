/*
 * XREFs of StorRestartDeviceIoQueue @ 0x140031C58
 * Callers:
 *     NvmeNamespaceActiveConditionStep1 @ 0x1400318C0 (NvmeNamespaceActiveConditionStep1.c)
 *     NvmeControllerRestart @ 0x1400FA9B4 (NvmeControllerRestart.c)
 *     NvmeNamespaceProcessSetDevicePowerIrpComplete @ 0x140128C7C (NvmeNamespaceProcessSetDevicePowerIrpComplete.c)
 * Callees:
 *     NvmeProcessPendingIo @ 0x14003A190 (NvmeProcessPendingIo.c)
 */

__int64 __fastcall StorRestartDeviceIoQueue(__int64 a1)
{
  _DWORD *v1; // rdi
  unsigned int v2; // ebx
  __int64 result; // rax
  __int64 v4; // rsi

  v1 = g_CpuInfo;
  v2 = 0;
  if ( !*(_DWORD *)a1 && !*(_BYTE *)(a1 + 20) )
  {
    result = *(_QWORD *)(a1 + 24);
    v4 = *(_QWORD *)(result + 24);
    if ( *((_DWORD *)g_CpuInfo + 3) )
    {
      do
        result = NvmeProcessPendingIo(*(_QWORD *)(v4 + 16), 0LL, v2++);
      while ( v2 < v1[3] );
    }
  }
  return result;
}
