/*
 * XREFs of NtGdiGetCharWidthInfo @ 0x1401DD760
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x140082B04 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetCharWidthInfo@@YAHAEAVUDCOBJ@@PEAU_CHWIDTHINFO@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1401DD840 (-GrepGetCharWidthInfo@@YAHAEAVUDCOBJ@@PEAU_CHWIDTHINFO@@W4EntryPoint@RFONTOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiGetCharWidthInfo(HDC a1, unsigned __int64 a2)
{
  int v4; // esi
  __int64 SessionState; // rax
  unsigned int CharWidthInfo; // ebx
  __int64 v8; // [rsp+20h] [rbp-98h] BYREF
  int v9; // [rsp+28h] [rbp-90h]
  _QWORD v10[10]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v11[48]; // [rsp+80h] [rbp-38h] BYREF

  v4 = 0;
  v8 = 0LL;
  v9 = 0;
  SessionState = W32GetSessionState((_DWORD)a1, a2);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v11,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
  UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v10, a1);
  if ( v10[0] )
  {
    CharWidthInfo = GrepGetCharWidthInfo(v10, &v8);
    v4 = v9;
  }
  else
  {
    CharWidthInfo = 0;
  }
  if ( CharWidthInfo )
  {
    if ( a2 + 12 < a2 || a2 + 12 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_QWORD *)a2 = v8;
    *(_DWORD *)(a2 + 8) = v4;
  }
  UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v10);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v11);
  return CharWidthInfo;
}
