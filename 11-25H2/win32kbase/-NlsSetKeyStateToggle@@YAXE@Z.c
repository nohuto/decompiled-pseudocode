/*
 * XREFs of ?NlsSetKeyStateToggle@@YAXE@Z @ 0x14014F214
 * Callers:
 *     NlsKbdInitializePerSystem @ 0x14014EEC0 (NlsKbdInitializePerSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall NlsSetKeyStateToggle(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  __int64 UserSessionState; // rax

  v2 = a1;
  v5 = (unsigned __int64)(unsigned __int8)a1 >> 2;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18888) )
  {
    v3 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 18888);
    v4 = *(unsigned __int8 *)(v3 + v5 + 256);
    LODWORD(v4) = v4 | (1 << (2 * (v2 & 3) + 1));
    *(_BYTE *)(v3 + v5 + 256) = v4;
  }
  UserSessionState = W32GetUserSessionState(v4, v3);
  *(_BYTE *)(UserSessionState + v5 + 14336) |= 1 << (2 * (v2 & 3) + 1);
}
