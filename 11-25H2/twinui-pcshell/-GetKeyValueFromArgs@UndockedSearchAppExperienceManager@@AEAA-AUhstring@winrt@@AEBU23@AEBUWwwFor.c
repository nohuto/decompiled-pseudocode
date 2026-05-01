/*
 * XREFs of ?GetKeyValueFromArgs@UndockedSearchAppExperienceManager@@AEAA?AUhstring@winrt@@AEBU23@AEBUWwwFormUrlDecoder@Foundation@Windows@3@0@Z @ 0x1800F534C
 * Callers:
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18024B6A0 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 * Callees:
 *     ?Parse@?$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18005D0B4 (-Parse@-$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winr.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800ACE7C (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F5554 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 */

// Hidden C++ exception states: #wind=2
winrt::hstring *__fastcall UndockedSearchAppExperienceManager::GetKeyValueFromArgs(
        __int64 a1,
        winrt::hstring *a2,
        __int64 *a3,
        __int64 **a4,
        winrt::impl **a5)
{
  char v8; // al
  struct winrt::impl::hstring_header *v9; // rdx
  unsigned int v10; // r8d
  struct winrt::impl::hstring_header **v11; // rax
  char v12; // bl
  struct winrt::impl::hstring_header *v13; // rcx
  char v14; // bl
  winrt::hstring *result; // rax
  volatile signed __int32 *v16; // [rsp+28h] [rbp-30h] BYREF
  __int64 v17[5]; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int32 *v18; // [rsp+60h] [rbp+8h] BYREF
  winrt::hstring *v19; // [rsp+68h] [rbp+10h]

  v19 = a2;
  v18 = 0LL;
  v8 = winrt::Windows::Foundation::operator!=(a4, &v18);
  try
  {
    if ( v8 )
    {
      v17[0] = *a3;
      v11 = (struct winrt::impl::hstring_header **)winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
                                                     a4,
                                                     &v16,
                                                     v17);
      v12 = 1;
      v13 = *v11;
    }
    else
    {
      v13 = winrt::impl::duplicate_hstring(*a5, v9, v10);
      v11 = (struct winrt::impl::hstring_header **)&v18;
      v12 = 2;
    }
    *v11 = 0LL;
    *(_QWORD *)a2 = v13;
    v14 = v12 | 4;
    if ( (v14 & 2) != 0 )
    {
      v14 &= ~2u;
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v18);
    }
    if ( (v14 & 1) != 0 )
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v16);
    result = a2;
  }
  catch ( ... )
  {
    winrt::hstring::hstring(v19, (const struct winrt::hstring *)a5);
    return v19;
  }
  return result;
}
