/*
 * XREFs of ?bMatchRealization@RFONTOBJ@@AEAAHPEAU_FD_XFORM@@KKPEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1400C55A0
 * Callers:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1400C40D8 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKPEAUHDEV__@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1400F55A4 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKPEAUHDEV__@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RFONTOBJ::bMatchRealization(
        RFONTOBJ *this,
        struct _FD_XFORM *a2,
        int a3,
        int a4,
        struct EXFORMOBJ *a5,
        struct PFE *a6,
        int a7,
        int a8,
        int a9,
        unsigned int a10)
{
  __int64 v11; // rdx
  int v13; // ecx
  int v14; // eax
  __int64 v15; // rcx

  v11 = *(_QWORD *)this;
  if ( *(struct PFE **)(*(_QWORD *)this + 120LL) != a6 )
    return 0LL;
  if ( a10 != (*(_DWORD *)(v11 + 84) & 6) )
    return 0LL;
  v13 = *(_DWORD *)(v11 + 12);
  if ( ((a3 ^ v13) & 0xE000) != 0 )
    return 0LL;
  v14 = (a3 ^ v13) & 0x50010000;
  if ( v14 )
  {
    if ( (a3 & 0x10000) != 0 && (v13 & 0x20000) != 0 )
      v14 = (a3 ^ v13) & 0x50000000;
    if ( ((a3 & 0x10000000) == 0 || (v13 & 0x12000000) != 0x2000000) && v14 )
      return 0LL;
  }
  if ( *(_DWORD *)(v11 + 40) != a4 )
    return 0LL;
  v15 = *(_QWORD *)&a2->eXX - *(_QWORD *)(v11 + 136);
  if ( *(_QWORD *)&a2->eXX == *(_QWORD *)(v11 + 136) )
    v15 = *(_QWORD *)&a2->eYX - *(_QWORD *)(v11 + 144);
  if ( v15
    || a7 != *(_DWORD *)(v11 + 664)
    || a5 && !EXFORMOBJ::bEqualExceptTranslations(a5, (const struct MATRIX *)(v11 + 172))
    || *(_DWORD *)(*(_QWORD *)this + 208LL) != a8 )
  {
    return 0LL;
  }
  if ( a9 )
    return 1LL;
  return *(_DWORD *)(*(_QWORD *)this + 648LL) == 0;
}
