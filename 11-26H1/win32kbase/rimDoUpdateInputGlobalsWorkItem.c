/*
 * XREFs of rimDoUpdateInputGlobalsWorkItem @ 0x1400D5320
 * Callers:
 *     RIMOnAsyncWorkItemNotification @ 0x1401288B4 (RIMOnAsyncWorkItemNotification.c)
 * Callees:
 *     RIMGetPointerInputType @ 0x140074390 (RIMGetPointerInputType.c)
 *     LINPSourceFromPointerType @ 0x1400D36A4 (LINPSourceFromPointerType.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1400D36E0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 */

char __fastcall rimDoUpdateInputGlobalsWorkItem(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rsi
  int v6; // r8d
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // edi
  int v10; // eax
  int v11; // eax

  v3 = *(_QWORD *)(a1 + 56);
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 1108LL);
  v5 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 3056);
  v7 = v3 + 240;
  if ( !v3 )
    v7 = 168LL;
  v8 = v3 + 528;
  v9 = -__CFSHR__(*(_DWORD *)v7, 14);
  if ( !v3 )
    v8 = 456LL;
  v10 = RIMGetPointerInputType(*(_QWORD *)v8, v4, v6);
  v11 = LINPSourceFromPointerType(v10);
  return CInputGlobals::UpdateInputGlobals(
           v5,
           (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
           v11,
           0,
           0,
           v9 != 0 ? 10 : 2);
}
