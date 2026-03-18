/*
 * XREFs of _PnpInterfaceRaisePropertyChangeEventWorker @ 0x14096AF58
 * Callers:
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140836790 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _PnpRaiseNtPlugPlayInterfacePropertyChangeEvent @ 0x14096A758 (_PnpRaiseNtPlugPlayInterfacePropertyChangeEvent.c)
 *     _CmSetDeviceInterfaceMappedProperty @ 0x140A58D74 (_CmSetDeviceInterfaceMappedProperty.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnpInterfaceRaisePropertyChangeEventWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // rax
  __int64 *v7; // rbx
  __int64 v8; // rsi
  __int64 i; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx

  result = guard_dispatch_icall_no_overrides(a1);
  v7 = &qword_1400028F0;
  v8 = 2LL;
  do
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)v7; i = (unsigned int)(i + 1) )
    {
      v10 = *(_QWORD *)(*(v7 - 1) + 8 * i);
      result = *(unsigned int *)(v10 + 16);
      if ( *(_DWORD *)(a5 + 16) == (_DWORD)result )
      {
        v11 = *(_QWORD *)a5 - *(_QWORD *)v10;
        if ( *(_QWORD *)a5 == *(_QWORD *)v10 )
          v11 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v10 + 8);
        if ( !v11 )
        {
          result = guard_dispatch_icall_no_overrides(a1);
          break;
        }
      }
    }
    v7 += 3;
    --v8;
  }
  while ( v8 );
  return result;
}
