/*
 * XREFs of ?ResolveEventNotificationHandlerFromType@ContentManagement@@YA?AV?$function@$$A6AJXZ@std@@W4EventNotificationType@1@@Z @ 0x180057684
 * Callers:
 *     _lambda_929976d9f769b9ae6bfa1e1f0592e0ca_::operator() @ 0x18004D750 (_lambda_929976d9f769b9ae6bfa1e1f0592e0ca_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ContentManagement::ResolveEventNotificationHandlerFromType(_QWORD *a1, int a2)
{
  __int64 v3; // rcx
  _QWORD *i; // rax
  char *v5; // r8
  _QWORD *v6; // rdx

  v3 = 0LL;
  for ( i = &unk_18017E190; ; i += 5 )
  {
    if ( i == (_QWORD *)&unk_18017E208 )
    {
      *a1 = &std::_Func_impl<std::_Callable_fun<long (*const)(void),0>,std::allocator<std::_Func_class<long,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,long,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
      a1[1] = ContentManagement::NormalEventNotificationHandler;
      a1[3] = a1;
      return a1;
    }
    if ( *(_DWORD *)i == a2 )
      break;
  }
  a1[3] = 0LL;
  v5 = (char *)i[4];
  if ( v5 )
  {
    if ( v5 == (char *)(i + 1) )
      v6 = a1;
    else
      v6 = 0LL;
    v3 = (**(__int64 (__fastcall ***)(_QWORD, _QWORD *))v5)(i[4], v6);
  }
  a1[3] = v3;
  return a1;
}
