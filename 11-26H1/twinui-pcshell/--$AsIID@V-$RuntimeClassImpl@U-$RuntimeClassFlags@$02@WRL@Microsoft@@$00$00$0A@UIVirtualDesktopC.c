/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopCollection2@5678@UIVirtualDesktopCollectionInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopCollection2@5678@UIVirtualDesktopCollectionInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800D30A0
 * Callers:
 *     ?VirtualDesktopCollection_CreateInstance@@YAJPEAUIThumbnailDeviceSource@@AEBU_GUID@@PEAPEAX@Z @ 0x180228D58 (-VirtualDesktopCollection_CreateInstance@@YAJPEAUIThumbnailDeviceSource@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopCollection2@5678@UIVirtualDesktopCollectionInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802C7300 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1802C7300.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D1CB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection2,IVirtualDesktopCollectionInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>>(
        char *a1,
        __int64 a2,
        void **a3)
{
  int v3; // eax
  char *v4; // rcx
  int CanCastTo; // ebx

  *a3 = 0LL;
  if ( !*(_DWORD *)a2 )
  {
    if ( *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      v3 = *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4];
      goto LABEL_5;
    }
LABEL_6:
    a1 += 8;
    if ( *(_DWORD *)a2 != 56
      || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
      || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
      || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
    {
      v4 = a1 + 8;
      if ( *(_DWORD *)a2 == -1901624736
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_8ea78260_a133_5dea_a6b2_fb70c9265c04.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_8ea78260_a133_5dea_a6b2_fb70c9265c04.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_8ea78260_a133_5dea_a6b2_fb70c9265c04.Data4[4]
        || (v4 += 8, *(_DWORD *)a2 == 1348183614)
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_505ba63e_e2d2_4612_bf9e_378fc429a542.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_505ba63e_e2d2_4612_bf9e_378fc429a542.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_505ba63e_e2d2_4612_bf9e_378fc429a542.Data4[4]
        || (v4 += 8, *(_DWORD *)a2 == -1176114867)
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade.Data4[4] )
      {
        *a3 = v4;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                      (Microsoft::WRL::FtmBase *)(v4 + 8),
                      (const struct _GUID *)a2,
                      a3);
      }
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
      goto LABEL_26;
    }
LABEL_25:
    *a3 = a1;
    CanCastTo = 0;
LABEL_26:
    (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)CanCastTo;
  }
  if ( *(_DWORD *)a2 != -1350114592 )
  {
    if ( *(_DWORD *)a2 == -694110848
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_d6a0b580_90e9_5a9d_b7f0_671d8b195489.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_d6a0b580_90e9_5a9d_b7f0_671d8b195489.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_d6a0b580_90e9_5a9d_b7f0_671d8b195489.Data4[4] )
    {
      goto LABEL_25;
    }
    goto LABEL_6;
  }
  if ( *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
  {
    goto LABEL_6;
  }
  v3 = *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4];
LABEL_5:
  if ( *(_DWORD *)(a2 + 12) != v3 )
    goto LABEL_6;
  *a3 = a1;
  (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
