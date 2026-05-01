/*
 * XREFs of ??0Buffer@Streams@Storage@Windows@winrt@@QEAA@I@Z @ 0x18062398C
 * Callers:
 *     ?ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA?AUIBuffer@Streams@Storage@Windows@winrt@@QEAUHWND__@@AEBUhstring@7@@Z @ 0x1806298F0 (-ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA-AUIBuffer@Streams@Storage@Windows@winr.c)
 *     ?ReadContentsFromFile@Util@@YA?AUIBuffer@Streams@Storage@Windows@winrt@@PEAE@Z @ 0x180629DAC (-ReadContentsFromFile@Util@@YA-AUIBuffer@Streams@Storage@Windows@winrt@@PEAE@Z.c)
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1 @ 0x18062BE80 (Util--TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??R_lambda_e0c989301fb7eeb47b8a27ef133367da_@@QEBA@AEBUIPointerPointStatics@Input@UI@Windows@winrt@@@Z @ 0x18056CC04 (--R_lambda_e0c989301fb7eeb47b8a27ef133367da_@@QEBA@AEBUIPointerPointStatics@Input@UI@Windows@win.c)
 *     ??$call@AEAV_lambda_e7631c1690498db2dc470481c9b63fc5_@@@?$factory_cache_entry@UBuffer@Streams@Storage@Windows@winrt@@UIBufferFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_e7631c1690498db2dc470481c9b63fc5_@@@Z @ 0x18061FE14 (--$call@AEAV_lambda_e7631c1690498db2dc470481c9b63fc5_@@@-$factory_cache_entry@UBuffer@Streams@St.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Storage::Streams::Buffer *__fastcall winrt::Windows::Storage::Streams::Buffer::Buffer(
        winrt::Windows::Storage::Streams::Buffer *this,
        int a2)
{
  unsigned int *v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 *v6; // [rsp+40h] [rbp+18h]

  v5 = a2;
  v4 = (unsigned int *)&v5;
  v6 = &qword_18089ABD8;
  _InterlockedIncrement64(&qword_18089ABD8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::Streams::Buffer,winrt::Windows::Storage::Streams::IBufferFactory> )
  {
    _lambda_e0c989301fb7eeb47b8a27ef133367da_::operator()(
      &v4,
      this,
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::Streams::Buffer,winrt::Windows::Storage::Streams::IBufferFactory>);
    _InterlockedDecrement64(&qword_18089ABD8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089ABD8);
    winrt::impl::factory_cache_entry<winrt::Windows::Storage::Streams::Buffer,winrt::Windows::Storage::Streams::IBufferFactory>::call<_lambda_e7631c1690498db2dc470481c9b63fc5_ &>(
      (__int64 *)this,
      this,
      &v4);
  }
  return this;
}
