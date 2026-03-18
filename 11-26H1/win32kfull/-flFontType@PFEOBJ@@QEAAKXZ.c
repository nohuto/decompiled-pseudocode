/*
 * XREFs of ?flFontType@PFEOBJ@@QEAAKXZ @ 0x140105A8C
 * Callers:
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1400C7CD0 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?vDeletePFELink@FHOBJ@@QEAAXPEAU_HASHBUCKET@@IAEAVPFEOBJ@@@Z @ 0x140105340 (-vDeletePFELink@FHOBJ@@QEAAXPEAU_HASHBUCKET@@IAEAVPFEOBJ@@@Z.c)
 *     ?bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEBGAEAVPFEOBJ@@H@Z @ 0x140105860 (-bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEBGAEAVPFEOBJ@@H@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14010651C (-bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 *     NtGdiGetETM @ 0x1403336E0 (NtGdiGetETM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PFEOBJ::flFontType(PFEOBJ *this)
{
  __int64 v1; // rdx
  int v2; // r8d
  int v3; // ecx
  int v4; // edx
  unsigned int v5; // ecx

  v1 = *(_QWORD *)this;
  v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 48LL);
  if ( (v2 & 1) != 0 )
    v3 = 4;
  else
    v3 = ((unsigned __int8)v2 >> 1) & 1;
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
