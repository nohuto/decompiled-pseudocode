/*
 * XREFs of ?QueryInterface@HolographicPositioner@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18013F4F0
 * Callers:
 *     ??$MakeAndInitialize@VHolographicPositioner@@UIHolographicPositioner@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIHolographicPositioner@@@Z @ 0x1800D32EC (--$MakeAndInitialize@VHolographicPositioner@@UIHolographicPositioner@@$$V@Details@WRL@Microsoft@.c)
 *     ?QueryInterface@HolographicPositioner@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180404EF0 (-QueryInterface@HolographicPositioner@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180404F00 (-QueryInterface@HolographicPositioner@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180404F10 (-QueryInterface@HolographicPositioner@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180404F20 (-QueryInterface@HolographicPositioner@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180404F30 (-QueryInterface@HolographicPositioner@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180404F40 (-QueryInterface@HolographicPositioner@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180404F60 (-QueryInterface@HolographicPositioner@@WII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180404F80 (-QueryInterface@HolographicPositioner@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180404FA0 (-QueryInterface@HolographicPositioner@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180404FC0 (-QueryInterface@HolographicPositioner@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180404FE0 (-QueryInterface@HolographicPositioner@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180405000 (-QueryInterface@HolographicPositioner@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WMA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180405020 (-QueryInterface@HolographicPositioner@@WMA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HolographicPositioner::QueryInterface(
        HolographicPositioner *this,
        const struct _GUID *a2,
        char **a3)
{
  unsigned int v3; // edi
  char *v4; // r9
  int v5; // ebx
  char *v6; // rcx
  char *v7; // r9
  char *v8; // rcx
  int v9; // eax
  char *v11; // rcx
  char *v12; // rcx
  int v13; // eax
  char *v14; // rcx

  v3 = 0;
  *a3 = 0LL;
  if ( a2->Data1 )
  {
    if ( a2->Data1 == -1350114592
      && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2 )
    {
      if ( *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
      {
        goto LABEL_5;
      }
      if ( *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
      {
        *a3 = (char *)this;
        v5 = 0;
        goto LABEL_42;
      }
    }
LABEL_13:
    v4 = (char *)this + 8;
    if ( *(_QWORD *)&a2->Data1 == __PAIR64__(
                                    *(unsigned int *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2,
                                    -62389853)
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
    {
      *a3 = v4;
    }
    else
    {
      v6 = (char *)this + 48;
      if ( a2->Data1 != -428157847
        || *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
        || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
        || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4] )
      {
        v6 = v4 + 48;
        if ( a2->Data1 != 1834041537
          || *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
          || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
          || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
        {
          v5 = -2147467262;
LABEL_27:
          if ( v5 != -2147467262 )
            goto LABEL_39;
          v7 = v4 + 104;
          if ( a2->Data1 == 56
            && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
            && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
            && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
          {
            *a3 = v7;
            goto LABEL_38;
          }
          v8 = v7 + 8;
          if ( a2->Data1 == -2027141065 )
          {
            if ( *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa.Data2
              || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa.Data4 )
            {
              goto LABEL_49;
            }
            v9 = *(_DWORD *)&GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa.Data4[4];
          }
          else
          {
            if ( a2->Data1 != 684124641
              || *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data2
              || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data4 )
            {
              goto LABEL_49;
            }
            v9 = *(_DWORD *)&GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data4[4];
          }
          if ( *(_DWORD *)&a2->Data4[4] == v9 )
          {
LABEL_37:
            *a3 = v8;
LABEL_38:
            v5 = 0;
            goto LABEL_39;
          }
LABEL_49:
          v11 = v7 + 16;
          if ( a2->Data1 == -1010941077
            && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775.Data2
            && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775.Data4
            && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775.Data4[4] )
          {
            goto LABEL_76;
          }
          v12 = v7 + 24;
          if ( a2->Data1 == 1401100229
            && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_538317c5_5bad_4847_962d_42da294f5e0a.Data2
            && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_538317c5_5bad_4847_962d_42da294f5e0a.Data4
            && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_538317c5_5bad_4847_962d_42da294f5e0a.Data4[4]
            || (v12 = v7 + 32, a2->Data1 == 1351671349)
            && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_5090de35_ed23_43be_9714_586c5041026a.Data2
            && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_5090de35_ed23_43be_9714_586c5041026a.Data4
            && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_5090de35_ed23_43be_9714_586c5041026a.Data4[4]
            || (v12 = v7 + 40, a2->Data1 == 860524149)
            && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_334a8e75_f9cf_4161_9035_68246f9ea21d.Data2
            && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_334a8e75_f9cf_4161_9035_68246f9ea21d.Data4
            && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_334a8e75_f9cf_4161_9035_68246f9ea21d.Data4[4] )
          {
            *a3 = v12;
            v5 = 0;
          }
          else
          {
            v5 = -2147467262;
          }
          if ( v5 != -2147467262 )
            goto LABEL_39;
          v8 = v7 + 56;
          if ( a2->Data1 == -837101594 )
          {
            if ( *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_ce1ad7e6_6f3e_45e0_bbf3_cca1181639d0.Data2
              && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_ce1ad7e6_6f3e_45e0_bbf3_cca1181639d0.Data4 )
            {
              v13 = *(_DWORD *)&GUID_ce1ad7e6_6f3e_45e0_bbf3_cca1181639d0.Data4[4];
              goto LABEL_71;
            }
          }
          else if ( a2->Data1 == -301920745
                 && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_ee010e17_919a_4068_868b_675acf787303.Data2
                 && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_ee010e17_919a_4068_868b_675acf787303.Data4 )
          {
            v13 = *(_DWORD *)&GUID_ee010e17_919a_4068_868b_675acf787303.Data4[4];
LABEL_71:
            if ( *(_DWORD *)&a2->Data4[4] == v13 )
              goto LABEL_37;
          }
          v11 = v7 + 64;
          if ( a2->Data1 == 1920966295
            && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data2
            && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4
            && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4[4] )
          {
LABEL_76:
            *a3 = v11;
            goto LABEL_38;
          }
          v14 = v7 + 72;
          if ( a2->Data1 == 1032731074
            && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_3d8e39c2_c7b7_4b58_90b1_6bac0b0d4fe6.Data2
            && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_3d8e39c2_c7b7_4b58_90b1_6bac0b0d4fe6.Data4
            && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_3d8e39c2_c7b7_4b58_90b1_6bac0b0d4fe6.Data4[4]
            || (v14 = v7 + 80, a2->Data1 == -1890187054)
            && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_8f5608d2_f9be_457f_bcb5_789270f3b7e9.Data2
            && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_8f5608d2_f9be_457f_bcb5_789270f3b7e9.Data4
            && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_8f5608d2_f9be_457f_bcb5_789270f3b7e9.Data4[4] )
          {
            *a3 = v14;
            v5 = 0;
          }
          else
          {
            v5 = -2147467262;
          }
          if ( v5 == -2147467262 )
            v5 = -2147467262;
LABEL_39:
          if ( v5 < 0 )
            return (unsigned int)v5;
LABEL_42:
          (*(void (__fastcall **)(char *))(*(_QWORD *)*a3 + 8LL))(*a3);
          return (unsigned int)v5;
        }
      }
      *a3 = v6;
    }
    v5 = 0;
    goto LABEL_27;
  }
  if ( *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_13;
  }
LABEL_5:
  *a3 = (char *)this;
  (*(void (__fastcall **)(HolographicPositioner *))(*(_QWORD *)this + 8LL))(this);
  return v3;
}
