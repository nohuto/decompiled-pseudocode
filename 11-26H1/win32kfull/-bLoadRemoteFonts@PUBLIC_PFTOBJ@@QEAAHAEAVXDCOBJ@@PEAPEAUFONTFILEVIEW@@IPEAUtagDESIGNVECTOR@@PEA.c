/*
 * XREFs of ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1403273E8
 * Callers:
 *     NtGdiAddRemoteMMInstanceToDC @ 0x140312150 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiAddRemoteFontToDC @ 0x14031C1A0 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400C6908 (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z @ 0x1400CEA00 (-ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1401020EC (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x140104D2C (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x140104F04 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KAEAIH@Z @ 0x140106418 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KAEAIH@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCHECKSUM@@PEAPEAUFONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x14013F72C (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCH.c)
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x140187408 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x140213954 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x140214E4C (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x14021A5BC (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ?bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z @ 0x140263884 (-bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z.c)
 *     ?InsertBucketHead@PFT@@QEAAXKPEAVPFF@@@Z @ 0x140326D30 (-InsertBucketHead@PFT@@QEAAXKPEAVPFF@@@Z.c)
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAUHDEV__@@PEAUFNTCHECKSUM@@HPEAH@Z @ 0x140327830 (-vLoadFontFileView@@YAXPEAGKPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAUH.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::bLoadRemoteFonts(
        PFT **this,
        struct XDCOBJ *a2,
        struct FONTFILEVIEW **a3,
        unsigned int a4,
        struct tagDESIGNVECTOR *Src,
        struct _UNIVERSAL_FONT_ID *a6,
        int *a7)
{
  unsigned int v7; // ebx
  __int64 v10; // rsi
  unsigned int v11; // r13d
  __int64 v12; // rax
  void **v13; // rdi
  unsigned int *v14; // rdx
  unsigned int *v15; // r10
  struct FONTFILEVIEW **v16; // r8
  __int64 v17; // r11
  __int64 v18; // rax
  unsigned __int64 v19; // rdi
  unsigned int FontFile; // eax
  __int64 v21; // rdx
  int v22; // ecx
  unsigned int v23; // r14d
  __int64 SessionState; // rax
  __int64 v25; // rax
  struct PFF *v26; // rdi
  struct _UNIVERSAL_FONT_ID *v27; // r9
  __int64 v28; // rdx
  int v29; // ecx
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r8
  PFT *v34; // rdx
  size_t Size; // [rsp+30h] [rbp-E0h]
  struct PFT *v37; // [rsp+50h] [rbp-C0h]
  HDEV v38; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v39[2]; // [rsp+98h] [rbp-78h] BYREF
  HDEV v40; // [rsp+A0h] [rbp-70h] BYREF
  int *v41; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-60h] BYREF
  struct _UNIVERSAL_FONT_ID *v43; // [rsp+B8h] [rbp-58h]
  void *v44; // [rsp+C0h] [rbp-50h] BYREF
  struct PFF *v45[3]; // [rsp+C8h] [rbp-48h] BYREF
  struct FONTFILEVIEW **v46; // [rsp+E0h] [rbp-30h]
  XDCOBJ *v47; // [rsp+E8h] [rbp-28h]
  void *v48[2]; // [rsp+F0h] [rbp-20h] BYREF
  __int128 v49; // [rsp+100h] [rbp-10h]
  unsigned int v50; // [rsp+110h] [rbp+0h] BYREF
  wchar_t Dst[32]; // [rsp+120h] [rbp+10h] BYREF

  v7 = 0;
  v43 = a6;
  v41 = a7;
  v10 = a4;
  v46 = a3;
  v47 = a2;
  v44 = a3;
  *(_QWORD *)v39 = 0LL;
  if ( Src )
    v11 = 4 * *((_DWORD *)Src + 1) + 8;
  else
    v11 = 0;
  v42 = 0LL;
  *(_OWORD *)v48 = 0LL;
  v49 = 0LL;
  if ( ScrutinizeFontLoad(2u, 0LL) < 0 )
    goto LABEL_29;
  if ( (unsigned int)v10 > 4 )
  {
    v12 = PALLOCMEM(16 * (int)v10, 1986422343LL);
    v13 = (void **)v12;
    if ( !v12 )
      goto LABEL_29;
    v14 = (unsigned int *)(v12 + 32);
    goto LABEL_9;
  }
  v13 = v48;
  v14 = &v50;
  if ( (_DWORD)v10 )
  {
LABEL_9:
    v15 = v14;
    v16 = a3;
    v17 = v10;
    do
    {
      *(struct FONTFILEVIEW **)((char *)v16 + (char *)v13 - (char *)a3) = (struct FONTFILEVIEW *)*((_QWORD *)*v16 + 2);
      v18 = (__int64)*v16++;
      *v15++ = *(_DWORD *)(v18 + 24);
      --v17;
    }
    while ( v17 );
  }
  v38 = 0LL;
  vLoadFontFileView(
    0LL,
    0,
    a3,
    v10,
    v13,
    v14,
    Src,
    v11,
    (unsigned __int64 *)v39,
    &v38,
    (struct FNTCHECKSUM *)&v42,
    1,
    0LL);
  v40 = v38;
  if ( v13 != v48 )
    Win32FreePool(v13);
  v19 = *(_QWORD *)v39;
  if ( *(_QWORD *)v39 )
  {
    FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v40, *(__int64 *)v39, 2u, 0, 0LL);
    v23 = FontFile;
    if ( FontFile )
    {
      if ( FontFile != -1 )
      {
        SessionState = W32GetSessionState(v22, v21);
        swprintf_s(
          Dst,
          0x1EuLL,
          L"REMOTE-%u",
          (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(SessionState + 96) + 24004LL)));
        v25 = -1LL;
        do
          ++v25;
        while ( Dst[v25] );
        v37 = *this;
        LODWORD(Size) = v11;
        v39[0] = v25 + 1;
        PFFMEMOBJ::PFFMEMOBJ(
          (PFFMEMOBJ *)v45,
          v23,
          Dst,
          v25 + 1,
          v10,
          Src,
          Size,
          v19,
          v38,
          0LL,
          v37,
          0x20u,
          0x20u,
          (struct FNTCHECKSUM *)&v42,
          v46,
          v43,
          0);
        v26 = v45[0];
        if ( v45[0] )
        {
          v27 = v43;
          v44 = 0LL;
          *v41 = 0;
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v45, Dst, v23, v27, 0LL) )
          {
            v30 = W32GetSessionState(v29, v28);
            SEMOBJ<17>::SEMOBJ<17>((HSEMAPHORE *)&v41, *(_QWORD *)(v30 + 96) + 4864LL);
            if ( (unsigned int)PFFOBJ::bAddHash((__int64 **)v45, 0LL, v31) )
            {
              LODWORD(v38) = 0;
              if ( !PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)this, Dst, v39[0], v10, Src, v11, (unsigned int *)&v38, 0)
                && (unsigned int)XDCOBJ::bAddRemoteFont(v47, v26) )
              {
                v7 = 1;
                v34 = *this;
                if ( (*((_DWORD *)v26 + 13) & 0x200) == 0 )
                  ++*((_DWORD *)v34 + 8);
                ++*((_DWORD *)v34 + 7);
                PFT::InsertBucketHead(*this, (unsigned int)v38, v26);
                PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v45);
              }
            }
            else
            {
              PFFOBJ::vRemoveHash((PFFOBJ *)v45, v32, v33);
            }
            SEMOBJ<17>::vUnlock((HSEMAPHORE *)&v41);
          }
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v45);
      }
    }
  }
LABEL_29:
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v44);
  return v7;
}
