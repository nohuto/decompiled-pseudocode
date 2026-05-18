/*
 * XREFs of sub_180011FA0 @ 0x180011FA0
 * Callers:
 *     sub_1800115D8 @ 0x1800115D8 (sub_1800115D8.c)
 *     sub_180016C54 @ 0x180016C54 (sub_180016C54.c)
 *     sub_1800247DC @ 0x1800247DC (sub_1800247DC.c)
 *     sub_180024A34 @ 0x180024A34 (sub_180024A34.c)
 *     sub_180051CEC @ 0x180051CEC (sub_180051CEC.c)
 *     sub_18006A9A8 @ 0x18006A9A8 (sub_18006A9A8.c)
 *     sub_18007D35C @ 0x18007D35C (sub_18007D35C.c)
 *     sub_18007F764 @ 0x18007F764 (sub_18007F764.c)
 *     sub_1800815C4 @ 0x1800815C4 (sub_1800815C4.c)
 *     sub_1800825A0 @ 0x1800825A0 (sub_1800825A0.c)
 *     sub_180082B30 @ 0x180082B30 (sub_180082B30.c)
 *     sub_180082D8C @ 0x180082D8C (sub_180082D8C.c)
 *     sub_180082EF8 @ 0x180082EF8 (sub_180082EF8.c)
 *     sub_180083064 @ 0x180083064 (sub_180083064.c)
 *     sub_1800831D0 @ 0x1800831D0 (sub_1800831D0.c)
 *     sub_18008333C @ 0x18008333C (sub_18008333C.c)
 *     sub_18008456C @ 0x18008456C (sub_18008456C.c)
 *     sub_18008FD60 @ 0x18008FD60 (sub_18008FD60.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180011FA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return a2;
}
