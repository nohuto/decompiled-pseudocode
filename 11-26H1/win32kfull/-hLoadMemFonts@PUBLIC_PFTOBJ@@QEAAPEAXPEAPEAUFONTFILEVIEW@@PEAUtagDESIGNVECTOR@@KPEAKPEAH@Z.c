/*
 * XREFs of ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x14021C4D0
 * Callers:
 *     ?GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z @ 0x14021BB1C (-GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400C6908 (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1400CAA20 (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z @ 0x1400CEA00 (-ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1401020EC (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x140104D2C (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x140104F04 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KAEAIH@Z @ 0x140106418 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KAEAIH@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCHECKSUM@@PEAPEAUFONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x14013F72C (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCH.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x140187408 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x140213954 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x140214E4C (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x14021A5BC (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ?InsertBucketHead@PFT@@QEAAXKPEAVPFF@@@Z @ 0x140326D30 (-InsertBucketHead@PFT@@QEAAXKPEAVPFF@@@Z.c)
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAUHDEV__@@PEAUFNTCHECKSUM@@HPEAH@Z @ 0x140327830 (-vLoadFontFileView@@YAXPEAGKPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAUH.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::hLoadMemFonts(
        struct PFT **this,
        struct FONTFILEVIEW **a2,
        struct tagDESIGNVECTOR *a3,
        unsigned int a4,
        unsigned int *a5,
        int *a6)
{
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned int v12; // eax
  unsigned __int64 v14; // r15
  unsigned int FontFile; // eax
  __int64 v16; // rdx
  int v17; // ecx
  unsigned int v18; // esi
  __int64 SessionState; // rax
  __int64 v20; // rax
  unsigned int v21; // r12d
  unsigned int v22; // r15d
  struct PFF *v23; // rdi
  __int64 v24; // rdx
  int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  struct PFT *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // r8
  size_t Size; // [rsp+30h] [rbp-E0h]
  unsigned __int64 v34; // [rsp+38h] [rbp-D8h]
  unsigned int v35; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v36; // [rsp+94h] [rbp-7Ch] BYREF
  HDEV v37; // [rsp+98h] [rbp-78h] BYREF
  int *v38; // [rsp+A0h] [rbp-70h] BYREF
  unsigned __int64 v39; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-60h] BYREF
  void *v41; // [rsp+B8h] [rbp-58h] BYREF
  struct PFF *v42[3]; // [rsp+C0h] [rbp-50h] BYREF
  void *v43; // [rsp+D8h] [rbp-38h] BYREF
  HDEV v44; // [rsp+E0h] [rbp-30h] BYREF
  wchar_t Dst[32]; // [rsp+E8h] [rbp-28h] BYREF

  v7 = (__int64)*a2;
  v8 = 0LL;
  v38 = a6;
  v41 = a2;
  v43 = *(void **)(v7 + 16);
  v12 = *(_DWORD *)(v7 + 24);
  v35 = a4;
  v40 = 0LL;
  v36 = v12;
  v39 = 0LL;
  if ( ScrutinizeFontLoad(1u, 0LL) >= 0 )
  {
    v37 = 0LL;
    vLoadFontFileView(0LL, 0, a2, 1u, &v43, &v36, a3, a4, &v39, &v37, (struct FNTCHECKSUM *)&v40, 1, 0LL);
    v14 = v39;
    v44 = v37;
    if ( v39 )
    {
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v44, v39, 2u, 0, 0LL);
      v18 = FontFile;
      if ( FontFile )
      {
        if ( FontFile != -1 )
        {
          *a5 = FontFile;
          SessionState = W32GetSessionState(v17, v16);
          swprintf_s(
            Dst,
            0x1EuLL,
            L"MEMORY-%u",
            (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(SessionState + 96) + 24000LL)));
          v20 = -1LL;
          do
            ++v20;
          while ( Dst[v20] );
          v21 = v20 + 1;
          v34 = v14;
          v22 = v35;
          LODWORD(Size) = v35;
          PFFMEMOBJ::PFFMEMOBJ(
            (PFFMEMOBJ *)v42,
            v18,
            Dst,
            v20 + 1,
            1u,
            a3,
            Size,
            v34,
            v37,
            0LL,
            *this,
            0x10u,
            0x30u,
            (struct FNTCHECKSUM *)&v40,
            a2,
            0LL,
            0);
          v23 = v42[0];
          if ( v42[0] )
          {
            v41 = 0LL;
            *v38 = 0;
            if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v42, Dst, v18, 0LL, 0LL) )
            {
              v26 = W32GetSessionState(v25, v24);
              SEMOBJ<17>::SEMOBJ<17>((HSEMAPHORE *)&v38, *(_QWORD *)(v26 + 96) + 4864LL);
              if ( (unsigned int)PFFOBJ::bAddHash((__int64 **)v42, 0LL, v27) )
              {
                v35 = 0;
                if ( !PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)this, Dst, v21, 1, a3, v22, &v35, 0) )
                {
                  v30 = *this;
                  if ( (*((_DWORD *)v23 + 13) & 0x200) == 0 )
                    ++*((_DWORD *)v30 + 8);
                  ++*((_DWORD *)v30 + 7);
                  PFT::InsertBucketHead(*this, v35, v23);
                  PFFOBJ::vSetUniqueness((PFFOBJ *)v42, v31, v32);
                  PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v42);
                  v8 = *((unsigned int *)v23 + 37);
                }
              }
              else
              {
                PFFOBJ::vRemoveHash((PFFOBJ *)v42, v28, v29);
              }
              SEMOBJ<17>::vUnlock((HSEMAPHORE *)&v38);
            }
          }
          PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v42);
        }
      }
    }
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v41);
    return v8;
  }
  else
  {
    if ( a2 )
      Win32FreePool(a2);
    return 0LL;
  }
}
