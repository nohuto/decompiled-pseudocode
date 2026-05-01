/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIImmersiveShellStressTool@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$09@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIImmersiveShellStressTool@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801A9FC0
 * Callers:
 *     ??$MakeAndInitialize@VImmersiveShellStressTool@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803DCD38 (--$MakeAndInitialize@VImmersiveShellStressTool@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<10>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<10>,1,0,0,CImmersiveShellComponentWithSite,IImmersiveShellStressTool>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // r11
  _DWORD *v4; // r10
  _DWORD *v5; // r9
  _DWORD *v6; // rcx
  unsigned int v7; // ebx
  int v9; // eax

  v3 = a1;
  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    v4 = a2 + 1;
    v5 = a2 + 2;
    v6 = a2 + 3;
    if ( *a2 != -62389853
      || *v4 != *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
      || *v5 != *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
      || *v6 != *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
    {
      v7 = -2147467262;
      if ( *a2 == -428157847
        && *v4 == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
        && *v5 == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
        && *v6 == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4] )
      {
        *a3 = v3 + 24;
        v9 = 0;
      }
      else
      {
        if ( *a2 == 1834041537
          && *v4 == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
          && *v5 == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
          && *v6 == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
        {
          *a3 = v3 + 32;
          v9 = 0;
        }
        else
        {
          v9 = -2147467262;
        }
        if ( v9 == -2147467262 )
          v9 = -2147467262;
      }
      if ( v9 != -2147467262 )
      {
        v7 = v9;
        goto LABEL_7;
      }
      v3 += 88LL;
      if ( *a2 != 1151965058
        || *v4 != *(_DWORD *)&GUID_44a99782_39de_4d3d_9ef4_e8b221d82f15.Data2
        || *v5 != *(_DWORD *)GUID_44a99782_39de_4d3d_9ef4_e8b221d82f15.Data4
        || *v6 != *(_DWORD *)&GUID_44a99782_39de_4d3d_9ef4_e8b221d82f15.Data4[4] )
      {
        return v7;
      }
    }
    *a3 = v3;
    v7 = 0;
LABEL_7:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return v7;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
