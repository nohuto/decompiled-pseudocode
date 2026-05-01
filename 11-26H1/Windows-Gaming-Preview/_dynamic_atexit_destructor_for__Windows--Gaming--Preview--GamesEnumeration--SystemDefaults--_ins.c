/*
 * XREFs of _dynamic_atexit_destructor_for__Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_instance__ @ 0x1800449C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 dynamic_atexit_destructor_for__Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_instance__()
{
  volatile signed __int32 *v0; // rbx
  __int64 result; // rax

  v0 = (volatile signed __int32 *)qword_18005A090;
  if ( qword_18005A090 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(qword_18005A090 + 8), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v0)(v0);
      result = (unsigned int)_InterlockedExchangeAdd(v0 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v0 + 8LL))(v0);
    }
  }
  return result;
}
