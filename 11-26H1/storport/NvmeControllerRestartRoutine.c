/*
 * XREFs of NvmeControllerRestartRoutine @ 0x1400FAAC0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeControllerRestart @ 0x1400FA9B4 (NvmeControllerRestart.c)
 */

void __fastcall NvmeControllerRestartRoutine(PDEVICE_OBJECT DeviceObject, volatile signed __int32 *Context)
{
  if ( !Context || *Context != 1314276178 )
    KeBugCheckEx(0x176u, 4uLL, (ULONG_PTR)Context, 0LL, 0LL);
  _interlockedbittestandreset(Context + 268, 6u);
  _interlockedbittestandreset(Context + 237, 1u);
  NvmeControllerRestart((__int64)Context);
}
