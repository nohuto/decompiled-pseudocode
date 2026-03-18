/*
 * XREFs of RIMFindMonitorForDigitizer @ 0x1401E5030
 * Callers:
 *     <none>
 * Callees:
 *     RIMGetQDCActivePathsData @ 0x14002B9C8 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x14002BC10 (RIMFreeQDCActivePathsData.c)
 *     RIMSetDeviceOutputConfig @ 0x14002D684 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1401E5C14 (rimFindMonitorForDigitizerWithQDCData.c)
 */

void __fastcall RIMFindMonitorForDigitizer(
        struct RIMDEV *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        int a3,
        __int64 a4)
{
  unsigned int *v8; // rsi
  unsigned int v9[6]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v9 = 0LL;
  v8 = RIMGetQDCActivePathsData(v9);
  rimFindMonitorForDigitizerWithQDCData(a1, v8, a4);
  if ( a3 )
    RIMSetDeviceOutputConfig(a1, a2, 1u, (__int64)v8);
  RIMFreeQDCActivePathsData((__int64)v8);
}
