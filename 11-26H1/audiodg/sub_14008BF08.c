/*
 * XREFs of sub_14008BF08 @ 0x14008BF08
 * Callers:
 *     sub_14008A840 @ 0x14008A840 (sub_14008A840.c)
 * Callees:
 *     sub_140088ED0 @ 0x140088ED0 (sub_140088ED0.c)
 */

__int64 __fastcall sub_14008BF08(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r10
  _QWORD *v10; // r8
  __int64 v11; // r10

  if ( sub_140088ED0(a2, dword_1400CC1C0) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( sub_140088ED0(v2, dword_1400CC1B0) )
    {
      *v7 = v9;
    }
    else if ( sub_140088ED0(v6, &xmmword_1400C97D0) )
    {
      *v10 = v11 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v8;
  }
}
