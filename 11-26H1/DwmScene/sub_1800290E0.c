/*
 * XREFs of sub_1800290E0 @ 0x1800290E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 */

__int64 __fastcall sub_1800290E0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+28h] [rbp-10h]

  sub_180012A94(a1 + 72, &v3);
  v1 = *(_QWORD *)(v3 + 3984);
  if ( v4 )
    sub_180010EC8(v4);
  return v1;
}
