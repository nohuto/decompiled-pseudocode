/*
 * XREFs of ?flFontType@PFEOBJ@@QEAAKXZ @ 0x14010F604
 * Callers:
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1401046A0 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEBGAEAVPFEOBJ@@H@Z @ 0x14010F1DC (-bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEBGAEAVPFEOBJ@@H@Z.c)
 *     ?vDeletePFELink@FHOBJ@@QEAAXPEAU_HASHBUCKET@@IAEAVPFEOBJ@@@Z @ 0x14010F404 (-vDeletePFELink@FHOBJ@@QEAAXPEAU_HASHBUCKET@@IAEAVPFEOBJ@@@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x140261548 (-bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 *     NtGdiGetETM @ 0x140311420 (NtGdiGetETM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PFEOBJ::flFontType(PFEOBJ *this)
{
  __int64 v1; // r8
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  unsigned int v5; // ecx

  v1 = *(_QWORD *)this;
  v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 48LL);
  if ( (v2 & 1) != 0 )
    v3 = 4;
  else
    v3 = ((unsigned int)v2 >> 1) & 1;
  v4 = *(_DWORD *)(v1 + 12);
  v5 = (2 * (v4 & 1)) | v3;
  if ( v2 < 0 )
  {
    v5 |= (v2 & 0x4000 | 0x2000) << 8;
    if ( (v2 & 0x4000000) != 0 )
      v5 |= 0x100000u;
  }
  if ( (v4 & 0x80u) != 0 )
  {
    v5 |= 0x1000000u;
    if ( (v4 & 0x100) != 0 )
      v5 |= 0x800000u;
  }
  return v5;
}
