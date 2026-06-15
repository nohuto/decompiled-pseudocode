/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800201C0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039260 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180039260.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::QueryInterface(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // eax

  v3 = 0;
  *a3 = 0LL;
  v4 = *a2;
  if ( !*a2 )
  {
    if ( a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
      && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
    {
      *a3 = a1;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      return v3;
    }
    return (unsigned int)-2147467262;
  }
  if ( v4 == -135935609 )
  {
    if ( a2[1] == *(_DWORD *)&GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200.Data2
      && a2[2] == *(_DWORD *)GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200.Data4
      && a2[3] == *(_DWORD *)&GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200.Data4[4] )
    {
      *a3 = a1;
LABEL_12:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
      return v3;
    }
  }
  else if ( v4 == 782865528
         && a2[1] == *(_DWORD *)&GUID_2ea99478_7574_414c_8ba3_0c615b1716a4.Data2
         && a2[2] == *(_DWORD *)GUID_2ea99478_7574_414c_8ba3_0c615b1716a4.Data4
         && a2[3] == *(_DWORD *)&GUID_2ea99478_7574_414c_8ba3_0c615b1716a4.Data4[4] )
  {
    *a3 = a1 + 8;
    goto LABEL_12;
  }
  return (unsigned int)-2147467262;
}
