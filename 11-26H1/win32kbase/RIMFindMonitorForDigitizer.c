/*
 * XREFs of RIMFindMonitorForDigitizer @ 0x140205A10
 * Callers:
 *     <none>
 * Callees:
 *     RIMSetDeviceOutputConfig @ 0x14007B81C (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x14007C5BC (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMGetQDCActivePathsData @ 0x14007CE38 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x14007D080 (RIMFreeQDCActivePathsData.c)
 */

void __fastcall RIMFindMonitorForDigitizer(
        struct RIMDEV *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  int v6; // edi
  unsigned int *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12[6]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v12 = 0LL;
  v6 = a3;
  v8 = RIMGetQDCActivePathsData(v12, (__int64)a2, a3, a4);
  rimFindMonitorForDigitizerWithQDCData((__int64)a1, (__int64)v8, a4);
  if ( v6 )
    RIMSetDeviceOutputConfig(a1, a2, 1u, (__int64)v8);
  RIMFreeQDCActivePathsData((__int64)v8, v9, v10, v11);
}
