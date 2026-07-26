/*
 * XREFs of ?Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x14015E360
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140056810 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140056870 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140069840 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     WPP_RECORDER_SF__guid_d @ 0x14006AAA0 (WPP_RECORDER_SF__guid_d.c)
 *     WPP_RECORDER_SF__guid_Dd @ 0x1400CF164 (WPP_RECORDER_SF__guid_Dd.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x14015F060 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x14015F0B0 (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14015F700 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x14015FEF0 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1401603F0 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     ?Open@RegistryKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x140160690 (-Open@RegistryKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x140167170 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14016A220 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

__int64 __fastcall InterfaceProfileKnobCollection::Open(
        InterfaceProfileKnobCollection *this,
        unsigned int a2,
        struct KnobTransaction *a3)
{
  struct KnobTransaction *v3; // rsi
  __int64 result; // rax
  _BYTE *v7; // r15
  wchar_t *v8; // rax
  __int64 v9; // r12
  __int64 v10; // rcx
  int v11; // r13d
  NTSTATUS v12; // ebx
  HANDLE v13; // rdi
  unsigned __int16 v14; // r9
  void *v15; // r9
  const wchar_t *v16; // rax
  __int16 v17; // r12
  PVOID v18; // rcx
  void *v19; // r9
  const wchar_t *v20; // rax
  __int64 v21; // rcx
  __int16 v22; // cx
  struct _UNICODE_STRING *v23; // r8
  const wchar_t *v24; // rax
  __int64 v25; // rcx
  int v26; // ebx
  __int16 v27; // cx
  int v28; // eax
  const wchar_t *v29; // rax
  __int16 v30; // r12
  struct Rtl::KString *v31; // rax
  int v32; // edx
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING v35; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A0h]
  unsigned int v37; // [rsp+68h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  wchar_t v40[256]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = a3;
  result = RegistryKnobCollection::Open(this, a2, a3);
  if ( (int)result < 0 )
    return result;
  Handle = 0LL;
  *((_BYTE *)v3 + 16) = 0;
  v7 = (char *)v3 + 16;
  v36 = *((_QWORD *)this + 3) + 12LL;
  netsetupBuildObjectPath(2LL, v36, 0LL);
  v8 = v40;
  v9 = 0x7FFFLL;
  v35 = 0LL;
  v10 = 0x7FFFLL;
  do
  {
    if ( !*v8 )
      break;
    ++v8;
    --v10;
  }
  while ( v10 );
  v11 = -1073741811;
  v12 = -1073741811;
  if ( v10 )
  {
    v12 = 0;
    v35.Length = -2 - 2 * v10;
    v35.MaximumLength = -2 * v10;
    v35.Buffer = v40;
  }
  if ( v12 >= 0 )
  {
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &v35;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v12 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
    v13 = KeyHandle;
    if ( Handle )
      ZwClose(Handle);
    Handle = v13;
  }
  if ( v12 == -1073741772 )
  {
    netsetupBuildObjectPath(2LL, v36, 1LL);
    v12 = KRegKey::Open((KRegKey *)&Handle, 1u, v40, 0LL);
  }
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        0,
        1u,
        0xAu,
        (struct _GUID *)&WPP_7350990bba9a33d8934e66c0f1152c3c_Traceguids,
        v36,
        1,
        v12);
    goto LABEL_92;
  }
  v37 = 0;
  P = 0LL;
  KeyHandle = &Handle;
  v12 = NetSetupPropertyBag::ReadString(&KeyHandle, &NETSETUPPKEY_Operational_ExecutionContextProfile, &P);
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 11;
LABEL_90:
      WPP_RECORDER_SF__guid_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        1u,
        v14,
        (struct _GUID *)&WPP_7350990bba9a33d8934e66c0f1152c3c_Traceguids,
        v36,
        v12);
      goto LABEL_91;
    }
    goto LABEL_91;
  }
  v12 = NetSetupPropertyBag::ReadUint32(
          (NetSetupPropertyBag *)&KeyHandle,
          (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Operational_ExecutionContextProfileSource,
          &v37);
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 12;
      goto LABEL_90;
    }
LABEL_91:
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&P, 0LL);
LABEL_92:
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
    return (unsigned int)v12;
  }
  if ( v37 && v37 != 3 )
  {
    if ( v37 != 2 || !*(_WORD *)P )
    {
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&P, 0LL);
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
      return 3221225524LL;
    }
    v15 = *(void **)v3;
    v16 = L"Reserved\\ExecutionContextProfiles";
    v35 = 0LL;
    do
    {
      if ( !*v16 )
        break;
      ++v16;
      --v9;
    }
    while ( v9 );
    if ( v9 )
    {
      v11 = 0;
      v17 = 2 * v9;
      v35.Buffer = (wchar_t *)L"Reserved\\ExecutionContextProfiles";
      v35.Length = -2 - v17;
      v35.MaximumLength = -v17;
    }
    if ( v11 < 0 || (v11 = KRegKey::Open((KRegKey *)v3, a2, &v35, v15), v11 < 0) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          1u,
          0x11u,
          (struct _GUID *)&WPP_7350990bba9a33d8934e66c0f1152c3c_Traceguids,
          v11);
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&P, 0LL);
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
      return (unsigned int)v11;
    }
    v12 = KRegKey::Open((KRegKey *)v3, a2, (const struct _UNICODE_STRING *)P, *(void **)v3);
    if ( v12 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 18;
        goto LABEL_90;
      }
      goto LABEL_91;
    }
    v3 = (struct KnobTransaction *)((char *)v3 + 8);
    goto LABEL_40;
  }
  if ( (a2 & 2) != 0 )
  {
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&P, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
    return 3221225506LL;
  }
  v19 = (void *)*((_QWORD *)v3 + 1);
  v20 = L"Reserved\\ExecutionContextProfiles";
  v35 = 0LL;
  v21 = 0x7FFFLL;
  do
  {
    if ( !*v20 )
      break;
    ++v20;
    --v21;
  }
  while ( v21 );
  v12 = -1073741811;
  if ( v21 )
  {
    v12 = 0;
    v22 = 2 * v21;
    v35.Buffer = (wchar_t *)L"Reserved\\ExecutionContextProfiles";
    v35.Length = -2 - v22;
    v35.MaximumLength = -v22;
  }
  if ( v12 < 0 || (v12 = KRegKey::Open((KRegKey *)v3 + 1, a2, &v35, v19), v12 < 0) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        1u,
        0xDu,
        (struct _GUID *)&WPP_7350990bba9a33d8934e66c0f1152c3c_Traceguids,
        v12);
    goto LABEL_91;
  }
  v23 = (struct _UNICODE_STRING *)P;
  if ( *(_WORD *)P )
    goto LABEL_87;
  v35 = 0LL;
  v24 = L"DefaultProfile";
  v25 = 0x7FFFLL;
  do
  {
    if ( !*v24 )
      break;
    ++v24;
    --v25;
  }
  while ( v25 );
  v26 = -1073741811;
  if ( v25 )
  {
    v26 = 0;
    v27 = 2 * v25;
    v35.Buffer = L"DefaultProfile";
    v35.Length = -2 - v27;
    v35.MaximumLength = -v27;
  }
  if ( v26 >= 0 )
  {
    v28 = KRegKey::QueryValueString((char *)v3 + 8, &v35, &P);
    v23 = (struct _UNICODE_STRING *)P;
    v26 = v28;
  }
  if ( v26 == -1073741772 )
  {
    v35 = 0LL;
    v29 = L"Balanced";
    do
    {
      if ( !*v29 )
        break;
      ++v29;
      --v9;
    }
    while ( v9 );
    if ( v9 )
    {
      v11 = 0;
      v30 = 2 * v9;
      v35.Buffer = (wchar_t *)L"Balanced";
      v35.Length = -2 - v30;
      v35.MaximumLength = -v30;
    }
    if ( v11 >= 0 )
      v31 = Rtl::KString::Initialize(&v35);
    else
      v31 = 0LL;
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&P, v31);
    v23 = (struct _UNICODE_STRING *)P;
    if ( !P )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v32) = 3;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v32,
          1,
          14,
          (struct _GUID *)&WPP_7350990bba9a33d8934e66c0f1152c3c_Traceguids);
      }
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&P, 0LL);
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
      return 3221225626LL;
    }
LABEL_87:
    v12 = KRegKey::Open((KRegKey *)v3 + 1, a2, v23, *((void **)v3 + 1));
    if ( v12 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 16;
        goto LABEL_90;
      }
      goto LABEL_91;
    }
LABEL_40:
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (void **)v3,
      0LL);
    v18 = P;
    *v7 = 1;
    P = 0LL;
    if ( v18 )
      ExFreePoolWithTag(v18, 0x7274534Bu);
    if ( Handle )
      ZwClose(Handle);
    return 0LL;
  }
  if ( v26 >= 0 )
    goto LABEL_87;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      1u,
      0xFu,
      (struct _GUID *)&WPP_7350990bba9a33d8934e66c0f1152c3c_Traceguids,
      v26);
    v23 = (struct _UNICODE_STRING *)P;
  }
  P = 0LL;
  if ( v23 )
    ExFreePoolWithTag(v23, 0x7274534Bu);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v26;
}
