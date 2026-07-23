/*
 * XREFs of MiInitializeKernelScp @ 0x140D00EA8
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     RtlCreateKernelScpFunctionTable @ 0x140625F7C (RtlCreateKernelScpFunctionTable.c)
 *     MiInitializeRetpoline @ 0x140D00F38 (MiInitializeRetpoline.c)
 *     MiLockKernelScpSection @ 0x140D010A8 (MiLockKernelScpSection.c)
 */

__int64 MiInitializeKernelScp()
{
  int v0; // eax
  int KernelScpFunctionTable; // ecx
  ULONG_PTR BugCheckParameter4; // rax
  unsigned int v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v0 = MiLockKernelScpSection();
  KernelScpFunctionTable = v0;
  if ( v0 < 0 )
  {
    BugCheckParameter4 = 162LL;
    goto LABEL_9;
  }
  KernelScpFunctionTable = RtlCreateKernelScpFunctionTable(
                             (unsigned int)v0,
                             *(_DWORD **)&stru_140E2D2D0.WaitBlockFill11[64],
                             *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[76] << 12);
  if ( KernelScpFunctionTable < 0 )
  {
    BugCheckParameter4 = 167LL;
    goto LABEL_9;
  }
  KernelScpFunctionTable = *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[88];
  if ( *(int *)&stru_140E2D2D0.WaitBlockFill11[88] >= 0 )
  {
    KernelScpFunctionTable = MiInitializeRetpoline(&v4);
    BugCheckParameter4 = v4;
  }
  else
  {
    BugCheckParameter4 = 161LL;
  }
  if ( KernelScpFunctionTable < 0 )
LABEL_9:
    KeBugCheckEx(0x1Au, 0x1082uLL, 0LL, KernelScpFunctionTable, BugCheckParameter4);
  return (unsigned int)KernelScpFunctionTable;
}
