/*
 * XREFs of ??_GCompletionDelegate@?1???$WaitForCompletion@PEAU?$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@UEAAPEAXI@Z @ 0x18002C8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompletionDelegate@?1???$WaitForCompletion@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@UEAA@XZ @ 0x180029FB8 (--1CompletionDelegate@-1---$WaitForCompletion@PEAU-$IAsyncOperation@PEAVStorageFile@Storage@Wind.c)
 */

void *__fastcall `wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider *> *>'::`2'::CompletionDelegate::`scalar deleting destructor'(
        void *a1,
        void *a2)
{
  char v2; // bl

  v2 = (char)a2;
  `wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile *> *>'::`2'::CompletionDelegate::~CompletionDelegate(
    (__int64)a1,
    a2);
  if ( (v2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
