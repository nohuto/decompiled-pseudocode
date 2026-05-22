/*
 * XREFs of ?OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@34567@@Z @ 0x1800D0480
 * Callers:
 *     <none>
 * Callees:
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAULegacyInputInfo@@@Z @ 0x1800476A0 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z @ 0x1800CF858 (-QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpectrumListener::OnPhraseDetected(
        SpectrumListener *this,
        struct Windows::UI::Input::Spatial::Internal::IInputPriv *a2,
        struct Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *a3)
{
  int v5; // r9d
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // [rsp+20h] [rbp-BE8h]
  int v12[626]; // [rsp+30h] [rbp-BD8h] BYREF
  _BYTE v13[8]; // [rsp+9F8h] [rbp-210h] BYREF
  _BYTE v14[496]; // [rsp+A00h] [rbp-208h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C08h] [rbp+0h]

  memset_0(v12, 0, 0xBC0uLL);
  v5 = *((_DWORD *)this + 20);
  v12[6] = 3008;
  v6 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 7, 0x40000, v5, (__int64)v12);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v6,
      v11);
  v7 = (*(__int64 (__fastcall **)(struct Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *, _BYTE *))(*(_QWORD *)a3 + 48LL))(
         a3,
         v13);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x21,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcinputinfohelper.cpp",
      (const char *)(unsigned int)v7,
      v11);
  v8 = (*(__int64 (__fastcall **)(struct Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *, _BYTE *))(*(_QWORD *)a3 + 56LL))(
         a3,
         v14);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x22,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcinputinfohelper.cpp",
      (const char *)(unsigned int)v8,
      v11);
  v9 = MPCRawInputProvider::QueueInput(*((MPCRawInputProvider **)this + 2), (struct LegacyInputInfo *)v12);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v9,
      v11);
  return 0LL;
}
