/*
 * XREFs of ?vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z @ 0x1401DEF40
 * Callers:
 *     ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1401DECD8 (-bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z.c)
 * Callees:
 *     ?vEdgeDDA@@YAXPEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z @ 0x1401DF224 (-vEdgeDDA@@YAXPEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z.c)
 *     ?vHorizontalLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z @ 0x1401DF318 (-vHorizontalLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall vCalculateLine(struct _TRIVERTEX *a1, struct _TRIVERTEX *a2, struct _TRIANGLEDATA *a3)
{
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r13
  LONG y; // r11d
  LONG v10; // eax
  LONG x; // edi
  LONG v12; // r9d
  int v13; // r10d
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  LONG v19; // ecx
  LONG v20; // eax
  int v21; // ecx
  int v22; // edi
  int v23; // r9d
  __int64 v24; // rcx
  LONG v25; // [rsp+20h] [rbp-79h] BYREF
  LONG v26; // [rsp+24h] [rbp-75h]
  int v27; // [rsp+28h] [rbp-71h]
  int v28; // [rsp+2Ch] [rbp-6Dh]
  __int64 v29; // [rsp+30h] [rbp-69h]
  __int64 v30; // [rsp+38h] [rbp-61h]
  int v31; // [rsp+40h] [rbp-59h]
  int v32; // [rsp+44h] [rbp-55h]
  int v33; // [rsp+48h] [rbp-51h]
  LONG v34; // [rsp+4Ch] [rbp-4Dh]
  int v35; // [rsp+50h] [rbp-49h]
  int v36; // [rsp+54h] [rbp-45h]
  int v37; // [rsp+58h] [rbp-41h]
  __int64 v38; // [rsp+60h] [rbp-39h]
  __int64 v39; // [rsp+68h] [rbp-31h]
  __int64 v40; // [rsp+70h] [rbp-29h]
  __int64 v41; // [rsp+78h] [rbp-21h]
  __int64 v42; // [rsp+80h] [rbp-19h]
  __int64 v43; // [rsp+88h] [rbp-11h]
  __int64 v44; // [rsp+90h] [rbp-9h]
  __int64 v45; // [rsp+98h] [rbp-1h]
  __int64 v46; // [rsp+A0h] [rbp+7h]
  __int64 v47; // [rsp+100h] [rbp+67h]
  __int64 v48; // [rsp+108h] [rbp+6Fh]
  __int64 v49; // [rsp+110h] [rbp+77h]
  __int64 v50; // [rsp+118h] [rbp+7Fh]

  memset_0(&v25, 0, 0x80uLL);
  v6 = *((_QWORD *)a3 + 6);
  v7 = *((_QWORD *)a3 + 7);
  v8 = *((_QWORD *)a3 + 8);
  y = a1->y;
  v48 = *((_QWORD *)a3 + 9);
  v45 = v48;
  v10 = a2->y;
  v42 = v6;
  v43 = v7;
  v44 = v8;
  if ( v10 < y )
  {
    x = a2->x;
    v12 = a1->x;
    v13 = y - v10;
    v28 = y - v10;
    y = v10;
    v26 = v10;
  }
  else
  {
    x = a1->x;
    v12 = a2->x;
    v13 = v10 - y;
    v28 = v10 - y;
    v26 = y;
  }
  v14 = v12 - x;
  v47 = *((_QWORD *)a3 + 2);
  v15 = x - *((_DWORD *)a3 + 34);
  v18 = y - *((_DWORD *)a3 + 35);
  v25 = x;
  v27 = v14;
  v49 = *((_QWORD *)a3 + 3);
  v38 = *((_QWORD *)a3 + 10) + v6 * v18 + v47 * v15;
  v50 = *((_QWORD *)a3 + 4);
  v39 = *((_QWORD *)a3 + 11) + v7 * v18 + v15 * v49;
  v16 = *((_QWORD *)a3 + 12) + v8 * v18 + v15 * v50;
  v46 = *((_QWORD *)a3 + 5);
  v40 = v16;
  v17 = v48 * v18 + v15 * v46;
  LODWORD(v18) = 0;
  v41 = *((_QWORD *)a3 + 13) + v17;
  if ( !v13 )
  {
    vHorizontalLine(a1, a2, a3, (struct _TRIDDA *)&v25);
    return;
  }
  v35 = 1;
  v19 = y + v13;
  v36 = y - *((_DWORD *)a3 + 28);
  v20 = *((_DWORD *)a3 + 3);
  v37 = v13;
  if ( y <= v20 && v19 >= *((_DWORD *)a3 + 1) )
  {
    if ( v19 > v20 )
      v37 = v20 - y;
    v34 = y;
    v29 = v13 * (x + 1LL) - v14 * (__int64)y - 1;
    if ( v14 > 0 )
    {
      LODWORD(v30) = v14 / v13;
      v21 = v13 * (v14 / v13);
      v22 = v14 / v13;
    }
    else
    {
      if ( v14 >= 0 )
      {
        v22 = 0;
        v30 = 0LL;
        v23 = 0;
        goto LABEL_12;
      }
      v21 = -v14;
      v27 = -v14;
      v22 = ~((-v14 - 1) / v13);
      LODWORD(v30) = v22;
      v14 = v13 * ((-v14 - 1) / v13 + 1);
    }
    v23 = v14 - v21;
    HIDWORD(v30) = v23;
LABEL_12:
    v24 = y * v23 + v29;
    if ( v24 <= 0 )
    {
      if ( v24 < 0 )
        v18 = ~(~v24 / v13);
    }
    else
    {
      LODWORD(v18) = v24 / v13;
    }
    v33 = y * v22 + v18;
    v31 = v24 - v13 * v18;
    v32 = v13 - v31 - 1;
    v42 = v47 * v22 + v6;
    v43 = v49 * v22 + v7;
    v44 = v50 * v22 + v8;
    v45 = v46 * v22 + v48;
    vEdgeDDA(a3, (struct _TRIDDA *)&v25);
  }
}
