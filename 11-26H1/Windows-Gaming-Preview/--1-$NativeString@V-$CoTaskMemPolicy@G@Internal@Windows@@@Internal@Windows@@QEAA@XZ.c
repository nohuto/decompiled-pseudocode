/*
 * XREFs of ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x180019090
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::FindAllOperation_::_1_::dtor$1 @ 0x180043DB7 (_Windows--Gaming--Preview--GamesEnumeration--FindAllOperation--FindAllOperation_--_1_--dtor$1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::FindAllOperation_::_1_::dtor$2 @ 0x180043DCD (_Windows--Gaming--Preview--GamesEnumeration--FindAllOperation--FindAllOperation_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
}
