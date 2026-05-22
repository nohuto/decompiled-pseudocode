/*
 * XREFs of ?_Reset_move@?$_Func_class@XPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@std@@IEAAX$$QEAV12@@Z @ 0x1800412DC
 * Callers:
 *     ?_Swap@?$_Func_class@X_N@std@@IEAAXAEAV12@@Z @ 0x180041230 (-_Swap@-$_Func_class@X_N@std@@IEAAXAEAV12@@Z.c)
 *     ??$_Uninitialized_move@PEAV?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@YAPEAV?$function@$$A6AX_N@Z@0@QEAV10@0PEAV10@AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@@Z @ 0x1800B0DE0 (--$_Uninitialized_move@PEAV-$function@$$A6AX_N@Z@std@@V-$allocator@V-$function@$$A6AX_N@Z@std@@@.c)
 *     ??4?$function@$$A6AXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F104C (--4-$function@$$A6AXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$?4V?$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@_EPEAV3@AEBU?$_Ph@$00@2@@std@@$0A@@?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@QEAAAEAV01@$$QEAV?$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@_EPEAV3@AEBU?$_Ph@$00@2@@1@@Z @ 0x1801B1450 (--$-4V-$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@_EPEAV3@AEBU-$_Ph@$00.c)
 * Callees:
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x180041338 (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::_Func_class<void,MIT_INPUTSTREAM_ENDED_MESSAGE const *>::_Reset_move(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      std::_Func_class<void,>::~_Func_class<void,>(a2);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
}
