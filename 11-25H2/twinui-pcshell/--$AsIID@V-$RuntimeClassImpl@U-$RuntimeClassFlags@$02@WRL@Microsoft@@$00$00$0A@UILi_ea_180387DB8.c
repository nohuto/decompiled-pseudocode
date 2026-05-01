/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIQuickConnectExperienceManager@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIQuickConnectExperienceManager@Experience@Shell@Internal@Windows@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180387DB8
 * Callers:
 *     ??$MakeAndInitialize@VCQuickConnectExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180388CC0 (--$MakeAndInitialize@VCQuickConnectExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@D.c)
 *     ?QueryInterface@CQuickConnectExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18038BD40 (-QueryInterface@CQuickConnectExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18004F930 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IQuickConnectExperienceManager>>(
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
  const struct _GUID *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r9

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    && !InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    if ( InlineIsEqualGUID(v7, v6) || InlineIsEqualGUID(v8, &GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb) )
    {
      *v9 = v10;
      v11 = 0;
      goto LABEL_13;
    }
    if ( InlineIsEqualGUID(v12, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
    {
      *v9 = v14;
    }
    else
    {
      if ( !InlineIsEqualGUID(v13, &GUID_7fec38c1_a520_4797_848f_66efa8bd3502) )
      {
        v11 = -2147467262;
LABEL_12:
        if ( v11 < 0 )
          return (unsigned int)v11;
LABEL_13:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 8LL))(*v9);
        return (unsigned int)v11;
      }
      *v9 = v15 + 8;
    }
    v11 = 0;
    goto LABEL_12;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
