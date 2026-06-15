/*
 * XREFs of sub_1400A68A0 @ 0x1400A68A0
 * Callers:
 *     sub_1400A8C00 @ 0x1400A8C00 (sub_1400A8C00.c)
 *     sub_1400A8D50 @ 0x1400A8D50 (sub_1400A8D50.c)
 *     sub_1400A8DE0 @ 0x1400A8DE0 (sub_1400A8DE0.c)
 *     sub_1400A8F30 @ 0x1400A8F30 (sub_1400A8F30.c)
 * Callees:
 *     sub_1400A4ED4 @ 0x1400A4ED4 (sub_1400A4ED4.c)
 *     sub_1400A5CC0 @ 0x1400A5CC0 (sub_1400A5CC0.c)
 */

__int64 __fastcall sub_1400A68A0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 result; // rax
  _BYTE v5[32]; // [rsp+28h] [rbp-20h] BYREF

  try
  {
    v3 = sub_1400A4ED4((unsigned __int64)v5, (_QWORD *)(a1 + 32));
    sub_1400A5CC0(a2, v3);
    result = a2;
  }
  catch ( std::bad_weak_ptr )
  {
    result = a2;
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_DWORD *)(a2 + 24) = -2147467259;
  }
  return result;
}
