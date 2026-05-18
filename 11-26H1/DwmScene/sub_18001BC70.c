/*
 * XREFs of sub_18001BC70 @ 0x18001BC70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_1800170C8 @ 0x1800170C8 (sub_1800170C8.c)
 */

char __fastcall sub_18001BC70(__int64 a1, __int64 *a2)
{
  char v3; // bl
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  sub_1800170C8(*a2, &v5);
  v3 = 0;
  if ( v5 )
  {
    sub_180013540(*(__int64 **)(a1 + 8), &v5);
    if ( v6 )
      sub_180010EC8(v6);
  }
  else
  {
    if ( v6 )
      sub_180010EC8(v6);
    return 1;
  }
  return v3;
}
