/*
 * XREFs of ??0?$function@$$A6AXJ@Z@std@@QEAA@AEBV01@@Z @ 0x180176BE4
 * Callers:
 *     ??0AsyncPVPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V?$function@$$A6AXAEBUtagPROPVARIANT@@@Z@std@@V?$function@$$A6AXJ@Z@3@@Z @ 0x180176C24 (--0AsyncPVPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V-$function@$$A6AXAEBUtagPROPVARIANT@@.c)
 *     ??0AsyncStringPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V?$function@$$A6AXPEBG@Z@std@@V?$function@$$A6AXJ@Z@3@@Z @ 0x1801774F0 (--0AsyncStringPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V-$function@$$A6AXPEBG@Z@std@@V-$f.c)
 *     ??0AsyncHRESULTPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V?$function@$$A6AXJ@Z@std@@@Z @ 0x180177CA0 (--0AsyncHRESULTPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V-$function@$$A6AXJ@Z@std@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<void (long)>::function<void (long)>(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)(a1 + 56) = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v3 )
    *(_QWORD *)(a1 + 56) = (**v3)(v3, a1);
  return a1;
}
