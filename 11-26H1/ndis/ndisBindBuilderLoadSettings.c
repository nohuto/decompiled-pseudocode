/*
 * XREFs of ndisBindBuilderLoadSettings @ 0x1401919DC
 * Callers:
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x140191918 (-ndisBindBuilderInitialize@@YAJXZ.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140056810 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140056870 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z @ 0x140138160 (-QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x14014D46C (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x14015F060 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14016A190 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 */

__int64 __fastcall ndisBindBuilderLoadSettings(_WORD **a1)
{
  _BYTE *v1; // rdi
  unsigned int v2; // ebx
  unsigned int v3; // eax
  bool v4; // zf
  unsigned int ValueString; // edi
  char *Atom; // rax
  _WORD **v8; // [rsp+30h] [rbp+10h] BYREF
  KRegKey v9; // [rsp+38h] [rbp+18h] BYREF

  v8 = a1;
  v1 = qword_14011F6E0;
  v2 = 0;
  v9.m_ptr = 0LL;
  v3 = KRegKey::Open(
         &v9,
         1u,
         (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Parameters",
         0LL);
  if ( v3 == -1073741772 )
    goto LABEL_12;
  if ( v3
    || (LOBYTE(v8) = 0,
        (v3 = KRegKey::QueryValueBoolean(
                &v9,
                (wchar_t *)L"StateSeparatedRegistryLayout",
                (unsigned __int8 *)&v8,
                DefaultToFalse)) != 0)
    || (v1[96] = (_BYTE)v8 != 0,
        (v3 = KRegKey::QueryValueBoolean(
                &v9,
                (wchar_t *)L"DoNotWriteBindingsToRegistry",
                (unsigned __int8 *)&v8,
                DefaultToFalse)) != 0) )
  {
    v2 = v3;
LABEL_12:
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v9.m_ptr);
    return v2;
  }
  v4 = (_BYTE)v8 == 0;
  v8 = 0LL;
  v1[97] = !v4;
  ValueString = KRegKey::QueryValueString((__int64)&v9, L"UpperRangeReplacementToken", (__int64)&v8);
  if ( ValueString == -1073741772 )
  {
    *((_QWORD *)qword_14011F6E0 + 11) = 0LL;
LABEL_8:
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&v8, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v9.m_ptr);
    return 0LL;
  }
  if ( !ValueString )
  {
    Atom = Rtl::KStringAtomTableBase<1>::GetAtom((__int64)qword_14011F6E0, v8[1]);
    *((_QWORD *)qword_14011F6E0 + 11) = Atom;
    if ( Atom )
      goto LABEL_8;
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&v8, 0LL);
    v2 = -1073741670;
    goto LABEL_12;
  }
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&v8, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v9.m_ptr);
  return ValueString;
}
