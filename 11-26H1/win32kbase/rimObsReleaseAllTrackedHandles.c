/*
 * XREFs of rimObsReleaseAllTrackedHandles @ 0x140210210
 * Callers:
 *     RawInputManagerObjectDelete @ 0x140130BFC (RawInputManagerObjectDelete.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall rimObsReleaseAllTrackedHandles(__int64 a1)
{
  char *v1; // rsi
  char *v3; // rdi
  char *v4; // rbp
  char *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  char **v10; // rax

  v1 = (char *)(a1 + 128);
  v3 = *(char **)(a1 + 128);
  while ( v3 != v1 )
  {
    v4 = v3;
    v5 = v3;
    v3 = *(char **)v3;
    ObCloseHandle(*((HANDLE *)v4 + 2), *(_BYTE *)(a1 + 72));
    v9 = *(_QWORD *)v5;
    if ( *(char **)(*(_QWORD *)v5 + 8LL) != v4 || (v10 = (char **)*((_QWORD *)v4 + 1), *v10 != v4) )
      __fastfail(3u);
    *v10 = (char *)v9;
    *(_QWORD *)(v9 + 8) = v10;
    GreDeleteFastMutex(v4, v6, v7, v8);
  }
}
