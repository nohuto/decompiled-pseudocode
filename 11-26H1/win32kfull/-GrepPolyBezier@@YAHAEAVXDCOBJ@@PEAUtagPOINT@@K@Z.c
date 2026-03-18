/*
 * XREFs of ?GrepPolyBezier@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@K@Z @ 0x140246C10
 * Callers:
 *     GrePolyBezier @ 0x140326620 (GrePolyBezier.c)
 * Callees:
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x14006DB98 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x140114F08 (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x140117414 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepPolyBezier(DC **this, struct tagPOINT *a2, unsigned int a3)
{
  DC *v5; // rcx
  ULONG v7; // ecx
  __int64 v8; // rdx
  int v9; // ebx
  int v10; // ebx
  unsigned int v11; // ebx
  struct tagPOINT *v13; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h]
  __int64 v15; // [rsp+40h] [rbp-C0h]
  __int16 v16; // [rsp+48h] [rbp-B8h]
  struct _RECTFX v17; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  struct _PATHOBJ v19[88]; // [rsp+70h] [rbp-90h] BYREF

  v5 = *this;
  if ( (*((_DWORD *)v5 + 9) & 0x10000) != 0 )
  {
    v7 = 6;
LABEL_19:
    EngSetLastError(v7);
    return 0LL;
  }
  if ( a3 < 4 || a3 % 3 != 1 )
  {
    v7 = 87;
    goto LABEL_19;
  }
  v8 = *((_QWORD *)v5 + 122);
  v9 = *(_DWORD *)(v8 + 152);
  if ( (v9 & 0x1000) != 0 )
    GreDCSelectBrush(v5, *(_QWORD *)(v8 + 160));
  if ( (v9 & 0x2000) != 0 )
    GreDCSelectPen(*this, *(_QWORD *)(*((_QWORD *)*this + 122) + 168LL));
  v10 = *(_DWORD *)(*((_QWORD *)*this + 122) + 208LL);
  DC::QuickInitXform(*this, &v18, 516LL);
  *(_QWORD *)&v17.xLeft = v18;
  LOBYTE(v17.xRight) = v10 != 2;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v19, this, 1);
  v11 = 0;
  if ( !*(_QWORD *)&v19[1] )
  {
    EngSetLastError(8u);
LABEL_11:
    PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v19);
    return 0LL;
  }
  v13 = a2;
  v14 = 1LL;
  v15 = 0LL;
  v16 = 0;
  if ( !(unsigned __int8)EPATHOBJ::bMoveTo(v19, &v17, &v13) )
    goto LABEL_11;
  v15 = 0LL;
  v13 = a2 + 1;
  v14 = a3 - 1;
  v16 = 0;
  if ( !(unsigned __int8)EPATHOBJ::bPolyBezierTo(v19, &v17, &v13, v14) )
    goto LABEL_11;
  if ( (*((_DWORD *)*this + 62) & 1) != 0
    || (unsigned int)EPATHOBJ_bStrokeAndOrFill(
                       v19,
                       (POINTL **)this,
                       (LINEATTRS *)((char *)*this + 208),
                       (XFORMOBJ *)&v17,
                       1u) )
  {
    v11 = 1;
  }
  PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v19);
  return v11;
}
