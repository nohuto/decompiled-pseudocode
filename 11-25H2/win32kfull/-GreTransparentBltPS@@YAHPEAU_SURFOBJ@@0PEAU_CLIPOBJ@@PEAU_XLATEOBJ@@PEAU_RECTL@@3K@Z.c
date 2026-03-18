/*
 * XREFs of ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x140308588
 * Callers:
 *     EngTransparentBlt @ 0x1400F62F0 (EngTransparentBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x14006EF0C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400F596C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vTransparentScan@@YAXPEAU_SURFOBJ@@0KKPEAU_XLATEOBJ@@PEAU_RECTL@@K@Z @ 0x140309BE8 (-vTransparentScan@@YAXPEAU_SURFOBJ@@0KKPEAU_XLATEOBJ@@PEAU_RECTL@@K@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
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
  struct _XLATEOBJ *v7; // r13
  struct _RECTL *v9; // r14
  unsigned __int64 iDComplexity; // rcx
  int v12; // ebx
  RECTL rclBounds; // xmm0
  struct Gre::Base::SESSION_GLOBALS *v14; // rax
  unsigned int i; // esi
  LONG v16; // edx
  LONG left; // r8d
  LONG v18; // r9d
  LONG right; // ecx
  LONG v20; // ecx
  LONG top; // r10d
  LONG v22; // edi
  LONG bottom; // r11d
  unsigned int v24; // r11d
  unsigned int v25; // r14d
  int v26; // edi
  int v27; // eax
  unsigned int v28; // [rsp+44h] [rbp-214h]
  struct _RECTL v29; // [rsp+50h] [rbp-208h] BYREF
  int v30; // [rsp+60h] [rbp-1F8h]
  struct _SURFOBJ *v31; // [rsp+68h] [rbp-1F0h]
  struct _SURFOBJ *v32; // [rsp+70h] [rbp-1E8h]
  struct _XLATEOBJ *v33; // [rsp+78h] [rbp-1E0h]
  struct _RECTL *v34; // [rsp+80h] [rbp-1D8h]
  __int64 v35; // [rsp+88h] [rbp-1D0h] BYREF
  char v36; // [rsp+90h] [rbp-1C8h]
  int v37; // [rsp+94h] [rbp-1C4h]
  struct _SURFOBJ *v38; // [rsp+98h] [rbp-1C0h]
  struct _SURFOBJ *v39; // [rsp+A0h] [rbp-1B8h]
  struct _CLIPOBJ *v40; // [rsp+A8h] [rbp-1B0h]
  struct _RECTL *v41; // [rsp+B0h] [rbp-1A8h]
  unsigned int v42; // [rsp+C0h] [rbp-198h] BYREF
  _OWORD v43[20]; // [rsp+C4h] [rbp-194h]

  v7 = a4;
  v32 = a2;
  v31 = a1;
  v38 = a1;
  v39 = a2;
  v40 = a3;
  v33 = a4;
  v41 = a5;
  v9 = a6;
  v34 = a6;
  v35 = 0LL;
  v36 = 0;
  v37 = 0;
  memset_0(&v42, 0, 0x144uLL);
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
    v12 = 0;
    v42 = 1;
    v43[0] = rclBounds;
    goto LABEL_10;
  }
  if ( (_DWORD)iDComplexity != 2 )
  {
    SURFMEM::~SURFMEM((SURFMEM *)&v35);
    return 0LL;
  }
  v12 = 1;
  XCLIPOBJ::cEnumStart((XCLIPOBJ *)a3, 0, 0, 4u, 0x14u);
LABEL_10:
  v14 = Gre::Base::Globals((Gre::Base *)iDComplexity);
  if ( !v7 )
  {
    v7 = (struct _XLATEOBJ *)((char *)v14 + 4552);
    v33 = (struct _XLATEOBJ *)((char *)v14 + 4552);
  }
  if ( !v12 )
    goto LABEL_14;
  do
  {
    v12 = XCLIPOBJ::bEnum((XCLIPOBJ *)a3, 0x144u, (char *)&v42, 0LL);
LABEL_14:
    for ( i = 0; i < v42; ++i )
    {
      v16 = v43[i];
      left = a5->left;
      if ( v16 < a5->left )
      {
        LODWORD(v43[i]) = left;
        v16 = left;
      }
      v18 = DWORD2(v43[i]);
      right = a5->right;
      if ( v18 > right )
      {
        DWORD2(v43[i]) = right;
        v18 = right;
      }
      v20 = DWORD1(v43[i]);
      top = a5->top;
      if ( v20 < top )
      {
        DWORD1(v43[i]) = top;
        v20 = top;
      }
      v22 = HIDWORD(v43[i]);
      bottom = a5->bottom;
      if ( v22 > bottom )
      {
        HIDWORD(v43[i]) = bottom;
        v22 = bottom;
      }
      if ( v20 < v22 && v16 < v18 )
      {
        v29.left = v16;
        v29.top = v20;
        v29.right = v18;
        v29.bottom = v20 + 1;
        v24 = v16 + v9->left - left;
        v28 = v24;
        v25 = v20 + v9->top - top;
        v26 = v22 - v20;
        while ( 1 )
        {
          v27 = v26--;
          v30 = v26;
          if ( !v27 )
            break;
          vTransparentScan(v31, v32, v24, v25, v7, &v29, a7);
          v24 = v28;
          ++v25;
          ++v29.top;
          ++v29.bottom;
        }
        v9 = v34;
      }
    }
  }
  while ( v12 );
  SURFMEM::~SURFMEM((SURFMEM *)&v35);
  return 1LL;
}
