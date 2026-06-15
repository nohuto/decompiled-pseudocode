/*
 * XREFs of _lambda_b5d2e7512e0cec9d80c41e9eebd2b3f7_::operator() @ 0x18005E7EC
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800906DC (-AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     _lambda_c30c4322ad4fbb47bc43bb3cdcd427e3_::operator() @ 0x180136F24 (_lambda_c30c4322ad4fbb47bc43bb3cdcd427e3_--operator().c)
 * Callees:
 *     ?TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@@Z @ 0x18005E8E4 (-TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA-AU_GUID@@W4__MIDL___MIDL_.c)
 */

struct _GUID *__fastcall lambda_b5d2e7512e0cec9d80c41e9eebd2b3f7_::operator()(__int64 a1, struct _GUID *a2)
{
  unsigned __int64 v2; // rdi
  EffectPack *v4; // r11
  __int64 v6; // rsi
  __int64 v7; // r8
  int i; // ecx
  GUID *v9; // rax
  _QWORD *v10; // r9
  __int64 v11; // rdx
  int j; // eax
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  bool v15; // zf
  struct _GUID v17; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(int *)(a1 + 8);
  v4 = *(EffectPack **)a1;
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 1712LL) )
  {
    _o_terminate(a1, a2, v2);
    __debugbreak();
    JUMPOUT(0x18005E8DDLL);
  }
  v6 = *((_QWORD *)v4 + 215);
  v7 = 16 * v2;
  for ( i = 0; i < *(_DWORD *)(v7 + v6 + 8); ++i )
  {
    v9 = (GUID *)(a1 + 12);
    v10 = (_QWORD *)(*(_QWORD *)(v7 + v6) + 16LL * i);
    v11 = *v10 - *(_QWORD *)(a1 + 12);
    if ( *v10 == *(_QWORD *)(a1 + 12) )
      v11 = v10[1] - *(_QWORD *)(a1 + 20);
    if ( !v11 )
    {
      if ( i != -1 )
        goto LABEL_17;
      break;
    }
  }
  for ( j = 0; j < *(_DWORD *)(v7 + v6 + 8); ++j )
  {
    v13 = (_QWORD *)(*(_QWORD *)(v7 + v6) + 16LL * j);
    v14 = *v13 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    if ( *v13 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
      v14 = v13[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    if ( !v14 )
    {
      v15 = j == -1;
      v9 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      if ( !v15 )
        goto LABEL_17;
      break;
    }
  }
  v9 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
LABEL_17:
  v17 = *v9;
  EffectPack::TranslateDeviceConnectorModeToStreamingConnectorMode(
    v4,
    a2,
    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v2,
    &v17);
  return a2;
}
