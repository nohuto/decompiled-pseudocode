/*
 * XREFs of ?WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001B110
 * Callers:
 *     <none>
 * Callees:
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x18001BEB0 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSerialWorkQueue::WorkCallback(PTP_CALLBACK_INSTANCE Instance, _QWORD *Context, PTP_WORK Work)
{
  __int64 v5; // rsi
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rbx

  v5 = Context[2];
  if ( _Mtx_lock((_Mtx_t)(v5 + 88)) )
  {
    std::_Throw_Cpp_error(5);
    __debugbreak();
    goto LABEL_12;
  }
  if ( *(_DWORD *)(v5 + 164) == 0x7FFFFFFF )
  {
LABEL_12:
    *(_DWORD *)(v5 + 164) = 2147483646;
    std::_Throw_Cpp_error(6);
    goto LABEL_13;
  }
  if ( !(unsigned __int8)std::_Atomic_storage<bool,1>::load(v5 + 80) )
  {
    v6 = *(_QWORD *)(*Context + 56LL);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      goto LABEL_6;
    }
LABEL_13:
    std::_Xbad_function_call();
    JUMPOUT(0x18001B23ALL);
  }
LABEL_6:
  _Mtx_unlock((_Mtx_t)(v5 + 88));
  v7 = (volatile signed __int32 *)Context[1];
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  operator delete(Context, (const struct std::nothrow_t *)0x18);
  CloseThreadpoolWork(Work);
}
