/*
 * XREFs of sub_180080D3C @ 0x180080D3C
 * Callers:
 *     sub_18007661C @ 0x18007661C (sub_18007661C.c)
 *     sub_180076D44 @ 0x180076D44 (sub_180076D44.c)
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 *     sub_180078BE0 @ 0x180078BE0 (sub_180078BE0.c)
 *     sub_180078F80 @ 0x180078F80 (sub_180078F80.c)
 *     sub_18007A030 @ 0x18007A030 (sub_18007A030.c)
 *     sub_1800908AC @ 0x1800908AC (sub_1800908AC.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 */

__int64 __fastcall sub_180080D3C(__int64 a1, int a2, int a3, int a4, char a5)
{
  char v6; // r10
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-10h] BYREF

  v6 = a5 & 0xE | 1;
  if ( *(_BYTE *)(a1 + 124) != v6
    || *(_DWORD *)(a1 + 112) != a2
    || *(_DWORD *)(a1 + 116) != a3
    || *(_DWORD *)(a1 + 120) != a4
    || (result = a5 & 1, *(_BYTE *)(a1 + 125) != (_BYTE)result) )
  {
    *(_DWORD *)(a1 + 112) = a2;
    *(_BYTE *)(a1 + 125) = a5 & 1;
    *(_DWORD *)(a1 + 116) = a3;
    *(_DWORD *)(a1 + 120) = a4;
    *(_BYTE *)(a1 + 124) = v6;
    v8 = 0LL;
    sub_180011F5C((_QWORD *)(a1 + 48), (__int64 *)&v8);
    if ( *((_QWORD *)&v8 + 1) )
      sub_180010EC8(*((__int64 *)&v8 + 1));
    v8 = 0LL;
    sub_180011F5C((_QWORD *)(a1 + 64), (__int64 *)&v8);
    if ( *((_QWORD *)&v8 + 1) )
      sub_180010EC8(*((__int64 *)&v8 + 1));
    v8 = 0LL;
    sub_180011F5C((_QWORD *)(a1 + 80), (__int64 *)&v8);
    if ( *((_QWORD *)&v8 + 1) )
      sub_180010EC8(*((__int64 *)&v8 + 1));
    v8 = 0LL;
    result = (__int64)sub_180011F5C((_QWORD *)(a1 + 96), (__int64 *)&v8);
    if ( *((_QWORD *)&v8 + 1) )
      return sub_180010EC8(*((__int64 *)&v8 + 1));
  }
  return result;
}
