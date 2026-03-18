/*
 * XREFs of ?GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z @ 0x1401610E8
 * Callers:
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x140160DC0 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     IsTouchPointerDevice @ 0x14013EB58 (IsTouchPointerDevice.c)
 *     IsLegacyTouchPad @ 0x140161328 (IsLegacyTouchPad.c)
 *     ?GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z @ 0x140161350 (-GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall PTPTelemetry::GetDeviceData(
        struct _UNICODE_STRING *a1,
        struct _UNICODE_STRING *a2,
        bool *a3,
        bool *a4,
        unsigned int *a5,
        bool *a6,
        struct tagRECT *a7,
        struct tagRECT *a8)
{
  char v10; // bp
  __int64 v11; // rbx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v18; // rdi
  int v19; // ecx
  __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // rax
  struct tagRECT v23; // xmm1

  *a8 = 0LL;
  *a5 = 0;
  *a6 = 0;
  v10 = 0;
  *a7 = 0LL;
  *a3 = 0;
  *a4 = 0;
  v11 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(0, (_DWORD)a2, (_DWORD)a3) + 16832) + 1232LL);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v11, 0LL);
  UserSessionState = W32GetUserSessionState(v13, v12, v14);
  v17 = 0;
  v18 = **(_QWORD **)(*(_QWORD *)(UserSessionState + 16832) + 1240LL);
  if ( !v18 )
    goto LABEL_8;
  do
  {
    if ( (*(_DWORD *)(v18 + 184) & 0x80u) != 0 )
    {
      v20 = *(_QWORD *)(v18 + 456);
      if ( *(_DWORD *)(v20 + 24) == 7 )
      {
        v10 = 1;
        *(_BYTE *)(W32GetUserSessionState(v20, v17, v16) + 12058) = 1;
        v21 = *(_DWORD *)(*(_QWORD *)(v18 + 456) + 964LL);
        switch ( v21 )
        {
          case 1:
            *a5 = 1;
            break;
          case 2:
            *a5 = 2;
            break;
          case 3:
            *a5 = 3;
            break;
          case 0:
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1949LL);
            break;
        }
        v22 = *(_QWORD *)(v18 + 456);
        v23 = *(struct tagRECT *)(v22 + 140);
        *a7 = *(struct tagRECT *)(v22 + 124);
        *a8 = v23;
        RimTelemetry::GetHidVidPidStrings((struct RIMDEV *const)v18, a1, a2);
        goto LABEL_17;
      }
      if ( (unsigned int)IsTouchPointerDevice(v20) )
        *a4 = 1;
    }
    else
    {
      if ( *(_DWORD *)(v18 + 48) != v17 )
        goto LABEL_4;
      if ( *(_WORD *)(v18 + 864) == (_WORD)v17 )
      {
        *a3 = 1;
        goto LABEL_4;
      }
      if ( (unsigned int)IsLegacyTouchPad(v18) )
      {
        *a6 = 1;
        *(_BYTE *)(W32GetUserSessionState(v19, v17, v16) + 12058) = 1;
LABEL_17:
        v17 = 0;
      }
    }
LABEL_4:
    v18 = *(_QWORD *)(v18 + 56);
  }
  while ( v18 );
  if ( v10 && *a6 != (_BYTE)v17 )
    *a6 = v17;
LABEL_8:
  ExReleasePushLockSharedEx(v11, 0LL);
  KeLeaveCriticalRegion();
}
