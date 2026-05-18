/*
 * XREFs of sub_180086570 @ 0x180086570
 * Callers:
 *     sub_1800872F0 @ 0x1800872F0 (sub_1800872F0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_1800284A0 @ 0x1800284A0 (sub_1800284A0.c)
 *     sub_180028540 @ 0x180028540 (sub_180028540.c)
 *     sub_1800594A8 @ 0x1800594A8 (sub_1800594A8.c)
 *     sub_18005A750 @ 0x18005A750 (sub_18005A750.c)
 *     sub_18005A8BC @ 0x18005A8BC (sub_18005A8BC.c)
 *     sub_18005A9B0 @ 0x18005A9B0 (sub_18005A9B0.c)
 *     sub_18005AA68 @ 0x18005AA68 (sub_18005AA68.c)
 *     sub_180086B6C @ 0x180086B6C (sub_180086B6C.c)
 *     sub_1800870B0 @ 0x1800870B0 (sub_1800870B0.c)
 *     sub_180087164 @ 0x180087164 (sub_180087164.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180086570(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 *v5; // rax
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  __int64 *v10; // rax
  _QWORD *v11; // rax
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h]
  _QWORD v15[4]; // [rsp+40h] [rbp-20h] BYREF

  if ( *(_DWORD *)(a1 + 1960) )
  {
    sub_180086B6C(a1, &v13);
    v7 = *(unsigned int *)(a1 + 4LL * *(int *)(a1 + 1964) + 1972);
    if ( !v13
      || (unsigned int)sub_180028540(v13) != *(_DWORD *)(a1 + 1940)
      || (v9 = sub_1800284A0(v8), v9 != (_DWORD)v7) )
    {
      sub_1800870B0(a1, v7);
    }
    v10 = (__int64 *)sub_180086B6C(a1, &v12);
    sub_18005A8BC(a1, v10);
    v12 = 0LL;
    sub_18005A750(a1, (__int64 *)&v12);
    sub_18005A9B0(a1, *(_DWORD *)(a1 + 1928), 0);
    sub_18005A9B0(a1, *(_DWORD *)(a1 + 1932), 1);
    sub_18005A9B0(a1, *(_DWORD *)(a1 + 1936), 1);
    *(_BYTE *)(a1 + 465) |= 1u;
    *(_QWORD *)&v12 = *(_QWORD *)(a1 + 400);
    *((_QWORD *)&v12 + 1) = *(unsigned int *)(a1 + 408);
    v11 = sub_1800181BC(v15, (__int64)&unk_1801CC938);
    result = sub_18005AA68(a1, (__int64)v11, &v12, -1);
    if ( v14 )
      return sub_180010EC8(v14);
  }
  else
  {
    v2 = (_QWORD *)(a1 + 1832);
    v3 = *(_QWORD *)(a1 + 1832);
    if ( !v3 || (unsigned int)sub_1800594A8(v3) != *(_DWORD *)(a1 + 1940) )
      sub_180087164(a1);
    v12 = 0LL;
    sub_180011F5C((_QWORD *)(a1 + 1912), (__int64 *)&v12);
    if ( *((_QWORD *)&v12 + 1) )
      sub_180010EC8(*((__int64 *)&v12 + 1));
    v4 = sub_180012C40(&v13, (_QWORD *)(a1 + 1912));
    sub_18005A8BC(a1, v4);
    v5 = sub_180012C40(&v13, v2);
    sub_18005A750(a1, v5);
    sub_18005A9B0(a1, *(_DWORD *)(a1 + 1928), 1);
    sub_18005A9B0(a1, *(_DWORD *)(a1 + 1932), 0);
    result = sub_18005A9B0(a1, *(_DWORD *)(a1 + 1936), 0);
    *(_BYTE *)(a1 + 465) &= ~1u;
  }
  return result;
}
