/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VObservableObjectArray@@UIApplicationViewChangeListener@@UISwitchItemCollection@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VObservableObjectArray@@UIApplicationViewChangeListener@@UISwitchItemCollection@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18049F434
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VObservableObjectArray@@UIApplicationViewChangeListener@@UISwitchItemCollection@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18049FD20 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VObservable.c)
 *     ?SwitchItemCollection_CreateInstance@@YAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@W4SwitchItemFilterBehavior@@AEBU_GUID@@PEAPEAX@Z @ 0x18049FF60 (-SwitchItemCollection_CreateInstance@@YAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18004F930 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ObservableObjectArray,IApplicationViewChangeListener,ISwitchItemCollection>>(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  const struct _GUID *v6; // rdx
  const struct _GUID *v7; // rcx
  const struct _GUID *v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  const struct _GUID *v12; // rcx
  _QWORD *v13; // r8
  __int64 v14; // r11
  const struct _GUID *v15; // rcx
  const struct _GUID *v16; // rcx
  _QWORD *v17; // r8
  __int64 v18; // r11
  _QWORD *v19; // r8
  __int64 v20; // r11

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    && !InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    if ( InlineIsEqualGUID(v7, v6) )
      goto LABEL_4;
    if ( InlineIsEqualGUID(v8, &GUID_e75e99cc_8d45_406e_9a90_c6f3656ea2fd) )
    {
      *v13 = v14;
      goto LABEL_5;
    }
    if ( InlineIsEqualGUID(v12, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
    {
LABEL_4:
      *v9 = v10;
LABEL_5:
      v11 = 0;
      goto LABEL_16;
    }
    if ( InlineIsEqualGUID(v15, &GUID_727f9e97_76ee_497b_a942_b6371328485c) )
    {
      *v17 = v18;
    }
    else
    {
      if ( !InlineIsEqualGUID(v16, &GUID_ab2611a6_5a19_4261_a11a_5f77866165e6) )
      {
        v11 = -2147467262;
        v10 = 0LL;
LABEL_15:
        if ( v11 < 0 )
          return (unsigned int)v11;
LABEL_16:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        return (unsigned int)v11;
      }
      v10 = v20 + 8;
      *v19 = v20 + 8;
    }
    v11 = 0;
    goto LABEL_15;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
