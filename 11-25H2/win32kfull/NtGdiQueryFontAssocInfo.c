/*
 * XREFs of NtGdiQueryFontAssocInfo @ 0x1401E8510
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x140017F90 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x140082B20 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x1400BCD48 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z.c)
 */

__int64 __fastcall NtGdiQueryFontAssocInfo(HDC a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v6; // rdx
  int v7; // ecx
  __int64 SessionState; // rax
  __int64 v9; // r9
  char v10; // cl
  __int64 v11; // [rsp+30h] [rbp-49h] BYREF
  struct LFONT *v12; // [rsp+38h] [rbp-41h]
  _BYTE v13[48]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v14[12]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v15; // [rsp+E0h] [rbp+67h] BYREF
  int v16; // [rsp+E8h] [rbp+6Fh] BYREF
  int v17; // [rsp+ECh] [rbp+73h]

  v3 = 0;
  v4 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96);
  if ( !a1 )
    return *(unsigned int *)(v4 + 18944);
  UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v14, a1);
  if ( !v14[0] )
  {
    EngSetLastError(6u);
    goto LABEL_4;
  }
  SessionState = W32GetSessionState(v7, v6);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v13,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
  v16 = 4;
  v17 = *(unsigned __int16 *)(v14[0] + 12LL);
  v15 = 0LL;
  RFONTOBJ::vInit((RFONTOBJ *)&v15, (struct UDCOBJ *)v14, 0, 2u, (const struct RFONTOBJ::Tag *)&v16);
  if ( !v15 )
    goto LABEL_3;
  v10 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 120) + 32LL) + 44LL);
  if ( ((v10 + 0x80) & 0xF6) == 0 && v10 != -119 || v10 == -122 )
  {
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v13);
    v3 = 2;
    goto LABEL_4;
  }
  if ( !v10 )
  {
    if ( (*(_DWORD *)(v4 + 18944) & 2) != 0 )
      goto LABEL_14;
    goto LABEL_18;
  }
  if ( v10 != -1 )
  {
LABEL_18:
    if ( v10 == 2 && (*(_DWORD *)(v4 + 18944) & 4) != 0 )
      goto LABEL_14;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(v4 + 18944) & 1) != 0 )
  {
LABEL_14:
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v11, *(struct HLFONT__ **)(v14[0] + 1744LL), 0LL, v9);
    if ( v11 && (*(_BYTE *)(v11 + 277) & 0x40) == 0 )
    {
      if ( v12 )
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v12);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15);
      EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v13);
      v3 = 1;
      goto LABEL_4;
    }
    if ( v12 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v12);
  }
LABEL_3:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v13);
LABEL_4:
  DCOBJ::~DCOBJ((DCOBJ *)v14);
  return v3;
}
