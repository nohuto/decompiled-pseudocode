/*
 * XREFs of sub_14005FE78 @ 0x14005FE78
 * Callers:
 *     sub_14005FA28 @ 0x14005FA28 (sub_14005FA28.c)
 *     sub_140086F60 @ 0x140086F60 (sub_140086F60.c)
 * Callees:
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_14005F890 @ 0x14005F890 (sub_14005F890.c)
 */

__int64 __fastcall sub_14005FE78(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
  {
    sub_14005F890(*(__int64 **)(a1 + 24), *(__int64 **)(a1 + 32));
    return sub_1400453E4(*(_QWORD *)(a1 + 8), 8LL * *(_QWORD *)(a1 + 16));
  }
  return result;
}
