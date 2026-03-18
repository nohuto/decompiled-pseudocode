/*
 * XREFs of ?GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z @ 0x14018ABC0
 * Callers:
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1400A89E4 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     IsLegacyTouchPad @ 0x140124C78 (IsLegacyTouchPad.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z @ 0x1401D4890 (-GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z.c)
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
  struct W32_PUSH_LOCK *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  _BOOL8 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  int v18; // eax
  int v19; // ecx
  __int64 v20; // rax
  struct tagRECT v21; // xmm1
  int v22; // eax

  *a8 = 0LL;
  *a5 = 0;
  *a6 = 0;
  v10 = 0;
  *a7 = 0LL;
  *a3 = 0;
  *a4 = 0;
  v11 = *(struct W32_PUSH_LOCK **)(*(_QWORD *)(W32GetUserSessionState(0LL, a2) + 16840) + 1232LL);
  W32AcquirePushLockSharedEx(v11, 0);
  UserSessionState = W32GetUserSessionState(v13, v12);
  v15 = 0LL;
  v16 = *(_QWORD *)(UserSessionState + 16840);
  v17 = **(_QWORD **)(v16 + 1240);
  if ( !v17 )
    goto LABEL_25;
  do
  {
    if ( (*(_DWORD *)(v17 + 184) & 0x80u) == 0 )
    {
      if ( *(_DWORD *)(v17 + 48) != v15 )
        goto LABEL_21;
      if ( *(_WORD *)(v17 + 864) == v15 )
      {
        *a3 = 1;
        goto LABEL_21;
      }
      LOBYTE(v22) = IsLegacyTouchPad(v17);
      if ( v22 )
      {
        *a6 = 1;
        *(_BYTE *)(W32GetUserSessionState(v16, v15) + 12058) = 1;
LABEL_20:
        v15 = 0LL;
      }
    }
    else
    {
      v18 = *(_DWORD *)(*(_QWORD *)(v17 + 456) + 24LL);
      if ( v18 == 7 )
      {
        v10 = 1;
        *(_BYTE *)(W32GetUserSessionState(v16, v15) + 12058) = 1;
        v19 = *(_DWORD *)(*(_QWORD *)(v17 + 456) + 964LL);
        switch ( v19 )
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
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1982LL);
            break;
        }
        v20 = *(_QWORD *)(v17 + 456);
        v21 = *(struct tagRECT *)(v20 + 140);
        *a7 = *(struct tagRECT *)(v20 + 124);
        *a8 = v21;
        RimTelemetry::GetHidVidPidStrings((struct RIMDEV *const)v17, a1, a2);
        goto LABEL_20;
      }
      if ( (unsigned int)(v18 - 1) <= 3 )
        *a4 = 1;
    }
LABEL_21:
    v17 = *(_QWORD *)(v17 + 56);
  }
  while ( v17 );
  if ( v10 && *a6 != v15 )
    *a6 = v15;
LABEL_25:
  ExReleasePushLockSharedEx(v11, 0LL);
  KeLeaveCriticalRegion();
}
