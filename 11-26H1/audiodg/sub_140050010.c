/*
 * XREFs of sub_140050010 @ 0x140050010
 * Callers:
 *     sub_14005005C @ 0x14005005C (sub_14005005C.c)
 *     sub_1400510F4 @ 0x1400510F4 (sub_1400510F4.c)
 *     sub_140052B80 @ 0x140052B80 (sub_140052B80.c)
 *     sub_140052D4C @ 0x140052D4C (sub_140052D4C.c)
 *     sub_140052F70 @ 0x140052F70 (sub_140052F70.c)
 *     sub_14005F388 @ 0x14005F388 (sub_14005F388.c)
 *     sub_140077F04 @ 0x140077F04 (sub_140077F04.c)
 *     sub_1400873E0 @ 0x1400873E0 (sub_1400873E0.c)
 *     sub_1400874F8 @ 0x1400874F8 (sub_1400874F8.c)
 * Callees:
 *     sub_14001DBF0 @ 0x14001DBF0 (sub_14001DBF0.c)
 */

__int64 __fastcall sub_140050010(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 < 0 )
    return sub_14001DBF0(2 * v1);
  return result;
}
