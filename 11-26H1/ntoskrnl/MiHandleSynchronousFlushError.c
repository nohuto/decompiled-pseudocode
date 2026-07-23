/*
 * XREFs of MiHandleSynchronousFlushError @ 0x14046717C
 * Callers:
 *     MiFlushSubsection @ 0x1403CB290 (MiFlushSubsection.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     FsRtlIsTotalDeviceFailure @ 0x1404673E0 (FsRtlIsTotalDeviceFailure.c)
 */

__int64 __fastcall MiHandleSynchronousFlushError(__int64 a1, NTSTATUS *a2, int a3, _DWORD *a4, _DWORD *a5)
{
  NTSTATUS v7; // ecx
  LARGE_INTEGER *v9; // r8

  v7 = *a2;
  if ( *a2 == -1073741740 )
  {
    if ( a3 == 1 )
    {
      v9 = (LARGE_INTEGER *)&Mi10Milliseconds;
LABEL_4:
      KeDelayExecutionThread(0, 0, v9);
LABEL_5:
      *a2 = 0;
      return 1LL;
    }
LABEL_9:
    if ( *(_DWORD *)(a1 + 40) <= 0x1000u || FsRtlIsTotalDeviceFailure(v7) )
      return 0LL;
    goto LABEL_11;
  }
  if ( v7 != -1073741670 && v7 != -1073741801 && v7 != -1073741663 )
    goto LABEL_9;
LABEL_11:
  if ( (--*a4 & 0x1F) != 0 )
  {
    v9 = (LARGE_INTEGER *)&Mi30Milliseconds;
    goto LABEL_4;
  }
  if ( *a5 != 1 && *(_DWORD *)(a1 + 40) > 0x1000u )
  {
    *a5 = 1;
    goto LABEL_5;
  }
  return 0LL;
}
