/*
 * XREFs of rimDoUpdateInputGlobalsWorkItem @ 0x1400D97C0
 * Callers:
 *     RIMOnAsyncWorkItemNotification @ 0x1401998B4 (RIMOnAsyncWorkItemNotification.c)
 * Callees:
 *     LINPSourceFromPointerType @ 0x1400D9884 (LINPSourceFromPointerType.c)
 *     RIMGetPointerInputType @ 0x1400D98BC (RIMGetPointerInputType.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1400D99B0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 */

__int64 __fastcall rimDoUpdateInputGlobalsWorkItem(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // eax

  v2 = *(_QWORD *)(a1 + 56);
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 1108LL);
  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 3056);
  v4 = v2 + 528;
  if ( !v2 )
    v4 = 456LL;
  v5 = RIMGetPointerInputType(*(_QWORD *)v4);
  v6 = LINPSourceFromPointerType(v5);
  return CInputGlobals::UpdateInputGlobals(
           v3,
           (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
           v6);
}
