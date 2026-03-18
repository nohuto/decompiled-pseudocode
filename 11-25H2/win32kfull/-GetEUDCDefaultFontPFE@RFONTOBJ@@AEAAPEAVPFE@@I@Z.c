/*
 * XREFs of ?GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z @ 0x14018C554
 * Callers:
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x14018C104 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x140262338 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

struct PFE *__fastcall RFONTOBJ::GetEUDCDefaultFontPFE(RFONTOBJ *this, _BOOL8 a2)
{
  BOOL v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // si
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rcx

  v2 = a2;
  v3 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  v4 = *(_QWORD *)(v3 + 32);
  v5 = *(_BYTE *)(v4 + 44);
  v6 = *(unsigned __int8 *)(v4 + 45) >> 4;
  v7 = *(_QWORD *)(W32GetSessionState(v3, a2) + 96);
  if ( v5 && v5 != 2 && v5 != -1 || (*(_BYTE *)(v7 + 18944) & (unsigned __int8)(v5 + 2) & 0xF) == 0 )
    return 0LL;
  if ( v6 >= 7 || !*(_DWORD *)(664LL * v6 + v7 + 14296) )
    v6 = 6;
  if ( v2 )
  {
    v9 = 664LL * v6;
    if ( !*(_QWORD *)(v9 + v7 + 14952) )
      v2 = *(_QWORD *)(v9 + v7 + 14944) == 0LL;
  }
  return *(struct PFE **)(v7 + 8 * (v2 + 83LL * v6) + 14944);
}
