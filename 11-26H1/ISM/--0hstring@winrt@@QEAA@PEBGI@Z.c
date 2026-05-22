/*
 * XREFs of ??0hstring@winrt@@QEAA@PEBGI@Z @ 0x1800A5F0C
 * Callers:
 *     ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z @ 0x1800A7200 (-trim_hresult_message@impl@winrt@@YA-AUhstring@2@QEBGI@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18009AAB2 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x1800A6D08 (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 */

winrt::hstring *__fastcall winrt::hstring::hstring(winrt::hstring *this, const unsigned __int16 *a2, unsigned int a3)
{
  struct winrt::impl::shared_hstring_header *v3; // rbx
  struct winrt::impl::shared_hstring_header *v7; // rax
  __int64 v8; // rdx
  struct winrt::impl::shared_hstring_header *v9; // r14
  void *v10; // rcx
  size_t v11; // r8
  winrt::hstring *result; // rax

  v3 = 0LL;
  if ( a3 )
  {
    v7 = winrt::impl::precreate_hstring_on_heap((winrt::impl *)a3, (unsigned int)a2);
    v9 = v7;
    v10 = (char *)v7 + 28;
    v11 = 2LL * a3;
    if ( v11 )
    {
      if ( v7 != (struct winrt::impl::shared_hstring_header *)-28LL )
      {
        if ( a2 )
        {
          memcpy_0(v10, a2, v11);
          goto LABEL_8;
        }
        memset_0(v10, 0, v11);
      }
      *(_DWORD *)_o__errno(v10, v8, v11) = 22;
      invalid_parameter_noinfo();
    }
LABEL_8:
    v3 = v9;
  }
  result = this;
  *(_QWORD *)this = v3;
  return result;
}
