/*
 * XREFs of sub_18005A4A4 @ 0x18005A4A4
 * Callers:
 *     sub_180059AA0 @ 0x180059AA0 (sub_180059AA0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18004ED60 @ 0x18004ED60 (sub_18004ED60.c)
 *     sub_18004ED7C @ 0x18004ED7C (sub_18004ED7C.c)
 *     sub_18004EDB4 @ 0x18004EDB4 (sub_18004EDB4.c)
 *     sub_1800593B4 @ 0x1800593B4 (sub_1800593B4.c)
 *     sub_18005AD78 @ 0x18005AD78 (sub_18005AD78.c)
 *     sub_18007AB60 @ 0x18007AB60 (sub_18007AB60.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_18005A4A4(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  char v5; // r12
  char v6; // al
  char v7; // r15
  __int64 v8; // r14
  __int128 *v9; // rax
  __int128 *v10; // rax
  __int64 v12; // [rsp+28h] [rbp-79h] BYREF
  __int64 v13; // [rsp+30h] [rbp-71h]
  __int64 v14; // [rsp+38h] [rbp-69h] BYREF
  __int64 v15; // [rsp+40h] [rbp-61h]
  __int64 v16; // [rsp+48h] [rbp-59h] BYREF
  __int64 v17; // [rsp+50h] [rbp-51h]
  __int128 v18; // [rsp+58h] [rbp-49h] BYREF
  __int128 v19; // [rsp+68h] [rbp-39h]
  __int128 v20; // [rsp+78h] [rbp-29h]
  __int128 v21; // [rsp+88h] [rbp-19h]
  _BYTE v22[8]; // [rsp+98h] [rbp-9h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-1h]
  _BYTE v24[64]; // [rsp+A8h] [rbp+7h] BYREF

  if ( *(_DWORD *)(a1 + 172) )
  {
    sub_180012C40(&v16, (_QWORD *)(a1 + 152));
    v4 = v16;
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 48LL))(v16, v22);
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v4 + 72LL))(
           v4,
           a2,
           *(unsigned int *)(a1 + 172));
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 72LL))(v4, a2, 3LL);
    v7 = v6;
    if ( v5 || v6 )
    {
      v8 = *(_QWORD *)(sub_18007AB60(a1) + 512);
      if ( *(_QWORD *)(a1 + 200) && v5 )
      {
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v4 + 56LL))(
          v4,
          &v12,
          *(unsigned int *)(a1 + 172));
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v4 + 64LL))(
          v4,
          &v14,
          *(unsigned int *)(a1 + 172));
        sub_18004ED7C(v8, a1 + 184, &v12);
        sub_18004EDB4(v8, a1 + 184, &v14);
        if ( v15 )
          sub_180010EC8(v15);
        if ( v13 )
          sub_180010EC8(v13);
      }
      if ( *(_QWORD *)(a1 + 232) )
      {
        if ( v7 )
        {
          (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v4 + 56LL))(v4, &v12, 3LL);
          sub_18004ED7C(v8, a1 + 216, &v12);
          if ( v13 )
            sub_180010EC8(v13);
        }
      }
      if ( *(_QWORD *)(a1 + 264) )
      {
        v9 = (__int128 *)sub_1800593B4(a1, 2, 0);
        v18 = *v9;
        v19 = v9[1];
        v20 = v9[2];
        v21 = v9[3];
        v10 = (__int128 *)sub_18005AD78(&v18, v24);
        v18 = *v10;
        v19 = v10[1];
        v20 = v10[2];
        v21 = v10[3];
        sub_18004ED60(v8);
      }
    }
    if ( v23 )
      sub_180010EC8(v23);
    if ( v17 )
      sub_180010EC8(v17);
  }
  return 1;
}
