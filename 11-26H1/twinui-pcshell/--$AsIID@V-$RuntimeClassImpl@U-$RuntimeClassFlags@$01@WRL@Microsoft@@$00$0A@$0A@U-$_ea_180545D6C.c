/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIDropFeedbackItem@@UITemporaryAppVisual@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveApplicationNotification@@UIDropFeedbackItemInternal@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIDropFeedbackItem@@UITemporaryAppVisual@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveApplicationNotification@@UIDropFeedbackItemInternal@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180545D6C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIDropFeedbackItem@@UITemporaryAppVisual@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveApplicationNotification@@UIDropFeedbackItemInternal@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180547170 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180547170.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180057770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IDropFeedbackItem,ITemporaryAppVisual,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationNotification,IDropFeedbackItemInternal>>(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  const struct _GUID *v9; // rcx
  int v10; // ebx
  const struct _GUID *v11; // rcx
  _QWORD *v12; // r8
  __int64 v13; // r11
  _QWORD *v14; // r8
  __int64 v15; // r11

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( InlineIsEqualGUID(v3, &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810)
      || InlineIsEqualGUID(v6, &GUID_114ed843_c914_443d_9588_6ffb643e73d0) )
    {
      *v7 = v8;
    }
    else
    {
      if ( !InlineIsEqualGUID(v9, &GUID_2ccdcaf2_ca4f_45b0_940b_d5b78a628060) )
      {
        if ( InlineIsEqualGUID(v11, &GUID_3b3d24a4_78ef_4796_bec6_c9896b501c36) )
        {
          v8 = v15 + 8;
          v10 = 0;
          *v14 = v15 + 8;
        }
        else
        {
          v10 = -2147467262;
          v8 = 0LL;
        }
        if ( v10 < 0 )
          return (unsigned int)v10;
        goto LABEL_12;
      }
      *v12 = v13;
    }
    v10 = 0;
LABEL_12:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    return (unsigned int)v10;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
