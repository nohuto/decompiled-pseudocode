/*
 * XREFs of sub_180013748 @ 0x180013748
 * Callers:
 *     sub_180017198 @ 0x180017198 (sub_180017198.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C78 @ 0x180012C78 (sub_180012C78.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180013748(__int64 a1, int a2, _QWORD *a3)
{
  char v6; // di
  int v7; // ebx
  int v8; // ebx
  __int64 v9; // rsi
  __int64 *v10; // rax
  __int64 v11; // rbx
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h]

  *(_DWORD *)(a1 + 48) = a2;
  sub_180013540((__int64 *)(a1 + 16), a3);
  v6 = 0;
  if ( *(_DWORD *)(a1 + 48) && *(_DWORD *)(a1 + 48) != 4 )
  {
    v7 = a2 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 != 1 )
        v8 = 0;
    }
    else
    {
      v8 = 2;
    }
    v9 = sub_180033D14(*(_QWORD *)(*a3 + 24LL), 1LL);
    v10 = sub_180012C78(*(_QWORD *)(a1 + 16), &v13);
    sub_180011F5C((_QWORD *)(a1 + 32), v10);
    if ( v14 )
      sub_180010EC8(v14);
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 120LL) = v8;
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 128LL) = 1000;
    *(_BYTE *)(*(_QWORD *)(a1 + 32) + 72LL) = 1;
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 108LL) = 3;
    v11 = *(_QWORD *)(a1 + 32);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v9 + 64LL))(v9, &unk_1801C9D58, 0LL)
      || (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v9 + 64LL))(v9, &unk_1801CA118, 0LL)
      || (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v9 + 64LL))(v9, &unk_1801CA4D8, 0LL) )
    {
      v6 = 1;
    }
    *(_BYTE *)(v11 + 124) = v6;
  }
  return 0LL;
}
