/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800B1AEC
 * Callers:
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x1800B0CB8 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AE_ea_1800B0CB8.c)
 *     ?SetHostedPos@FrameWrapper@@UEAAJPEBUtagRECT@@@Z @ 0x1800B1540 (-SetHostedPos@FrameWrapper@@UEAAJPEBUtagRECT@@@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@UtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@$$QEAUtagRECT@@@Z @ 0x18031EDE0 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@UtagRECT@@@Deta.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  int v4; // eax
  int v5; // ebx

  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 == -105327437
      && a2[1] == *(_DWORD *)&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6.Data2
      && a2[2] == *(_DWORD *)GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6.Data4
      && a2[3] == *(_DWORD *)&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6.Data4[4] )
    {
      *a3 = a1;
      v5 = 0;
      goto LABEL_12;
    }
LABEL_5:
    v3 = a1 + 32;
    if ( *a2 == -1796592748 )
    {
      if ( a2[1] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
        || a2[2] != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4 )
      {
        goto LABEL_14;
      }
      v4 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
    }
    else
    {
      if ( *a2 != 3
        || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
        || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4 )
      {
        goto LABEL_14;
      }
      v4 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4];
    }
    if ( a2[3] == v4 )
    {
      *a3 = v3;
      v5 = 0;
      goto LABEL_11;
    }
LABEL_14:
    v5 = -2147467262;
LABEL_11:
    if ( v5 < 0 )
      return (unsigned int)v5;
LABEL_12:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v5;
  }
  if ( a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_5;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
