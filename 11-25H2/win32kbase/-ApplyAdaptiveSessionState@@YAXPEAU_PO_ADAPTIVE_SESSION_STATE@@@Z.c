/*
 * XREFs of ?ApplyAdaptiveSessionState@@YAXPEAU_PO_ADAPTIVE_SESSION_STATE@@@Z @ 0x14010B580
 * Callers:
 *     PowerConnectionEvent @ 0x140150D1C (PowerConnectionEvent.c)
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1401B0780 (-UpdateAdaptiveSessionState@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall ApplyAdaptiveSessionState(struct _PO_ADAPTIVE_SESSION_STATE *a1, __int64 a2)
{
  _DWORD *UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int (*v6)(void); // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  void (*v9)(void); // rax

  UserSessionState = (_DWORD *)W32GetUserSessionState(a1, a2);
  UserSessionState[670] = 1000 * *(_DWORD *)a1;
  UserSessionState[672] = 1000 * *((_DWORD *)a1 + 1);
  v4 = (unsigned int)(1000 * *((_DWORD *)a1 + 2));
  UserSessionState[671] = v4;
  v5 = *((unsigned __int8 *)a1 + 12);
  UserSessionState[686] = v5;
  v6 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 2520LL);
  if ( v6 && v6() >= 0 )
  {
    v9 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v8, v7) + 48) + 2528LL);
    if ( v9 )
      v9();
  }
}
