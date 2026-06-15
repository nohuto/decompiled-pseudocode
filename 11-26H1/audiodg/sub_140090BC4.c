/*
 * XREFs of sub_140090BC4 @ 0x140090BC4
 * Callers:
 *     sub_140090C28 @ 0x140090C28 (sub_140090C28.c)
 *     sub_140091170 @ 0x140091170 (sub_140091170.c)
 * Callees:
 *     sub_140088ED0 @ 0x140088ED0 (sub_140088ED0.c)
 */

__int64 __fastcall sub_140090BC4(__int64 a1, _DWORD *a2)
{
  BOOL v2; // eax
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  unsigned int v6; // r9d
  _DWORD *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r10

  v2 = sub_140088ED0(a2, dword_1400CC318);
  v6 = 0;
  if ( v2 || sub_140088ED0(v3, &xmmword_1400F5A98) )
  {
    *v4 = v5;
  }
  else if ( sub_140088ED0(v7, &stru_1400C6FD8) )
  {
    *v8 = v9 + 8;
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v6;
}
