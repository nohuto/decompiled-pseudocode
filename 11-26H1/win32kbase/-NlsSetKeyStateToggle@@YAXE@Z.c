/*
 * XREFs of ?NlsSetKeyStateToggle@@YAXE@Z @ 0x14018D690
 * Callers:
 *     NlsKbdInitializePerSystem @ 0x14018D320 (NlsKbdInitializePerSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall NlsSetKeyStateToggle(int a1, int a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d
  char v7; // di
  __int64 UserSessionState; // rax

  v3 = (unsigned __int64)(unsigned __int8)a1 >> 2;
  v7 = 2 * (a1 & 3);
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 18928) )
  {
    v4 = *(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 18928);
    v5 = *(unsigned __int8 *)(v4 + v3 + 280) | (1 << (v7 + 1));
    *(_BYTE *)(v4 + v3 + 280) = v5;
  }
  UserSessionState = W32GetUserSessionState(v5, v4, v6);
  *(_BYTE *)(UserSessionState + v3 + 14328) |= 1 << (v7 + 1);
}
