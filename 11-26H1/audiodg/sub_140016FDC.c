/*
 * XREFs of sub_140016FDC @ 0x140016FDC
 * Callers:
 *     sub_140065ED0 @ 0x140065ED0 (sub_140065ED0.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400170EC @ 0x1400170EC (sub_1400170EC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140016FDC(__int64 a1, __int64 a2, float a3, unsigned int a4)
{
  _QWORD *v4; // r10
  int v5; // edx
  int v6; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (_QWORD *)(a1 + 48);
  if ( *(_QWORD *)(a1 + 48) )
  {
    v6 = -2005139382;
    v5 = 157;
    goto LABEL_9;
  }
  if ( !a2 || a2 > 25000000 )
  {
    v5 = 160;
    goto LABEL_8;
  }
  if ( a3 > 384000.0 || a3 < 10.0 )
  {
    v5 = 161;
    goto LABEL_8;
  }
  if ( a4 - 1 > 0x1F )
  {
    v5 = 162;
LABEL_8:
    v6 = -2147024809;
LABEL_9:
    sub_14000C2A8((int)retaddr, v5, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp", v6);
    return (unsigned int)v6;
  }
  *v4 = 0LL;
  v6 = sub_1400170EC(
         80 * a4 * (unsigned __int64)(unsigned int)(int)(a3 * (double)(int)a2 / 10000000.0 + 0.5),
         a2,
         (unsigned __int64)(unsigned int)(int)((double)(int)a2 * 192000.0 / 10000000.0 + 0.5) << 7,
         v4);
  if ( v6 < 0 )
  {
    v5 = 185;
    goto LABEL_9;
  }
  return 0LL;
}
