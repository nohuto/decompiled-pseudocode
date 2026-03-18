/*
 * XREFs of ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1400FEFA4
 * Callers:
 *     EngHTBlt @ 0x14006F20C (EngHTBlt.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1400F6C80 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1400FE4C0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1401003F4 (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 *     GreCreateHalftonePalette @ 0x1403107CC (GreCreateHalftonePalette.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1400FDB28 (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1400FF514 (HT_CreateDeviceHalftoneInfo.c)
 *     ?bEqualEntries@XEPALOBJ@@QEAAHV1@@Z @ 0x1401CDA8C (-bEqualEntries@XEPALOBJ@@QEAAHV1@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall PDEVOBJ::bEnableHalftone(PDEVOBJ *this, struct tagCOLORADJUSTMENT *a2)
{
  unsigned int v2; // esi
  __int64 v5; // r8
  __int64 v6; // r8
  __int16 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rdx
  struct _GRETHREAD *CurrentThread; // rdi
  __int64 v11; // r8
  Gre::Base *v12; // rcx
  struct Gre::Base::SESSION_GLOBALS *v13; // rax
  __int64 v14; // rdx
  signed __int32 v15; // ett
  __int64 v16; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _GRETHREAD *v20; // rdi
  __int64 v21; // xmm1_8
  signed __int32 v22; // ett
  _QWORD *v23; // [rsp+28h] [rbp-D8h] BYREF
  int v24; // [rsp+30h] [rbp-D0h]
  __int128 v25; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v26; // [rsp+48h] [rbp-B8h]
  int Src; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v28; // [rsp+64h] [rbp-9Ch]
  __int16 v29; // [rsp+66h] [rbp-9Ah]
  __int64 v30; // [rsp+68h] [rbp-98h]
  __int128 v31; // [rsp+70h] [rbp-90h]
  _WORD *v32; // [rsp+80h] [rbp-80h]
  _WORD *v33; // [rsp+88h] [rbp-78h]
  __int16 v34; // [rsp+90h] [rbp-70h]
  __int16 v35; // [rsp+92h] [rbp-6Eh]
  __int16 v36; // [rsp+94h] [rbp-6Ch]
  __int16 v37; // [rsp+96h] [rbp-6Ah]
  __int128 v38; // [rsp+98h] [rbp-68h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  __int16 v40; // [rsp+B0h] [rbp-50h]
  __int16 v41; // [rsp+B2h] [rbp-4Eh]
  __int16 v42; // [rsp+B4h] [rbp-4Ch]
  char v43; // [rsp+B6h] [rbp-4Ah]
  char v44; // [rsp+B7h] [rbp-49h]
  _WORD v45[8]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v46[24]; // [rsp+D0h] [rbp-30h] BYREF

  v2 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) != 0 )
    Gre::Base::Globals(this);
  v5 = *(_QWORD *)this;
  v24 = 0;
  v23 = 0LL;
  if ( !PALMEMOBJ::bCreateHTPalette((PALMEMOBJ *)&v23, *(_DWORD *)(v5 + 2360), (struct _GDIINFO *)(v5 + 2120)) )
    goto LABEL_21;
  v6 = *(_QWORD *)this;
  Src = 1213491459;
  v29 = 0;
  v39 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v38 = 0LL;
  v28 = *(_WORD *)(v6 + 2364);
  v43 = *(_BYTE *)(v6 + 2367);
  v44 = 0;
  if ( *(_DWORD *)(v6 + 2356) > 0x12u )
  {
    v7 = 17;
    v29 = 17;
  }
  else
  {
    v7 = *(unsigned __int8 *)(v6 + 2356);
    v29 = v7;
  }
  v8 = (unsigned int)(*(_DWORD *)(v6 + 2316) + *(_DWORD *)(v6 + 2312) + *(_DWORD *)(v6 + 2320));
  v9 = (unsigned int)((int)v8 / 3);
  v34 = (int)v8 / 3;
  v40 = *(_WORD *)(v6 + 2312);
  v41 = *(_WORD *)(v6 + 2316);
  v42 = *(_WORD *)(v6 + 2320);
  v30 = 0LL;
  v31 = 0LL;
  if ( v7 == 18 )
  {
    v8 = 252LL;
    if ( (unsigned int)(*(_DWORD *)(v6 + 2392) - 4) <= 0xFC
      && (unsigned int)(*(_DWORD *)(v6 + 2396) - 4) <= 0xFC
      && *(_QWORD *)(v6 + 2400)
      && *(_QWORD *)(v6 + 2408)
      && *(_QWORD *)(v6 + 2416) )
    {
      LODWORD(v25) = 32;
      WORD2(v25) = *(_WORD *)(v6 + 2392);
      WORD3(v25) = *(_WORD *)(v6 + 2396);
      *((_QWORD *)&v25 + 1) = *(_QWORD *)(v6 + 2400);
      v26 = *(_OWORD *)(v6 + 2408);
      *(_QWORD *)&v31 = &v25;
    }
    else
    {
      v29 = 17;
    }
  }
  v46[0] = *(_WORD *)(v6 + 2228);
  v46[1] = *(_WORD *)(v6 + 2232);
  v46[2] = *(_WORD *)(v6 + 2236);
  v46[3] = *(_WORD *)(v6 + 2240);
  v46[4] = *(_WORD *)(v6 + 2244);
  v46[5] = *(_WORD *)(v6 + 2248);
  v46[6] = *(_WORD *)(v6 + 2252);
  v46[7] = *(_WORD *)(v6 + 2256);
  v46[8] = *(_WORD *)(v6 + 2260);
  v46[9] = *(_WORD *)(v6 + 2264);
  v46[10] = *(_WORD *)(v6 + 2268);
  v46[11] = *(_WORD *)(v6 + 2272);
  v46[12] = *(_WORD *)(v6 + 2276);
  v46[13] = *(_WORD *)(v6 + 2280);
  v46[14] = *(_WORD *)(v6 + 2284);
  v46[15] = *(_WORD *)(v6 + 2288);
  v46[16] = *(_WORD *)(v6 + 2292);
  v46[17] = *(_WORD *)(v6 + 2296);
  v46[18] = *(_WORD *)(v6 + 2300);
  v46[19] = *(_WORD *)(v6 + 2304);
  v46[20] = *(_WORD *)(v6 + 2308);
  v32 = v46;
  v45[0] = *(_WORD *)(v6 + 2324);
  v45[1] = *(_WORD *)(v6 + 2328);
  v45[2] = *(_WORD *)(v6 + 2332);
  v45[3] = *(_WORD *)(v6 + 2336);
  v45[4] = *(_WORD *)(v6 + 2340);
  v45[5] = *(_WORD *)(v6 + 2344);
  v33 = v45;
  v35 = *(_WORD *)(v6 + 2160);
  v36 = *(_WORD *)(v6 + 2164);
  v37 = *(_WORD *)(v6 + 2348);
  if ( a2 )
  {
    v21 = *(_QWORD *)&a2->caContrast;
    v38 = *(_OWORD *)&a2->caSize;
    v39 = v21;
  }
  else
  {
    v38 = DefaultCA;
    v39 = 0LL;
  }
  CurrentThread = GreGetCurrentThread(v8, v9);
  if ( (int)HT_CreateDeviceHalftoneInfo(&Src) <= 0 )
  {
    EngSetLastError(8u);
    v20 = GreGetCurrentThread(v19, v18);
    if ( v20 && PDEVOBJ::bAllowShareAccess(this) && (*((_DWORD *)v20 + 87) || *((_DWORD *)v20 + 88)) )
      *((_QWORD *)v20 + 35) = 0LL;
    else
      *(_QWORD *)(*(_QWORD *)this + 1512LL) = 0LL;
LABEL_21:
    v2 = 0;
    goto LABEL_18;
  }
  if ( CurrentThread
    && PDEVOBJ::bAllowShareAccess(this)
    && (*((_DWORD *)CurrentThread + 87) || *((_DWORD *)CurrentThread + 88)) )
  {
    v13 = Gre::Base::Globals(v12);
    *((_QWORD *)CurrentThread + 35) = 0LL;
    *((_DWORD *)CurrentThread + 90) = *((_DWORD *)v13 + 910);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)this + 1512LL) = 0LL;
  }
  v14 = *(_QWORD *)this;
  _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
  do
    v15 = *(_DWORD *)(v14 + 40);
  while ( v15 != _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 40), v15 & 0xFFFFFDFF, v15) );
  v16 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v16 + 40) & 1) == 0 && (unsigned int)XEPALOBJ::bEqualEntries(&v23, *(_QWORD *)(v16 + 1792)) )
  {
    _m_prefetchw((const void *)(v16 + 40));
    do
      v22 = *(_DWORD *)(v16 + 40);
    while ( v22 != _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 40), v22 | 0x200, v22) );
  }
  LOBYTE(v11) = 8;
  MEMORY[0] = *v23;
  HmgSetOwner(*v23, 0LL, v11);
  v24 = 1;
LABEL_18:
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v23);
  return v2;
}
