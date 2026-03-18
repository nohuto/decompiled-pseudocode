/*
 * XREFs of ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140002C30
 * Callers:
 *     ?s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x1400024D0 (-s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 *     ?PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@00_N@Z @ 0x140002710 (-PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@00_N@Z.c)
 *     ?HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ @ 0x140002BE8 (-HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ.c)
 *     ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x140003804 (-NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 *     ?OnSettingChange@CDwmAppHost@@AEAAX_K_J@Z @ 0x140003B70 (-OnSettingChange@CDwmAppHost@@AEAAX_K_J@Z.c)
 * Callees:
 *     ?SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z @ 0x140002CBC (-SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x140002E14 (--1CPortClient@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x140002E2C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CPortClient@@QEAA@I@Z @ 0x14000D348 (--0CPortClient@@QEAA@I@Z.c)
 */

__int64 __fastcall CDwmAppHost::LpcNotifySettingsChange(CDwmAppHost *this, unsigned int a2)
{
  unsigned int v2; // ebx
  int v3; // edx
  __int16 v4; // r9
  int v5; // eax
  _BYTE v7[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-28h]
  CDwmAppHost *v9; // [rsp+70h] [rbp+8h] BYREF

  v9 = this;
  v2 = 0;
  if ( *(&hInstance + 1) )
  {
    CPortClient::CPortClient((CPortClient *)v7, a2);
    v8 = (__int64)*(&hInstance + 1);
    LODWORD(v9) = 1073741871;
    HIDWORD(v9) = v3;
    v5 = CPortClient::SendComplexAsyncRequest((CPortClient *)v7, 0x4000002Fu, &v9, v4);
    v2 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x17Cu, 0LL);
    CPortClient::~CPortClient((CPortClient *)v7);
  }
  return v2;
}
