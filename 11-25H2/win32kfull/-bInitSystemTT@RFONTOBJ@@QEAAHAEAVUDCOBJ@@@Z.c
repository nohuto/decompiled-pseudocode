/*
 * XREFs of ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVUDCOBJ@@@Z @ 0x1401E4844
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x14001681C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x14018C104 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1400B9908 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVUDCOBJ@@@Z @ 0x1400BC67C (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVUDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall RFONTOBJ::bInitSystemTT(RFONTOBJ *this, struct UDCOBJ *a2)
{
  unsigned int v3; // edi
  int v5; // ebx
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // rcx
  struct PFE *v9; // r8
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v12[2]; // [rsp+38h] [rbp-40h] BYREF

  v3 = 0;
  v5 = *(_DWORD *)(*(_QWORD *)this + 852LL);
  v11 = 0LL;
  memset(v12, 0, sizeof(v12));
  RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)v12, a2);
  v8 = *(_QWORD *)(W32GetSessionState(v7, v6) + 96);
  v9 = *(struct PFE **)((v5 != 0 ? 8 : 0) + v8 + 19544);
  if ( !v9 )
    v9 = *(struct PFE **)(v8 + 19544);
  RFONTOBJ::vInit((RFONTOBJ *)&v11, a2, v9, (struct _EUDCLOGFONT *)v12);
  if ( v11 )
    *(_QWORD *)(*(_QWORD *)this + 728LL) = v11;
  LOBYTE(v3) = *(_QWORD *)(*(_QWORD *)this + 728LL) != 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
  return v3;
}
