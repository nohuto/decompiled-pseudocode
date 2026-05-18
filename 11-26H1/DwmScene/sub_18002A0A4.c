/*
 * XREFs of sub_18002A0A4 @ 0x18002A0A4
 * Callers:
 *     sub_18002C410 @ 0x18002C410 (sub_18002C410.c)
 *     sub_180030C74 @ 0x180030C74 (sub_180030C74.c)
 *     sub_18003C930 @ 0x18003C930 (sub_18003C930.c)
 *     sub_18003C964 @ 0x18003C964 (sub_18003C964.c)
 *     sub_18003CCD0 @ 0x18003CCD0 (sub_18003CCD0.c)
 *     sub_18003E2E8 @ 0x18003E2E8 (sub_18003E2E8.c)
 *     sub_18003E3B0 @ 0x18003E3B0 (sub_18003E3B0.c)
 *     sub_180043070 @ 0x180043070 (sub_180043070.c)
 *     sub_180049E40 @ 0x180049E40 (sub_180049E40.c)
 *     sub_18005C7A8 @ 0x18005C7A8 (sub_18005C7A8.c)
 *     sub_18005D23C @ 0x18005D23C (sub_18005D23C.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 */

__int64 *__fastcall sub_18002A0A4(__int64 *a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r8
  volatile signed __int32 *v6; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_1800162D0(v8, a2);
  v4 = *v3;
  *v3 = *a1;
  *a1 = v4;
  v5 = v3[1];
  v3[1] = a1[1];
  v6 = (volatile signed __int32 *)v8[1];
  a1[1] = v5;
  if ( v6 )
    sub_180010F00(v6);
  return a1;
}
