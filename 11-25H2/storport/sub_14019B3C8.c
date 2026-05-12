/*
 * XREFs of sub_14019B3C8 @ 0x14019B3C8
 * Callers:
 *     sub_1401A1E58 @ 0x1401A1E58 (sub_1401A1E58.c)
 * Callees:
 *     sub_14008ED30 @ 0x14008ED30 (sub_14008ED30.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14019B3C8(__int64 a1, _DWORD *a2, unsigned int *a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // esi
  unsigned int v11; // eax
  _BYTE Dst[128]; // [rsp+20h] [rbp-A8h] BYREF

  memset_0(Dst, 0, sizeof(Dst));
  if ( *a3 < 8 )
    return 3221225485LL;
  memset_0(a2, 0, *a3);
  *a2 = 16;
  a2[1] = 12;
  v8 = sub_14008ED30(a1, v7, (__int64)Dst);
  v9 = (v8 + 20) & 0xFFFFFFFC;
  v10 = v9 + 12;
  if ( *a3 < v9 + 12 )
  {
    v11 = a2[1];
    if ( v11 >= *a3 )
      v11 = *a3;
  }
  else
  {
    a2[6] = 0;
    *((_WORD *)a2 + 11) = v9;
    a2[2] = 1;
    a2[3] = 3;
    a2[4] = 8;
    *((_WORD *)a2 + 10) = v8;
    memmove(a2 + 7, Dst, v8);
    v11 = v10;
  }
  *a3 = v11;
  result = 0LL;
  a2[1] = v10;
  return result;
}
