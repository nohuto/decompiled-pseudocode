/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UIWeakReferenceSource@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlManager@Input@Internal@UI@Windows@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180175DB0
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlManager@Input@Internal@UI@Windows@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlManager@Input@Internal@UI@Windows@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180175C2C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCIm_ea_180175C2C.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlManager@Input@Internal@UI@Windows@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180175CF0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180175CF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,Windows::UI::Internal::Input::IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 result; // rax
  _DWORD *v5; // rcx
  _DWORD *v6; // r9
  __int64 v7; // rcx

  if ( *a2 == -62389853
    && a2[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    && a2[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    && a2[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
  {
    goto LABEL_5;
  }
  v5 = a2 + 1;
  if ( *a2 == -428157847
    && *v5 == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
    && (v6 = a2 + 2, a2[2] == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4)
    && a2[3] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4] )
  {
    *a3 = a1 + 40;
    result = 0LL;
  }
  else
  {
    v6 = a2 + 2;
    if ( *a2 == 1834041537
      && *v5 == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
      && *v6 == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
      && a2[3] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
    {
      *a3 = a1 + 48;
      result = 0LL;
    }
    else
    {
      result = 2147500034LL;
    }
    if ( (_DWORD)result == -2147467262 )
      result = 2147500034LL;
  }
  if ( (_DWORD)result == -2147467262 )
  {
    a1 += 104LL;
    if ( *a2 != 56
      || *v5 != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
      || *v6 != *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
      || a2[3] != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
    {
      a1 += 8LL;
      if ( *a2 != -363000348
        || a2[1] != *(_DWORD *)&GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79.Data2
        || a2[2] != *(_DWORD *)GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79.Data4
        || a2[3] != *(_DWORD *)&GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79.Data4[4] )
      {
        a1 += 8LL;
        if ( *a2 != 1784571261
          || a2[1] != *(_DWORD *)&GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data2
          || a2[2] != *(_DWORD *)GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data4
          || a2[3] != *(_DWORD *)&GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data4[4] )
        {
          a1 += 8LL;
          if ( *a2 != 845818411
            || a2[1] != *(_DWORD *)&GUID_326a2a2b_1237_4b24_8d66_3a12716d64fa.Data2
            || a2[2] != *(_DWORD *)GUID_326a2a2b_1237_4b24_8d66_3a12716d64fa.Data4
            || a2[3] != *(_DWORD *)&GUID_326a2a2b_1237_4b24_8d66_3a12716d64fa.Data4[4] )
          {
            a1 += 8LL;
            if ( *a2 != 1582784273
              || a2[1] != *(_DWORD *)&GUID_5e575f11_41b8_4e5f_a100_ceaab370f70c.Data2
              || a2[2] != *(_DWORD *)GUID_5e575f11_41b8_4e5f_a100_ceaab370f70c.Data4
              || a2[3] != *(_DWORD *)&GUID_5e575f11_41b8_4e5f_a100_ceaab370f70c.Data4[4] )
            {
              a1 += 8LL;
              if ( *a2 != -69871127
                || a2[1] != *(_DWORD *)&GUID_fbd5d9e9_e560_4560_8b72_872e1d434569.Data2
                || a2[2] != *(_DWORD *)GUID_fbd5d9e9_e560_4560_8b72_872e1d434569.Data4
                || a2[3] != *(_DWORD *)&GUID_fbd5d9e9_e560_4560_8b72_872e1d434569.Data4[4] )
              {
                v7 = a1 + 8;
                if ( *a2 != -1211751484
                  || a2[1] != *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data2
                  || a2[2] != *(_DWORD *)GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4
                  || a2[3] != *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4[4] )
                {
                  v7 = a1 + 16;
                  if ( (*a2 != -1796592748
                     || a2[1] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
                     || a2[2] != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
                     || a2[3] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4])
                    && (*a2 != 3
                     || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
                     || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
                     || a2[3] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4]) )
                  {
                    return 2147500034LL;
                  }
                }
                *a3 = v7;
                return 0LL;
              }
            }
          }
        }
      }
    }
LABEL_5:
    *a3 = a1;
    return 0LL;
  }
  return result;
}
