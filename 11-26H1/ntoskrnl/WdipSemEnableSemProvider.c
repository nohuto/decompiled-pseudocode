/*
 * XREFs of WdipSemEnableSemProvider @ 0x140827BB8
 * Callers:
 *     WdipSemCleanStart @ 0x140825700 (WdipSemCleanStart.c)
 * Callees:
 *     EtwRegister @ 0x140917980 (EtwRegister.c)
 *     WdipSemEnableDisableTrace @ 0x140AD65E0 (WdipSemEnableDisableTrace.c)
 */

__int64 WdipSemEnableSemProvider()
{
  NTSTATUS v0; // ecx
  ULONGLONG RegHandle; // [rsp+40h] [rbp+8h] BYREF

  RegHandle = 0LL;
  v0 = WdipSemEnableDisableTrace(
         _InterlockedExchange((volatile __int32 *)&stru_140F06A28.QuantumTarget, stru_140F06A28.QuantumTarget),
         (unsigned int)&WDI_SEM_PROVIDER,
         0,
         0,
         0,
         1);
  if ( v0 >= 0 )
  {
    v0 = WdipSemEnableDisableTrace(
           _InterlockedExchange((_DWORD *)&stru_140F06A28.QuantumTarget + 1, SHIDWORD(stru_140F06A28.QuantumTarget)),
           (unsigned int)&WDI_SEM_PROVIDER,
           0,
           0,
           0,
           1);
    if ( v0 >= 0 && !stru_140F06A28.Header.WaitListHead.Flink )
    {
      v0 = EtwRegister(&WDI_SEM_PROVIDER, 0LL, 0LL, &RegHandle);
      if ( v0 >= 0 )
        stru_140F06A28.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)RegHandle;
    }
  }
  return (unsigned int)v0;
}
