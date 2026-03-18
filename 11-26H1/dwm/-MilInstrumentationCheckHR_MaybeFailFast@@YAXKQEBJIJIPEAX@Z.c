/*
 * XREFs of ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x140002E2C
 * Callers:
 *     wWinMain @ 0x140001FA0 (wWinMain.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x14000223C (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     ?SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z @ 0x140002398 (-SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z.c)
 *     ?s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x1400024D0 (-s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 *     ?HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ @ 0x140002BE8 (-HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ.c)
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140002C30 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z @ 0x140002CBC (-SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z.c)
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140002EE8 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?ModifyTokenPrivileges@@YAJXZ @ 0x140003204 (-ModifyTokenPrivileges@@YAJXZ.c)
 *     ?CheckForDwmGroupSid@@YAJXZ @ 0x1400033B4 (-CheckForDwmGroupSid@@YAJXZ.c)
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140003500 (-Run@CDwmAppHost@@QEAAJXZ.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140003644 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x14000396C (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x1400044E0 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 *     ?SetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGK@Z @ 0x14000D05C (-SetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGK@Z.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x14000D3E4 (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z.c)
 *     ?WilResultLoggingCallback_MaybeFailFast@@YAXAEBUFailureInfo@wil@@@Z @ 0x14000F530 (-WilResultLoggingCallback_MaybeFailFast@@YAXAEBUFailureInfo@wil@@@Z.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x1400036F0 (-IsOOM@@YA_NJ@Z.c)
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x14000F22C (-DoStackCapture@@YAXJIPEAX@Z.c)
 *     ?IsHRInList@@YA_NJQEBJI@Z @ 0x14000F3B4 (-IsHRInList@@YA_NJQEBJI@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x14000F3D8 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 */

void __fastcall MilInstrumentationCheckHR_MaybeFailFast(
        unsigned int a1,
        const int *const a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        void *a6)
{
  void *v6; // rdi
  bool v9; // al
  int v10; // ecx
  const int *v11; // r10
  unsigned int v12; // r11d
  bool v13; // bp
  void *retaddr; // [rsp+28h] [rbp+0h]

  v6 = a6;
  if ( !a6 )
    v6 = retaddr;
  v9 = IsOOM(a4);
  v13 = v9;
  if ( (a1 & 0x10) != 0 && v9 )
  {
    if ( !v11 || !v12 )
      goto LABEL_12;
  }
  else if ( !v11 || !v12 )
  {
    v11 = (const int *)&unk_1400132A0;
    v12 = 10;
  }
  if ( !IsHRInList(v10, v11, v12) )
  {
LABEL_12:
    MilInstrumentationHandleFailure_MaybeFailFast(a4, a1, a5, v6);
    return;
  }
  if ( (a1 & 4) != 0 && v13 )
    DoStackCapture(a4, a5, v6);
}
