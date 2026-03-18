/*
 * XREFs of ?Initialize@DisplayDiagnostics@@QEAAXXZ @ 0x140077CC0
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1401DD97C (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z @ 0x140060408 (--$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z.c)
 *     ?Stop@LongPowerButtonHoldListener@@QEAAXXZ @ 0x140077C74 (-Stop@LongPowerButtonHoldListener@@QEAAXXZ.c)
 *     ?Initialize@DXGBLACKBOX@@QEAAJXZ @ 0x1401D5124 (-Initialize@DXGBLACKBOX@@QEAAJXZ.c)
 */

void __fastcall DisplayDiagnostics::Initialize(PVOID *Context)
{
  int v2; // eax
  __int64 v3; // rbx
  int v4; // eax
  __int64 v5; // rsi
  NTSTATUS v6; // eax
  __int64 v7; // rbx
  NTSTATUS v8; // eax
  __int64 v9; // rbx
  PVOID v10; // [rsp+70h] [rbp+8h] BYREF
  NTSTATUS (__stdcall *v11)(PVOID); // [rsp+78h] [rbp+10h] BYREF

  v2 = DXGBLACKBOX::Initialize((DXGBLACKBOX *)Context);
  if ( v2 < 0 )
  {
    v3 = v2;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 22;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGBLACKBOX::Initialize() failed with Status : 0x%I64x",
      v3,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = ExSubscribeWnfStateChange(Context + 8, &WNF_PO_POWER_BUTTON_STATE, 1LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    LongPowerButtonHoldListener::Stop((LongPowerButtonHoldListener *)(Context + 8));
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 28;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"LongPowerButtonHoldListener::Start() failed with Status : 0x%I64x",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( Context[21] )
  {
    v10 = Context[21];
    v11 = PoUnregisterPowerSettingCallback;
    ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v11, &v10);
  }
  Context[21] = 0LL;
  v6 = PoRegisterPowerSettingCallback(
         0LL,
         &GUID_LIDSWITCH_STATE_CHANGE,
         (PPOWER_SETTING_CALLBACK)DisplayDiagnostics::LidStateChangeCallback,
         Context,
         Context + 21);
  if ( v6 < 0 )
  {
    v7 = v6;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 35;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PoRegisterPowerSettingCallback for GUID_LIDSWITCH_STATE_CHANGE failed with status:0x%I64x",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( Context[22] )
  {
    v10 = Context[22];
    v11 = PoUnregisterPowerSettingCallback;
    ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v11, &v10);
  }
  Context[22] = 0LL;
  v8 = PoRegisterPowerSettingCallback(
         0LL,
         &GUID_LIDSWITCH_STATE_RELIABILITY,
         DisplayDiagnostics::LidStateReliabilityChangeCallback,
         Context,
         Context + 22);
  if ( v8 < 0 )
  {
    v9 = v8;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 42;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PoRegisterPowerSettingCallback for GUID_LIDSWITCH_STATE_RELIABILITY failed with status:0x%I64x",
      v9,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
