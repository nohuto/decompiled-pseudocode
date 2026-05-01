/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18010E53C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010E530 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActiv.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveShellComponent@@UIServiceProvider@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800E901C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveShellCompone.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,Windows::Internal::Data::Activities::ITaskDataCacheBroker,CImmersiveShellComponentWithGITSite,ICDPUserActivitySettingsCallback,Microsoft::WRL::FtmBase>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v3; // eax
  __int64 v4; // rcx
  int CanCastTo; // ebx
  _DWORD *v7; // rdx
  __int64 v8; // r9
  int v9; // eax

  *a3 = 0LL;
  if ( !*a2 )
  {
    if ( a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      v3 = *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4];
      goto LABEL_5;
    }
LABEL_6:
    a1 += 8LL;
    if ( *a2 != 56
      || a2[1] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
      || a2[2] != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
      || a2[3] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
    {
      v4 = a1 + 8;
      if ( *a2 != -1507249029
        || a2[1] != *(_DWORD *)&GUID_a629347b_7a47_4061_9c3e_8ac7c6f000a7.Data2
        || a2[2] != *(_DWORD *)GUID_a629347b_7a47_4061_9c3e_8ac7c6f000a7.Data4
        || a2[3] != *(_DWORD *)&GUID_a629347b_7a47_4061_9c3e_8ac7c6f000a7.Data4[4] )
      {
        v4 += 8LL;
        if ( *a2 != 1335057372
          || a2[1] != *(_DWORD *)&GUID_4f935bdc_7650_5db7_a233_ce467a34bc72.Data2
          || a2[2] != *(_DWORD *)GUID_4f935bdc_7650_5db7_a233_ce467a34bc72.Data4
          || a2[3] != *(_DWORD *)&GUID_4f935bdc_7650_5db7_a233_ce467a34bc72.Data4[4] )
        {
          if ( *a2 == -62389853
            && a2[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
            && a2[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
            && a2[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
          {
            *a3 = v4 + 8;
            goto LABEL_15;
          }
          CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveShellComponent,IServiceProvider>::CanCastTo(
                        v4 + 48,
                        a2,
                        a3);
          if ( CanCastTo == -2147467262 )
            CanCastTo = -2147467262;
          if ( CanCastTo != -2147467262 )
          {
LABEL_16:
            if ( CanCastTo < 0 )
              return (unsigned int)CanCastTo;
LABEL_36:
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
            return (unsigned int)CanCastTo;
          }
          v4 = v8 + 104;
          if ( *v7 != 355594254
            || v7[1] != *(_DWORD *)&GUID_1531f00e_3fe1_4b79_b0bc_f6cde362f7ea.Data2
            || v7[2] != *(_DWORD *)GUID_1531f00e_3fe1_4b79_b0bc_f6cde362f7ea.Data4
            || v7[3] != *(_DWORD *)&GUID_1531f00e_3fe1_4b79_b0bc_f6cde362f7ea.Data4[4] )
          {
            v4 = v8 + 112;
            if ( *v7 == -1796592748 )
            {
              if ( v7[1] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
                || v7[2] != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4 )
              {
                goto LABEL_50;
              }
              v9 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
            }
            else
            {
              if ( *v7 != 3
                || v7[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
                || v7[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4 )
              {
                goto LABEL_50;
              }
              v9 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4];
            }
            if ( v7[3] != v9 )
            {
LABEL_50:
              CanCastTo = -2147467262;
              goto LABEL_16;
            }
          }
        }
      }
      *a3 = v4;
LABEL_15:
      CanCastTo = 0;
      goto LABEL_16;
    }
LABEL_35:
    *a3 = a1;
    CanCastTo = 0;
    goto LABEL_36;
  }
  if ( *a2 != -1350114592 )
  {
    if ( *a2 == -1502920118
      && a2[1] == *(_DWORD *)&GUID_a66b424a_5568_56e8_bbb8_a3401dfdf5bd.Data2
      && a2[2] == *(_DWORD *)GUID_a66b424a_5568_56e8_bbb8_a3401dfdf5bd.Data4
      && a2[3] == *(_DWORD *)&GUID_a66b424a_5568_56e8_bbb8_a3401dfdf5bd.Data4[4] )
    {
      goto LABEL_35;
    }
    goto LABEL_6;
  }
  if ( a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    || a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
  {
    goto LABEL_6;
  }
  v3 = *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4];
LABEL_5:
  if ( a2[3] != v3 )
    goto LABEL_6;
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
