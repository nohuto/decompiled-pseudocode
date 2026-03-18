/*
 * XREFs of ?bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z @ 0x14018C688
 * Callers:
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x14018C104 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z @ 0x14018C620 (-AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x140262338 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RFONTOBJ::bCheckEudcFontCaps(RFONTOBJ *this, struct IFIOBJ *a2)
{
  int v4; // r9d
  unsigned int v5; // r8d
  int v6; // r10d
  __int64 v8; // rcx

  v4 = *(_DWORD *)(*(_QWORD *)(W32GetSessionState((_DWORD)this, a2) + 96) + 13516LL);
  v5 = 0;
  if ( (v4 & 0xF0) != 0 )
  {
    v8 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 92LL) )
    {
      if ( (v4 & 0x80u) != 0 )
        return 0LL;
    }
    else if ( (v4 & 0x40) != 0 && (*(_DWORD *)(v8 + 724) & 1) != 0
           || (v4 & 0x20) != 0 && (*(_DWORD *)(v8 + 724) & 4) != 0
           || (v4 & 0x10) != 0 && (*(_DWORD *)(v8 + 724) & 2) != 0 )
    {
      return 0LL;
    }
  }
  v6 = *(_DWORD *)(*(_QWORD *)a2 + 48LL);
  if ( (v6 & 0x10) != 0 )
    return 1LL;
  if ( (v6 & 0x200000) != 0 )
  {
    LOBYTE(v5) = *(_DWORD *)(*(_QWORD *)this + 388LL) % 0x384u == 0;
    return v5;
  }
  return 0LL;
}
