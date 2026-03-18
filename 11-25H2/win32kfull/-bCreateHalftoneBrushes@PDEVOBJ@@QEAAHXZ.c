/*
 * XREFs of ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1401003F4
 * Callers:
 *     PDEVOBJ_bCreateHalftoneBrushesWrap @ 0x140101740 (PDEVOBJ_bCreateHalftoneBrushesWrap.c)
 * Callees:
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1400FEEE8 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1400FEFA4 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     HT_CreateStandardMonoPattern @ 0x140100614 (HT_CreateStandardMonoPattern.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x140101758 (-SETFLAG@@YAXHAECKK@Z.c)
 */

__int64 __fastcall PDEVOBJ::bCreateHalftoneBrushes(PDEVOBJ *this)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rsi
  void *v6; // rax
  int v7; // r15d
  __int64 v8; // r8
  void *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // [rsp+68h] [rbp-19h] BYREF
  char v12; // [rsp+70h] [rbp-11h]
  int v13; // [rsp+74h] [rbp-Dh]
  __int16 v14; // [rsp+78h] [rbp-9h] BYREF
  char v15; // [rsp+7Ah] [rbp-7h]
  char v16; // [rsp+7Bh] [rbp-6h]
  __int16 v17; // [rsp+7Ch] [rbp-5h]
  __int64 v18; // [rsp+7Eh] [rbp-3h]
  __int16 v19; // [rsp+86h] [rbp+5h]
  __int64 v20; // [rsp+88h] [rbp+7h]
  _DWORD v21[4]; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v22; // [rsp+A0h] [rbp+1Fh]
  __int64 v23; // [rsp+A8h] [rbp+27h]

  v18 = 0LL;
  v19 = 0;
  if ( !PDEVOBJ::pDevHTInfo(this) && !(unsigned int)PDEVOBJ::bEnableHalftone(this, 0LL) )
    return 0LL;
  LODWORD(v3) = 0;
  v4 = 0LL;
  v5 = 1456LL;
  while ( v5 < 1504 )
  {
    v14 = 1;
    v16 = HTStdPatIndex[v4];
    v15 = 4;
    v17 = 3848;
    v20 = 0LL;
    v6 = PDEVOBJ::pDevHTInfo(this);
    v7 = HT_CreateStandardMonoPattern(v6, &v14);
    if ( v7 <= 0 )
      break;
    v21[1] = WORD1(v18);
    v21[2] = WORD2(v18);
    v21[3] = 0;
    v23 = 1LL;
    v21[0] = 1;
    v22 = 0LL;
    v11 = 0LL;
    v12 = 0;
    v13 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v11, (struct _DEVBITMAPINFO *)v21, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v11 )
      goto LABEL_8;
    v12 |= 1u;
    LOBYTE(v8) = 5;
    HmgSetOwner(*(_QWORD *)(v11 + 32), 0LL, v8);
    LODWORD(v3) = v3 + 1;
    ++v4;
    *(_QWORD *)(v5 + *(_QWORD *)this) = *(_QWORD *)(v11 + 32);
    v5 += 8LL;
    v20 = *(_QWORD *)(v11 + 72);
    v9 = PDEVOBJ::pDevHTInfo(this);
    if ( (unsigned int)HT_CreateStandardMonoPattern(v9, &v14) != v7 )
    {
LABEL_8:
      SURFMEM::~SURFMEM((SURFMEM *)&v11);
      break;
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v11);
  }
  if ( (int)v3 < 6 )
  {
    v3 = (int)v3;
    if ( (int)v3 > 0 )
    {
      v10 = 8LL * (int)v3 + 1456;
      do
      {
        v10 -= 8LL;
        --v3;
        bDeleteSurface(*(_QWORD *)(v10 + *(_QWORD *)this));
      }
      while ( v3 > 0 );
    }
    return 0LL;
  }
  SETFLAG(1, (volatile unsigned int *)(*(_QWORD *)this + 40LL), 0x100u);
  return 1LL;
}
