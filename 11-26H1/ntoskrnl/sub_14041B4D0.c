/*
 * XREFs of sub_14041B4D0 @ 0x14041B4D0
 * Callers:
 *     sub_14041B140 @ 0x14041B140 (sub_14041B140.c)
 *     sub_14052C5D0 @ 0x14052C5D0 (sub_14052C5D0.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14041B4D0(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  char v4; // bl
  char v6; // r10
  _DWORD *v7; // rdx
  __int64 result; // rax
  unsigned int v9; // ecx
  unsigned int v10; // r11d
  unsigned int v11; // ecx
  unsigned int v12; // r9d
  __int64 v13; // [rsp+0h] [rbp-20h]
  __int64 v14; // [rsp+8h] [rbp-18h]

  v4 = a2;
  v6 = a2;
  v7 = (_DWORD *)(a1 + 16LL * a2);
  switch ( v7[2] )
  {
    case 0:
      v11 = v7[4];
      v12 = v7[3];
      v13 = a3;
      v14 = a3;
      result = (a4 >> (v11 % 0xF + 1))
             + *((unsigned __int16 *)&v14 + (v6 & 3)) * (a4 ^ *((unsigned __int16 *)&v13 + ((v12 % 3 + v4 + 1) & 3)));
      break;
    case 1:
      v9 = v7[3];
      v10 = v7[4];
      v14 = a3;
      v13 = a3;
      result = *((unsigned __int16 *)&v13 + (v6 & 3)) * (a4 - *((unsigned __int16 *)&v14 + ((v9 % 3 + v4 + 1) & 3)))
             - (a4 >> (v10 % 0xF + 1));
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}
