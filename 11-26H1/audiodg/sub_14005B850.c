/*
 * XREFs of sub_14005B850 @ 0x14005B850
 * Callers:
 *     sub_14005B930 @ 0x14005B930 (sub_14005B930.c)
 * Callees:
 *     sub_14001FC10 @ 0x14001FC10 (sub_14001FC10.c)
 */

__int64 __fastcall sub_14005B850(__int64 a1, _DWORD *a2)
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

  if ( sub_14001FC10(a2, &xmmword_1400C6E30) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( sub_14001FC10(v2, dword_1400C70F0) )
    {
      *v7 = v9;
    }
    else if ( sub_14001FC10(v6, &xmmword_1400F5A98) )
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
