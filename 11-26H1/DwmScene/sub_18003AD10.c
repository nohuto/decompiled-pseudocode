/*
 * XREFs of sub_18003AD10 @ 0x18003AD10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 */

__int64 __fastcall sub_18003AD10(__int64 a1, __int64 a2)
{
  sub_18003D718(a1);
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 208LL))(a2, a1);
}
