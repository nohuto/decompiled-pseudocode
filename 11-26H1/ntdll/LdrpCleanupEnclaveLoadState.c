/*
 * XREFs of LdrpCleanupEnclaveLoadState @ 0x1800C4AE4
 * Callers:
 *     LdrLoadEnclaveModule @ 0x180139250 (LdrLoadEnclaveModule.c)
 *     LdrpDeleteEnclave @ 0x180139424 (LdrpDeleteEnclave.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     LdrpFreeLoadContext @ 0x1800C4C20 (LdrpFreeLoadContext.c)
 *     LdrpEnclaveFreeModule @ 0x1801394AC (LdrpEnclaveFreeModule.c)
 */

_UNKNOWN **__fastcall LdrpCleanupEnclaveLoadState(__int64 a1, int a2)
{
  _UNKNOWN **result; // rax
  _QWORD *v3; // rsi
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // rbp
  void *v8; // r8
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = (_QWORD *)(a1 + 96);
  v5 = *(_QWORD **)(a1 + 96);
  while ( v5 != v3 )
  {
    v6 = (_QWORD *)v5[22];
    v7 = v5;
    v5 = (_QWORD *)*v5;
    if ( v6 )
    {
      v8 = (void *)v6[11];
      if ( v8 )
      {
        RtlFreeHeap_0(LdrpHeap, 0, v8);
        v6[11] = 0LL;
      }
      result = (_UNKNOWN **)LdrpFreeLoadContext(v6);
    }
    if ( a2 < 0 )
      result = (_UNKNOWN **)LdrpEnclaveFreeModule(v7);
  }
  return result;
}
