/*
 * XREFs of ??_Gpromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UEAAPEAXI@Z @ 0x180446670
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x180223568 (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@e.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 */

__int64 *__fastcall std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type::`scalar deleting destructor'(
        __int64 *Block,
        char a2)
{
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
