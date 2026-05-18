/*
 * XREFs of sub_180012A50 @ 0x180012A50
 * Callers:
 *     sub_1800115D8 @ 0x1800115D8 (sub_1800115D8.c)
 *     sub_180016C54 @ 0x180016C54 (sub_180016C54.c)
 *     sub_1800247DC @ 0x1800247DC (sub_1800247DC.c)
 *     sub_180024A34 @ 0x180024A34 (sub_180024A34.c)
 *     sub_18004E514 @ 0x18004E514 (sub_18004E514.c)
 *     sub_180051CEC @ 0x180051CEC (sub_180051CEC.c)
 *     sub_18006A9A8 @ 0x18006A9A8 (sub_18006A9A8.c)
 *     sub_18006BD44 @ 0x18006BD44 (sub_18006BD44.c)
 *     sub_18006BDBC @ 0x18006BDBC (sub_18006BDBC.c)
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
 * Callees:
 *     sub_180011AF4 @ 0x180011AF4 (sub_180011AF4.c)
 */

__int64 *__fastcall sub_180012A50(__int64 *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v4; // r8
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  sub_180011AF4(a1, &v8, a3);
  v6 = v9;
  if ( *(_BYTE *)(v9 + 25) || *v4 < *(_QWORD *)(v9 + 32) )
    v6 = *a1;
  *v5 = v6;
  return v5;
}
