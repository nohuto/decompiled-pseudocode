/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIVirtualDesktopManagerPrivate@@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@VNil@Details@WRL@Microsoft@@V4567@V4567@V4567@V4567@V4567@V4567@@23@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@UISuspendableVirtualDesktopManager@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIVirtualDesktopManagerPrivate@@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@VNil@Details@WRL@Microsoft@@V4567@V4567@V4567@V4567@V4567@V4567@@23@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@UISuspendableVirtualDesktopManager@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18008184C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIVirtualDesktopManagerPrivate@@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@VNil@Details@WRL@Microsoft@@V4567@V4567@V4567@V4567@V4567@V4567@@23@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@UISuspendableVirtualDesktopManager@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081840 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180081840.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800826D8 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 *     ??$GetWeakReference@VCVirtualDesktopManager@@@details@wil@@YAJPEAVCVirtualDesktopManager@@PEAPEAUIWeakReference@@@Z @ 0x180109174 (--$GetWeakReference@VCVirtualDesktopManager@@@details@wil@@YAJPEAVCVirtualDesktopManager@@PEAPEA.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IVirtualDesktopManagerPrivate,IVirtualDesktopManagerInternal,IVirtualDesktopManagerInternal2,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IVirtualDesktopManagerInternal,IVirtualDesktopManagerInternal2,ISuspendableVirtualDesktopManager,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // rcx
  bool v5; // zf
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax

  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 == -1350114592 && a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2 )
    {
      if ( a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
        && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
      {
        goto LABEL_5;
      }
      if ( a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
        && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
        && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
      {
        *a3 = a1;
        goto LABEL_19;
      }
    }
  }
  else if ( a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
         && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
         && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
LABEL_5:
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return 0LL;
  }
  v4 = a1 + 8;
  if ( *a2 == -1782891156 )
  {
    if ( a2[1] != *(_DWORD *)&GUID_95bb3d6c_9eba_40cc_af4d_1a3255717d9d.Data2
      || a2[2] != *(_DWORD *)GUID_95bb3d6c_9eba_40cc_af4d_1a3255717d9d.Data4 )
    {
      goto LABEL_30;
    }
    v5 = a2[3] == *(_DWORD *)&GUID_95bb3d6c_9eba_40cc_af4d_1a3255717d9d.Data4[4];
  }
  else if ( *a2 == 1232124477 )
  {
    if ( a2[1] != *(_DWORD *)&GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c.Data2
      || a2[2] != *(_DWORD *)GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c.Data4 )
    {
      goto LABEL_30;
    }
    v5 = a2[3] == *(_DWORD *)&GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c.Data4[4];
  }
  else
  {
    if ( *a2 != 1408616971
      || a2[1] != *(_DWORD *)&GUID_53f5ca0b_158f_4124_900c_057158060b27.Data2
      || a2[2] != *(_DWORD *)GUID_53f5ca0b_158f_4124_900c_057158060b27.Data4 )
    {
      goto LABEL_30;
    }
    v5 = a2[3] == *(_DWORD *)&GUID_53f5ca0b_158f_4124_900c_057158060b27.Data4[4];
  }
  if ( !v5 )
  {
LABEL_30:
    v7 = v4 + 8;
    if ( *a2 == 56
      && a2[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
      && a2[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
    {
      goto LABEL_55;
    }
    v7 += 8LL;
    if ( *a2 == 1232124477
      && a2[1] == *(_DWORD *)&GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c.Data2
      && a2[2] == *(_DWORD *)GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c.Data4
      && a2[3] == *(_DWORD *)&GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c.Data4[4] )
    {
      goto LABEL_55;
    }
    v7 += 8LL;
    if ( *a2 == 1408616971
      && a2[1] == *(_DWORD *)&GUID_53f5ca0b_158f_4124_900c_057158060b27.Data2
      && a2[2] == *(_DWORD *)GUID_53f5ca0b_158f_4124_900c_057158060b27.Data4
      && a2[3] == *(_DWORD *)&GUID_53f5ca0b_158f_4124_900c_057158060b27.Data4[4] )
    {
      goto LABEL_55;
    }
    v7 += 8LL;
    if ( *a2 == 517454709
      && a2[1] == *(_DWORD *)&GUID_1ed7bb75_881a_4a61_8d56_ce448e8a8a45.Data2
      && a2[2] == *(_DWORD *)GUID_1ed7bb75_881a_4a61_8d56_ce448e8a8a45.Data4
      && a2[3] == *(_DWORD *)&GUID_1ed7bb75_881a_4a61_8d56_ce448e8a8a45.Data4[4] )
    {
      goto LABEL_55;
    }
    v7 += 8LL;
    if ( *a2 == -189734543
      && a2[1] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data2
      && a2[2] == *(_DWORD *)GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4
      && a2[3] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4[4] )
    {
      goto LABEL_55;
    }
    v7 += 8LL;
    if ( *a2 == -1796592748 )
    {
      if ( a2[1] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
        || a2[2] != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4 )
      {
        goto LABEL_58;
      }
      v8 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
    }
    else
    {
      if ( *a2 != 3
        || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
        || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4 )
      {
        goto LABEL_58;
      }
      v8 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4];
    }
    if ( a2[3] == v8 )
    {
LABEL_55:
      *a3 = v7;
      v6 = 0;
      goto LABEL_56;
    }
LABEL_58:
    v6 = -2147467262;
LABEL_56:
    if ( v6 < 0 )
      return (unsigned int)v6;
    goto LABEL_20;
  }
  *a3 = v4;
LABEL_19:
  v6 = 0;
LABEL_20:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v6;
}
