/*
 * XREFs of ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1401E15F8
 * Callers:
 *     EngBitBlt @ 0x1400DBF60 (EngBitBlt.c)
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A9580 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1400E4488 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall vDIBPatBlt(
        struct SURFACE *a1,
        struct _CLIPOBJ *a2,
        struct _RECTL *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6)
{
  int v9; // edi
  int v10; // r15d
  __int64 v11; // rdx
  void (__fastcall *v12)(_QWORD); // r12
  int v13; // r8d
  _QWORD *pvRbrush; // rcx
  unsigned int i; // ebx
  LONG *v16; // rdx
  LONG left; // eax
  LONG v18; // r10d
  LONG right; // eax
  LONG v20; // r9d
  LONG top; // eax
  LONG v22; // ecx
  LONG bottom; // r8d
  LONG v24; // eax
  _QWORD v26[2]; // [rsp+40h] [rbp-208h] BYREF
  int v27; // [rsp+50h] [rbp-1F8h]
  int v28; // [rsp+54h] [rbp-1F4h]
  struct _RECTL *v29; // [rsp+58h] [rbp-1F0h]
  int v30; // [rsp+60h] [rbp-1E8h]
  LONG y; // [rsp+64h] [rbp-1E4h]
  int v32; // [rsp+68h] [rbp-1E0h]
  int v33; // [rsp+6Ch] [rbp-1DCh]
  int v34; // [rsp+70h] [rbp-1D8h]
  int v35; // [rsp+74h] [rbp-1D4h]
  struct _POINTL *v36; // [rsp+78h] [rbp-1D0h]
  void (__fastcall *v37)(_QWORD); // [rsp+88h] [rbp-1C0h]
  struct _CLIPOBJ *v38; // [rsp+90h] [rbp-1B8h]
  struct _RECTL *v39; // [rsp+98h] [rbp-1B0h]
  unsigned int v40; // [rsp+B0h] [rbp-198h] BYREF
  _OWORD v41[20]; // [rsp+B4h] [rbp-194h] BYREF

  v36 = a5;
  v38 = a2;
  v39 = a3;
  v29 = 0LL;
  v35 = 0;
  memset_0(&v40, 0, 0x144uLL);
  v9 = 0;
  v10 = 0;
  v11 = *((unsigned int *)a1 + 24);
  v12 = (void (__fastcall *)(_QWORD))qword_14035AD40[3 * v11 + a6];
  v37 = v12;
  v13 = dword_140370F60[v11];
  v34 = v13;
  if ( a2 )
  {
    if ( a2->iDComplexity == 1 )
    {
      v10 = 1;
      v40 = 1;
      v41[0] = a2->rclBounds;
    }
    else if ( a2->iDComplexity == 3 )
    {
      v9 = 1;
      v10 = 1;
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a2, 0, 0, 4u, 0x14u);
      v13 = v34;
    }
  }
  v26[0] = *((_QWORD *)a1 + 10);
  v27 = *((_DWORD *)a1 + 22);
  pvRbrush = a4[1].pvRbrush;
  v26[1] = pvRbrush[4];
  v28 = *((_DWORD *)pvRbrush + 7);
  v32 = *((_DWORD *)pvRbrush + 5) * v13;
  v33 = *((_DWORD *)pvRbrush + 6);
  v30 = v36->x * v13;
  y = v36->y;
  if ( v10 )
  {
    if ( v9 )
      goto LABEL_24;
    while ( 1 )
    {
      for ( i = 0; i < v40; ++i )
      {
        v16 = (LONG *)&v41[i];
        left = a3->left;
        v18 = *v16;
        if ( *v16 < a3->left )
        {
          *v16 = left;
          v18 = left;
        }
        right = a3->right;
        v20 = v16[2];
        if ( v20 > right )
        {
          v16[2] = right;
          v20 = right;
        }
        top = a3->top;
        v22 = v16[1];
        if ( v22 < top )
        {
          v16[1] = top;
          v22 = top;
        }
        bottom = a3->bottom;
        v24 = v16[3];
        if ( v24 > bottom )
        {
          v16[3] = bottom;
          v24 = bottom;
        }
        if ( v22 < v24 && v18 < v20 )
        {
          v29 = (struct _RECTL *)&v41[i];
          v12(v26);
        }
      }
      if ( !v9 )
        break;
LABEL_24:
      v9 = XCLIPOBJ::bEnum((XCLIPOBJ *)a2, 0x144u, (char *)&v40, 0LL);
    }
  }
  else
  {
    v29 = a3;
    v12(v26);
  }
}
