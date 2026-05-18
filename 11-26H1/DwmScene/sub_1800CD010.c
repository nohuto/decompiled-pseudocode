/*
 * XREFs of sub_1800CD010 @ 0x1800CD010
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     sub_1800C52A0 @ 0x1800C52A0 (sub_1800C52A0.c)
 *     sub_1800C5C48 @ 0x1800C5C48 (sub_1800C5C48.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800CD010(__int64 a1, __int64 a2, int a3)
{
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  __int64 v9; // rax
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  __int64 v12; // [rsp+38h] [rbp-38h]
  __int64 v13; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-28h]
  __int128 v15; // [rsp+50h] [rbp-20h] BYREF

  if ( *(_DWORD *)(a1 + 136) != 1 )
    goto LABEL_19;
  sub_180012A94(*(_QWORD *)(a1 + 120) + 72LL, &v11);
  sub_1800C52A0(&v13, &v11);
  if ( v12 )
    sub_180010EC8(v12);
  sub_1800C5C48(*(_QWORD *)(a1 + 120), &v11);
  v6 = *(_DWORD *)(a1 + 140);
  if ( !v6 )
  {
    v15 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, __int64, bool))(*(_QWORD *)v11 + 232LL))(
           v11,
           *(_QWORD *)(a1 + 96),
           &v15,
           16LL,
           a3 != 1);
    if ( !v8 )
    {
      *(_QWORD *)(a1 + 144) = v15;
      *(_BYTE *)(a1 + 152) = DWORD2(v15) != 0;
      goto LABEL_14;
    }
    goto LABEL_15;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    *(_QWORD *)&v15 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, __int64, bool))(*(_QWORD *)v11 + 232LL))(
           v11,
           *(_QWORD *)(a1 + 96),
           &v15,
           8LL,
           a3 != 1);
    if ( !v8 )
    {
      v9 = v15;
      goto LABEL_9;
    }
LABEL_15:
    if ( v8 != 1 )
    {
      sub_1800BDDBC(v13, v8);
      *(_DWORD *)(a1 + 136) = 5;
    }
    goto LABEL_17;
  }
  if ( v7 != 2 )
    goto LABEL_17;
  LODWORD(v15) = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, __int64, bool))(*(_QWORD *)v11 + 232LL))(
         v11,
         *(_QWORD *)(a1 + 96),
         &v15,
         4LL,
         a3 != 1);
  if ( v8 )
    goto LABEL_15;
  v9 = (int)v15;
LABEL_9:
  *(_QWORD *)(a1 + 144) = v9;
LABEL_14:
  *(_DWORD *)(a1 + 136) = 2;
LABEL_17:
  sub_18000F938(&v11);
  if ( v14 )
    sub_180010EC8(v14);
LABEL_19:
  *(_DWORD *)a2 = 4;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_BYTE *)(a2 + 16) = 1;
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 136);
  if ( *(_DWORD *)(a1 + 136) == 2 )
    *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 144);
  return a2;
}
