/*
 * XREFs of sub_18006E278 @ 0x18006E278
 * Callers:
 *     sub_18002CAA0 @ 0x18002CAA0 (sub_18002CAA0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800116C8 @ 0x1800116C8 (sub_1800116C8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180016FD4 @ 0x180016FD4 (sub_180016FD4.c)
 *     sub_180024998 @ 0x180024998 (sub_180024998.c)
 *     sub_180027EC8 @ 0x180027EC8 (sub_180027EC8.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_18002BE58 @ 0x18002BE58 (sub_18002BE58.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_180053894 @ 0x180053894 (sub_180053894.c)
 *     sub_18006B170 @ 0x18006B170 (sub_18006B170.c)
 *     sub_18006F16C @ 0x18006F16C (sub_18006F16C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18006E278(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // r13
  int v8; // r15d
  bool v9; // cl
  _QWORD *v10; // rbx
  unsigned int v11; // eax
  int v12; // r15d
  __int64 v13; // rcx
  _QWORD *i; // rbx
  __int64 v15; // rcx
  __int64 *v16; // r13
  __int64 v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rax
  bool v20; // cl
  int v21; // r12d
  __int64 *v22; // rax
  __int64 **v23; // r15
  __int64 *v24; // rbx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 *v27; // r15
  unsigned int v28; // r12d
  __int64 *v29; // rax
  __int64 v30; // rbx
  _QWORD *v31; // rax
  _QWORD *v32; // rbx
  _QWORD *v33; // rsi
  _QWORD *v34; // rax
  __int64 v35[4]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v36; // [rsp+B0h] [rbp+40h]
  _QWORD *v37; // [rsp+C0h] [rbp+50h]

  if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)a3
    || *(_DWORD *)(a1 + 12) != *(_DWORD *)(a3 + 4)
    || *(_DWORD *)(a1 + 16) != *(_DWORD *)(a3 + 8)
    || *(_DWORD *)(a1 + 20) != *(_DWORD *)(a3 + 12)
    || *(_DWORD *)(a1 + 24) != *(_DWORD *)(a3 + 16)
    || (result = *(unsigned int *)(a3 + 20), *(_DWORD *)(a1 + 28) != (_DWORD)result) )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)a3;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a3 + 16);
    v7 = *(_QWORD *)(a2 + 3984);
    v8 = *(_DWORD *)(a3 + 20);
    v37 = (_QWORD *)v7;
    v9 = (*(_BYTE *)(a2 + 328) & 1) != 0
      && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 96LL))(a2, 8LL);
    v10 = (_QWORD *)(a1 + 80);
    v11 = v8 & 0xFFFFFFBF;
    v12 = v8 | 0x40;
    if ( !v9 )
      v12 = v11;
    while ( v10 != (_QWORD *)(a1 + 176) )
    {
      *v10 = 0LL;
      v13 = v10[1];
      v10[1] = 0LL;
      if ( v13 )
        sub_180010EC8(v13);
      v10 += 2;
    }
    for ( i = (_QWORD *)(a1 + 176); i != (_QWORD *)(a1 + 272); i += 2 )
    {
      *i = 0LL;
      v15 = i[1];
      i[1] = 0LL;
      if ( v15 )
        sub_180010EC8(v15);
    }
    sub_1800116C8(v7, v35);
    v16 = (__int64 *)(a1 + 456);
    sub_180011F5C((_QWORD *)(a1 + 456), v35);
    if ( v35[1] )
      sub_180010EC8(v35[1]);
    v17 = *v16;
    v18 = sub_180011CC4(v35, "ImageProcessing Input FrameBuffer");
    sub_1800292C4(v17, (__int64)v18);
    sub_180027EC8(*v16, *(_DWORD *)a3, *(_DWORD *)(a3 + 4), *(_DWORD *)(a3 + 8), v12, a2);
    v19 = sub_180033D14((__int64)v37, 1);
    v20 = (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v19 + 64LL))(v19, &unk_1801C9438, 0LL)
       && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 96LL))(a2, 6LL);
    v21 = v12 | 0x100;
    v36 = v20 + 1;
    if ( !v20 )
      v21 = v12;
    v22 = sub_180024998(v37, v35);
    v23 = (__int64 **)(a1 + 472);
    sub_180011F5C((_QWORD *)(a1 + 472), v22);
    if ( v35[1] )
      sub_180010EC8(v35[1]);
    v24 = *v23;
    v25 = sub_180011CC4(v35, "ImageProcessing Input DepthBuffer)");
    sub_1800292C4((__int64)v24, (__int64)v25);
    sub_18006B170(*v23, *(_DWORD *)a3, *(_DWORD *)(a3 + 4), v36, v21, a2);
    v26 = *(_QWORD *)(*v16 + 136);
    if ( v26 )
    {
      v27 = (__int64 *)(a1 + 64);
      if ( (unsigned int)sub_18002BE58(v26, *(_DWORD *)(a2 + 244)) > 1 )
      {
        v28 = *(_DWORD *)(a3 + 20) & 0xFFFFFFBC | 3;
        v29 = sub_180016FD4((__int64)v37, v35);
        sub_180011F5C((_QWORD *)(a1 + 64), v29);
        if ( v35[1] )
          sub_180010EC8(v35[1]);
        v30 = *v27;
        v31 = sub_180011CC4(v35, "ImageProcessing Input Texture");
        sub_1800292C4(v30, (__int64)v31);
        result = sub_180053894(*v27, *(_DWORD *)a3, *(_DWORD *)(a3 + 4), 0, *(_DWORD *)(a3 + 8), 0, v28, 0LL, 0, a2);
LABEL_41:
        v32 = *(_QWORD **)(a1 + 40);
        v33 = *(_QWORD **)(a1 + 48);
        while ( v32 != v33 )
        {
          v34 = sub_180012C40(v35, v32);
          sub_18006F16C(a1, v34);
          result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)*v32 + 8LL))(
                     *v32,
                     a2,
                     *(unsigned int *)(a1 + 8),
                     *(unsigned int *)(a1 + 12),
                     *(_DWORD *)(a1 + 20),
                     *(_DWORD *)(a1 + 28));
          v32 += 2;
        }
        return result;
      }
    }
    else
    {
      v27 = (__int64 *)(a1 + 64);
    }
    *(_OWORD *)v35 = 0LL;
    result = (__int64)sub_180011F5C(v27, v35);
    if ( v35[1] )
      result = sub_180010EC8(v35[1]);
    goto LABEL_41;
  }
  return result;
}
