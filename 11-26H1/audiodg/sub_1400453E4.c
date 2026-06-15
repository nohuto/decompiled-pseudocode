/*
 * XREFs of sub_1400453E4 @ 0x1400453E4
 * Callers:
 *     sub_140020D64 @ 0x140020D64 (sub_140020D64.c)
 *     sub_140021A88 @ 0x140021A88 (sub_140021A88.c)
 *     sub_14002A54C @ 0x14002A54C (sub_14002A54C.c)
 *     sub_14002A6F8 @ 0x14002A6F8 (sub_14002A6F8.c)
 *     sub_14002A84C @ 0x14002A84C (sub_14002A84C.c)
 *     sub_14002F0F4 @ 0x14002F0F4 (sub_14002F0F4.c)
 *     sub_14002F254 @ 0x14002F254 (sub_14002F254.c)
 *     sub_14003A568 @ 0x14003A568 (sub_14003A568.c)
 *     sub_14003B610 @ 0x14003B610 (sub_14003B610.c)
 *     sub_14003F504 @ 0x14003F504 (sub_14003F504.c)
 *     sub_14003FC40 @ 0x14003FC40 (sub_14003FC40.c)
 *     sub_140045378 @ 0x140045378 (sub_140045378.c)
 *     sub_14004539C @ 0x14004539C (sub_14004539C.c)
 *     sub_1400478F8 @ 0x1400478F8 (sub_1400478F8.c)
 *     sub_1400482B0 @ 0x1400482B0 (sub_1400482B0.c)
 *     sub_14005005C @ 0x14005005C (sub_14005005C.c)
 *     sub_1400510F4 @ 0x1400510F4 (sub_1400510F4.c)
 *     sub_14005214C @ 0x14005214C (sub_14005214C.c)
 *     sub_1400529A4 @ 0x1400529A4 (sub_1400529A4.c)
 *     sub_140052A00 @ 0x140052A00 (sub_140052A00.c)
 *     sub_140052A5C @ 0x140052A5C (sub_140052A5C.c)
 *     sub_140052AA4 @ 0x140052AA4 (sub_140052AA4.c)
 *     sub_140052B10 @ 0x140052B10 (sub_140052B10.c)
 *     sub_140052B3C @ 0x140052B3C (sub_140052B3C.c)
 *     sub_140052B80 @ 0x140052B80 (sub_140052B80.c)
 *     sub_140052C18 @ 0x140052C18 (sub_140052C18.c)
 *     sub_140052D4C @ 0x140052D4C (sub_140052D4C.c)
 *     sub_14005A40C @ 0x14005A40C (sub_14005A40C.c)
 *     sub_14005A430 @ 0x14005A430 (sub_14005A430.c)
 *     sub_14005AC94 @ 0x14005AC94 (sub_14005AC94.c)
 *     sub_14005B250 @ 0x14005B250 (sub_14005B250.c)
 *     sub_14005DB08 @ 0x14005DB08 (sub_14005DB08.c)
 *     sub_14005DE98 @ 0x14005DE98 (sub_14005DE98.c)
 *     sub_14005DF24 @ 0x14005DF24 (sub_14005DF24.c)
 *     sub_14005DF50 @ 0x14005DF50 (sub_14005DF50.c)
 *     sub_14005E820 @ 0x14005E820 (sub_14005E820.c)
 *     sub_14005F2B0 @ 0x14005F2B0 (sub_14005F2B0.c)
 *     sub_14005F388 @ 0x14005F388 (sub_14005F388.c)
 *     sub_14005FDB0 @ 0x14005FDB0 (sub_14005FDB0.c)
 *     sub_14005FE3C @ 0x14005FE3C (sub_14005FE3C.c)
 *     sub_14005FE78 @ 0x14005FE78 (sub_14005FE78.c)
 *     sub_14006054C @ 0x14006054C (sub_14006054C.c)
 *     sub_1400605D0 @ 0x1400605D0 (sub_1400605D0.c)
 *     sub_140065A28 @ 0x140065A28 (sub_140065A28.c)
 *     sub_140065FB4 @ 0x140065FB4 (sub_140065FB4.c)
 *     sub_14006CAB4 @ 0x14006CAB4 (sub_14006CAB4.c)
 *     sub_14006CB4C @ 0x14006CB4C (sub_14006CB4C.c)
 *     sub_14006CC44 @ 0x14006CC44 (sub_14006CC44.c)
 *     sub_1400873E0 @ 0x1400873E0 (sub_1400873E0.c)
 *     sub_140088288 @ 0x140088288 (sub_140088288.c)
 *     sub_14008B894 @ 0x14008B894 (sub_14008B894.c)
 *     sub_14008B9B8 @ 0x14008B9B8 (sub_14008B9B8.c)
 *     sub_14008CB44 @ 0x14008CB44 (sub_14008CB44.c)
 *     sub_140093134 @ 0x140093134 (sub_140093134.c)
 *     sub_1400935F8 @ 0x1400935F8 (sub_1400935F8.c)
 *     sub_14009361C @ 0x14009361C (sub_14009361C.c)
 *     sub_140093678 @ 0x140093678 (sub_140093678.c)
 *     sub_1400936E4 @ 0x1400936E4 (sub_1400936E4.c)
 *     sub_1400B4450 @ 0x1400B4450 (sub_1400B4450.c)
 * Callees:
 *     sub_14004F72C @ 0x14004F72C (sub_14004F72C.c)
 */

__int64 __fastcall sub_1400453E4(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v3 = a1;
  if ( a2 >= 0x1000 )
  {
    sub_14004F72C(&v3, &v4);
    a2 = v4;
    a1 = v3;
  }
  return j_j__o_free(a1, a2);
}
