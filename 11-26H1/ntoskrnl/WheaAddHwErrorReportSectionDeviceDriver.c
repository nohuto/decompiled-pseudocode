/*
 * XREFs of WheaAddHwErrorReportSectionDeviceDriver @ 0x1406D9040
 * Callers:
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x1406D9430 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x1406D9550 (WheaReportHwErrorDeviceDriverEx.c)
 * Callees:
 *     WheapGetErrorSource @ 0x1403E13D0 (WheapGetErrorSource.c)
 *     WheapErrDescIsDeviceDriver @ 0x1406D9744 (WheapErrDescIsDeviceDriver.c)
 *     WheapErrorHandleIsValid @ 0x1406D975C (WheapErrorHandleIsValid.c)
 */

__int64 __fastcall WheaAddHwErrorReportSectionDeviceDriver(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // r10d
  __int64 *ErrorSource; // rax
  _DWORD *v8; // rdx
  __int64 v9; // r11
  __int64 v10; // rdx

  v4 = a2;
  if ( (unsigned __int8)WheapErrorHandleIsValid() )
  {
    ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, *(_DWORD *)(v5 + 12));
    if ( (unsigned __int8)WheapErrDescIsDeviceDriver((unsigned __int64)(ErrorSource + 12) & ((unsigned __int128)-(__int128)(unsigned __int64)ErrorSource >> 64)) )
    {
      if ( *(_DWORD *)(v9 + 4) >= v8[35]
        || (unsigned int)v4 > v8[34]
        || (unsigned int)(v4 + *(_DWORD *)(v9 + 8)) > v8[16] )
      {
        return (unsigned int)-1073741670;
      }
      else
      {
        **(_DWORD **)(v9 + 16) ^= ((unsigned __int16)**(_DWORD **)(v9 + 16) ^ (unsigned __int16)(**(_DWORD **)(v9 + 16)
                                                                                               + 16)) & 0x3FF0;
        v10 = *(_QWORD *)(v9 + 24);
        *(_DWORD *)(v10 + 16) = *(_DWORD *)(v9 + 52);
        *(_WORD *)(v10 + 20) = 768;
        *(_DWORD *)(v10 + 24) = v4;
        *(_QWORD *)(a3 + 24) = v10 + 44;
        *(_QWORD *)(a3 + 16) = v10;
        *(_BYTE *)(v10 + 22) |= 2u;
        ++*(_DWORD *)(v9 + 4);
        *(_QWORD *)(a3 + 32) = v10 + 23;
        *(_QWORD *)(a3 + 4) = v10 + 72;
        *(_DWORD *)(a3 + 12) = v4;
        *(_QWORD *)(v9 + 24) = v10 + 72 + v4;
        *(_DWORD *)(v9 + 8) += v4 + 72;
        *(_DWORD *)a3 = 1;
      }
    }
    else
    {
      return (unsigned int)-1073741130;
    }
  }
  else
  {
    return (unsigned int)-1073741816;
  }
  return v6;
}
