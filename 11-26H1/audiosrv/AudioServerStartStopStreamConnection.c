/*
 * XREFs of AudioServerStartStopStreamConnection @ 0x180116FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     WPP_SF_ql @ 0x1801171C0 (WPP_SF_ql.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioServerStartStopStreamConnection(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v5; // rax
  __int64 (__fastcall ***v6)(_QWORD, __int64); // rcx
  std::_Ref_count_base *v7; // rbx
  unsigned int v8; // edi

  v3 = a2;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_ql(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, a3, a1, a2);
  }
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  v6 = *(__int64 (__fastcall ****)(_QWORD, __int64))a1;
  v7 = *(std::_Ref_count_base **)(a1 + 8);
  LOBYTE(a2) = v3 != 0;
  v8 = (**v6)(v6, a2);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return v8;
}
