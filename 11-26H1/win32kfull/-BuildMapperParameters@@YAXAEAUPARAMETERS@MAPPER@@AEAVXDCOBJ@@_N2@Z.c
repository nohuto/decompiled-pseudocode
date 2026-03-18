/*
 * XREFs of ?BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVXDCOBJ@@_N2@Z @ 0x1400C6B4C
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?GrepGetTextFaceW@@YAHAEAVDCOBJ@@HPEAGH@Z @ 0x1400C6298 (-GrepGetTextFaceW@@YAHAEAVDCOBJ@@HPEAGH@Z.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1400C6EDC (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?GrepGetCharSet@@YAKAEAVDCOBJ@@@Z @ 0x1400FE5E8 (-GrepGetCharSet@@YAKAEAVDCOBJ@@@Z.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVDCOBJ@@@Z @ 0x14010C768 (-dwGetFontLanguageInfo@@YAKAEAVDCOBJ@@@Z.c)
 *     ?GrepGetOutlineTextMetrics@@YAKAEAVDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@@Z @ 0x14010F74C (-GrepGetOutlineTextMetrics@@YAKAEAVDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@@Z.c)
 * Callees:
 *     ??$GrepReleaseLockValidate@$0BE@@@YAXXZ @ 0x1400C69D0 (--$GrepReleaseLockValidate@$0BE@@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$0BE@@@YAXXZ @ 0x1400C6AC0 (--$GrepAcquireLockValidate@$0BE@@@YAXXZ.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x140108968 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 */

void __fastcall BuildMapperParameters(struct MAPPER::PARAMETERS *a1, struct XDCOBJ *a2, char a3, char a4)
{
  _OWORD *v8; // rax
  _DWORD *v9; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _DWORD *v11; // rcx
  int v12; // edx
  int v13; // eax
  unsigned int v14; // eax
  _DWORD *v15; // rdx
  int v16; // ecx
  int v17; // eax
  char v18; // al
  int v19; // ecx
  int v20; // ecx
  bool v21; // r8
  bool v22; // al
  bool v23; // al
  int v24; // r8d
  bool v25; // cl
  __int64 v26; // rdx
  Gre::Base *v27; // rcx
  HSEMAPHORE v28; // rsi
  _DWORD *v29; // [rsp+40h] [rbp+8h] BYREF
  _OWORD *v30; // [rsp+48h] [rbp+10h] BYREF

  DC::QuickInitXform(*(_QWORD *)a2, &v30, 516LL);
  v8 = v30;
  *(_OWORD *)((char *)a1 + 8) = *v30;
  *(_OWORD *)((char *)a1 + 24) = v8[1];
  *((_DWORD *)a1 + 10) = *((_DWORD *)v8 + 8);
  v9 = *(_DWORD **)(*(_QWORD *)a2 + 48LL);
  *(_QWORD *)a1 = v9;
  v29 = v9;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v9);
  v11 = v29;
  if ( (v29[10] & 1) == 0 || (v12 = CurrentThreadDpiAwarenessContext & 0xF, v12 == 1) || v12 == 2 )
    v13 = v29[540];
  else
    v13 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
  *((_DWORD *)a1 + 13) = v13;
  v14 = W32GetCurrentThreadDpiAwarenessContext(v11);
  v15 = v29;
  if ( (v29[10] & 1) == 0 || (v16 = v14 & 0xF, v16 == 1) || v16 == 2 )
    v17 = v29[541];
  else
    v17 = (v14 >> 8) & 0x1FF;
  *((_DWORD *)a1 + 14) = v17;
  *((_DWORD *)a1 + 15) = v15[453];
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 252LL) & 4) != 0 )
  {
    *(_QWORD *)((char *)a1 + 44) = *(_QWORD *)(*(_QWORD *)a2 + 256LL);
    v18 = 1;
  }
  else
  {
    v18 = 0;
  }
  *((_BYTE *)a1 + 68) = v18;
  v19 = *(_DWORD *)(*(_QWORD *)a2 + 72LL) >> 31;
  *((_BYTE *)a1 + 69) = (*(_DWORD *)(*(_QWORD *)a2 + 72LL) & 0x20000000) != 0;
  *((_BYTE *)a1 + 70) = v19;
  *((_BYTE *)a1 + 71) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 236LL) & 1;
  *((_BYTE *)a1 + 72) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) == 1;
  *((_BYTE *)a1 + 73) = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 40LL) & 0x8000) != 0;
  *((_BYTE *)a1 + 74) = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x802) == 2050;
  *((_BYTE *)a1 + 75) = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 2) != 0;
  *((_BYTE *)a1 + 76) = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x1000) != 0;
  v20 = *(_DWORD *)(*(_QWORD *)a2 + 520LL);
  v21 = (v20 & 1) != 0 && (v20 & 2) == 0;
  *((_BYTE *)a1 + 77) = v21;
  v22 = *(float *)(*(_QWORD *)a2 + 452LL) != 0.0 && !(unsigned int)EFLOAT::bIsZero((EFLOAT *)(*(_QWORD *)a2 + 456LL));
  *((_BYTE *)a1 + 78) = v22;
  *((_BYTE *)a1 + 79) = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x40) != 0;
  v23 = a3 && !v21;
  *((_BYTE *)a1 + 85) = v23;
  *((_BYTE *)a1 + 86) = a4;
  v24 = v15[531];
  v25 = (v15[542] & 8) != 0;
  *((_BYTE *)a1 + 80) = (v15[542] & 0x2000) != 0;
  *((_BYTE *)a1 + 81) = v25;
  *((_BYTE *)a1 + 82) = v24 == 0;
  *((_BYTE *)a1 + 83) = v24 == 4;
  *((_BYTE *)a1 + 84) = PDEVOBJ::cFonts((PDEVOBJ *)&v29) != 0;
  *((_BYTE *)a1 + 88) = *(_BYTE *)(*(_QWORD *)a2 + 36LL) & 1;
  *((_BYTE *)a1 + 89) = *(_DWORD *)(*(_QWORD *)a2 + 32LL) == 1;
  v26 = *(_QWORD *)(*(_QWORD *)a2 + 496LL);
  *((_BYTE *)a1 + 90) = v26 != 0;
  LOBYTE(v27) = *(_BYTE *)(*(_QWORD *)a2 + 248LL) & 1;
  *((_BYTE *)a1 + 87) = (_BYTE)v27;
  if ( v26 )
  {
    v28 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v27) + 1512LL);
    GreAcquireSemaphoreInternal(v28);
    GrepAcquireLockValidate<20>();
    *((_DWORD *)a1 + 16) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 496LL) + 96LL);
    if ( v28 )
    {
      EtwTraceGreLockReleaseSemaphore(L"Hmgr", v28);
      GrepReleaseLockValidate<20>();
      GreReleaseSemaphoreExclusiveInternal(v28);
    }
  }
  else
  {
    *((_DWORD *)a1 + 16) = 0;
  }
}
