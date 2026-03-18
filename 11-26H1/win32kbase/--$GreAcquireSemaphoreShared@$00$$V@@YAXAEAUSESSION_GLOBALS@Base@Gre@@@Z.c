/*
 * XREFs of ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B1F0
 * Callers:
 *     ?GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140036C08 (-GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x14003B480 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ReleaseCacheDC @ 0x14003BF80 (ReleaseCacheDC.c)
 *     NtGdiGetDeviceCaps @ 0x14003C450 (NtGdiGetDeviceCaps.c)
 *     GreLockVisRgnShared @ 0x1400C5430 (GreLockVisRgnShared.c)
 *     DxEngLockShareSem @ 0x1401F9D00 (DxEngLockShareSem.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     EngAcquireSemaphoreShared @ 0x14001C5E0 (EngAcquireSemaphoreShared.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 */

struct _GRETHREAD *__fastcall GreAcquireSemaphoreShared<1,>(_DWORD *a1, __int64 a2, int a3)
{
  struct _GRETHREAD *result; // rax
  unsigned __int64 i; // rcx
  struct _GRETHREAD *v6; // rbx
  __int64 v7; // r8
  int v8; // edx
  int v9; // eax

  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      (_DWORD)a1,
      (unsigned int)&LockAcquireShared,
      a3,
      *a1 + 624,
      (__int64)L"DynamicModeChange");
  EngAcquireSemaphoreShared((HSEMAPHORE)(*(_QWORD *)a1 + 624LL));
  result = GreGetCurrentThreadCrossSessionCheck();
  v6 = result;
  if ( result )
  {
    v7 = *(_QWORD *)result;
    if ( (*(_QWORD *)result & 0xFFFFFFDFFFFFFFFEuLL) != 0 && (*(_QWORD *)result & 2) == 0 )
    {
      v8 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v9 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v7) == 0 )
          v9 = v8;
        v8 = v9;
      }
      if ( v9 > 1 && v9 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v9, v7);
    }
    LOBYTE(i) = *((_BYTE *)v6 + 9);
    result = (struct _GRETHREAD *)(unsigned int)(i + 1);
    *((_BYTE *)v6 + 9) = i + 1;
    if ( !(_BYTE)i )
      *(_QWORD *)v6 |= 2uLL;
  }
  return result;
}
