/*
 * XREFs of ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1400A0D50
 * Callers:
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x14009FFA4 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x14009EFCC (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     ?vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x1400A10E8 (-vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z.c)
 *     EngEraseSurface @ 0x1400A14B0 (EngEraseSurface.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall vProcessCursorShape(
        Gre::Base *a1,
        int a2,
        int a3,
        struct _SURFOBJ *a4,
        struct _SURFOBJ *psoSrc,
        struct PALETTE *a6,
        struct _RECTL *a7,
        HBITMAP *a8)
{
  HBITMAP v11; // rcx
  LONG v12; // r13d
  struct _XLATEOBJ *v13; // rbx
  LONG v14; // eax
  LONG cx; // ecx
  LONG v16; // edx
  HDEV hdev; // rax
  struct _SURFOBJ *v18; // r15
  Gre::Base *v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r8
  SURFOBJ *v23; // rsi
  struct _RECTL *v24; // rdi
  LONG v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // r8
  POINTL pptlSrc; // [rsp+68h] [rbp-89h] BYREF
  __int64 v29; // [rsp+70h] [rbp-81h] BYREF
  char v30; // [rsp+78h] [rbp-79h]
  int v31; // [rsp+7Ch] [rbp-75h]
  LONG v32; // [rsp+80h] [rbp-71h]
  int v33; // [rsp+84h] [rbp-6Dh]
  struct _XLATEOBJ *v34; // [rsp+88h] [rbp-69h] BYREF
  XLATEOBJ *pxlo; // [rsp+90h] [rbp-61h] BYREF
  struct _RECTL *v36; // [rsp+98h] [rbp-59h]
  _DWORD v37[4]; // [rsp+A0h] [rbp-51h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-41h]
  int v39; // [rsp+B8h] [rbp-39h]
  int v40; // [rsp+BCh] [rbp-35h]
  HBITMAP *v41; // [rsp+C0h] [rbp-31h]
  RECTL prcl; // [rsp+C8h] [rbp-29h] BYREF
  RECTL v43; // [rsp+D8h] [rbp-19h] BYREF
  RECTL prclDest; // [rsp+E8h] [rbp-9h] BYREF

  v36 = a7;
  v41 = a8;
  *(_QWORD *)&v43.left = a4;
  v33 = a2;
  pptlSrc = (POINTL)Gre::Base::Globals(a1);
  v29 = 0LL;
  v11 = *a8;
  v30 = 0;
  v12 = a2 != 0 ? 3 : 0;
  v31 = 0;
  v37[3] = 0;
  v40 = 0;
  *(_QWORD *)&prcl.right = 0LL;
  prclDest = 0LL;
  if ( v11 )
  {
    GreDeleteObject(v11);
    *a8 = 0LL;
  }
  vCalculateCursorBounds(a4, 0LL, a7);
  v13 = 0LL;
  v14 = a4->sizlBitmap.cy / 2;
  cx = a4->sizlBitmap.cx;
  v32 = v14;
  v16 = v14;
  prcl.bottom = v14;
  *(_QWORD *)&prcl.left = 0LL;
  prcl.right = cx;
  if ( a2 )
  {
    cx += 9;
    v16 = v14 + 7;
    prcl.right = cx;
    prcl.bottom = v14 + 7;
  }
  v37[1] = cx;
  v39 = 1;
  v37[2] = v16;
  v37[0] = 6;
  if ( psoSrc && (hdev = psoSrc[1].hdev) != 0LL )
    v38 = *(_QWORD *)hdev;
  else
    v38 = 0LL;
  if ( SURFMEM::bCreateDIB((SURFMEM *)&v29, (struct _DEVBITMAPINFO *)v37, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0) )
  {
    pxlo = 0LL;
    v34 = 0LL;
    v18 = (struct _SURFOBJ *)((v29 + 24) & -(__int64)(v29 != 0));
    v19 = *(Gre::Base **)(*(_QWORD *)&pptlSrc + 3872LL);
    v20 = *(_QWORD *)(*(_QWORD *)&pptlSrc + 3880LL);
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         (Gre::Base *)&pxlo,
                         0LL,
                         0,
                         *(_QWORD *)(*(_QWORD *)&pptlSrc + 3904LL),
                         v20,
                         (__int64)v19,
                         v19,
                         0,
                         0xFFFFFF,
                         0,
                         0) )
    {
      if ( !psoSrc )
      {
LABEL_13:
        v23 = *(SURFOBJ **)&v43.left;
        pptlSrc = 0LL;
        if ( psoSrc )
        {
          prclDest.right = *(_DWORD *)(*(_QWORD *)&v43.left + 32LL);
          prclDest.bottom = v32;
          EngCopyBits(v18, psoSrc, 0LL, v13, &prclDest, &pptlSrc);
          v24 = v36;
          vCalculateCursorBounds(v23, v18, v36);
          if ( (v13->flXlate & 1) != 0 && psoSrc->iBitmapFormat == 6 )
          {
            EngEraseSurface(v18, &prcl, 0);
            v43.right = v12 + v24->right;
            v25 = v12 + v24->bottom;
            v43.left = v12;
            v43.bottom = v25;
            v43.top = v12;
            EngCopyBits(v18, psoSrc, 0LL, 0LL, &v43, &pptlSrc);
          }
        }
        else
        {
          v24 = v36;
        }
        if ( v33 )
        {
          EngEraseSurface(v18, &prcl, 0);
          a3 = bShadowAlphaCursor(v18, v23, psoSrc, pxlo, v13, v24, a3);
        }
        if ( a3 )
        {
          LOBYTE(v22) = 5;
          v30 |= 1u;
          HmgSetOwner(*(_QWORD *)(v29 + 32), 0LL, v22);
          *v41 = *(HBITMAP *)(v29 + 32);
        }
        goto LABEL_21;
      }
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           (Gre::Base *)&v34,
                           0LL,
                           0,
                           (__int64)a6,
                           v20,
                           (__int64)v19,
                           v19,
                           0,
                           0,
                           0,
                           0) )
      {
        v13 = v34;
        goto LABEL_13;
      }
    }
LABEL_21:
    EXLATEOBJ::vAltUnlock((Gre::Base **)&v34, v21, v22);
    EXLATEOBJ::vAltUnlock((Gre::Base **)&pxlo, v26, v27);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v29);
}
