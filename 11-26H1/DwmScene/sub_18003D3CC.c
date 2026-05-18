/*
 * XREFs of sub_18003D3CC @ 0x18003D3CC
 * Callers:
 *     sub_18003C964 @ 0x18003C964 (sub_18003C964.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013644 @ 0x180013644 (sub_180013644.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_18003D3CC(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h]

  sub_18003D718(a1);
  sub_180012C40(&v8, a2);
  while ( v8 )
  {
    if ( v8 == a1 )
    {
      if ( v9 )
        sub_180010EC8(v9);
      v5 = a2[1];
      if ( v5 )
        sub_180010EC8(v5);
      return 1;
    }
    v4 = sub_180013644(v8, &v10);
    sub_180011F5C(&v8, v4);
    if ( v11 )
      sub_180010EC8(v11);
  }
  if ( v9 )
    sub_180010EC8(v9);
  v7 = a2[1];
  if ( v7 )
    sub_180010EC8(v7);
  return 0;
}
