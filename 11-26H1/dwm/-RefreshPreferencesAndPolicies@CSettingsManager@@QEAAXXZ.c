/*
 * XREFs of ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x140002924
 * Callers:
 *     ?s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x1400024D0 (-s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 *     ?PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@00_N@Z @ 0x140002710 (-PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@00_N@Z.c)
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140002EE8 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ?GetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGPEAK@Z @ 0x140002A8C (-GetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGPEAK@Z.c)
 */

void __fastcall CSettingsManager::RefreshPreferencesAndPolicies(CSettingsManager *this)
{
  int v1; // ebx
  _DWORD *v2; // rdi
  __int64 v3; // r14
  __int64 v5; // r8
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // rdi
  int v9; // ebx
  __int64 v10; // r14
  __int64 v11; // r8
  int v12; // ecx
  int v13; // eax
  const wchar_t *v14; // [rsp+20h] [rbp-29h]
  _QWORD v15[6]; // [rsp+28h] [rbp-21h] BYREF
  _DWORD v16[2]; // [rsp+58h] [rbp+Fh] BYREF
  const wchar_t *v17; // [rsp+60h] [rbp+17h]
  __int64 v18; // [rsp+68h] [rbp+1Fh]
  const wchar_t *v19; // [rsp+70h] [rbp+27h]
  __int64 v20; // [rsp+78h] [rbp+2Fh]
  const wchar_t *v21; // [rsp+80h] [rbp+37h]
  __int64 v22; // [rsp+88h] [rbp+3Fh]
  int v23; // [rsp+B0h] [rbp+67h] BYREF

  v1 = *((_DWORD *)this + 16);
  v15[5] = L"UseDPIScaling";
  v2 = v16;
  v16[0] = 1;
  v17 = L"AnimationsShiftKey";
  v3 = 4LL;
  v16[1] = 1;
  v19 = L"DisableLockingMemory";
  v18 = 2LL;
  v21 = L"ModeChangeCurtainUseDebugColor";
  v14 = L"DisallowAnimations";
  v15[1] = L"DisallowColorizationColorChanges";
  v15[3] = L"DefaultColorizationColorState";
  v20 = 64LL;
  v22 = 128LL;
  v15[0] = 1LL;
  v15[2] = 2LL;
  v15[4] = 4LL;
  do
  {
    v5 = *((_QWORD *)v2 - 1);
    v23 = 0;
    if ( (int)CSettingsManager::GetDword(this, 0LL, v5, &v23) >= 0 )
      v6 = v23;
    else
      v6 = v2[1];
    v7 = *v2;
    if ( v6 )
      v1 |= v7;
    else
      v1 &= ~v7;
    v2 += 4;
    --v3;
  }
  while ( v3 );
  *((_DWORD *)this + 16) = v1;
  v8 = v15;
  v9 = *((_DWORD *)this + 17);
  v10 = 3LL;
  do
  {
    v11 = *((_QWORD *)v8 - 1);
    v23 = 0;
    if ( (int)CSettingsManager::GetDword(this, 1LL, v11, &v23) >= 0 )
      v12 = v23;
    else
      v12 = v8[1];
    v13 = *v8;
    if ( v12 )
      v9 |= v13;
    else
      v9 &= ~v13;
    v8 += 4;
    --v10;
  }
  while ( v10 );
  *((_DWORD *)this + 17) = v9;
}
