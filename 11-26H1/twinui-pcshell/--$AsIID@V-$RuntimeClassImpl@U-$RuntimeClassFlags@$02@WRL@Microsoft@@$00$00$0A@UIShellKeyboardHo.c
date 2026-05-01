/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellKeyboardHostingPolicy@Text@Shell@Internal@Windows@@UIDesktopKeyboardHostingPolicy@KeyboardHosting@678@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellKeyboardHostingPolicy@Text@Shell@Internal@Windows@@UIDesktopKeyboardHostingPolicy@KeyboardHosting@678@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180208FB8
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18024C550 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellKeyboardHostingPolicy@Text@Shell@Internal@Windows@@UIDesktopKeyboardHostingPolicy@KeyboardHosting@678@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802C8660 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellKeyb.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180057770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D1CB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>>(
        void *a1,
        __int64 a2,
        void **a3)
{
  int v3; // eax
  int CanCastTo; // ebx
  const struct _GUID *v6; // rcx
  void *v7; // r10
  const struct _GUID *v8; // r9
  __int64 v9; // r10

  *a3 = 0LL;
  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 == -1350114592 )
    {
      if ( *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
      {
        v3 = *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4];
LABEL_9:
        if ( *(_DWORD *)(a2 + 12) == v3 )
        {
          *a3 = a1;
          (*(void (__fastcall **)(void *, __int64, void **, __int64))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, a2);
          return 0LL;
        }
      }
    }
    else if ( *(_DWORD *)a2 == -393307992
           && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_e88e98a8_ec6f_5eb0_8c64_978d8ddb2517.Data2
           && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_e88e98a8_ec6f_5eb0_8c64_978d8ddb2517.Data4
           && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_e88e98a8_ec6f_5eb0_8c64_978d8ddb2517.Data4[4] )
    {
      *a3 = a1;
      goto LABEL_16;
    }
  }
  else if ( *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
         && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    v3 = *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4];
    goto LABEL_9;
  }
  if ( !InlineIsEqualGUID((const struct _GUID *)a2, &GUID_00000038_0000_0000_c000_000000000046) )
  {
    if ( InlineIsEqualGUID(v6, &GUID_72e94e66_def4_5eae_8d10_1e04c5951187) )
    {
      *a3 = (void *)v9;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v9 + 8), v8, a3);
    }
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
    goto LABEL_23;
  }
  *a3 = v7;
LABEL_16:
  CanCastTo = 0;
LABEL_23:
  (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)CanCastTo;
}
