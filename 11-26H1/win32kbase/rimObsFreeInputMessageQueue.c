/*
 * XREFs of rimObsFreeInputMessageQueue @ 0x14020FD54
 * Callers:
 *     RawInputManagerObjectDelete @ 0x140130BFC (RawInputManagerObjectDelete.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall rimObsFreeInputMessageQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rdi
  char *v6; // rbx
  char *v7; // rcx
  char **v8; // rax

  v4 = (char *)(a1 + 144);
  v6 = *(char **)(a1 + 144);
  while ( v6 != v4 )
  {
    v7 = v6;
    v6 = *(char **)v6;
    if ( *((char **)v6 + 1) != v7 || (v8 = (char **)*((_QWORD *)v7 + 1), *v8 != v7) )
      __fastfail(3u);
    *v8 = v6;
    *((_QWORD *)v6 + 1) = v8;
    GreDeleteFastMutex(v7, a2, a3, a4);
  }
  *(_DWORD *)(a1 + 160) = -1;
}
