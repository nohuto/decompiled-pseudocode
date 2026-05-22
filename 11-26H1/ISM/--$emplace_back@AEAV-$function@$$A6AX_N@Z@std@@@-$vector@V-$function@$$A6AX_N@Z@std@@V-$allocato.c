/*
 * XREFs of ??$emplace_back@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAAEAV?$function@$$A6AX_N@Z@1@AEAV21@@Z @ 0x1800B0E54
 * Callers:
 *     ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x1800B0FEC (-FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ.c)
 * Callees:
 *     ??0?$function@$$A6AXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@Z@std@@QEAA@AEBV01@@Z @ 0x180094024 (--0-$function@$$A6AXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal_to@_ea_180094024.c)
 *     ??$_Emplace_reallocate@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@AEAAPEAV?$function@$$A6AX_N@Z@1@QEAV21@AEAV21@@Z @ 0x1800B0C20 (--$_Emplace_reallocate@AEAV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$a.c)
 */

__int64 __fastcall std::vector<std::function<void (bool)>>::emplace_back<std::function<void (bool)> &>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rcx

  if ( a1[1] == a1[2] )
    return std::vector<std::function<void (bool)>>::_Emplace_reallocate<std::function<void (bool)> &>(a1, a1[1], a2);
  std::function<void (InputInfo *,std::unordered_set<unsigned long> &)>::function<void (InputInfo *,std::unordered_set<unsigned long> &)>(
    a1[1],
    a2);
  v3 = a1[1];
  a1[1] = v3 + 64;
  return v3;
}
