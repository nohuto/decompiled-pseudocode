/*
 * XREFs of RIMFreeAllHoldingFrames @ 0x14015161C
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1401E6DF8 (RawInputManagerObjectDelete.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     rimFreePointerRawDataListWorker @ 0x14002EFB4 (rimFreePointerRawDataListWorker.c)
 */

void __fastcall RIMFreeAllHoldingFrames(__int64 a1)
{
  char *v1; // rsi
  char *v2; // rdi
  char *v3; // rbx
  char *v4; // rcx
  __int64 v5; // rcx
  char **v6; // rax

  v1 = (char *)(a1 + 728);
  v2 = *(char **)(a1 + 728);
  while ( v2 != v1 )
  {
    v3 = v2;
    v2 = *(char **)v2;
    v4 = (char *)*((_QWORD *)v3 + 9);
    if ( v4 )
      GreDeleteFastMutex(v4);
    rimFreePointerRawDataListWorker(*((_QWORD **)v3 + 7));
    v5 = *(_QWORD *)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v6 = (char **)*((_QWORD *)v3 + 1), *v6 != v3) )
      __fastfail(3u);
    *v6 = (char *)v5;
    *(_QWORD *)(v5 + 8) = v6;
    GreDeleteFastMutex(v3);
  }
}
