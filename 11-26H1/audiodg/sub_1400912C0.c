/*
 * XREFs of sub_1400912C0 @ 0x1400912C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400470EC @ 0x1400470EC (sub_1400470EC.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_14008FB40 @ 0x14008FB40 (sub_14008FB40.c)
 *     sub_140093F64 @ 0x140093F64 (sub_140093F64.c)
 */

__int64 __fastcall sub_1400912C0(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  int *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  int *v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  DWORD BytesReturned; // [rsp+40h] [rbp-48h] BYREF
  __int64 InBuffer; // [rsp+48h] [rbp-40h] BYREF
  int v17; // [rsp+50h] [rbp-38h]
  int v18; // [rsp+54h] [rbp-34h]
  __int128 v19; // [rsp+58h] [rbp-30h] BYREF
  __int64 v20; // [rsp+68h] [rbp-20h]
  int v21; // [rsp+70h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]

  v4 = sub_140093F64();
  v6 = sub_1400492F4(32LL, v5);
  *(_DWORD *)(v6 + 8) = 1;
  *(_DWORD *)(v6 + 12) = 1;
  *(_QWORD *)v6 = off_1400BF318;
  *(_DWORD *)(v6 + 16) = v4;
  *(_QWORD *)(v6 + 24) = &stru_1400E97C8;
  *(_QWORD *)(a1 + 24) = v6 + 16;
  v7 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v6;
  if ( v7 )
    sub_140007588(v7);
  v8 = *(int **)(a1 + 24);
  BytesReturned = 0;
  v18 = 0;
  InBuffer = a2;
  v17 = *v8;
  if ( !DeviceIoControl(*(HANDLE *)(a1 + 56), 0x220014u, &InBuffer, 0x10u, 0LL, 0, &BytesReturned, 0LL) )
    return sub_1400470EC(
             (int)retaddr,
             230,
             (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspcrossprocessaudioendpoint.cpp",
             v10);
  v20 = 0LL;
  v12 = *(int **)(a1 + 24);
  v19 = 0LL;
  v21 = *v12;
  v13 = sub_14008FB40((_QWORD *)(a1 - 48), (__int64)&v19, v9, v10);
  v14 = v13;
  if ( v13 >= 0 )
    return 0LL;
  sub_14000C2A8(
    (int)retaddr,
    235,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspcrossprocessaudioendpoint.cpp",
    v13);
  return v14;
}
