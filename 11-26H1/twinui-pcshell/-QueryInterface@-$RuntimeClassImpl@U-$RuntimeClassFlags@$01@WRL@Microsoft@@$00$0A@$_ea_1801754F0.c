/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801754F0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180511240 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180511240.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // edi
  int v4; // eax
  int v5; // ebx
  __int64 v7; // rcx
  int v8; // eax

  v3 = 0;
  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 == -1563043002 )
    {
      if ( a2[1] != *(_DWORD *)&GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1.Data2
        || a2[2] != *(_DWORD *)GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1.Data4 )
      {
        goto LABEL_15;
      }
      v4 = *(_DWORD *)&GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1.Data4[4];
    }
    else if ( *a2 == 1069557117 )
    {
      if ( a2[1] != *(_DWORD *)&GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2.Data2
        || a2[2] != *(_DWORD *)GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2.Data4 )
      {
        goto LABEL_15;
      }
      v4 = *(_DWORD *)&GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2.Data4[4];
    }
    else
    {
      if ( *a2 != -105327437
        || a2[1] != *(_DWORD *)&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6.Data2
        || a2[2] != *(_DWORD *)GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6.Data4 )
      {
        goto LABEL_15;
      }
      v4 = *(_DWORD *)&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6.Data4[4];
    }
    if ( a2[3] == v4 )
    {
      *a3 = a1;
      v5 = 0;
LABEL_12:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
      return (unsigned int)v5;
    }
LABEL_15:
    v7 = a1 + 104;
    if ( *a2 == -1796592748 )
    {
      if ( a2[1] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
        || a2[2] != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4 )
      {
        goto LABEL_23;
      }
      v8 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
    }
    else
    {
      if ( *a2 != 3
        || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
        || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4 )
      {
        goto LABEL_23;
      }
      v8 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4];
    }
    if ( a2[3] == v8 )
    {
      *a3 = v7;
      v5 = 0;
      goto LABEL_21;
    }
LABEL_23:
    v5 = -2147467262;
LABEL_21:
    if ( v5 < 0 )
      return (unsigned int)v5;
    goto LABEL_12;
  }
  if ( a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_15;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
