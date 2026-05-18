/*
 * XREFs of sub_18003E470 @ 0x18003E470
 * Callers:
 *     sub_18003E470 @ 0x18003E470 (sub_18003E470.c)
 *     sub_18004025C @ 0x18004025C (sub_18004025C.c)
 * Callees:
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 *     sub_18003E470 @ 0x18003E470 (sub_18003E470.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

char __fastcall sub_18003E470(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 v5; // rcx
  char v6; // di
  __int64 v7; // rbx
  __int64 v8; // rsi

  v2 = *a2;
  sub_18003D718(*a2);
  v5 = *(_QWORD *)(a1 + 56);
  v6 = 0;
  if ( !v5 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 16LL))(v5, a2) )
  {
    v7 = *(_QWORD *)(v2 + 32);
    v8 = *(_QWORD *)(v2 + 40);
    while ( v7 != v8 )
    {
      if ( !(unsigned __int8)sub_18003E470(a1, v7) )
        return v6;
      v7 += 16LL;
    }
    return 1;
  }
  return v6;
}
