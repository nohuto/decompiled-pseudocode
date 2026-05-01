/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveWindowFactoryBase@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180140040
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveWindowFactoryBase@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806CA1D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1806CA1D0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveWindowFactoryBase@@@Details@WRL@Microsoft@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806CA1E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1806CA1E0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveWindowFactoryBase@@@Details@WRL@Microsoft@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806CA1F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1806CA1F0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveWindowFactoryBase@@@Details@WRL@Microsoft@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806CA200 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1806CA200.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveWindowFactoryBase@@@Details@WRL@Microsoft@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806CA210 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1806CA210.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveWindowFactoryBase>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // edi
  int v4; // eax
  __int64 v5; // r9
  int v6; // ebx
  int v8; // eax

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2 )
  {
    if ( a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      goto LABEL_4;
    }
    v8 = *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4];
    goto LABEL_30;
  }
  if ( *a2 == -1350114592 )
  {
    if ( a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      || a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      goto LABEL_4;
    }
    v8 = *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4];
LABEL_30:
    if ( a2[3] == v8 )
    {
      *a3 = a1;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      return v3;
    }
    goto LABEL_4;
  }
  if ( *a2 == -852941984
    && a2[1] == *(_DWORD *)&GUID_cd292360_2763_4085_8a9f_74b224a29175.Data2
    && a2[2] == *(_DWORD *)GUID_cd292360_2763_4085_8a9f_74b224a29175.Data4
    && a2[3] == *(_DWORD *)&GUID_cd292360_2763_4085_8a9f_74b224a29175.Data4[4] )
  {
    *a3 = a1;
    goto LABEL_24;
  }
LABEL_4:
  if ( *a2 == 3
    && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1 + 8;
  }
  else
  {
    if ( *a2 == 24
      && a2[1] == *(_DWORD *)&GUID_00000018_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000018_0000_0000_c000_000000000046.Data4
      && a2[3] == *(_DWORD *)&GUID_00000018_0000_0000_c000_000000000046.Data4[4] )
    {
      *a3 = a1 + 48;
      v4 = 0;
    }
    else
    {
      v4 = -2147467262;
    }
    if ( v4 == -2147467262 )
    {
      v5 = a1 + 72;
      if ( *a2 == 1612534243
        && a2[1] == *(_DWORD *)&GUID_601d51e3_801e_49c9_bbfa_fe29a662aead.Data2
        && a2[2] == *(_DWORD *)GUID_601d51e3_801e_49c9_bbfa_fe29a662aead.Data4
        && a2[3] == *(_DWORD *)&GUID_601d51e3_801e_49c9_bbfa_fe29a662aead.Data4[4]
        || (v5 = a1 + 80, *a2 == 142386596)
        && a2[1] == *(_DWORD *)&GUID_087ca5a4_8cfc_4264_b39d_da2bb2583a11.Data2
        && a2[2] == *(_DWORD *)GUID_087ca5a4_8cfc_4264_b39d_da2bb2583a11.Data4
        && a2[3] == *(_DWORD *)&GUID_087ca5a4_8cfc_4264_b39d_da2bb2583a11.Data4[4] )
      {
        *a3 = v5;
        v6 = 0;
      }
      else
      {
        v6 = -2147467262;
      }
      if ( v6 == -2147467262 )
      {
        if ( *a2 == 56
          && a2[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
          && a2[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
          && a2[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
        {
          v6 = 0;
          *a3 = a1 + 176;
        }
        else
        {
          v6 = -2147467262;
        }
      }
      if ( v6 < 0 )
        return (unsigned int)v6;
      goto LABEL_25;
    }
  }
LABEL_24:
  v6 = 0;
LABEL_25:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v6;
}
