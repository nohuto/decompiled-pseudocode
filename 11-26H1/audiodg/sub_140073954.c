/*
 * XREFs of sub_140073954 @ 0x140073954
 * Callers:
 *     sub_140019A60 @ 0x140019A60 (sub_140019A60.c)
 *     sub_140019AA0 @ 0x140019AA0 (sub_140019AA0.c)
 *     sub_14001C780 @ 0x14001C780 (sub_14001C780.c)
 *     sub_14001F9F4 @ 0x14001F9F4 (sub_14001F9F4.c)
 *     sub_1400257B0 @ 0x1400257B0 (sub_1400257B0.c)
 *     sub_140026D60 @ 0x140026D60 (sub_140026D60.c)
 *     sub_1400301A0 @ 0x1400301A0 (sub_1400301A0.c)
 *     sub_1400334C0 @ 0x1400334C0 (sub_1400334C0.c)
 *     sub_140033D30 @ 0x140033D30 (sub_140033D30.c)
 *     sub_1400342E0 @ 0x1400342E0 (sub_1400342E0.c)
 *     sub_140036DF0 @ 0x140036DF0 (sub_140036DF0.c)
 *     sub_140037120 @ 0x140037120 (sub_140037120.c)
 *     sub_1400371E0 @ 0x1400371E0 (sub_1400371E0.c)
 *     sub_14003A7B0 @ 0x14003A7B0 (sub_14003A7B0.c)
 *     sub_14003A9C0 @ 0x14003A9C0 (sub_14003A9C0.c)
 *     sub_14003F280 @ 0x14003F280 (sub_14003F280.c)
 *     sub_1400400E0 @ 0x1400400E0 (sub_1400400E0.c)
 *     sub_140040FD0 @ 0x140040FD0 (sub_140040FD0.c)
 *     sub_140041010 @ 0x140041010 (sub_140041010.c)
 *     sub_14005A4E4 @ 0x14005A4E4 (sub_14005A4E4.c)
 *     sub_14005B204 @ 0x14005B204 (sub_14005B204.c)
 *     sub_1400735A0 @ 0x1400735A0 (sub_1400735A0.c)
 *     sub_140073790 @ 0x140073790 (sub_140073790.c)
 *     sub_140073E10 @ 0x140073E10 (sub_140073E10.c)
 *     sub_140073EE0 @ 0x140073EE0 (sub_140073EE0.c)
 *     sub_140073F20 @ 0x140073F20 (sub_140073F20.c)
 *     sub_140073F60 @ 0x140073F60 (sub_140073F60.c)
 *     sub_140074150 @ 0x140074150 (sub_140074150.c)
 *     sub_140074540 @ 0x140074540 (sub_140074540.c)
 *     sub_140074580 @ 0x140074580 (sub_140074580.c)
 *     sub_140074650 @ 0x140074650 (sub_140074650.c)
 *     sub_140074690 @ 0x140074690 (sub_140074690.c)
 *     sub_1400746D0 @ 0x1400746D0 (sub_1400746D0.c)
 * Callees:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400734AC @ 0x1400734AC (sub_1400734AC.c)
 */

__int64 __fastcall sub_140073954(_QWORD *a1, int a2, void *a3, int a4, __int128 *pvData, void *a6)
{
  _DWORD *v10; // rax
  HANDLE CurrentProcess; // rax
  DWORD pcbData; // [rsp+40h] [rbp-28h] BYREF
  DWORD pdwType[3]; // [rsp+44h] [rbp-24h] BYREF
  __int128 v15; // [rsp+50h] [rbp-18h] BYREF

  v10 = (_DWORD *)sub_140006470((__int64)a1);
  v15 = *pvData;
  sub_1400734AC(v10, a3, a4, (__int64)&v15, a6, a2);
  pcbData = 4;
  pdwType[0] = 0;
  LODWORD(pvData) = 0;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
         L"PreventAudioDGCrashOrReportOnAPOException",
         0x18u,
         pdwType,
         &pvData,
         &pcbData)
    || !(_DWORD)pvData )
  {
    RtlReportException(*a1, a1[1], 2LL);
    CurrentProcess = GetCurrentProcess();
    TerminateProcess(CurrentProcess, 0xC8u);
  }
  return 1LL;
}
