/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180046B10
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180046BC0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180046BC0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180046BD0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180046BD0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180024FDC (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioPolicyManager,ISessionInternalEvents,IAudioPolicyNotificationManager>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // r10
  int v9; // ebx
  _DWORD *v10; // rcx
  _QWORD *v11; // r8

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( InlineIsEqualGUID(v3, &GUID_8f24394f_d254_4bd0_ab4f_9ed23c032a13)
    || InlineIsEqualGUID(v8, &GUID_a68ab569_b923_4330_a258_1735412d392e) )
  {
    *v6 = v7;
    v9 = 0;
LABEL_9:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    return (unsigned int)v9;
  }
  if ( InlineIsEqualGUID(v10, &GUID_7cd77114_b031_4a63_bf09_9fd46c7629d0) )
  {
    *v11 = v7;
    v9 = 0;
  }
  else
  {
    v9 = -2147467262;
    v7 = 0LL;
  }
  if ( v9 >= 0 )
    goto LABEL_9;
  return (unsigned int)v9;
}
