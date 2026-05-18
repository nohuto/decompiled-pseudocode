/*
 * XREFs of sub_180034DD0 @ 0x180034DD0
 * Callers:
 *     sub_180063B80 @ 0x180063B80 (sub_180063B80.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800330EC @ 0x1800330EC (sub_1800330EC.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_1800345EC @ 0x1800345EC (sub_1800345EC.c)
 *     sub_18006FCC0 @ 0x18006FCC0 (sub_18006FCC0.c)
 */

__int64 *__fastcall sub_180034DD0(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v5; // rax
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 *result; // rax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  v3 = 1;
  v5 = sub_180033D14(a1, 1);
  sub_18006FCC0(v5, 1LL);
  v6 = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a1 + 696) = v6;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
            v3 = 3;
          else
            v3 = 0;
        }
      }
      else
      {
        v3 = 2;
      }
    }
  }
  sub_1800345EC((_QWORD *)a1, v3);
  result = sub_1800330EC((_QWORD *)a1, &v11);
  if ( v12 )
    return (__int64 *)sub_180010EC8(v12);
  return result;
}
