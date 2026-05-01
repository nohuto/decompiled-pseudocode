/*
 * XREFs of ?HampActIssueInvalidatedCallback@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@K@Z @ 0x18004036C
 * Callers:
 *     ?HampClientCompleteConnect@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003E804 (-HampClientCompleteConnect@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180040204 (-HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z.c)
 * Callees:
 *     ?HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@K@Z @ 0x180040F34 (-HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

void __fastcall HampActIssueInvalidatedCallback(__int64 a1, int a2, char a3)
{
  struct _HAM_CLIENT_CONTEXT *v6; // rcx
  _QWORD v7[2]; // [rsp+20h] [rbp-48h] BYREF
  int v8; // [rsp+30h] [rbp-38h]
  int v9; // [rsp+38h] [rbp-30h]

  memset_0(v7, 0, 0x40uLL);
  v6 = *(struct _HAM_CLIENT_CONTEXT **)(a1 + 64);
  v7[0] = *(_QWORD *)(a1 + 40);
  v7[1] = 0LL;
  v8 = 2;
  v9 = a2;
  HampSystemIssueActivityCallback(v6, (struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *)v7, a3 & 1);
}
