/*
 * XREFs of sub_140075568 @ 0x140075568
 * Callers:
 *     sub_14006ED80 @ 0x14006ED80 (sub_14006ED80.c)
 * Callees:
 *     sub_140030124 @ 0x140030124 (sub_140030124.c)
 *     sub_140075538 @ 0x140075538 (sub_140075538.c)
 *     sub_1400755E4 @ 0x1400755E4 (sub_1400755E4.c)
 */

__int64 __fastcall sub_140075568(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int128 *v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  v6 = 0;
  v5 = &xmmword_1400E8838;
  if ( (int)sub_1400755E4(&v5) < 0 || a2 > (int)qword_1400E8868 || a2 < 0 )
  {
    sub_140030124((__int64)&v5);
    return 0LL;
  }
  else
  {
    if ( a2 == (_DWORD)qword_1400E8868 )
      v3 = qword_1400E8820;
    else
      v3 = *(_QWORD *)sub_140075538((__int64)&qword_1400E8860, a2);
    sub_140030124((__int64)&v5);
    return v3;
  }
}
