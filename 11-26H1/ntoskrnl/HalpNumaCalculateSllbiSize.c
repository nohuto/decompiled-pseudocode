/*
 * XREFs of HalpNumaCalculateSllbiSize @ 0x1405942D8
 * Callers:
 *     HalpNumaGetHmatConfigSize @ 0x140594348 (HalpNumaGetHmatConfigSize.c)
 *     HalpNumaParseHmat @ 0x140CB82E0 (HalpNumaParseHmat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpNumaCalculateSllbiSize(unsigned int a1, unsigned int a2, int *a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // r8
  int v6; // ecx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned int v10; // edx
  unsigned int v11; // r8d
  __int64 result; // rax

  v4 = a2 * (unsigned __int64)a1;
  *a3 = 0;
  v5 = a1;
  v6 = -1;
  if ( v4 > 0xFFFFFFFF )
    return 3221225621LL;
  v7 = 2LL * (unsigned int)v4;
  if ( v7 > 0xFFFFFFFF )
    return 3221225621LL;
  v8 = 4LL * a2;
  if ( v8 > 0xFFFFFFFF )
    return 3221225621LL;
  v9 = 4 * v5;
  if ( v9 > 0xFFFFFFFF )
    return 3221225621LL;
  v10 = v7 + v8;
  if ( v10 < (unsigned int)v7 || (v11 = v10 + v9, v11 < v10) )
  {
    *a3 = -1;
    return 3221225621LL;
  }
  if ( v11 + 40 >= v11 )
    v6 = v11 + 40;
  result = v11 + 40 < v11 ? 0xC0000095 : 0;
  *a3 = v6;
  return result;
}
