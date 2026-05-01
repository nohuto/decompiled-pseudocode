/*
 * XREFs of ?OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@AEAAJPEAUHSTRING__@@0@Z @ 0x180289360
 * Callers:
 *     ?NotifyInputAppPropertyChanged@TouchKeyboardExperienceManager@@UEAAJPEAUHSTRING__@@0@Z @ 0x18046E920 (-NotifyInputAppPropertyChanged@TouchKeyboardExperienceManager@@UEAAJPEAUHSTRING__@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180073448 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1800BFE24 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     _lambda_76f340d5d82a2ae937276f5837d7f307_::_lambda_76f340d5d82a2ae937276f5837d7f307_ @ 0x1802894F4 (_lambda_76f340d5d82a2ae937276f5837d7f307_--_lambda_76f340d5d82a2ae937276f5837d7f307_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_76f340d5d82a2ae937276f5837d7f307___ @ 0x180289568 (Windows--Internal--ComTaskPool--QueueTask__lambda_76f340d5d82a2ae937276f5837d7f307___.c)
 *     _lambda_76f340d5d82a2ae937276f5837d7f307_::__lambda_76f340d5d82a2ae937276f5837d7f307_ @ 0x1802895F8 (_lambda_76f340d5d82a2ae937276f5837d7f307_--__lambda_76f340d5d82a2ae937276f5837d7f307_.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppPropertyChanged(
        TouchKeyboardExperienceManager *this,
        HSTRING a2,
        HSTRING a3)
{
  PCWSTR StringRawBuffer; // rax
  unsigned __int64 v6; // rax
  const void *v7; // rcx
  PCWSTR v8; // rax
  unsigned __int64 v9; // rax
  const void *v10; // rcx
  __int64 *v11; // rax
  int v12; // eax
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // [rsp+30h] [rbp-69h] BYREF
  __int64 *v20; // [rsp+38h] [rbp-61h] BYREF
  int v21[4]; // [rsp+40h] [rbp-59h] BYREF
  __int128 v22; // [rsp+50h] [rbp-49h]
  _OWORD v23[2]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v24[80]; // [rsp+80h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  memset(v23, 0, sizeof(v23));
  v6 = std::_WChar_traits<wchar_t>::length((__int64)StringRawBuffer);
  std::wstring::_Construct<1,unsigned short const *>((char **)v23, v7, v6);
  v8 = WindowsGetStringRawBuffer(a3, 0LL);
  *(_OWORD *)v21 = 0LL;
  v22 = 0LL;
  v9 = std::_WChar_traits<wchar_t>::length((__int64)v8);
  std::wstring::_Construct<1,unsigned short const *>((char **)v21, v10, v9);
  v19 = 0LL;
  v20 = &v19;
  v11 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v20);
  v12 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v11);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16A7,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
LABEL_8:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    goto LABEL_9;
  }
  v20 = (__int64 *)this;
  v14 = lambda_76f340d5d82a2ae937276f5837d7f307_::_lambda_76f340d5d82a2ae937276f5837d7f307_(
          (unsigned int)v24,
          (unsigned int)&v19,
          (unsigned int)&v20,
          (unsigned int)v23,
          (__int64)v21);
  v13 = Windows::Internal::ComTaskPool::QueueTask__lambda_76f340d5d82a2ae937276f5837d7f307___(
          v16,
          v15,
          *((unsigned int *)this + 243),
          v14);
  lambda_76f340d5d82a2ae937276f5837d7f307_::__lambda_76f340d5d82a2ae937276f5837d7f307_(v24);
  if ( v13 >= 0 )
  {
    v13 = 0;
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x16ED,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v13);
  v17 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
LABEL_9:
  std::wstring::_Tidy_deallocate(v21);
  std::wstring::_Tidy_deallocate(v23);
  return (unsigned int)v13;
}
