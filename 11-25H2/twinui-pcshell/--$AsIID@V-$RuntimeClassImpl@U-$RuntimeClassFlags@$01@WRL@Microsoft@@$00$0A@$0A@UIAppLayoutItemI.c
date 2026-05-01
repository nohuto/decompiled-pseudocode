/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppLayoutItemInternal@@U?$ChainInterfaces@UIAppLayoutItemBuilder@@UIAppLayoutItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppLayoutItemInternal@@U?$ChainInterfaces@UIAppLayoutItemBuilder@@UIAppLayoutItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801E62D8
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppLayoutItemInternal@@U?$ChainInterfaces@UIAppLayoutItemBuilder@@UIAppLayoutItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806A1030 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1806A1030.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAppLayoutItemInternal,Microsoft::WRL::ChainInterfaces<IAppLayoutItemBuilder,IAppLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v6; // eax

  v3 = 0;
  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *a2 == -1759370020
      && a2[1] == *(_DWORD *)&GUID_972224dc_7815_4df5_9adc_96bd3e7902fd.Data2
      && a2[2] == *(_DWORD *)GUID_972224dc_7815_4df5_9adc_96bd3e7902fd.Data4
      && a2[3] == *(_DWORD *)&GUID_972224dc_7815_4df5_9adc_96bd3e7902fd.Data4[4] )
    {
      *a3 = a1;
      goto LABEL_12;
    }
    v4 = a1 + 8;
    if ( *a2 == -787731328 )
    {
      if ( a2[1] != *(_DWORD *)&GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04.Data2
        || a2[2] != *(_DWORD *)GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04.Data4 )
      {
        return (unsigned int)-2147467262;
      }
      v6 = *(_DWORD *)&GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04.Data4[4];
    }
    else
    {
      if ( *a2 != -1425220971
        || a2[1] != *(_DWORD *)&GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98.Data2
        || a2[2] != *(_DWORD *)GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98.Data4 )
      {
        return (unsigned int)-2147467262;
      }
      v6 = *(_DWORD *)&GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98.Data4[4];
    }
    if ( a2[3] == v6 )
    {
      *a3 = v4;
LABEL_12:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
      return v3;
    }
    return (unsigned int)-2147467262;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
