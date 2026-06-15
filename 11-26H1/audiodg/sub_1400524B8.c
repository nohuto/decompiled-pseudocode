/*
 * XREFs of sub_1400524B8 @ 0x1400524B8
 * Callers:
 *     sub_140021024 @ 0x140021024 (sub_140021024.c)
 * Callees:
 *     sub_14003F504 @ 0x14003F504 (sub_14003F504.c)
 *     sub_140044584 @ 0x140044584 (sub_140044584.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1400524B8(_QWORD *a1, __int64 *a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  _QWORD *v7; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v8; // [rsp+28h] [rbp-10h]

  v7 = a1;
  v4 = (_QWORD *)sub_140044584(0x10uLL);
  v8 = v4;
  v5 = *a2;
  v4[1] = *a2;
  if ( v5 )
    sub_1400B6010(v5);
  *v4 = *a1;
  v8 = 0LL;
  *a1 = v4;
  sub_14003F504((__int64)&v7);
  return *a1 + 8LL;
}
