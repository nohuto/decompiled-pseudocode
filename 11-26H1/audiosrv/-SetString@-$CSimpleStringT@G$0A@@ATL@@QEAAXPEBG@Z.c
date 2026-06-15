/*
 * XREFs of ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180028290
 * Callers:
 *     ?OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x180027410 (-OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4.c)
 *     ?OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z @ 0x180027640 (-OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z.c)
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x180028A28 (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x180028E0C (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18002941C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 *     ?QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z @ 0x18004133C (-QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z.c)
 *     ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x18006D4D0 (-SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z.c)
 *     ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x180070D90 (-SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1801053BC (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180018490 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800B314E (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::SetString(__int64 *a1, _WORD *a2)
{
  __int64 v4; // rbx
  __int64 result; // rax
  char *v6; // rcx
  __int64 v7; // rsi
  char *v8; // rdx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbp

  if ( !a2 )
    return ATL::CSimpleStringT<unsigned short,0>::Empty(a1);
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  if ( !(_DWORD)v4 )
    return ATL::CSimpleStringT<unsigned short,0>::Empty(a1);
  v9 = *(unsigned int *)(*a1 - 16);
  v10 = ((__int64)a2 - *a1) >> 1;
  if ( (int)((*(_DWORD *)(*a1 - 12) - v4) | (1 - *(_DWORD *)(*a1 - 8))) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v4);
  v6 = (char *)*a1;
  v7 = 2LL * (int)v4;
  if ( v10 > v9 )
  {
    if ( !v7 )
      goto LABEL_7;
    if ( v6 )
    {
      memcpy_0(v6, a2, 2LL * (int)v4);
      goto LABEL_7;
    }
    goto LABEL_14;
  }
  v8 = &v6[2 * v10];
  if ( v7 )
  {
    if ( !v6 || !v8 )
    {
LABEL_14:
      *(_DWORD *)_o__errno(v6) = 22;
      invalid_parameter_noinfo();
      goto LABEL_7;
    }
    memmove_0(v6, v8, 2LL * (int)v4);
  }
LABEL_7:
  if ( (int)v4 < 0 || (int)v4 > *(_DWORD *)(*a1 - 12) )
    ATL::AtlThrowImpl(-2147024809);
  *(_DWORD *)(*a1 - 16) = v4;
  result = *a1;
  *(_WORD *)(v7 + *a1) = 0;
  return result;
}
