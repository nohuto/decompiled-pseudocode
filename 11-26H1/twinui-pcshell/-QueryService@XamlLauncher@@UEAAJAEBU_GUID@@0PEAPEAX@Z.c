/*
 * XREFs of ?QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18015FCA0
 * Callers:
 *     ?DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ @ 0x180223EB4 (-DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180244780 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
HRESULT __fastcall XamlLauncher::QueryService(
        XamlLauncher *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v5; // edi
  __int64 v6; // rax
  char *v7; // rcx
  char *v8; // rcx
  int v9; // ebx
  IUnknown *v11; // rcx

  v5 = 0;
  *a4 = 0LL;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&SID_ImmersiveLauncher.Revision;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&SID_ImmersiveLauncher.Revision )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)SID_ImmersiveLauncher.SubAuthority;
  if ( !v6 )
  {
    v7 = (char *)this - 48;
    *a4 = 0LL;
    if ( a3->Data1 )
    {
      if ( a3->Data1 == -62389853
        && *(_DWORD *)&a3->Data2 == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
        && *(_DWORD *)a3->Data4 == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
        && *(_DWORD *)&a3->Data4[4] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
      {
        *a4 = v7;
        v9 = 0;
LABEL_50:
        (*(void (__fastcall **)(_QWORD, const struct _GUID *))(*(_QWORD *)*a4 + 8LL))(*a4, a2);
        return v9;
      }
    }
    else if ( *(_DWORD *)&a3->Data2 == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
           && *(_DWORD *)a3->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
           && *(_DWORD *)&a3->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
    {
      *a4 = v7;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))(v7);
      return v5;
    }
    v8 = v7 + 24;
    if ( a3->Data1 == -657063015
      && *(_DWORD *)&a3->Data2 == *(_DWORD *)&GUID_d8d60399_a0f1_f987_5551_321fd1b49864.Data2
      && *(_DWORD *)a3->Data4 == *(_DWORD *)GUID_d8d60399_a0f1_f987_5551_321fd1b49864.Data4
      && *(_DWORD *)&a3->Data4[4] == *(_DWORD *)&GUID_d8d60399_a0f1_f987_5551_321fd1b49864.Data4[4]
      || (v8 += 8, a3->Data1 == -1124993201)
      && *(_DWORD *)&a3->Data2 == *(_DWORD *)&GUID_bcf1f74f_2413_46b3_8707_ec2fca11965d.Data2
      && *(_DWORD *)a3->Data4 == *(_DWORD *)GUID_bcf1f74f_2413_46b3_8707_ec2fca11965d.Data4
      && *(_DWORD *)&a3->Data4[4] == *(_DWORD *)&GUID_bcf1f74f_2413_46b3_8707_ec2fca11965d.Data4[4] )
    {
      *a4 = v8;
      v9 = 0;
      goto LABEL_43;
    }
    a2 = (const struct _GUID *)(v8 + 8);
    if ( a3->Data1 == 1260763374 )
    {
      if ( *(_DWORD *)&a3->Data2 == *(_DWORD *)&GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data2
        && *(_DWORD *)a3->Data4 == *(_DWORD *)GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data4
        && *(_DWORD *)&a3->Data4[4] == *(_DWORD *)&GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data4[4] )
      {
LABEL_64:
        *a4 = (void *)a2;
        goto LABEL_63;
      }
    }
    else if ( a3->Data1 == 1834041537
           && *(_DWORD *)&a3->Data2 == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
           && *(_DWORD *)a3->Data4 == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
           && *(_DWORD *)&a3->Data4[4] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
    {
      *a4 = this;
LABEL_63:
      v9 = 0;
LABEL_41:
      if ( v9 == -2147467262 )
        v9 = -2147467262;
LABEL_43:
      if ( v9 < 0 )
        return v9;
      goto LABEL_50;
    }
    a2 = (const struct _GUID *)((char *)this + 8);
    if ( a3->Data1 != -428157847
      || *(_DWORD *)&a3->Data2 != *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
      || *(_DWORD *)a3->Data4 != *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
      || *(_DWORD *)&a3->Data4[4] != *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4] )
    {
      a2 = (const struct _GUID *)((char *)this + 16);
      if ( a3->Data1 != 1593280783
        || *(_DWORD *)&a3->Data2 != *(_DWORD *)&GUID_5ef7890f_319b_4259_8d0f_36e5ff0916ce.Data2
        || *(_DWORD *)a3->Data4 != *(_DWORD *)GUID_5ef7890f_319b_4259_8d0f_36e5ff0916ce.Data4
        || *(_DWORD *)&a3->Data4[4] != *(_DWORD *)&GUID_5ef7890f_319b_4259_8d0f_36e5ff0916ce.Data4[4] )
      {
        a2 = (const struct _GUID *)((char *)this + 24);
        if ( a3->Data1 != -860119180
          || *(_DWORD *)&a3->Data2 != *(_DWORD *)&GUID_ccbb9f74_ff4f_4c62_95dc_c889710829e0.Data2
          || *(_DWORD *)a3->Data4 != *(_DWORD *)GUID_ccbb9f74_ff4f_4c62_95dc_c889710829e0.Data4
          || *(_DWORD *)&a3->Data4[4] != *(_DWORD *)&GUID_ccbb9f74_ff4f_4c62_95dc_c889710829e0.Data4[4] )
        {
          a2 = (const struct _GUID *)((char *)this + 32);
          if ( a3->Data1 != -1211751484
            || *(_DWORD *)&a3->Data2 != *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data2
            || *(_DWORD *)a3->Data4 != *(_DWORD *)GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4
            || *(_DWORD *)&a3->Data4[4] != *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4[4] )
          {
            a2 = (const struct _GUID *)((char *)this + 40);
            if ( a3->Data1 != 1904739078
              || *(_DWORD *)&a3->Data2 != *(_DWORD *)&GUID_71880306_f2db_0330_10a8_e1abbd3d18cb.Data2
              || *(_DWORD *)a3->Data4 != *(_DWORD *)GUID_71880306_f2db_0330_10a8_e1abbd3d18cb.Data4
              || *(_DWORD *)&a3->Data4[4] != *(_DWORD *)&GUID_71880306_f2db_0330_10a8_e1abbd3d18cb.Data4[4] )
            {
              v9 = -2147467262;
              goto LABEL_41;
            }
          }
        }
      }
    }
    goto LABEL_64;
  }
  v11 = (IUnknown *)*((_QWORD *)this - 4);
  if ( v11 )
    return IUnknown_QueryService(v11, a2, a3, a4);
  else
    return -2147467262;
}
