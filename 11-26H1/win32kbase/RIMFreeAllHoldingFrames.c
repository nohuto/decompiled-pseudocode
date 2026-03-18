/*
 * XREFs of RIMFreeAllHoldingFrames @ 0x140131DB0
 * Callers:
 *     RawInputManagerObjectDelete @ 0x140130BFC (RawInputManagerObjectDelete.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     rimFreePointerRawDataListWorker @ 0x14007621C (rimFreePointerRawDataListWorker.c)
 */

void __fastcall RIMFreeAllHoldingFrames(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rsi
  char *v5; // rbx
  char *v6; // rdi
  char *v7; // r14
  char *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  char **v13; // rax

  v4 = (char *)(a1 + 728);
  v5 = *(char **)(a1 + 728);
  while ( v5 != v4 )
  {
    v6 = v5;
    v7 = v5;
    v5 = *(char **)v5;
    v8 = (char *)*((_QWORD *)v6 + 9);
    if ( v8 )
      GreDeleteFastMutex(v8, a2, a3, a4);
    rimFreePointerRawDataListWorker(*((_QWORD **)v6 + 7), a2, a3, a4);
    v12 = *(_QWORD *)v7;
    if ( *(char **)(*(_QWORD *)v7 + 8LL) != v6 || (v13 = (char **)*((_QWORD *)v6 + 1), *v13 != v6) )
      __fastfail(3u);
    *v13 = (char *)v12;
    *(_QWORD *)(v12 + 8) = v13;
    GreDeleteFastMutex(v6, v9, v10, v11);
  }
}
