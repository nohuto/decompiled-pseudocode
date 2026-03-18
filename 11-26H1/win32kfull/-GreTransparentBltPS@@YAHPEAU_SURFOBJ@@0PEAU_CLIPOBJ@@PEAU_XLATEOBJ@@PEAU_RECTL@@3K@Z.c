/*
 * XREFs of ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1400601D4
 * Callers:
 *     EngTransparentBlt @ 0x1400609D0 (EngTransparentBlt.c)
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A9580 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1400E4488 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?vTransparentScan@@YAXPEAU_SURFOBJ@@0KKPEAU_XLATEOBJ@@PEAU_RECTL@@K@Z @ 0x140320558 (-vTransparentScan@@YAXPEAU_SURFOBJ@@0KKPEAU_XLATEOBJ@@PEAU_RECTL@@K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall GreTransparentBltPS(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        unsigned int a7)
{
  struct _RECTL *v9; // r12
  struct _RECTL *v10; // r14
  unsigned __int64 iDComplexity; // rcx
  int v13; // ebx
  RECTL rclBounds; // xmm0
  struct Gre::Base::SESSION_GLOBALS *v15; // rax
  unsigned int i; // esi
  LONG left; // r11d
  LONG v18; // edx
  LONG right; // ecx
  LONG v20; // r8d
  LONG top; // r10d
  LONG v22; // ecx
  LONG bottom; // r9d
  LONG v24; // edi
  unsigned int v25; // r12d
  unsigned int v26; // r14d
  int v27; // edi
  int v28; // eax
  struct _RECTL v29; // [rsp+50h] [rbp-218h] BYREF
  unsigned int v30; // [rsp+60h] [rbp-208h]
  int v31; // [rsp+64h] [rbp-204h]
  struct _XLATEOBJ *v32; // [rsp+68h] [rbp-200h]
  struct _SURFOBJ *v33; // [rsp+70h] [rbp-1F8h]
  struct _SURFOBJ *v34; // [rsp+78h] [rbp-1F0h]
  struct _XLATEOBJ *v35; // [rsp+80h] [rbp-1E8h]
  struct _RECTL *v36; // [rsp+88h] [rbp-1E0h]
  struct _RECTL *v37; // [rsp+90h] [rbp-1D8h]
  __int64 v38; // [rsp+98h] [rbp-1D0h] BYREF
  char v39; // [rsp+A0h] [rbp-1C8h]
  int v40; // [rsp+A4h] [rbp-1C4h]
  struct _RECTL *v41; // [rsp+A8h] [rbp-1C0h]
  struct _SURFOBJ *v42; // [rsp+B0h] [rbp-1B8h]
  struct _SURFOBJ *v43; // [rsp+B8h] [rbp-1B0h]
  struct _CLIPOBJ *v44; // [rsp+C0h] [rbp-1A8h]
  struct _RECTL *v45; // [rsp+C8h] [rbp-1A0h]
  unsigned int v46; // [rsp+D0h] [rbp-198h] BYREF
  _OWORD v47[20]; // [rsp+D4h] [rbp-194h]

  v32 = a4;
  v34 = a2;
  v33 = a1;
  v9 = a6;
  v37 = a6;
  v10 = a5;
  v36 = a5;
  v42 = a1;
  v43 = a2;
  v44 = a3;
  v35 = a4;
  v45 = a5;
  v41 = a6;
  v38 = 0LL;
  v39 = 0;
  v40 = 0;
  memset_0(&v46, 0, 0x144uLL);
  if ( !a3 || (iDComplexity = a3->iDComplexity) == 0 )
  {
    rclBounds = *a5;
    goto LABEL_9;
  }
  iDComplexity = (unsigned int)(iDComplexity - 1);
  if ( !(_DWORD)iDComplexity )
  {
    rclBounds = a3->rclBounds;
LABEL_9:
    v13 = 0;
    v46 = 1;
    v47[0] = rclBounds;
    goto LABEL_10;
  }
  if ( (_DWORD)iDComplexity != 2 )
  {
    SURFMEM::~SURFMEM((SURFMEM *)&v38);
    return 0LL;
  }
  v13 = 1;
  XCLIPOBJ::cEnumStart((XCLIPOBJ *)a3, 0, 0, 4u, 0x14u);
LABEL_10:
  v15 = Gre::Base::Globals((Gre::Base *)iDComplexity);
  if ( !a4 )
  {
    v32 = (struct _XLATEOBJ *)((char *)v15 + 4664);
    v35 = (struct _XLATEOBJ *)((char *)v15 + 4664);
  }
  if ( !v13 )
    goto LABEL_14;
  do
  {
    v13 = XCLIPOBJ::bEnum((XCLIPOBJ *)a3, 0x144u, &v46, 0LL);
LABEL_14:
    for ( i = 0; i < v46; ++i )
    {
      left = v10->left;
      v18 = v47[i];
      if ( v18 < v10->left )
      {
        LODWORD(v47[i]) = left;
        v18 = left;
      }
      right = a5->right;
      v20 = DWORD2(v47[i]);
      if ( v20 > right )
      {
        DWORD2(v47[i]) = right;
        v20 = right;
      }
      top = a5->top;
      v22 = DWORD1(v47[i]);
      if ( v22 < top )
      {
        DWORD1(v47[i]) = top;
        v22 = top;
      }
      bottom = a5->bottom;
      v24 = HIDWORD(v47[i]);
      if ( v24 > bottom )
      {
        HIDWORD(v47[i]) = bottom;
        v24 = bottom;
      }
      if ( v22 < v24 && v18 < v20 )
      {
        v29.left = v18;
        v29.top = v22;
        v29.right = v20;
        v29.bottom = v22 + 1;
        v25 = v18 + v9->left - left;
        v30 = v25;
        v26 = v22 + v41->top - top;
        v27 = v24 - v22;
        while ( 1 )
        {
          v28 = v27--;
          v31 = v27;
          if ( !v28 )
            break;
          vTransparentScan(v33, v34, v25, v26++, v32, &v29, a7);
          ++v29.top;
          ++v29.bottom;
        }
        v10 = v36;
        v9 = v37;
      }
    }
  }
  while ( v13 );
  SURFMEM::~SURFMEM((SURFMEM *)&v38);
  return 1LL;
}
