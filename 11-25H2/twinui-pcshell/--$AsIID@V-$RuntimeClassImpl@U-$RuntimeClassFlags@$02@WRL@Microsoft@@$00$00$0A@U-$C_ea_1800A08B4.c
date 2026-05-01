/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIVirtualDesktopManagerPrivate@@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@VNil@Details@WRL@Microsoft@@V4567@V4567@V4567@V4567@V4567@V4567@@23@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@UISuspendableVirtualDesktopManager@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIVirtualDesktopManagerPrivate@@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@VNil@Details@WRL@Microsoft@@V4567@V4567@V4567@V4567@V4567@V4567@@23@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@UISuspendableVirtualDesktopManager@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800A08B4
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x18009E880 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 *     ??$GetWeakReference@VCVirtualDesktopManager@@@details@wil@@YAJPEAVCVirtualDesktopManager@@PEAPEAUIWeakReference@@@Z @ 0x1800A1A7C (--$GetWeakReference@VCVirtualDesktopManager@@@details@wil@@YAJPEAVCVirtualDesktopManager@@PEAPEA.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIVirtualDesktopManagerPrivate@@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@VNil@Details@WRL@Microsoft@@V4567@V4567@V4567@V4567@V4567@V4567@@23@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@UISuspendableVirtualDesktopManager@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802219E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1802219E0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IVirtualDesktopManagerPrivate,IVirtualDesktopManagerInternal,IVirtualDesktopManagerInternal2,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IVirtualDesktopManagerInternal,IVirtualDesktopManagerInternal2,ISuspendableVirtualDesktopManager,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  bool v6; // zf
  int v7; // ebx
  __int64 v8; // rcx
  int v9; // eax

  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_11;
  }
  if ( *a2 == -1350114592 && a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2 )
  {
    if ( a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
LABEL_11:
      *a3 = a1;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      return 0LL;
    }
    if ( a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
      goto LABEL_44;
    }
  }
  v5 = a1 + 8;
  if ( *a2 == -1782891156 )
  {
    if ( a2[1] == *(_DWORD *)&GUID_95bb3d6c_9eba_40cc_af4d_1a3255717d9d.Data2
      && a2[2] == *(_DWORD *)GUID_95bb3d6c_9eba_40cc_af4d_1a3255717d9d.Data4 )
    {
      v6 = a2[3] == *(_DWORD *)&GUID_95bb3d6c_9eba_40cc_af4d_1a3255717d9d.Data4[4];
      goto LABEL_16;
    }
LABEL_30:
    a1 = v5 + 8;
    if ( *a2 == 56
      && a2[1] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
      && a2[2] == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
      && a2[3] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
    {
LABEL_44:
      *a3 = a1;
      goto LABEL_18;
    }
    v8 = a1 + 8;
    if ( *a2 != 1232124477
      || a2[1] != *(_DWORD *)&GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c.Data2
      || a2[2] != *(_DWORD *)GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c.Data4
      || a2[3] != *(_DWORD *)&GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c.Data4[4] )
    {
      v8 += 8LL;
      if ( *a2 != 1408616971
        || a2[1] != *(_DWORD *)&GUID_53f5ca0b_158f_4124_900c_057158060b27.Data2
        || a2[2] != *(_DWORD *)GUID_53f5ca0b_158f_4124_900c_057158060b27.Data4
        || a2[3] != *(_DWORD *)&GUID_53f5ca0b_158f_4124_900c_057158060b27.Data4[4] )
      {
        v8 += 8LL;
        if ( *a2 != 517454709
          || a2[1] != *(_DWORD *)&GUID_1ed7bb75_881a_4a61_8d56_ce448e8a8a45.Data2
          || a2[2] != *(_DWORD *)GUID_1ed7bb75_881a_4a61_8d56_ce448e8a8a45.Data4
          || a2[3] != *(_DWORD *)&GUID_1ed7bb75_881a_4a61_8d56_ce448e8a8a45.Data4[4] )
        {
          v8 += 8LL;
          if ( *a2 != -189734543
            || a2[1] != *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data2
            || a2[2] != *(_DWORD *)GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4
            || a2[3] != *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4[4] )
          {
            v8 += 8LL;
            if ( *a2 == -1796592748 )
            {
              if ( a2[1] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
                || a2[2] != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4 )
              {
                goto LABEL_62;
              }
              v9 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
            }
            else
            {
              if ( *a2 != 3
                || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
                || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4 )
              {
                goto LABEL_62;
              }
              v9 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4];
            }
            if ( a2[3] != v9 )
            {
LABEL_62:
              v7 = -2147467262;
LABEL_39:
              if ( v7 < 0 )
                return (unsigned int)v7;
              goto LABEL_19;
            }
          }
        }
      }
    }
    *a3 = v8;
    v7 = 0;
    goto LABEL_39;
  }
  if ( *a2 == 1232124477 )
  {
    if ( a2[1] != *(_DWORD *)&GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c.Data2
      || a2[2] != *(_DWORD *)GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c.Data4 )
    {
      goto LABEL_30;
    }
    v6 = a2[3] == *(_DWORD *)&GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c.Data4[4];
  }
  else
  {
    if ( *a2 != 1408616971
      || a2[1] != *(_DWORD *)&GUID_53f5ca0b_158f_4124_900c_057158060b27.Data2
      || a2[2] != *(_DWORD *)GUID_53f5ca0b_158f_4124_900c_057158060b27.Data4 )
    {
      goto LABEL_30;
    }
    v6 = a2[3] == *(_DWORD *)&GUID_53f5ca0b_158f_4124_900c_057158060b27.Data4[4];
  }
LABEL_16:
  if ( !v6 )
    goto LABEL_30;
  *a3 = v5;
LABEL_18:
  v7 = 0;
LABEL_19:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v7;
}
