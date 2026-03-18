/*
 * XREFs of ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x14010C92C
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1400C0C28 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x140174824 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1400C40D8 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x14010D384 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall RFONTOBJ::bInitSystemTT(RFONTOBJ *this, struct XDCOBJ *a2)
{
  unsigned int v3; // edi
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  struct PFE *v10; // r8
  __int64 v12; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v13[2]; // [rsp+38h] [rbp-40h] BYREF

  v3 = 0;
  v5 = *(_DWORD *)(*(_QWORD *)this + 852LL);
  v12 = 0LL;
  memset(v13, 0, sizeof(v13));
  RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)v13, a2);
  v9 = *(_QWORD *)(W32GetSessionState(v7, v6, v8) + 96);
  v10 = *(struct PFE **)((v5 != 0 ? 8 : 0) + v9 + 19536);
  if ( !v10 )
    v10 = *(struct PFE **)(v9 + 19536);
  RFONTOBJ::vInit((RFONTOBJ *)&v12, a2, v10, (struct _EUDCLOGFONT *)v13);
  if ( v12 )
    *(_QWORD *)(*(_QWORD *)this + 728LL) = v12;
  LOBYTE(v3) = *(_QWORD *)(*(_QWORD *)this + 728LL) != 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
  return v3;
}
