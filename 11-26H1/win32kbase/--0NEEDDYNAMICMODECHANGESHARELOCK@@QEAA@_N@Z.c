/*
 * XREFs of ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1400FE8B0
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     ?bDelete@XDCOBJ@@QEAA_NK@Z @ 0x14003E5B4 (-bDelete@XDCOBJ@@QEAA_NK@Z.c)
 *     NtGdiGetDeviceCapsAll @ 0x1400FE730 (NtGdiGetDeviceCapsAll.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     EngAcquireSemaphoreShared @ 0x14001C5E0 (EngAcquireSemaphoreShared.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 */

NEEDDYNAMICMODECHANGESHARELOCK *__fastcall NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
        NEEDDYNAMICMODECHANGESHARELOCK *this,
        char a2)
{
  int v4; // ecx
  _DWORD *v5; // rdi
  int v6; // r8d
  struct _GRETHREAD *v7; // rax
  struct _GRETHREAD *v8; // rbx
  __int64 v9; // r8
  char v10; // cl
  int v12; // edx
  unsigned __int64 i; // rcx
  int v14; // eax

  v5 = *(_DWORD **)(W32GetSessionState(this) + 88);
  *(_QWORD *)this = v5;
  *((_BYTE *)this + 8) = a2;
  if ( a2 )
  {
    if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v4,
        (unsigned int)&LockAcquireShared,
        v6,
        *v5 + 624,
        (__int64)L"DynamicModeChange");
    EngAcquireSemaphoreShared((HSEMAPHORE)(*(_QWORD *)v5 + 624LL));
    v7 = GreGetCurrentThreadCrossSessionCheck();
    v8 = v7;
    if ( v7 )
    {
      v9 = *(_QWORD *)v7;
      if ( (*(_QWORD *)v7 & 0xFFFFFFDFFFFFFFFEuLL) != 0 && (*(_QWORD *)v7 & 2) == 0 )
      {
        v12 = 38;
        for ( i = 0LL; i < 0x40; ++i )
        {
          v14 = i;
          if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v9) == 0 )
            v14 = v12;
          v12 = v14;
        }
        if ( v14 > 1 && v14 != 38 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
      }
      v10 = *((_BYTE *)v8 + 9);
      *((_BYTE *)v8 + 9) = v10 + 1;
      if ( !v10 )
        *(_QWORD *)v8 |= 2uLL;
    }
  }
  return this;
}
