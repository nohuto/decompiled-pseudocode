/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityServiceInternal@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityServiceInternal@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801B6764
 * Callers:
 *     ??$MakeAndInitialize@VMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityService@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x1802C5A3C (--$MakeAndInitialize@VMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityService@@$$.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewVisibilityService,IMultitaskingViewVisibilityServiceInternal,Microsoft::WRL::FtmBase>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax

  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return 0LL;
  }
  if ( *a2 != -1408119389
    || a2[1] != *(_DWORD *)&GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307.Data2
    || a2[2] != *(_DWORD *)GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307.Data4
    || a2[3] != *(_DWORD *)&GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307.Data4[4] )
  {
    a1 += 8LL;
    if ( *a2 != 1853727014
      || a2[1] != *(_DWORD *)&GUID_6e7da126_f47e_4b81_b43f_e466cf325f58.Data2
      || a2[2] != *(_DWORD *)GUID_6e7da126_f47e_4b81_b43f_e466cf325f58.Data4
      || a2[3] != *(_DWORD *)&GUID_6e7da126_f47e_4b81_b43f_e466cf325f58.Data4[4] )
    {
      v5 = a1 + 8;
      if ( *a2 == -1796592748 )
      {
        if ( a2[1] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
          || a2[2] != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4 )
        {
          goto LABEL_29;
        }
        v6 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
      }
      else
      {
        if ( *a2 != 3
          || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
          || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4 )
        {
          goto LABEL_29;
        }
        v6 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4];
      }
      if ( a2[3] == v6 )
      {
        *a3 = v5;
        v4 = 0;
        goto LABEL_23;
      }
LABEL_29:
      v4 = -2147467262;
LABEL_23:
      if ( v4 < 0 )
        return (unsigned int)v4;
      goto LABEL_11;
    }
  }
  *a3 = a1;
  v4 = 0;
LABEL_11:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v4;
}
