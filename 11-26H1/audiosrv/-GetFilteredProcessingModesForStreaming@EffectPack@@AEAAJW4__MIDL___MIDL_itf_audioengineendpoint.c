/*
 * XREFs of ?GetFilteredProcessingModesForStreaming@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4ApoType@@_NAEAVCAudioSignalProcessingModeArray@@@Z @ 0x18000A7B0
 * Callers:
 *     ?FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000A1F8 (-FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 * Callees:
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18000B940 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall EffectPack::GetFilteredProcessingModesForStreaming(
        __int64 a1,
        int a2,
        unsigned int a3,
        char a4,
        __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // ebx
  unsigned int v11; // esi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v15; // rcx
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = a3;
  v7 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  v8 = v6 + 3LL * a2;
  v9 = *(_QWORD *)(a1 + 1568);
  v8 *= 32LL;
  v10 = 0;
  v11 = *(_DWORD *)(v8 + v9 + 1328);
  v12 = *(_QWORD *)(v8 + v9 + 1336);
  v13 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
  while ( 1 )
  {
    if ( v10 >= v11 )
      return 0LL;
    if ( a4 )
      break;
    v15 = *(_QWORD *)(v12 + 16LL * v10) - v7;
    if ( !v15 )
      v15 = *(_QWORD *)(v12 + 16LL * v10 + 8) - v13;
    if ( v15 )
      break;
LABEL_8:
    ++v10;
  }
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(a5, v12 + 16LL * v10) )
  {
    v13 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    v7 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4DA,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)0x8007000ELL,
    v16);
  return 2147942414LL;
}
