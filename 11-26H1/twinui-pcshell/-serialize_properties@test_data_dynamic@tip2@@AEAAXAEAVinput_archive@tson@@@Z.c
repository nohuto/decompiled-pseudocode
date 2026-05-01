/*
 * XREFs of ?serialize_properties@test_data_dynamic@tip2@@AEAAXAEAVinput_archive@tson@@@Z @ 0x1803BDD90
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@test_data_dynamic@tip2@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1803ACB84 (--$serialize@Vinput_archive@tson@@@test_data_dynamic@tip2@@QEAAXAEAVinput_archive@tson@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1802B8924 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

void __fastcall tip2::test_data_dynamic::serialize_properties(
        tip2::test_data_dynamic *this,
        struct tson::input_archive *a2)
{
  __int64 v2; // rbp
  unsigned __int64 v5; // rdi
  char *v6; // rcx
  unsigned __int64 v7; // rdi
  size_t v8; // rdi
  void *v9; // rax
  size_t v10; // rcx

  v2 = *(_QWORD *)a2;
  v5 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) < v5 )
  {
    v6 = (char *)this + 120;
    v7 = v5 - *(_QWORD *)(v2 + 8);
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 <= 0x40
        || (v9 = CoTaskMemAlloc(v8),
            wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
              (void **)this + 14,
              v9),
            (v6 = (char *)*((_QWORD *)this + 14)) != 0LL) )
      {
        *((_QWORD *)this + 13) = v8;
        memcpy_0(v6, *(const void **)(v2 + 8), v8);
        v10 = v8 + *(_QWORD *)(v2 + 8);
        if ( v10 > *(_QWORD *)(v2 + 16) )
          *(_BYTE *)(v2 + 24) = 1;
        else
          *(_QWORD *)(v2 + 8) = v10;
      }
      else if ( *((int *)a2 + 2) >= 0 )
      {
        *((_DWORD *)a2 + 2) = -2147024882;
      }
    }
    else if ( *((int *)a2 + 2) >= 0 )
    {
      *((_DWORD *)a2 + 2) = -2147023267;
    }
  }
}
