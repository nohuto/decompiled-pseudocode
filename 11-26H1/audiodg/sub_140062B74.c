/*
 * XREFs of sub_140062B74 @ 0x140062B74
 * Callers:
 *     sub_140062DC0 @ 0x140062DC0 (sub_140062DC0.c)
 * Callees:
 *     sub_1400392FC @ 0x1400392FC (sub_1400392FC.c)
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_140062C88 @ 0x140062C88 (sub_140062C88.c)
 */

__int64 *__fastcall sub_140062B74(__int64 *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _DWORD *a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = sub_140049338(48LL, (__int64)&unk_1400C75FC);
  v12 = v9;
  if ( v9 )
  {
    v10 = sub_140062C88(v9, *a2, *a3, *a4, *a5);
    sub_1400392FC(a1, v10);
    v12 = 0LL;
  }
  sub_1400454AC(&v12);
  return a1;
}
