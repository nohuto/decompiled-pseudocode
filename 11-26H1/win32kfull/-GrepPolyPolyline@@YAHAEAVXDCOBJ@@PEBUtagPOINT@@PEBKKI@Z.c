/*
 * XREFs of ?GrepPolyPolyline@@YAHAEAVXDCOBJ@@PEBUtagPOINT@@PEBKKI@Z @ 0x1401149D4
 * Callers:
 *     GrePolyPolyline @ 0x140114480 (GrePolyPolyline.c)
 * Callees:
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x14006DB98 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x140114F08 (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x140117414 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepPolyPolyline(
        DC **a1,
        const struct tagPOINT *a2,
        const unsigned int *a3,
        unsigned int a4,
        signed int a5)
{
  __int64 v6; // r15
  DC *v7; // rcx
  unsigned int v8; // edi
  int v11; // ebx
  DC *v12; // rcx
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v16; // r15
  ULONG v18; // ecx
  const unsigned int *v19; // [rsp+30h] [rbp-D0h] BYREF
  const struct tagPOINT *v20; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h]
  __int64 v22; // [rsp+48h] [rbp-B8h]
  __int16 v23; // [rsp+50h] [rbp-B0h]
  struct _RECTFX v24; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v25[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v26; // [rsp+78h] [rbp-88h]

  v6 = a4;
  v7 = *a1;
  v8 = 0;
  if ( (*((_DWORD *)v7 + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    return v8;
  }
  v11 = *(_DWORD *)(*((_QWORD *)v7 + 122) + 208LL);
  DC::QuickInitXform(v7, &v19, 516LL);
  v12 = *a1;
  LOBYTE(v24.xRight) = v11 != 2;
  *(_QWORD *)&v24.xLeft = v19;
  v13 = *((_QWORD *)v12 + 122);
  v14 = *(_DWORD *)(v13 + 152);
  if ( (v14 & 0x1000) != 0 )
    GreDCSelectBrush(v12, *(_QWORD *)(v13 + 160));
  if ( (v14 & 0x2000) != 0 )
    GreDCSelectPen(*a1, *(_QWORD *)(*((_QWORD *)*a1 + 122) + 168LL));
  if ( !(_DWORD)v6 )
    return 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v25, a1, 1);
  if ( v26 )
  {
    v19 = &a3[v6];
    do
    {
      v16 = *(int *)a3;
      a5 -= v16;
      if ( a5 < 0 || (int)v16 < 2 )
      {
        v18 = 87;
        goto LABEL_19;
      }
      v20 = a2;
      v21 = 1LL;
      v22 = 0LL;
      v23 = 0;
      if ( !(unsigned __int8)EPATHOBJ::bMoveTo(v25, &v24, &v20) )
        goto LABEL_20;
      v22 = 0LL;
      v20 = a2 + 1;
      v21 = (unsigned int)(v16 - 1);
      v23 = 0;
      if ( !(unsigned __int8)EPATHOBJ::bPolyLineTo(v25, &v24, &v20, v21) )
        goto LABEL_20;
      ++a3;
      a2 += v16;
    }
    while ( a3 < v19 );
    if ( (*((_DWORD *)*a1 + 62) & 1) != 0
      || (unsigned int)EPATHOBJ_bStrokeAndOrFill(
                         (struct EPATHOBJ *)v25,
                         (struct XDCOBJ *)a1,
                         (LINEATTRS *)((char *)*a1 + 208),
                         &v24,
                         1u) )
    {
      v8 = 1;
    }
    PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v25);
    return v8;
  }
  v18 = 8;
LABEL_19:
  EngSetLastError(v18);
LABEL_20:
  PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v25);
  return 0LL;
}
