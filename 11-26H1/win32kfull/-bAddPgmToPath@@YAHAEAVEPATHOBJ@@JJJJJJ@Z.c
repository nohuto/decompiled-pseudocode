/*
 * XREFs of ?bAddPgmToPath@@YAHAEAVEPATHOBJ@@JJJJJJ@Z @ 0x14019BDD8
 * Callers:
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x14019BA1C (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?bAddPolygon@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z @ 0x14019BED8 (-bAddPolygon@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall bAddPgmToPath(struct EPATHOBJ *a1, LONG a2, LONG a3, int a4, int a5, int a6, struct EXFORMOBJR *a7)
{
  unsigned int v7; // r9d
  struct _POINTL v9; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+2Ch] [rbp-2Ch]
  int v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+34h] [rbp-24h]
  int v14; // [rsp+38h] [rbp-20h]
  int v15; // [rsp+3Ch] [rbp-1Ch]

  v7 = a2 + a4;
  v9.x = a2;
  v9.y = a3;
  v12 = v7 + a6;
  v10 = v7;
  v11 = a3 + a5;
  v13 = a3 + a5 + (_DWORD)a7;
  v14 = a2 + a6;
  v15 = a3 + (_DWORD)a7;
  return EPATHOBJ::bAddPolygon(a1, (const struct EXFORMOBJR *)(unsigned int)a7, &v9, v7);
}
