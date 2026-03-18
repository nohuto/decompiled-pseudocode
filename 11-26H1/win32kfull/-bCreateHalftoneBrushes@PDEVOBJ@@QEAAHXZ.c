/*
 * XREFs of ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1401DB6A8
 * Callers:
 *     PDEVOBJ_bCreateHalftoneBrushes @ 0x1401DB690 (PDEVOBJ_bCreateHalftoneBrushes.c)
 * Callees:
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x14018087C (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1401829CC (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     HT_CreateStandardMonoPattern @ 0x1401DB8CC (HT_CreateStandardMonoPattern.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1401DC3C8 (-SETFLAG@@YAXHAECKK@Z.c)
 */

__int64 __fastcall PDEVOBJ::bCreateHalftoneBrushes(PDEVOBJ *this)
{
  Gre::Base *v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rsi
  void *v6; // rax
  int v7; // r15d
  __int64 v8; // r8
  void *v10; // rax
  struct Gre::Base::SESSION_GLOBALS *v11; // r14
  __int64 v12; // rsi
  __int64 v13; // [rsp+58h] [rbp-19h] BYREF
  char v14; // [rsp+60h] [rbp-11h]
  int v15; // [rsp+64h] [rbp-Dh]
  __int16 v16; // [rsp+68h] [rbp-9h] BYREF
  char v17; // [rsp+6Ah] [rbp-7h]
  char v18; // [rsp+6Bh] [rbp-6h]
  __int16 v19; // [rsp+6Ch] [rbp-5h]
  __int64 v20; // [rsp+6Eh] [rbp-3h]
  __int16 v21; // [rsp+76h] [rbp+5h]
  __int64 v22; // [rsp+78h] [rbp+7h]
  _DWORD v23[4]; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v24; // [rsp+90h] [rbp+1Fh]
  __int64 v25; // [rsp+98h] [rbp+27h]

  v20 = 0LL;
  v21 = 0;
  if ( PDEVOBJ::pDevHTInfo(this) || (unsigned int)PDEVOBJ::bEnableHalftone(this, 0LL) )
  {
    LODWORD(v3) = 0;
    v4 = 0LL;
    v5 = 1456LL;
    while ( v5 < 1504 )
    {
      v16 = 1;
      v18 = HTStdPatIndex[v4];
      v17 = 4;
      v19 = 3848;
      v22 = 0LL;
      v6 = PDEVOBJ::pDevHTInfo(this);
      v7 = HT_CreateStandardMonoPattern(v6, &v16);
      if ( v7 <= 0 )
        break;
      v23[1] = WORD1(v20);
      v23[2] = WORD2(v20);
      v23[3] = 0;
      v25 = 1LL;
      v23[0] = 1;
      v24 = 0LL;
      v13 = 0LL;
      v14 = 0;
      v15 = 0;
      SURFMEM::bCreateDIB((SURFMEM *)&v13, (struct _DEVBITMAPINFO *)v23, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0);
      if ( !v13 )
        goto LABEL_7;
      v14 |= 1u;
      LOBYTE(v8) = 5;
      HmgSetOwner(*(_QWORD *)(v13 + 32), 0LL, v8);
      LODWORD(v3) = v3 + 1;
      ++v4;
      *(_QWORD *)(v5 + *(_QWORD *)this) = *(_QWORD *)(v13 + 32);
      v5 += 8LL;
      v22 = *(_QWORD *)(v13 + 72);
      v10 = PDEVOBJ::pDevHTInfo(this);
      if ( (unsigned int)HT_CreateStandardMonoPattern(v10, &v16) != v7 )
      {
LABEL_7:
        SURFMEM::~SURFMEM((SURFMEM *)&v13);
        break;
      }
      SURFMEM::~SURFMEM((SURFMEM *)&v13);
    }
    if ( (int)v3 >= 6 )
    {
      SETFLAG(1, (volatile unsigned int *)(*(_QWORD *)this + 40LL), 0x100u);
      return 1LL;
    }
    v3 = (int)v3;
    v11 = Gre::Base::Globals(v2);
    if ( (int)v3 > 0 )
    {
      v12 = 8LL * (int)v3 + 1456;
      do
      {
        v12 -= 8LL;
        --v3;
        bDeleteSurface(v11, *(HSURF *)(v12 + *(_QWORD *)this));
      }
      while ( v3 > 0 );
    }
  }
  return 0LL;
}
