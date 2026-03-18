/*
 * XREFs of ?vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z @ 0x1401877F8
 * Callers:
 *     EngStrokePath @ 0x1401160D0 (EngStrokePath.c)
 *     ?EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x140117E38 (-EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@.c)
 *     EngLineTo @ 0x1401874C0 (EngLineTo.c)
 * Callees:
 *     vDrawLine @ 0x140187A94 (vDrawLine.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall vSolidLine(
        struct SURFACE *a1,
        struct _PATHOBJ *a2,
        struct _POINTFIX *a3,
        struct _CLIPOBJ *a4,
        unsigned int a5)
{
  int v5; // r14d
  int v6; // r10d
  int v7; // r8d
  EPATHOBJ *v8; // r15
  __int64 v9; // r11
  __int64 v10; // rcx
  RECTL *v11; // r13
  int v12; // ebx
  int v13; // r14d
  RECTL rclBounds; // xmm0
  LONG top; // eax
  LONG bottom; // eax
  struct _PATHOBJ v17; // rcx
  int v18; // r12d
  ULONG count; // eax
  ULONG v20; // edi
  char flags; // r8
  POINTFIX *pptfx; // rdx
  POINTFIX *v23; // rsi
  POINTFIX *v24; // rcx
  unsigned int v25; // ebx
  int v26; // ebx
  int v27; // r12d
  int v28; // [rsp+40h] [rbp-81h]
  struct _PATHDATA v29; // [rsp+48h] [rbp-79h] BYREF
  int v30; // [rsp+58h] [rbp-69h]
  __int64 v31; // [rsp+60h] [rbp-61h]
  POINTFIX v32; // [rsp+68h] [rbp-59h] BYREF
  __int64 v33; // [rsp+70h] [rbp-51h]
  POINTFIX v34; // [rsp+78h] [rbp-49h] BYREF
  struct _PATHOBJ *v35; // [rsp+80h] [rbp-41h]
  RECTL v36; // [rsp+90h] [rbp-31h] BYREF
  LONG v37; // [rsp+A0h] [rbp-21h]
  LONG left; // [rsp+A4h] [rbp-1Dh]
  LONG v39; // [rsp+A8h] [rbp-19h]
  LONG right; // [rsp+ACh] [rbp-15h]
  LONG v41; // [rsp+B0h] [rbp-11h]
  int v42; // [rsp+B4h] [rbp-Dh]
  LONG v43; // [rsp+B8h] [rbp-9h]
  int v44; // [rsp+BCh] [rbp-5h]
  int v45; // [rsp+C0h] [rbp-1h]
  LONG v46; // [rsp+C4h] [rbp+3h]
  int v47; // [rsp+C8h] [rbp+7h]
  LONG v48; // [rsp+CCh] [rbp+Bh]

  v5 = *((_DWORD *)a1 + 24);
  v6 = (int)a3;
  v7 = *((_DWORD *)a1 + 22);
  v8 = (EPATHOBJ *)a2;
  v9 = *((_QWORD *)a1 + 10);
  v10 = *((_QWORD *)a1 + 79);
  v11 = 0LL;
  v35 = a2;
  v31 = v10;
  v34 = 0LL;
  v32 = 0LL;
  v28 = v7;
  v33 = v9;
  v29 = 0LL;
  switch ( v5 )
  {
    case 1:
      v12 = -(a5 != 0);
      goto LABEL_7;
    case 2:
      v25 = (16 * a5) | a5;
      goto LABEL_24;
    case 3:
      v25 = a5;
LABEL_24:
      v26 = (v25 << 8) | v25;
LABEL_25:
      v12 = (v26 << 16) | v26;
      goto LABEL_7;
    case 4:
      v26 = a5;
      goto LABEL_25;
  }
  if ( (unsigned int)(v5 - 5) > 1 )
    return;
  v12 = a5;
LABEL_7:
  if ( a4 && a4->iDComplexity == 1 )
  {
    v11 = &v36;
    rclBounds = a4->rclBounds;
    left = a4->rclBounds.left;
    v41 = left;
    v46 = left;
    top = a4->rclBounds.top;
    v44 = 1 - top;
    v47 = 1 - top;
    v37 = top;
    right = a4->rclBounds.right;
    v43 = right;
    v48 = right;
    bottom = a4->rclBounds.bottom;
    v42 = 1 - bottom;
    v45 = 1 - bottom;
    v10 = v31;
    v36 = rclBounds;
    v39 = bottom;
  }
  v13 = v5 - 1;
  if ( a2 )
  {
    v17 = a2[1];
    a2->fl &= ~8u;
    *(_QWORD *)(*(_QWORD *)&v17 + 80LL) = *(_QWORD *)(*(_QWORD *)&v17 + 32LL);
    do
    {
      v18 = EPATHOBJ::bEnum(v8, &v29);
      v30 = v18;
      count = v29.count;
      v20 = v29.count;
      if ( !v29.count )
        break;
      flags = v29.flags;
      pptfx = v29.pptfx;
      if ( (v29.flags & 1) != 0 )
      {
        v23 = v29.pptfx + 1;
        v34 = *v29.pptfx;
        v20 = v29.count - 1;
        LODWORD(v24) = v29.pptfx;
      }
      else
      {
        v24 = &v32;
        v23 = v29.pptfx;
      }
      if ( v20 )
      {
        v27 = v33;
        do
        {
          vDrawLine((_DWORD)v24, (_DWORD)v23, v27, v28, v12, (__int64)v11, v13, v31);
          LODWORD(v24) = (_DWORD)v23++;
          --v20;
        }
        while ( v20 );
        pptfx = v29.pptfx;
        count = v29.count;
        flags = v29.flags;
        v8 = (EPATHOBJ *)v35;
        v18 = v30;
      }
      v32 = pptfx[count - 1];
      if ( (flags & 8) != 0 )
        vDrawLine((unsigned int)&v32, (unsigned int)&v34, v33, v28, v12, (__int64)v11, v13, v31);
    }
    while ( v18 );
  }
  else
  {
    vDrawLine(v6, v6 + 8, v9, v7, v12, (__int64)v11, v13, v10);
  }
}
