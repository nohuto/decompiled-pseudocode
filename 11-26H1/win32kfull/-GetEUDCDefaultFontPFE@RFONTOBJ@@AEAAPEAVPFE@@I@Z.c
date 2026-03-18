/*
 * XREFs of ?GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z @ 0x140174CF0
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x140174084 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x140174824 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 * Callees:
 *     <none>
 */

struct PFE *__fastcall RFONTOBJ::GetEUDCDefaultFontPFE(RFONTOBJ *this, _BOOL8 a2, __int64 a3)
{
  BOOL v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rax
  char v6; // si
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // rcx

  v3 = a2;
  v4 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  v5 = *(_QWORD *)(v4 + 32);
  v6 = *(_BYTE *)(v5 + 44);
  v7 = *(unsigned __int8 *)(v5 + 45) >> 4;
  v8 = *(_QWORD *)(W32GetSessionState(v4, a2, a3) + 96);
  if ( v6 && v6 != 2 && v6 != -1 || (*(_BYTE *)(v8 + 18936) & (unsigned __int8)(v6 + 2) & 0xF) == 0 )
    return 0LL;
  if ( v7 >= 7 || !*(_DWORD *)(664LL * v7 + v8 + 14288) )
    v7 = 6;
  if ( v3 )
  {
    v10 = 664LL * v7;
    if ( !*(_QWORD *)(v10 + v8 + 14944) )
      v3 = *(_QWORD *)(v10 + v8 + 14936) == 0LL;
  }
  return *(struct PFE **)(v8 + 8 * (v3 + 83LL * v7) + 14936);
}
