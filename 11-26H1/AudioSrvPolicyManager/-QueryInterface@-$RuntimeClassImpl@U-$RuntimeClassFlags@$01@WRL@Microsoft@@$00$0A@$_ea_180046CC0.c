/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@UIAudioDuckingManager@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180046CC0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@UIAudioDuckingManager@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180046D50 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180046D50.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180024FDC (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents,IAudioDuckingManager>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // r10
  __int64 v10; // r11

  v3 = 0;
  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v5 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    return v3;
  }
  if ( InlineIsEqualGUID(v4, &GUID_a68ab569_b923_4330_a258_1735412d392e) )
  {
    v10 = v8;
  }
  else if ( !InlineIsEqualGUID(v9, &GUID_6b8591c8_b7d6_455d_8003_822bfd39c679) )
  {
    return (unsigned int)-2147467262;
  }
  *v7 = v10;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  return v3;
}
