/*
 * XREFs of ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180027010
 * Callers:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800403A4 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall std::shared_ptr<std::function<void (void)>>::operator=(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  volatile signed __int32 *v5; // rbx

  v2 = *a2;
  v4 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *a1 = v2;
  v5 = (volatile signed __int32 *)a1[1];
  a1[1] = v4;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return a1;
}
