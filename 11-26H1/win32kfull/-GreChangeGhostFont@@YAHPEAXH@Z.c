/*
 * XREFs of ?GreChangeGhostFont@@YAHPEAXH@Z @ 0x1403106A8
 * Callers:
 *     NtGdiChangeGhostFont @ 0x14032A2A0 (NtGdiChangeGhostFont.c)
 * Callees:
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x140326AC4 (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 */

int __fastcall GreChangeGhostFont(void *a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  v4 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96) + 20384LL);
  v6[0] = v4;
  if ( v4 && *(_DWORD *)(v4 + 28) )
    return PUBLIC_PFTOBJ::ChangeGhostFont((PUBLIC_PFTOBJ *)v6, a1, v2);
  else
    return 0;
}
