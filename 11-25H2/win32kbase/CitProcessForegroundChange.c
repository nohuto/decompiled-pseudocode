/*
 * XREFs of CitProcessForegroundChange @ 0x14012F0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0@Z @ 0x14012F12C (-CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0@Z.c)
 */

void __fastcall CitProcessForegroundChange(__int64 a1, struct tagWND *a2, __int64 a3)
{
  struct tagPROCESSINFO *v5; // r8
  struct tagPROCESSINFO *v6; // rcx
  struct tagPROCESSINFO *v7; // rax

  v5 = 0LL;
  v6 = 0LL;
  if ( a1 )
  {
    v7 = *(struct tagPROCESSINFO **)(a1 + 464);
    if ( v7 )
      v6 = v7;
  }
  if ( a3 && *(_QWORD *)(a3 + 464) )
    v5 = *(struct tagPROCESSINFO **)(a3 + 464);
  CitpProcessForegroundChange(v6, a2, v5);
}
