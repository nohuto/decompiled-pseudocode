/*
 * XREFs of ??$GreAcquireSemaphore@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B36C
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400CA374 (-vCleanupDCs@@YAXK@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z @ 0x1401994C4 (-DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1401B6664 (McTemplateK0pqz_EtwWriteTransfer.c)
 */

struct _GRETHREAD *__fastcall GreAcquireSemaphore<20,>(__int64 *a1, int a2, int a3)
{
  __int64 v3; // rbx
  struct _GRETHREAD *result; // rax
  unsigned __int64 i; // rcx
  struct _GRETHREAD *v6; // rbx
  __int64 v7; // r8
  int v8; // edx
  int v9; // eax

  v3 = *a1;
  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer((_DWORD)a1, a2, a3, v3 + 1512, 0, (__int64)L"Hmgr");
  GreAcquireSemaphoreInternal((HSEMAPHORE)(v3 + 1512));
  result = GreGetCurrentThreadCrossSessionCheck();
  v6 = result;
  if ( result )
  {
    v7 = *(_QWORD *)result;
    if ( (*(_QWORD *)result & 0xFFFFFFDFFFF00000uLL) != 0 && (v7 & 0x100000) == 0 )
    {
      v8 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v9 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v7) == 0 )
          v9 = v8;
        v8 = v9;
      }
      if ( v9 > 20 && v9 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v9, v7);
    }
    LOBYTE(i) = *((_BYTE *)v6 + 28);
    result = (struct _GRETHREAD *)(unsigned int)(i + 1);
    *((_BYTE *)v6 + 28) = i + 1;
    if ( !(_BYTE)i )
      *(_QWORD *)v6 |= 0x100000uLL;
  }
  return result;
}
