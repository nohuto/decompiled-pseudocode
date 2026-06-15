/*
 * XREFs of sub_140038D28 @ 0x140038D28
 * Callers:
 *     sub_14009EE00 @ 0x14009EE00 (sub_14009EE00.c)
 *     sub_14009F2B0 @ 0x14009F2B0 (sub_14009F2B0.c)
 *     sub_1400A01A0 @ 0x1400A01A0 (sub_1400A01A0.c)
 *     sub_1400A10D0 @ 0x1400A10D0 (sub_1400A10D0.c)
 *     sub_1400AC6D0 @ 0x1400AC6D0 (sub_1400AC6D0.c)
 *     sub_1400ACC20 @ 0x1400ACC20 (sub_1400ACC20.c)
 * Callees:
 *     sub_14000EE40 @ 0x14000EE40 (sub_14000EE40.c)
 */

__int64 __fastcall sub_140038D28(__int64 a1)
{
  char v1; // bl
  char v2; // al
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v7; // [rsp+40h] [rbp-28h]
  __int64 v8; // [rsp+78h] [rbp+10h] BYREF

  v1 = a1;
  v8 = 0LL;
  v2 = RtlCreateMemoryZone(&v8, a1, 0LL);
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000EE40(v4, v3, v5, 3, v8, v1, 0, 0, v7, 0, v2);
  return v8;
}
