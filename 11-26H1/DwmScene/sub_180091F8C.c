/*
 * XREFs of sub_180091F8C @ 0x180091F8C
 * Callers:
 *     sub_180090840 @ 0x180090840 (sub_180090840.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180016EFC @ 0x180016EFC (sub_180016EFC.c)
 *     sub_18001C928 @ 0x18001C928 (sub_18001C928.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_180052460 @ 0x180052460 (sub_180052460.c)
 *     sub_18006F374 @ 0x18006F374 (sub_18006F374.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_180091F8C(__int64 *a1, __int64 a2, _BYTE *a3)
{
  int v4; // edi
  int v5; // r15d
  int v6; // r14d
  __int64 v7; // rbx
  __int64 v8; // rax
  _DWORD v10[3]; // [rsp+28h] [rbp-41h] BYREF
  __int64 v11; // [rsp+34h] [rbp-35h]
  int v12; // [rsp+3Ch] [rbp-2Dh]
  int v13; // [rsp+40h] [rbp-29h]
  __int128 v14; // [rsp+44h] [rbp-25h]
  int v15; // [rsp+54h] [rbp-15h]
  int v16; // [rsp+58h] [rbp-11h]
  __int64 *v17; // [rsp+60h] [rbp-9h]
  _QWORD v18[4]; // [rsp+70h] [rbp+7h] BYREF

  v17 = a1;
  v4 = 1;
  if ( a3 )
  {
    if ( *a3 == 1 )
    {
      v4 = 0;
    }
    else if ( *a3 != 2 )
    {
      switch ( *a3 )
      {
        case 3:
          v4 = 2;
          break;
        case 4:
          v4 = 7;
          break;
        case 5:
          v4 = 8;
          break;
        case 6:
          v4 = 9;
          break;
        case 7:
          v4 = 10;
          break;
        case 8:
          v4 = 6;
          break;
      }
    }
    if ( a3[1] == 1 )
      v5 = 2;
    else
      v5 = a3[1] == 3;
    if ( a3[2] == 1 )
      v6 = 2;
    else
      v6 = a3[2] == 3;
    sub_180016EFC(*(_QWORD **)(a2 + 3984), a1);
    v7 = *a1;
    sub_18006F374(v18, _InterlockedExchangeAdd(&dword_1801C8F18, 1u));
    v8 = sub_18001C928((__int64)v10, (__int64)"Deserialized sampler ", v18);
    sub_1800292C4(v7, v8);
    sub_1800129D0((__int64)v18);
    v11 = 0LL;
    v12 = 1;
    v13 = 7;
    v14 = xmmword_1800FA848;
    v15 = 0;
    v16 = 2139095039;
    v10[0] = v4;
    v10[1] = v5;
    v10[2] = v6;
    sub_180052460(*a1, v10, 0LL);
  }
  else
  {
    sub_180016EFC(*(_QWORD **)(a2 + 3984), a1);
  }
  return a1;
}
