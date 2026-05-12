/*
 * XREFs of sub_140135C8C @ 0x140135C8C
 * Callers:
 *     sub_14008EAAC @ 0x14008EAAC (sub_14008EAAC.c)
 * Callees:
 *     sub_140085F28 @ 0x140085F28 (sub_140085F28.c)
 *     sub_140136180 @ 0x140136180 (sub_140136180.c)
 *     sub_1401361CC @ 0x1401361CC (sub_1401361CC.c)
 *     sub_140138200 @ 0x140138200 (sub_140138200.c)
 *     sub_14013981C @ 0x14013981C (sub_14013981C.c)
 *     sub_14013A37C @ 0x14013A37C (sub_14013A37C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140135C8C(int **a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // ebx
  __int64 v8; // rdx
  _OWORD *v9; // r10
  int v10; // eax
  _OWORD v12[2]; // [rsp+40h] [rbp-58h] BYREF
  int v13; // [rsp+60h] [rbp-38h]

  v13 = 0;
  memset(v12, 0, sizeof(v12));
  if ( a4 )
  {
    v7 = sub_140136180(a1, a2);
    if ( !v7 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 28), 1, 0) == 1 )
      {
        return (unsigned int)-2147483631;
      }
      else
      {
        if ( (v9
           || (v10 = sub_140138200((_DWORD)a1, v8, 33794, 3, (__int64)v12 + 4, 32, (__int64)v12),
               v9 = v12,
               v7 = v10,
               v10 >= 0))
          && (v7 = sub_14013A37C(a1, a2, 0x900000006LL, v9), v7 >= 0)
          && (v7 = sub_14013981C(a1, a2, 0xB00000001LL, a4), v7 >= 0) )
        {
          sub_140085F28(*a1, "TcglibSetSidPin success", 0, 0, 0LL);
        }
        else
        {
          v7 = sub_1401361CC(a1, a2, (unsigned int)v7);
        }
        _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
