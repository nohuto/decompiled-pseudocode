/*
 * XREFs of ??_GCompletionDelegate@?1???$WaitForCompletion@PEAU?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@UEAAPEAXI@Z @ 0x180240120
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompletionDelegate@?1???$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@ABI@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@ABI@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@UEAA@XZ @ 0x1802CCA84 (--1CompletionDelegate@-1---$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@ABI@@@details@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall `wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *> *>'::`2'::CompletionDelegate::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  `wil::details::WaitForCompletion<ABI::Windows::Foundation::IAsyncAction *>'::`2'::CompletionDelegate::~CompletionDelegate();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  return a1;
}
