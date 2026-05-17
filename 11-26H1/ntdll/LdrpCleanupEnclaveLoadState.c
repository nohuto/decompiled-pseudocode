/*
 * XREFs of LdrpCleanupEnclaveLoadState @ 0x1800C7324
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1801394E0 (LdrLoadEnclaveModule.c)
 *     LdrpDeleteEnclave @ 0x1801396B4 (LdrpDeleteEnclave.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     LdrpFreeLoadContext @ 0x1800C7460 (LdrpFreeLoadContext.c)
 *     LdrpEnclaveFreeModule @ 0x18013973C (LdrpEnclaveFreeModule.c)
 */

_UNKNOWN **__fastcall LdrpCleanupEnclaveLoadState(__int64 a1, int a2)
{
  _UNKNOWN **result; // rax
  _QWORD *v3; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  _QWORD *v7; // rbp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = (_QWORD *)(a1 + 96);
  v5 = *(_QWORD **)(a1 + 96);
  while ( v5 != v3 )
  {
    v6 = v5[22];
    v7 = v5;
    v5 = (_QWORD *)*v5;
    if ( v6 )
    {
      if ( *(_QWORD *)(v6 + 88) )
      {
        RtlFreeHeap_0();
        *(_QWORD *)(v6 + 88) = 0LL;
      }
      result = (_UNKNOWN **)LdrpFreeLoadContext(v6);
    }
    if ( a2 < 0 )
      result = (_UNKNOWN **)LdrpEnclaveFreeModule(v7);
  }
  return result;
}
