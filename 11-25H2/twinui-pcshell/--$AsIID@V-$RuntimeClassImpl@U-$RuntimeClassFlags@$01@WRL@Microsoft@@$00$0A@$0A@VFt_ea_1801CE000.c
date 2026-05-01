/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIAppLayoutInternal@@U?$ChainInterfaces@UIAppLayoutBuilder@@UIAppLayout@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIAppLayoutInternal@@U?$ChainInterfaces@UIAppLayoutBuilder@@UIAppLayout@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801CE000
 * Callers:
 *     ?CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z @ 0x18007E104 (-CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?IsEqual@CAppLayout@@UEAAHPEAUIAppLayout@@W4APP_LAYOUT_COMPARE_FLAGS@@@Z @ 0x18069ED00 (-IsEqual@CAppLayout@@UEAAHPEAUIAppLayout@@W4APP_LAYOUT_COMPARE_FLAGS@@@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIAppLayoutInternal@@U?$ChainInterfaces@UIAppLayoutBuilder@@UIAppLayout@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18069F230 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18069F230.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IAppLayoutInternal,Microsoft::WRL::ChainInterfaces<IAppLayoutBuilder,IAppLayout,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v3; // ebx
  __int64 v5; // rcx
  int v6; // eax

  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *a2 == -1796592748
      && a2[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
      && a2[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
      && a2[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4]
      || *a2 == 3
      && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
      && a2[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4]
      || (a1 += 32LL, *a2 == 519171322)
      && a2[1] == *(_DWORD *)&GUID_1ef1ecfa_786a_4d06_b024_4a61c7049b29.Data2
      && a2[2] == *(_DWORD *)GUID_1ef1ecfa_786a_4d06_b024_4a61c7049b29.Data4
      && a2[3] == *(_DWORD *)&GUID_1ef1ecfa_786a_4d06_b024_4a61c7049b29.Data4[4] )
    {
      *a3 = a1;
      v3 = 0;
LABEL_7:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
      return (unsigned int)v3;
    }
    v5 = a1 + 8;
    if ( *a2 == -623768588 )
    {
      if ( a2[1] != *(_DWORD *)&GUID_dad20bf4_9130_4ecb_bcce_cab826dcafae.Data2
        || a2[2] != *(_DWORD *)GUID_dad20bf4_9130_4ecb_bcce_cab826dcafae.Data4 )
      {
        goto LABEL_16;
      }
      v6 = *(_DWORD *)&GUID_dad20bf4_9130_4ecb_bcce_cab826dcafae.Data4[4];
    }
    else
    {
      if ( *a2 != 2074794102
        || a2[1] != *(_DWORD *)&GUID_7baad876_2fc5_4561_93e1_17e868a174ed.Data2
        || a2[2] != *(_DWORD *)GUID_7baad876_2fc5_4561_93e1_17e868a174ed.Data4 )
      {
        goto LABEL_16;
      }
      v6 = *(_DWORD *)&GUID_7baad876_2fc5_4561_93e1_17e868a174ed.Data4[4];
    }
    if ( a2[3] == v6 )
    {
      v3 = 0;
      *a3 = v5;
LABEL_17:
      if ( v3 < 0 )
        return (unsigned int)v3;
      goto LABEL_7;
    }
LABEL_16:
    v3 = -2147467262;
    goto LABEL_17;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
