/*
 * XREFs of ?join@thread@std@@QEAAXXZ @ 0x180585284
 * Callers:
 *     ??1StartupAppMonitor@@UEAA@XZ @ 0x180583FE0 (--1StartupAppMonitor@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall std::thread::join(std::thread *this)
{
  int v2; // ebx
  _Thrd_t v3; // [rsp+20h] [rbp-18h] BYREF

  if ( !*((_DWORD *)this + 2) )
  {
    std::_Throw_Cpp_error(1);
    __debugbreak();
  }
  v2 = *((_DWORD *)this + 2);
  if ( v2 == _Thrd_id() )
  {
    std::_Throw_Cpp_error(5);
    __debugbreak();
  }
  v3 = *(_Thrd_t *)this;
  if ( _Thrd_join(&v3, 0LL) )
  {
    std::_Throw_Cpp_error(2);
    __debugbreak();
  }
  *(_OWORD *)this = 0LL;
}
