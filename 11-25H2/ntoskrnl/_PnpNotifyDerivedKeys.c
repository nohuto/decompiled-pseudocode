/*
 * XREFs of _PnpNotifyDerivedKeys @ 0x140A0A9B0
 * Callers:
 *     _PnpInterfaceClassRaisePropertyChangeEventWorker @ 0x14080C438 (_PnpInterfaceClassRaisePropertyChangeEventWorker.c)
 *     _PnpUpdateInterfacesCallback @ 0x14080C520 (_PnpUpdateInterfacesCallback.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnpNotifyDerivedKeys(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7)
{
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 i; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( a6 )
  {
    v10 = a6;
    v11 = a5 + 8;
    do
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)v11; i = (unsigned int)(i + 1) )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(v11 - 8) + 8 * i);
        result = *(unsigned int *)(v13 + 16);
        if ( *(_DWORD *)(a4 + 16) == (_DWORD)result )
        {
          v14 = *(_QWORD *)a4 - *(_QWORD *)v13;
          if ( *(_QWORD *)a4 == *(_QWORD *)v13 )
            v14 = *(_QWORD *)(a4 + 8) - *(_QWORD *)(v13 + 8);
          if ( !v14 )
          {
            *(_QWORD *)(a7 + 16) = *(_QWORD *)(v11 + 8);
            result = guard_dispatch_icall_no_overrides(a1);
            break;
          }
        }
      }
      v11 += 24LL;
      --v10;
    }
    while ( v10 );
  }
  return result;
}
