/*
 * XREFs of ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x180023D88
 * Callers:
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x180037C9C (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800403A4 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<void (void)>::function<void (void)>(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)(a1 + 56) = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v3 )
    *(_QWORD *)(a1 + 56) = (**v3)(v3, a1);
  return a1;
}
