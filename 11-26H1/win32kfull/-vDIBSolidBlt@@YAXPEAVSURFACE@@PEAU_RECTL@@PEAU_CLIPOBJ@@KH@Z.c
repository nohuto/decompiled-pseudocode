/*
 * XREFs of ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1400DC674
 * Callers:
 *     EngEraseSurface @ 0x1400A14B0 (EngEraseSurface.c)
 *     ??1FRINGERECT@@QEAA@XZ @ 0x1400DB344 (--1FRINGERECT@@QEAA@XZ.c)
 *     EngBitBlt @ 0x1400DBF60 (EngBitBlt.c)
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A9580 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1400E4488 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall vDIBSolidBlt(struct SURFACE *a1, struct _RECTL *a2, struct _CLIPOBJ *a3, int a4, int a5)
{
  int v8; // r15d
  int v9; // esi
  __int64 v10; // rcx
  int v11; // edx
  void (__fastcall *v12)(struct _RECTL *, unsigned int, unsigned __int8 *, int, unsigned int, unsigned int); // rdi
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned __int8 *v16; // r14
  int v17; // r11d
  unsigned int i; // esi
  struct _RECTL *v19; // rcx
  LONG left; // eax
  LONG v21; // r10d
  LONG right; // eax
  LONG v23; // r9d
  LONG top; // eax
  LONG v25; // r8d
  LONG bottom; // edx
  LONG v27; // eax
  int v28; // [rsp+40h] [rbp-1E8h]
  int v29; // [rsp+44h] [rbp-1E4h]
  unsigned int v32; // [rsp+90h] [rbp-198h] BYREF
  _OWORD v33[20]; // [rsp+94h] [rbp-194h] BYREF

  v8 = 0;
  v9 = 0;
  memset_0(&v32, 0, 0x144uLL);
  v10 = *((unsigned int *)a1 + 24);
  if ( (unsigned int)(v10 - 1) > 5 )
    return;
  v11 = dword_14035EBA0[v10];
  v28 = v11;
  if ( a5 )
  {
    v12 = vSolidXorRect24;
    if ( (_DWORD)v10 != 5 )
      v12 = vSolidXorRect1;
  }
  else
  {
    v12 = vSolidFillRect1;
    if ( (_DWORD)v10 == 5 )
      v12 = vSolidFillRect24;
  }
  v13 = v10 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 != 1 )
          goto LABEL_9;
        goto LABEL_45;
      }
    }
    else
    {
      LOBYTE(a4) = a4 & 0xF | (16 * (a4 & 0xF));
    }
    a4 = (unsigned __int8)a4 | ((unsigned __int8)a4 << 8);
LABEL_45:
    a4 = (a4 << 16) ^ (unsigned __int16)a4;
    goto LABEL_9;
  }
  a4 &= 1u;
  if ( a4 )
    a4 = -1;
LABEL_9:
  if ( a3 )
  {
    if ( a3->iDComplexity == 1 )
    {
      v9 = 1;
      v32 = 1;
      v33[0] = a3->rclBounds;
    }
    else if ( a3->iDComplexity == 3 )
    {
      v9 = 1;
      v8 = 1;
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a3, 0, 0, 4u, 0x14u);
      v11 = v28;
    }
  }
  v16 = (unsigned __int8 *)*((_QWORD *)a1 + 10);
  v17 = *((_DWORD *)a1 + 22);
  v29 = v17;
  if ( *((_QWORD *)a1 + 79) )
  {
    v12 = vSolidFillRectWithCallback;
    v16 = (unsigned __int8 *)*((_QWORD *)a1 + 79);
  }
  if ( v9 )
  {
    if ( !v8 )
      goto LABEL_29;
    do
    {
      v8 = XCLIPOBJ::bEnum((XCLIPOBJ *)a3, 0x144u, &v32, 0LL);
      v17 = v29;
LABEL_29:
      for ( i = 0; i < v32; ++i )
      {
        v19 = (struct _RECTL *)&v33[i];
        left = a2->left;
        v21 = v19->left;
        if ( v19->left < a2->left )
        {
          v19->left = left;
          v21 = left;
        }
        right = a2->right;
        v23 = v19->right;
        if ( v23 > right )
        {
          v19->right = right;
          v23 = right;
        }
        top = a2->top;
        v25 = v19->top;
        if ( v25 < top )
        {
          v19->top = top;
          v25 = top;
        }
        bottom = a2->bottom;
        v27 = v19->bottom;
        if ( v27 > bottom )
        {
          v19->bottom = bottom;
          v27 = bottom;
        }
        if ( v25 < v27 && v21 < v23 )
        {
          v12(v19, 1u, v16, v17, a4, v28);
          v17 = v29;
        }
      }
    }
    while ( v8 );
  }
  else
  {
    v12(a2, 1u, v16, v17, a4, v11);
  }
}
