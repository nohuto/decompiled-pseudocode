/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___::_CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___ @ 0x1803DE894
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___::_scalar_deleting_destructor_ @ 0x1803DEA20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___--_scala.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___::_CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___(
        __int64 a1)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1 + 16);
  *(_DWORD *)(a1 + 12) = -1073741823;
}
