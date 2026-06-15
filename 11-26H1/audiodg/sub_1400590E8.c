/*
 * XREFs of sub_1400590E8 @ 0x1400590E8
 * Callers:
 *     sub_1400583C0 @ 0x1400583C0 (sub_1400583C0.c)
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_140058A40 @ 0x140058A40 (sub_140058A40.c)
 */

_DWORD *__fastcall sub_1400590E8(int a1, __int64 a2)
{
  unsigned __int32 v4; // edx
  unsigned int v5; // ecx
  char *v6; // r8
  _DWORD *result; // rax
  __int64 v8; // r8
  _DWORD v9[2]; // [rsp+20h] [rbp-48h] BYREF
  char v10; // [rsp+28h] [rbp-40h] BYREF

  _m_prefetchw((const void *)a2);
  v4 = _InterlockedAnd((volatile signed __int32 *)a2, 0xFFC0401E);
  v5 = (v4 >> 1) & 0xF;
  if ( v5 )
  {
    _m_prefetchw((const void *)(a2 + 4));
    v5 &= ~_InterlockedOr((volatile signed __int32 *)(a2 + 4), v5);
  }
  v6 = (char *)v9;
  if ( (v5 & 1) != 0 )
  {
    v9[0] = a1;
    v9[1] = 65538;
    v6 = &v10;
  }
  if ( (v5 & 2) != 0 )
  {
    *(_DWORD *)v6 = a1;
    *((_DWORD *)v6 + 1) = 65542;
    v6 += 8;
  }
  if ( (v5 & 4) != 0 )
  {
    *(_DWORD *)v6 = a1;
    *((_DWORD *)v6 + 1) = 65539;
    v6 += 8;
  }
  if ( v5 >= 8 )
  {
    *(_DWORD *)v6 = a1;
    *((_DWORD *)v6 + 1) = 65543;
    v6 += 8;
  }
  if ( ((v4 >> 5) & 0x1FF) != 0 )
  {
    *(_DWORD *)v6 = a1;
    *((_WORD *)v6 + 2) = 4 * ((v4 >> 14) & 1);
    *((_WORD *)v6 + 3) = (v4 >> 5) & 0x1FF;
    v6 += 8;
  }
  if ( ((v4 >> 15) & 0x7F) != 0 )
  {
    *(_DWORD *)v6 = a1;
    *((_WORD *)v6 + 2) = 4 * ((v4 >> 22) & 1) + 1;
    *((_WORD *)v6 + 3) = (v4 >> 15) & 0x7F;
    v6 += 8;
  }
  result = v9;
  v8 = (v6 - (char *)v9) >> 3;
  if ( v8 > 0 )
    return (_DWORD *)sub_140058A40((__int64)v9, v8);
  return result;
}
