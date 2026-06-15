/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCStreamInstanceProxyImpl@@UIStreamInstanceProxy@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006ECF0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCStreamInstanceProxyImpl@@UIStreamInstanceProxy@@@Details@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FEC80 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800FEC80.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CStreamInstanceProxyImpl,IStreamInstanceProxy>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2 )
  {
    if ( a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2 )
    {
      if ( a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
        && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
      {
        *a3 = a1;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
        return v3;
      }
      if ( a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
        && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
        && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
      {
        *a3 = a1;
        v4 = 0;
        goto LABEL_5;
      }
    }
    goto LABEL_3;
  }
  if ( *a2 != 2080465278
    || a2[1] != *(_DWORD *)&GUID_7c01617e_f40d_4988_9ebf_87ce94f8fca6.Data2
    || a2[2] != *(_DWORD *)GUID_7c01617e_f40d_4988_9ebf_87ce94f8fca6.Data4
    || a2[3] != *(_DWORD *)&GUID_7c01617e_f40d_4988_9ebf_87ce94f8fca6.Data4[4] )
  {
LABEL_3:
    v4 = -2147467262;
    a1 = 0LL;
    goto LABEL_4;
  }
  a1 += 40LL;
  *a3 = a1;
  v4 = 0;
LABEL_4:
  if ( v4 >= 0 )
LABEL_5:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return (unsigned int)v4;
}
