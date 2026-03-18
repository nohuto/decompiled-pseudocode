/*
 * XREFs of ?GrepPolyPolygon@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@PEAHHI@Z @ 0x1400A1F34
 * Callers:
 *     GrePolyPolygon @ 0x1400A1DE0 (GrePolyPolygon.c)
 * Callees:
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140079978 (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x140079C98 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1400A2118 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepPolyPolygon(DC **a1, struct tagPOINT *a2, int *a3, int a4, unsigned int a5)
{
  DC *v7; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int v12; // esi
  int v13; // ebx
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  struct _RECTFX v16; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h]
  _BYTE v19[64]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v20[560]; // [rsp+E0h] [rbp-20h] BYREF

  v7 = *a1;
  v10 = 1;
  if ( (*((_DWORD *)v7 + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    return 0;
  }
  v11 = *((_QWORD *)v7 + 122);
  v12 = *(_DWORD *)(v11 + 152);
  if ( (v12 & 0x1000) != 0 )
    GreDCSelectBrush(v7, *(_QWORD *)(v11 + 160));
  if ( (v12 & 0x2000) != 0 )
    GreDCSelectPen(*a1, *(_QWORD *)(*((_QWORD *)*a1 + 122) + 168LL));
  if ( a4 )
  {
    v13 = *(_DWORD *)(*((_QWORD *)*a1 + 122) + 208LL);
    DC::QuickInitXform(*a1, &v15, 516LL);
    *(_QWORD *)&v16.xLeft = v15;
    LOBYTE(v16.xRight) = v13 != 2;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v17, a1, 1);
    if ( v18 )
    {
      v10 = bPolyPolygon(&v17, &v16, a2, a3, a4, a5);
      if ( !v10 )
      {
LABEL_12:
        EPATHOBJ::vUnlock((EPATHOBJ *)&v17);
        PATH_CORE::~PATH_CORE((PATH_CORE *)v20);
        CAutoTGO::vUnguard((CAutoTGO *)v19);
        return v10;
      }
      v17 |= 0x4000u;
      if ( (*((_DWORD *)*a1 + 62) & 1) != 0
        || (unsigned int)EPATHOBJ_bStrokeAndOrFill(
                           (struct EPATHOBJ *)&v17,
                           (struct XDCOBJ *)a1,
                           (LINEATTRS *)((char *)*a1 + 208),
                           &v16,
                           3u) )
      {
        v10 = 1;
        goto LABEL_12;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v10 = 0;
    goto LABEL_12;
  }
  return v10;
}
