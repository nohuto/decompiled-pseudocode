/*
 * XREFs of ?vSrcTranCopyS8D16NewUnsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@P6AX011JPEAPEAG@Z1@Z @ 0x1400F114C
 * Callers:
 *     ?vSrcTranCopyS8D16New@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@P6AX011JPEAPEAG@Z1@Z @ 0x1403011D4 (-vSrcTranCopyS8D16New@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@P6AX011JPEAPEAG@Z1@Z.c)
 * Callees:
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAUBLENDINFO@@H@Z @ 0x1400F25B4 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAUBLENDINFO@@H@Z.c)
 *     ulBlendPixelCT @ 0x1401427E0 (ulBlendPixelCT.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall vSrcTranCopyS8D16NewUnsafe(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11,
        void (*a12)(const unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, int, unsigned __int16 **),
        unsigned __int8 *a13)
{
  __int64 v14; // rsi
  int v16; // r12d
  const unsigned __int8 *v17; // rbx
  unsigned __int8 *v18; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r12
  int v23; // r14d
  unsigned __int8 *v24; // rdi
  const unsigned __int8 *v25; // r15
  __int64 v26; // rcx
  __int16 v27; // ax
  __int64 SessionState; // rax
  unsigned __int16 *v29; // [rsp+30h] [rbp-A8h] BYREF
  int v30; // [rsp+38h] [rbp-A0h]
  unsigned __int16 *v31; // [rsp+40h] [rbp-98h]
  unsigned __int8 *v32; // [rsp+48h] [rbp-90h]
  const unsigned __int8 *v33; // [rsp+50h] [rbp-88h]
  _BYTE v34[120]; // [rsp+60h] [rbp-78h] BYREF
  unsigned int v36; // [rsp+100h] [rbp+28h]
  int v37; // [rsp+108h] [rbp+30h]
  unsigned int v38; // [rsp+128h] [rbp+50h]

  v14 = a2;
  v16 = a6 - a5;
  v37 = a6 - a5;
  memset_0(v34, 0, 0x40uLL);
  v17 = &a1[v14];
  v18 = &a4[2 * a5];
  v36 = *(unsigned __int16 *)v18;
  v31 = (unsigned __int16 *)pvFillOpaqTableCT(2u, a9, v36, a11, (struct BLENDINFO *)v34, 1);
  while ( a8 )
  {
    v25 = v17;
    v33 = v17;
    v24 = v18;
    v32 = v18;
    v23 = v16;
    v30 = v16;
    v29 = 0LL;
    vCopyAlphaBuffer16bpp(v17, v18, a13, v16, &v29);
    while ( v23 )
    {
      v22 = *v25;
      if ( (_BYTE)v22 )
      {
        v38 = *v29;
        if ( v38 == v36 )
        {
          v26 = v31[v22];
          *(_WORD *)v24 = v26;
        }
        else
        {
          if ( (_BYTE)v22 == 114 )
          {
            v27 = a9;
          }
          else
          {
            SessionState = W32GetSessionState(v26, v20, v21);
            v27 = ulBlendPixelCT(v34, v38, *(_QWORD *)(*(_QWORD *)(SessionState + 96) + 13464LL) + 4 * v22);
          }
          *(_WORD *)v24 = v27;
        }
      }
      v30 = --v23;
      v24 += 2;
      v32 = v24;
      v33 = ++v25;
      ++v29;
    }
    --a8;
    v17 += a3;
    v18 += a7;
    v16 = v37;
  }
}
