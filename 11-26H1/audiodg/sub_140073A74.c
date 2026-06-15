/*
 * XREFs of sub_140073A74 @ 0x140073A74
 * Callers:
 *     sub_140054D80 @ 0x140054D80 (sub_140054D80.c)
 *     sub_140066978 @ 0x140066978 (sub_140066978.c)
 * Callees:
 *     sub_14000DA4C @ 0x14000DA4C (sub_14000DA4C.c)
 *     sub_14000DF30 @ 0x14000DF30 (sub_14000DF30.c)
 *     sub_1400305AC @ 0x1400305AC (sub_1400305AC.c)
 *     sub_140073F98 @ 0x140073F98 (sub_140073F98.c)
 */

__int64 __fastcall sub_140073A74(int a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned __int64 v10; // rax
  int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // r8d

  v10 = sub_14000DA4C();
  v12 = sub_14000DF30(0x128uLL, v10, v11);
  if ( v12 && (v13 = sub_1400305AC(v12)) != 0 )
    return sub_140073F98(v13, a1, v14, a3, a4, a5, a6, a7);
  else
    return 2147942414LL;
}
