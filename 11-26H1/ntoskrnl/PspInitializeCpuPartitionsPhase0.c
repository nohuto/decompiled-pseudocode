/*
 * XREFs of PspInitializeCpuPartitionsPhase0 @ 0x140CDED10
 * Callers:
 *     PspInitPhase0 @ 0x140D0D27C (PspInitPhase0.c)
 * Callees:
 *     PsCreateCpuPartition @ 0x1407F81C0 (PsCreateCpuPartition.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140CDEAB4 (PspInitializeCpuPartitionsDefaultSd.c)
 */

__int64 PspInitializeCpuPartitionsPhase0()
{
  __int64 result; // rax
  _DWORD v1[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v2; // [rsp+48h] [rbp-30h]
  const wchar_t *v3; // [rsp+50h] [rbp-28h]
  int v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+5Ch] [rbp-1Ch]
  __int64 v6; // [rsp+60h] [rbp-18h]
  __int64 v7; // [rsp+68h] [rbp-10h]

  PspSiloMonitorLock.SavedApcState.ApcListHead[0].Blink = 0LL;
  v1[1] = 0;
  v5 = 0;
  KiSystemServiceTraceCallbackLock.KernelWaitTime = (unsigned __int64)&KiSystemServiceTraceCallbackLock.ReservedPreviousReadyTimeValue;
  *(_QWORD *)&KiSystemServiceTraceCallbackLock.ReservedPreviousReadyTimeValue = &KiSystemServiceTraceCallbackLock.ReservedPreviousReadyTimeValue;
  result = PspInitializeCpuPartitionsDefaultSd(&PsCpuPartitionDefaultSd, 0);
  if ( (int)result >= 0 )
  {
    v3 = L"^`";
    v6 = PsCpuPartitionDefaultSd;
    v1[0] = 48;
    v2 = 0LL;
    v4 = 592;
    v7 = 0LL;
    result = PsCreateCpuPartition((__int64)v1, 0xE0007u, 0, 1399878480LL, 1, 0LL, &PspSystemCpuPartition, 0LL);
    if ( (int)result >= 0 )
    {
      result = 0LL;
      KiSystemCpuPartition = *(_QWORD *)PspSystemCpuPartition;
    }
  }
  return result;
}
