/*
 * XREFs of sub_180038220 @ 0x180038220
 * Callers:
 *     sub_180034E70 @ 0x180034E70 (sub_180034E70.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180038220(_Thrd_t *a1)
{
  _Thrd_id_t Id; // ebx
  _Thrd_t v3; // [rsp+20h] [rbp-18h] BYREF

  if ( !a1->_Id )
  {
    std::_Throw_Cpp_error(1);
    __debugbreak();
  }
  Id = a1->_Id;
  if ( Id == Thrd_id() )
  {
    std::_Throw_Cpp_error(5);
    __debugbreak();
  }
  v3 = *a1;
  if ( Thrd_join(&v3, 0LL) )
  {
    std::_Throw_Cpp_error(2);
    __debugbreak();
  }
  *a1 = 0LL;
}
