/*
 * XREFs of WheapGetPreallocatedPacketBuffer @ 0x1406D97F4
 * Callers:
 *     WheapInitErrorReportDeviceDriver @ 0x1406D98F4 (WheapInitErrorReportDeviceDriver.c)
 * Callees:
 *     WheapGetErrorSource @ 0x1403E13D0 (WheapGetErrorSource.c)
 *     WheapErrDescIsDeviceDriver @ 0x1406D9744 (WheapErrDescIsDeviceDriver.c)
 */

volatile signed __int32 *__fastcall WheapGetPreallocatedPacketBuffer(unsigned int a1)
{
  __int64 *ErrorSource; // rax
  __int64 v2; // r10
  _QWORD *v3; // r11
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rcx
  volatile signed __int32 *v7; // r8
  __int64 v8; // rcx
  unsigned int v9; // r9d
  __int64 v10; // rdi
  __int64 v11; // rbx
  volatile signed __int32 v12; // ett

  ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, a1);
  if ( WheapErrDescIsDeviceDriver((unsigned __int64)(ErrorSource + 12) & -(__int64)(ErrorSource != 0LL)) )
  {
    v4 = 64LL;
    if ( v2 )
      v4 = v2 + 160;
    v5 = *(unsigned int *)v4;
    v6 = 72LL;
    if ( v2 )
      v6 = v2 + 168;
    v7 = *(volatile signed __int32 **)v6;
    v8 = 144LL;
    if ( v2 )
      v8 = v2 + 240;
    v9 = 0;
    v10 = *(_QWORD *)v8;
    v11 = 68LL;
    if ( v2 )
      v11 = v2 + 164;
    while ( v9 < *(_DWORD *)v11 )
    {
      if ( (*v7 & 0xF0000000) != 0x80000000 )
      {
        v12 = *v7;
        if ( v12 == _InterlockedCompareExchange(v7, *v7 | 0x80000000, *v7) )
        {
          if ( v3 )
            *v3 = v10 + 104LL * v9;
          return v7;
        }
      }
      v7 = (volatile signed __int32 *)((char *)v7 + v5);
      ++v9;
    }
  }
  return 0LL;
}
