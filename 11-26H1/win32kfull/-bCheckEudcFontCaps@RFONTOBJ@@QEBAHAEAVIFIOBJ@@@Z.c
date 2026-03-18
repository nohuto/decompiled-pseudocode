/*
 * XREFs of ?bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z @ 0x140174C1C
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x140174084 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z @ 0x1401747BC (-AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x140174824 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RFONTOBJ::bCheckEudcFontCaps(RFONTOBJ *this, struct IFIOBJ *a2, __int64 a3)
{
  int v5; // r9d
  unsigned int v6; // r8d
  int v7; // r10d
  __int64 v9; // rcx

  v5 = *(_DWORD *)(*(_QWORD *)(W32GetSessionState(this, a2, a3) + 96) + 13508LL);
  v6 = 0;
  if ( (v5 & 0xF0) != 0 )
  {
    v9 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 92LL) )
    {
      if ( (v5 & 0x80u) != 0 )
        return 0LL;
    }
    else if ( (v5 & 0x40) != 0 && (*(_DWORD *)(v9 + 724) & 1) != 0
           || (v5 & 0x20) != 0 && (*(_DWORD *)(v9 + 724) & 4) != 0
           || (v5 & 0x10) != 0 && (*(_DWORD *)(v9 + 724) & 2) != 0 )
    {
      return 0LL;
    }
  }
  v7 = *(_DWORD *)(*(_QWORD *)a2 + 48LL);
  if ( (v7 & 0x10) != 0 )
    return 1LL;
  if ( (v7 & 0x200000) != 0 )
  {
    LOBYTE(v6) = *(_DWORD *)(*(_QWORD *)this + 388LL) % 0x384u == 0;
    return v6;
  }
  return 0LL;
}
