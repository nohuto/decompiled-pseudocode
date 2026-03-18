/*
 * XREFs of ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KAEAIH@Z @ 0x140106418
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x140102C2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?GrepRemoveFontResource@@YAHPEBGKKKKPEAUtagDESIGNVECTOR@@K@Z @ 0x1401062B4 (-GrepRemoveFontResource@@YAHPEBGKKKKPEAUtagDESIGNVECTOR@@K@Z.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x14021C4D0 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     ?GetFontResourceInfoInternalW@@YAHPEBGKKIPEA_KPEAXK@Z @ 0x140241C64 (-GetFontResourceInfoInternalW@@YAHPEBGKKIPEA_KPEAXK@Z.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x14026C658 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z @ 0x14028B4D4 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z.c)
 *     GreEudcLoadLinkW @ 0x14032453C (GreEudcLoadLinkW.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1403273E8 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEA.c)
 * Callees:
 *     ?iHash@@YAIPEBGI@Z @ 0x1400CA7A4 (-iHash@@YAIPEBGI@Z.c)
 *     ??0PffIterator@@QEAA@PEAVPFF@@@Z @ 0x140297050 (--0PffIterator@@QEAA@PEAVPFF@@@Z.c)
 *     memcmp @ 0x14034FDE0 (memcmp.c)
 */

struct PFF *__fastcall PUBLIC_PFTOBJ::pPFFGet(
        PUBLIC_PFTOBJ *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        struct tagDESIGNVECTOR *Buf1,
        unsigned int a6,
        unsigned int *a7,
        int a8)
{
  __int64 v9; // rbp
  int v10; // edi
  unsigned int v12; // eax
  __int64 v13; // r11
  struct PFF *v14; // rdx
  unsigned int *v15; // rbx
  unsigned int v16; // eax
  bool v17; // al

  v9 = a3;
  v10 = 0;
  v12 = iHash(a2, *(_DWORD *)(*(_QWORD *)this + 24LL));
  *a7 = v12;
  if ( v12 >= *(_DWORD *)(*(_QWORD *)v13 + 24LL) )
    v14 = 0LL;
  else
    v14 = *(struct PFF **)(*(_QWORD *)v13 + 8LL * v12 + 40);
  PffIterator::PffIterator((PffIterator *)&a7, v14);
  v15 = a7;
  while ( v15 )
  {
    if ( a8 == ((v15[13] >> 3) & 1)
      && (_DWORD)v9 == v15[8]
      && a4 == v15[9]
      && !memcmp(*((const void **)v15 + 3), a2, 2 * v9) )
    {
      v16 = v15[12];
      if ( a6 == v16 && (!a6 || !memcmp(Buf1, *((const void **)v15 + 5), v16)) )
        break;
    }
    do
    {
      v15 = (unsigned int *)*((_QWORD *)v15 + 1);
      v17 = 0;
      if ( v15 )
      {
        v10 |= 1u;
        if ( (v15[13] & 0x10000) != 0 )
          v17 = 1;
      }
      if ( (v10 & 1) != 0 )
        v10 &= ~1u;
    }
    while ( v17 );
  }
  return (struct PFF *)v15;
}
