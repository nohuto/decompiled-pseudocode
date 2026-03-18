/*
 * XREFs of ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1400D4484
 * Callers:
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1400D5BD0 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 *     ?UMPDDrvGetGlyphMode@@YAKPEAUDHPDEV__@@PEAU_FONTOBJ@@@Z @ 0x1400D9830 (-UMPDDrvGetGlyphMode@@YAKPEAUDHPDEV__@@PEAU_FONTOBJ@@@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x140283980 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x14034AD10 (-UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x14034B250 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x14034C290 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 * Callees:
 *     ?LookUp@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_KPEA_K@Z @ 0x1400D374C (-LookUp@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_KPEA_K@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1400D7414 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 */

__int64 __fastcall UMPDOBJ::pfo(UMPDOBJ *this, __m128i **a2)
{
  __m128i *v2; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct W32_PUSH_LOCK *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 SessionState; // rax
  char v13; // al
  __int64 v14; // rdx
  __m128i v16; // [rsp+30h] [rbp-48h] BYREF
  __m128i v17[3]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+88h] [rbp+10h] BYREF

  v2 = *a2;
  if ( !*a2 )
    return 1LL;
  v16 = *v2;
  v17[0] = v2[1];
  v17[1] = v2[2];
  v17[2] = v2[3];
  if ( GrepIsEngineVa((void *)_mm_srli_si128(v17[0], 8).m128i_i64[0]) )
  {
    v8 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(W32GetSessionState(v6, v5, v7) + 96) + 24232LL);
    GreAcquirePushLockShared(v8);
    v18 = 0LL;
    SessionState = W32GetSessionState(v10, v9, v11);
    v13 = NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::LookUp(
            *(NSInstrumentation::CPrioritizedWriterLock **)(*(_QWORD *)(SessionState + 96) + 24160LL),
            &v17[0].m128i_u64[1],
            &v18);
    v14 = v17[0].m128i_i64[1];
    if ( v13 )
      v14 = 0LL;
    v17[0].m128i_i64[1] = v14;
    if ( v8 )
      GreReleasePushLockShared(v8);
  }
  return UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 176), (void **)a2, 0x40u, &v16);
}
