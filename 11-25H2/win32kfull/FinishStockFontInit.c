/*
 * XREFs of FinishStockFontInit @ 0x140146690
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1401462E0 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     FinishStockFontReinit @ 0x140146570 (FinishStockFontReinit.c)
 * Callees:
 *     GreCreateFontIndirectW @ 0x140055014 (GreCreateFontIndirectW.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x1400BCD48 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z.c)
 *     ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14010DF30 (-IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?vInitEmergencyStockFont@@YAXPEBG@Z @ 0x1401468BC (-vInitEmergencyStockFont@@YAXPEBG@Z.c)
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1401469B4 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 *     ?bSetStockFont@@YAHPEAXHH@Z @ 0x140146D98 (-bSetStockFont@@YAHPEAXHH@Z.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x140146FEC (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

void __fastcall FinishStockFontInit(__int64 c, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  Gre::Base *v4; // rcx
  struct Gre::Base::SESSION_GLOBALS *v5; // rbx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // edi
  __int64 v10; // rcx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __m128i v13; // xmm2
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  INT v16; // eax
  __int64 FontIndirectW; // rax
  const unsigned __int16 *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // [rsp+28h] [rbp-19h] BYREF
  struct LFONT *v23; // [rsp+30h] [rbp-11h]
  INT a[4]; // [rsp+38h] [rbp-9h] BYREF
  __int128 v25; // [rsp+48h] [rbp+7h]
  __int128 v26; // [rsp+58h] [rbp+17h]
  __int128 v27; // [rsp+68h] [rbp+27h]
  __int128 v28; // [rsp+78h] [rbp+37h]
  __int64 v29; // [rsp+88h] [rbp+47h]
  int v30; // [rsp+90h] [rbp+4Fh]
  __int16 v31; // [rsp+94h] [rbp+53h]

  v3 = c;
  if ( *(_BYTE *)(*(_QWORD *)(W32GetSessionState(c, a2, a3) + 96) + 24290LL)
    || UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
    || UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread((__int64)v4, v20, v21) )
  {
    v5 = Gre::Base::Globals(v4);
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v22, *(struct HLFONT__ **)(*((_QWORD *)v5 + 376) + 136LL), 0LL, v6);
    v8 = v22;
    v9 = 1;
    v10 = v22 != 0;
    if ( v22 )
    {
      *(_DWORD *)(v22 + 252) = -((*(_DWORD *)(v22 + 252) * v3 + 36) / 0x48);
      v11 = *(_OWORD *)(v8 + 268);
      v12 = *(_OWORD *)(v8 + 284);
      v30 = *(_DWORD *)(v8 + 340);
      v13 = *(__m128i *)(v8 + 252);
      v25 = v11;
      v14 = *(_OWORD *)(v8 + 300);
      v26 = v12;
      v15 = *(_OWORD *)(v8 + 316);
      v27 = v14;
      v29 = *(_QWORD *)(v8 + 332);
      *(__m128i *)a = v13;
      v28 = v15;
      a[0] = EngMulDiv(_mm_cvtsi128_si32(v13), 96, v3);
      v16 = EngMulDiv(a[1], 96, v3);
      v31 = 1;
      a[1] = v16;
      FontIndirectW = GreCreateFontIndirectW((__int128 *)a);
      v10 = *((_QWORD *)v5 + 377);
      *(_QWORD *)(v10 + 136) = FontIndirectW;
    }
    if ( v3 > 0x6C )
    {
      FinishStockFontInitInternal(
        L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize\\LargeFont",
        0);
    }
    else
    {
      if ( (*(_DWORD *)(*(_QWORD *)(W32GetSessionState(v10, v7, v8) + 96) + 19592LL) & 2) != 0 )
        FinishStockFontInitInternal(
          L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize\\LargeFont",
          0);
      v9 = 0;
    }
    FinishStockFontInitInternal(
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize\\SmallFont",
      v9);
    vInitEmergencyStockFont(v18);
    v19 = *((_QWORD *)v5 + 376);
    if ( !*(_QWORD *)(v19 + 128) )
      bSetStockFont(*(void **)(v19 + 104), 16, 0);
    *((_QWORD *)v5 + 55) = *(_QWORD *)(*((_QWORD *)v5 + 376) + 104LL);
    if ( v23 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v23);
  }
}
