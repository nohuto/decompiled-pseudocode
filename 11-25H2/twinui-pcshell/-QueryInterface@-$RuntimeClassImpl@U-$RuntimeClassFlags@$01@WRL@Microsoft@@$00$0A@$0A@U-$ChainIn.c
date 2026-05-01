/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIImmersiveApplicationArrayPrivate@@UIImmersiveApplicationArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveApplicationArray2@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180193340
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIImmersiveApplicationArrayPrivate@@UIImmersiveApplicationArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveApplicationArray2@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802EF060 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802EF060.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
  }
  else
  {
    if ( (*a2 != 89659669
       || a2[1] != *(_DWORD *)&GUID_05581915_c410_44c8_819a_f310f6c0ffee.Data2
       || a2[2] != *(_DWORD *)GUID_05581915_c410_44c8_819a_f310f6c0ffee.Data4
       || a2[3] != *(_DWORD *)&GUID_05581915_c410_44c8_819a_f310f6c0ffee.Data4[4])
      && (*a2 != -957518420
       || a2[1] != *(_DWORD *)&GUID_c6ed6dac_8fac_4598_a74c_69020137149c.Data2
       || a2[2] != *(_DWORD *)GUID_c6ed6dac_8fac_4598_a74c_69020137149c.Data4
       || a2[3] != *(_DWORD *)&GUID_c6ed6dac_8fac_4598_a74c_69020137149c.Data4[4]) )
    {
      a1 += 8LL;
      if ( *a2 != 773384899
        || a2[1] != *(_DWORD *)&GUID_2e18eac3_3253_4bf0_be9f_38feb4360c34.Data2
        || a2[2] != *(_DWORD *)GUID_2e18eac3_3253_4bf0_be9f_38feb4360c34.Data4
        || a2[3] != *(_DWORD *)&GUID_2e18eac3_3253_4bf0_be9f_38feb4360c34.Data4[4] )
      {
        return (unsigned int)-2147467262;
      }
    }
    *a3 = a1;
    a1 = *a3;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
