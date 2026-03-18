/*
 * XREFs of WdipSemEnableSemProvider @ 0x1408219A8
 * Callers:
 *     WdipSemCleanStart @ 0x14081F4F0 (WdipSemCleanStart.c)
 * Callees:
 *     EtwRegister @ 0x14093BDE0 (EtwRegister.c)
 *     WdipSemEnableDisableTrace @ 0x140AD9B30 (WdipSemEnableDisableTrace.c)
 */

__int64 WdipSemEnableSemProvider()
{
  NTSTATUS v0; // ecx
  ULONGLONG RegHandle; // [rsp+40h] [rbp+8h] BYREF

  RegHandle = 0LL;
  v0 = WdipSemEnableDisableTrace(
         _InterlockedExchange(
           (_DWORD *)&stru_140F066E8.SListFaultAddress + 1,
           SHIDWORD(stru_140F066E8.SListFaultAddress)),
         (unsigned int)&WDI_SEM_PROVIDER,
         0,
         0,
         0,
         1);
  if ( v0 >= 0 )
  {
    v0 = WdipSemEnableDisableTrace(
           _InterlockedExchange(
             (volatile __int32 *)&stru_140F066E8.SListFaultAddress,
             (__int32)stru_140F066E8.SListFaultAddress),
           (unsigned int)&WDI_SEM_PROVIDER,
           0,
           0,
           0,
           1);
    if ( v0 >= 0 && !stru_140F03F40.Timer.TimerListEntry.Flink )
    {
      v0 = EtwRegister(&WDI_SEM_PROVIDER, 0LL, 0LL, &RegHandle);
      if ( v0 >= 0 )
        stru_140F03F40.Timer.TimerListEntry.Flink = (struct _LIST_ENTRY *)RegHandle;
    }
  }
  return (unsigned int)v0;
}
