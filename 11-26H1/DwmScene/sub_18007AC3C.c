/*
 * XREFs of sub_18007AC3C @ 0x18007AC3C
 * Callers:
 *     sub_18007ABD0 @ 0x18007ABD0 (sub_18007ABD0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 *     sub_180042248 @ 0x180042248 (sub_180042248.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18007AC3C(__int64 a1)
{
  __int64 v1; // [rsp+20h] [rbp-18h] BYREF
  __int64 v2; // [rsp+28h] [rbp-10h]

  sub_180042248(a1, &v1);
  if ( v1 )
    sub_18003D718(v1);
  if ( v2 )
    sub_180010EC8(v2);
}
