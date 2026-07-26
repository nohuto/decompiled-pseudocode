/*
 * XREFs of ndisLoadNamedFilterAltitudes @ 0x14014E884
 * Callers:
 *     ndisEnsureBindingInfoLoaded @ 0x14014E3B4 (ndisEnsureBindingInfoLoaded.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140056870 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f___ @ 0x14014C91C (KRegKey--QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x14014D46C (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 *     ?append@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z @ 0x14014D8D0 (-append@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x14015F060 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 */

__int64 ndisLoadNamedFilterAltitudes()
{
  unsigned int v0; // eax
  unsigned int v1; // ebx
  const wchar_t *v2; // rax
  __int64 v3; // rdx
  NTSTATUS v4; // ecx
  const struct KnobDescriptor *i; // rbx
  KRegKey v7; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING v8; // [rsp+38h] [rbp-C8h] BYREF
  char *Atom; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t Dst[256]; // [rsp+50h] [rbp-B0h] BYREF

  v7.m_ptr = 0LL;
  wcscpy_s(Dst, 0x100uLL, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Parameters");
  v0 = KRegKey::Open(&v7, 1u, Dst, 0LL);
  v1 = v0;
  if ( v0 == -1073741772 )
    goto LABEL_15;
  if ( !v0 )
  {
    v8 = 0LL;
    v2 = L"NamedAltitudes";
    v3 = 0x7FFFLL;
    do
    {
      if ( !*v2 )
        break;
      ++v2;
      --v3;
    }
    while ( v3 );
    v4 = v3 == 0 ? 0xC000000D : 0;
    if ( !v3
      || (v8.Buffer = L"NamedAltitudes",
          v8.Length = -2 - 2 * v3,
          v8.MaximumLength = -2 * v3,
          (v4 = KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f___(
                  &v7.m_ptr,
                  &v8)) != 0) )
    {
      v1 = v4;
      goto LABEL_16;
    }
    for ( i = (const struct KnobDescriptor *)&off_1400F7020;
          i != &stru_1400F7040;
          i = (const struct KnobDescriptor *)((char *)i + 8) )
    {
      Atom = Rtl::KStringAtomTableBase<1>::GetAtom((__int64)qword_14011F6E0, i->Name);
      if ( !Atom || !Rtl::KArray<Rtl::_KStringAtom *,1>::append((__int64)qword_14011F6E0 + 72, &Atom) )
      {
        v1 = -1073741670;
        goto LABEL_16;
      }
    }
LABEL_15:
    v1 = 0;
  }
LABEL_16:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v7.m_ptr);
  return v1;
}
