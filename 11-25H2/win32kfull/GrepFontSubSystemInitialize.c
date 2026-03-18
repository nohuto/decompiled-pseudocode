/*
 * XREFs of GrepFontSubSystemInitialize @ 0x14010B930
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdSessionInitialize@@YAJXZ @ 0x14010B620 (-UmfdSessionInitialize@@YAJXZ.c)
 *     ?GetLanguageID@@YAGXZ @ 0x14010BAD4 (-GetLanguageID@@YAGXZ.c)
 *     ?bInitializeEUDC@@YAHXZ @ 0x14010BC20 (-bInitializeEUDC@@YAHXZ.c)
 *     ?vCheckIsSetupRunning@@YAXXZ @ 0x14010BCA8 (-vCheckIsSetupRunning@@YAXXZ.c)
 *     InitFNTCache @ 0x14010CA54 (InitFNTCache.c)
 *     ?vGetJpn98FixPitch@@YAXXZ @ 0x14026D714 (-vGetJpn98FixPitch@@YAXXZ.c)
 *     InitializeDefaultFamilyFonts @ 0x1403ED968 (InitializeDefaultFamilyFonts.c)
 *     vInitFontSubTable @ 0x1403EDAEC (vInitFontSubTable.c)
 *     vInitFontMapperFamilyFallbackTable @ 0x1403EE018 (vInitFontMapperFamilyFallbackTable.c)
 *     bInitFontTables @ 0x1403EE0E0 (bInitFontTables.c)
 *     InitializeFontSignatures @ 0x1403EE390 (InitializeFontSignatures.c)
 *     bInitStockFontsInternal @ 0x1403EE62C (bInitStockFontsInternal.c)
 */

__int64 __fastcall GrepFontSubSystemInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 Semaphore; // rax
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  _BOOL8 v9; // rcx
  unsigned int i; // r8d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8

  v3 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  Semaphore = GreCreateSemaphore();
  v5 = 0;
  *(_QWORD *)(v3 + 20336) = Semaphore;
  if ( !Semaphore )
    return 0LL;
  v6 = GreCreateSemaphore();
  *(_QWORD *)(v3 + 20344) = v6;
  if ( !v6 )
    return 0LL;
  v7 = GreCreateSemaphore();
  *(_QWORD *)(v3 + 20352) = v7;
  if ( !v7 )
    return 0LL;
  *(_WORD *)(v3 + 20360) = GetLanguageID();
  RtlGetDefaultCodePage((PUSHORT)(v3 + 18952), (PUSHORT)(v3 + 18954));
  v8 = *(unsigned __int16 *)(v3 + 18952);
  v9 = 1LL;
  *(_BYTE *)(v3 + 20376) = 0;
  *(_DWORD *)(v3 + 20380) = 1;
  for ( i = 0; i < 0x11; ++i )
  {
    if ( codepages[i] == (_DWORD)v8 )
    {
      *(_DWORD *)(v3 + 20380) = dword_1403652B0[i];
      *(_BYTE *)(v3 + 20376) = charsets[i];
      break;
    }
  }
  if ( (_WORD)v8 == 936 || (unsigned __int16)(v8 - 949) <= 1u )
    *(_DWORD *)(v3 + 18948) = 3;
  if ( (_WORD)v8 != 932 && (_WORD)v8 != 949 && (_WORD)v8 != 950 )
    v9 = (_WORD)v8 == 936;
  *(_DWORD *)(v3 + 20364) = v9;
  InitFNTCache(v9, v8, 949LL);
  vCheckIsSetupRunning();
  vGetJpn98FixPitch();
  if ( (int)UmfdSessionInitialize(v12, v11, v13) < 0
    || !(unsigned int)bInitFontTables()
    || !(unsigned int)bInitStockFontsInternal() )
  {
    return 0LL;
  }
  vInitFontSubTable();
  vInitFontMapperFamilyFallbackTable();
  InitializeFontSignatures();
  InitializeDefaultFamilyFonts();
  LOBYTE(v5) = (unsigned int)bInitializeEUDC() != 0;
  return v5;
}
