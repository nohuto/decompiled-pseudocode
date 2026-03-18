/*
 * XREFs of ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x140327194
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?GrepGetTextFaceW@@YAHAEAVDCOBJ@@HPEAGH@Z @ 0x1400C6298 (-GrepGetTextFaceW@@YAHAEAVDCOBJ@@HPEAGH@Z.c)
 *     ?GrepGetCharSet@@YAKAEAVDCOBJ@@@Z @ 0x1400FE5E8 (-GrepGetCharSet@@YAKAEAVDCOBJ@@@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x14010FA80 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400C6908 (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z @ 0x1400CEA00 (-ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@AEAI@Z @ 0x1400FDD9C (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@AEAI@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x140104D2C (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x140104F04 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCHECKSUM@@PEAPEAUFONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x14013F72C (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCH.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x1401F8CD4 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x140213954 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x14021A5BC (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ?InsertBucketHead@PFT@@QEAAXKPEAVPFF@@@Z @ 0x140326D30 (-InsertBucketHead@PFT@@QEAAXKPEAVPFF@@@Z.c)
 */

_BOOL8 __fastcall DEVICE_PFTOBJ::bLoadFonts(DEVICE_PFTOBJ *this, struct DHPDEV__ **a2, unsigned int a3)
{
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v9; // r12
  struct PFF *v10; // rdi
  BOOL v11; // esi
  signed __int32 v12; // ett
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  signed __int32 v16; // ett
  struct PFF *v17; // r8
  __int64 v18; // rcx
  signed __int32 v19; // ett
  HSEMAPHORE *v20; // rcx
  signed __int32 v21; // ett
  size_t Size; // [rsp+30h] [rbp-59h]
  struct PFF *v23[9]; // [rsp+98h] [rbp+Fh] BYREF
  HSEMAPHORE v24; // [rsp+F8h] [rbp+6Fh] BYREF
  HSEMAPHORE v25; // [rsp+108h] [rbp+7Fh] BYREF

  LODWORD(v24) = 0;
  if ( ScrutinizeFontLoad(3u, 0LL) < 0 )
    return 1LL;
  v9 = *(_QWORD *)(W32GetSessionState(v7, v6) + 96) + 4864LL;
  SEMOBJ<17>::SEMOBJ<17>(&v25, v9);
  v10 = DEVICE_PFTOBJ::pPFFGet(this, (unsigned __int64)a2, (unsigned int *)&v24);
  SEMOBJ<17>::vUnlock(&v25);
  v11 = v10 != 0LL;
  if ( !v10 )
  {
    v25 = 0LL;
    LODWORD(Size) = 0;
    PFFMEMOBJ::PFFMEMOBJ(
      (PFFMEMOBJ *)v23,
      a3,
      0LL,
      0,
      0,
      0LL,
      Size,
      0LL,
      (HDEV)a2,
      a2[223],
      *(struct PFT **)this,
      0,
      0,
      (struct FNTCHECKSUM *)&v25,
      0LL,
      0LL,
      0);
    if ( v23[0] )
    {
      if ( (unsigned int)PFFMEMOBJ::bLoadDeviceFontTable((PFFMEMOBJ *)v23, (HDEV)a2, a3) )
      {
        SEMOBJ<17>::SEMOBJ<17>(&v25, v9);
        if ( !DEVICE_PFTOBJ::pPFFGet(this, (unsigned __int64)a2, (unsigned int *)&v24) && ((_DWORD)a2[5] & 0x40) == 0 )
        {
          if ( (unsigned int)PFFOBJ::bAddHash((__int64 **)v23, 0LL, v13) )
          {
            v17 = v23[0];
            v11 = 1;
            v18 = *(_QWORD *)this;
            if ( (*((_DWORD *)v23[0] + 13) & 0x200) == 0 )
              ++*(_DWORD *)(v18 + 32);
            ++*(_DWORD *)(v18 + 28);
            PFT::InsertBucketHead(*(PFT **)this, (unsigned int)v24, v17);
            PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v23);
            *((_DWORD *)a2 + 887) = a3;
            _m_prefetchw(a2 + 5);
            do
              v19 = *((_DWORD *)a2 + 10);
            while ( v19 != _InterlockedCompareExchange((volatile signed __int32 *)a2 + 10, v19 | 0x40, v19) );
          }
          else
          {
            PFFOBJ::vRemoveHash((PFFOBJ *)v23, v14, v15);
            if ( ((_DWORD)a2[5] & 0x40) == 0 )
            {
              _m_prefetchw(a2 + 5);
              do
                v16 = *((_DWORD *)a2 + 10);
              while ( v16 != _InterlockedCompareExchange((volatile signed __int32 *)a2 + 10, v16 | 0x40, v16) );
            }
          }
        }
        v20 = &v25;
        goto LABEL_26;
      }
      SEMOBJ<17>::SEMOBJ<17>(&v24, v9);
      if ( ((_DWORD)a2[5] & 0x40) == 0 )
      {
        _m_prefetchw(a2 + 5);
        do
          v12 = *((_DWORD *)a2 + 10);
        while ( v12 != _InterlockedCompareExchange((volatile signed __int32 *)a2 + 10, v12 | 0x40, v12) );
      }
    }
    else
    {
      SEMOBJ<17>::SEMOBJ<17>(&v24, v9);
      if ( ((_DWORD)a2[5] & 0x40) == 0 )
      {
        _m_prefetchw(a2 + 5);
        do
          v21 = *((_DWORD *)a2 + 10);
        while ( v21 != _InterlockedCompareExchange((volatile signed __int32 *)a2 + 10, v21 | 0x40, v21) );
      }
    }
    v20 = &v24;
LABEL_26:
    SEMOBJ<17>::vUnlock(v20);
    PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v23);
  }
  return v11;
}
