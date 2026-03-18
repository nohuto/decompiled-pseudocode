/*
 * XREFs of sub_14001AF1C @ 0x14001AF1C
 * Callers:
 *     sub_14001B378 @ 0x14001B378 (sub_14001B378.c)
 * Callees:
 *     sub_14001AFAC @ 0x14001AFAC (sub_14001AFAC.c)
 *     sub_14001B414 @ 0x14001B414 (sub_14001B414.c)
 *     _guard_dispatch_icall @ 0x1400327C0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall sub_14001AF1C(
        __int64 a1,
        char a2,
        unsigned int a3,
        __int64 a4))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  unsigned int v5; // edi
  unsigned int v7; // eax
  __int64 v8; // r10
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  char v10; // [rsp+30h] [rbp-28h]
  unsigned int v11; // [rsp+70h] [rbp+18h] BYREF

  v11 = a3;
  v5 = a2 & 1;
  v7 = sub_14001B414(a3, a2 & 1);
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))sub_14001AFAC(
                                                                                                     a1,
                                                                                                     v8,
                                                                                                     v7);
  if ( (_DWORD)result )
  {
    result = qword_140042240;
    if ( qword_140042240 )
    {
      v10 = 0;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))qword_140042240(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16), 0LL, v5, &v11, 0LL, v10, a4);
    }
  }
  return result;
}
