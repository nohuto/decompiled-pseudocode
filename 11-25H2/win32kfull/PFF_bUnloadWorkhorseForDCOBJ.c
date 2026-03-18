/*
 * XREFs of PFF_bUnloadWorkhorseForDCOBJ @ 0x1403100B0
 * Callers:
 *     <none>
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x140106A9C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ??$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140107078 (--$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?bInPrivatePFT@PFFOBJ@@QEBAHXZ @ 0x140107828 (-bInPrivatePFT@PFFOBJ@@QEBAHXZ.c)
 */

_BOOL8 __fastcall PFF_bUnloadWorkhorseForDCOBJ(struct PFF *a1, __int64 a2)
{
  __int64 SessionState; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  BOOL v7; // eax
  struct PFF *v9; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  SessionState = W32GetSessionState((_DWORD)a1, a2);
  GreAcquireSemaphore<17,>(*(_QWORD *)(SessionState + 96) + 4872LL);
  v4 = *((_QWORD *)a1 + 17);
  --*((_DWORD *)a1 + 16);
  v10[0] = v4;
  v9 = a1;
  v7 = PFFOBJ::bInPrivatePFT((PFFOBJ *)&v9, v5, v6);
  return PFTOBJ::bUnloadWorkhorse((PFTOBJ *)v10, a1, 0LL, v7 ? 64 : 32);
}
