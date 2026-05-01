/*
 * XREFs of ?GetKeyValueFromArgs@UndockedSearchAppExperienceManager@@AEAA?AUhstring@winrt@@AEBU23@AEBUWwwFormUrlDecoder@Foundation@Windows@3@0@Z @ 0x1800CB890
 * Callers:
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18023F0A0 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x18002D174 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Parse@?$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800B74D4 (-Parse@-$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winr.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800CC1A4 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
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
  unsigned int v12; // r8d
  char v13; // bl
  struct winrt::impl::hstring_header *v14; // rcx
  char v15; // bl
  winrt::hstring *result; // rax
  volatile signed __int32 *v17; // [rsp+28h] [rbp-30h] BYREF
  __int64 v18[5]; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int32 *v19; // [rsp+60h] [rbp+8h] BYREF
  winrt::hstring *v20; // [rsp+68h] [rbp+10h]

  v20 = a2;
  v19 = 0LL;
  v8 = winrt::Windows::Foundation::operator!=(a4, &v19);
  try
  {
    if ( v8 )
    {
      v18[0] = *a3;
      v11 = (struct winrt::impl::hstring_header **)winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
                                                     a4,
                                                     &v17,
                                                     v18);
      v13 = 1;
      v14 = *v11;
    }
    else
    {
      v14 = winrt::impl::duplicate_hstring(*a5, v9, v10);
      v11 = (struct winrt::impl::hstring_header **)&v19;
      v13 = 2;
    }
    *v11 = 0LL;
    *(_QWORD *)a2 = v14;
    v15 = v13 | 4;
    if ( (v15 & 2) != 0 )
    {
      v15 &= ~2u;
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v19);
    }
    if ( (v15 & 1) != 0 )
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v17);
    result = a2;
  }
  catch ( ... )
  {
    winrt::hstring::hstring(v20, (const struct winrt::hstring *)a5, v12);
    return v20;
  }
  return result;
}
