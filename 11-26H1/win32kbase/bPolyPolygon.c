/*
 * XREFs of bPolyPolygon @ 0x1400C0DA0
 * Callers:
 *     GreCreatePolyPolygonRgnInternal @ 0x1400C0C00 (GreCreatePolyPolygonRgnInternal.c)
 * Callees:
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z @ 0x1400C0E94 (-bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEBV?$umptr_r@U_POINTL@@@@K@Z @ 0x1400C1C30 (-bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEBV-$umptr_r@U_POINTL@@@@K@Z.c)
 *     ?bCloseFigure@EPATHOBJ@@QEAA_NXZ @ 0x1400C2A10 (-bCloseFigure@EPATHOBJ@@QEAA_NXZ.c)
 */

__int64 __fastcall bPolyPolygon(
        EPATHOBJ *this,
        struct EXFORMOBJR *a2,
        struct _POINTL *a3,
        int *a4,
        unsigned int a5,
        int a6)
{
  int *v6; // rbx
  unsigned __int64 v11; // r12
  __int64 v12; // rdi
  _QWORD v14[3]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v15; // [rsp+38h] [rbp-30h]

  v6 = a4;
  if ( !a5 )
    return 1LL;
  v11 = (unsigned __int64)&a4[a5];
  while ( 1 )
  {
    v12 = *v6;
    a6 -= v12;
    if ( a6 < 0 || (int)v12 < 2 )
      break;
    if ( !EPATHOBJ::bMoveTo(this, a2, a3) )
      return 0LL;
    v14[2] = 0LL;
    v14[0] = a3 + 1;
    v14[1] = (unsigned int)(v12 - 1);
    v15 = 0;
    if ( !(unsigned __int8)EPATHOBJ::bPolyLineTo(this, a2, v14) || !EPATHOBJ::bCloseFigure(this) )
      return 0LL;
    ++v6;
    a3 += v12;
    if ( (unsigned __int64)v6 >= v11 )
      return 1LL;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
