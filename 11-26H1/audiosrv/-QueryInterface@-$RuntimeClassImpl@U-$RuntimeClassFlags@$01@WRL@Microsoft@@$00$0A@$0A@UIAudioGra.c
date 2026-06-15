/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@UIAudioStreamInfo@@UIAudioStreamPolicyVolumeClient@@UIDuckingController@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180048E50
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@UIAudioStreamInfo@@UIAudioStreamPolicyVolumeClient@@UIDuckingController@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180113040 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180113040.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@UIAudioStreamInfo@@UIAudioStreamPolicyVolumeClient@@UIDuckingController@@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180113050 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180113050.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@UIAudioStreamInfo@@UIAudioStreamPolicyVolumeClient@@UIDuckingController@@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180113060 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180113060.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioGraphCallback,IAudioStreamInfo,IAudioStreamPolicyVolumeClient,IDuckingController>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v5; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 == 796074085
      && a2[1] == *(_DWORD *)&GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data2
      && a2[2] == *(_DWORD *)GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data4
      && a2[3] == *(_DWORD *)&GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data4[4] )
    {
      goto LABEL_17;
    }
  }
  else if ( a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
         && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
         && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return v3;
  }
  a1 += 8LL;
  if ( *a2 != 80022857
    || a2[1] != *(_DWORD *)&GUID_04c50d49_105a_4a6b_8af7_0de59e20ce12.Data2
    || a2[2] != *(_DWORD *)GUID_04c50d49_105a_4a6b_8af7_0de59e20ce12.Data4
    || a2[3] != *(_DWORD *)&GUID_04c50d49_105a_4a6b_8af7_0de59e20ce12.Data4[4] )
  {
    v4 = a1 + 8;
    if ( *a2 == -1971745158
      && a2[1] == *(_DWORD *)&GUID_8a798e7a_7123_4f95_8068_874420b469a8.Data2
      && a2[2] == *(_DWORD *)GUID_8a798e7a_7123_4f95_8068_874420b469a8.Data4
      && a2[3] == *(_DWORD *)&GUID_8a798e7a_7123_4f95_8068_874420b469a8.Data4[4]
      || (v4 += 8LL, *a2 == 956653998)
      && a2[1] == *(_DWORD *)&GUID_390561ae_7375_4558_aff9_667acfe35ac5.Data2
      && a2[2] == *(_DWORD *)GUID_390561ae_7375_4558_aff9_667acfe35ac5.Data4
      && a2[3] == *(_DWORD *)&GUID_390561ae_7375_4558_aff9_667acfe35ac5.Data4[4] )
    {
      *a3 = v4;
      v5 = 0;
    }
    else
    {
      v5 = -2147467262;
    }
    if ( v5 < 0 )
      return (unsigned int)v5;
    goto LABEL_18;
  }
LABEL_17:
  *a3 = a1;
  v5 = 0;
LABEL_18:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v5;
}
