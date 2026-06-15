/*
 * XREFs of sub_1400605D0 @ 0x1400605D0
 * Callers:
 *     sub_14005FA28 @ 0x14005FA28 (sub_14005FA28.c)
 *     sub_140086F60 @ 0x140086F60 (sub_140086F60.c)
 * Callees:
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_14005F890 @ 0x14005F890 (sub_14005F890.c)
 */

__int64 __fastcall sub_1400605D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rcx
  __int64 result; // rax

  v6 = *(__int64 **)a1;
  if ( v6 )
  {
    sub_14005F890(v6, *(__int64 **)(a1 + 8));
    sub_1400453E4(*(_QWORD *)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
