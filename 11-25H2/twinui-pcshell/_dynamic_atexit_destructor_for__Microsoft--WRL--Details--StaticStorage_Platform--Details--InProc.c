/*
 * XREFs of _dynamic_atexit_destructor_for__Microsoft::WRL::Details::StaticStorage_Platform::Details::InProcModule_0_int_::instance___ @ 0x1806E04C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 dynamic_atexit_destructor_for__Microsoft::WRL::Details::StaticStorage_Platform::Details::InProcModule_0_int_::instance___()
{
  __int64 result; // rax

  if ( byte_180899400 )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))Microsoft::WRL::Details::StaticStorage<Platform::Details::InProcModule,0,int>::instance_)(
               &Microsoft::WRL::Details::StaticStorage<Platform::Details::InProcModule,0,int>::instance_,
               0LL);
    byte_180899400 = 0;
  }
  return result;
}
