/*
 * XREFs of rimObsReleaseAllTrackedHandles @ 0x1401F47A0
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1401E6DF8 (RawInputManagerObjectDelete.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

void __fastcall rimObsReleaseAllTrackedHandles(__int64 a1)
{
  char *v1; // rsi
  char *v3; // rdi
  char *v4; // rbx
  __int64 v5; // rcx
  char **v6; // rax

  v1 = (char *)(a1 + 128);
  v3 = *(char **)(a1 + 128);
  while ( v3 != v1 )
  {
    v4 = v3;
    v3 = *(char **)v3;
    ObCloseHandle(*((HANDLE *)v4 + 2), *(_BYTE *)(a1 + 72));
    v5 = *(_QWORD *)v4;
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || (v6 = (char **)*((_QWORD *)v4 + 1), *v6 != v4) )
      __fastfail(3u);
    *v6 = (char *)v5;
    *(_QWORD *)(v5 + 8) = v6;
    GreDeleteFastMutex(v4);
  }
}
