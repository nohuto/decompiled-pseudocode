/*
 * XREFs of ?Shutdown@CDuckingManager@@UEAAXXZ @ 0x180040610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDuckingManager::Shutdown(CDuckingManager *this)
{
  char *v1; // rbx

  v1 = (char *)this + 320;
  *((_BYTE *)this + 448) = 1;
  if ( _Mtx_lock((CDuckingManager *)((char *)this + 320)) )
  {
    std::_Throw_Cpp_error(5);
    __debugbreak();
  }
  if ( *((_DWORD *)v1 + 19) == 0x7FFFFFFF )
  {
    *((_DWORD *)v1 + 19) = 2147483646;
    std::_Throw_Cpp_error(6);
    __debugbreak();
  }
  *((_BYTE *)this + 312) = 1;
  _Mtx_unlock((_Mtx_t)v1);
}
