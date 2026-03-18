/*
 * XREFs of ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x140228C20
 * Callers:
 *     NtGdiAddRemoteFontToDC @ 0x140304710 (NtGdiAddRemoteFontToDC.c)
 *     NtGdiAddRemoteMMInstanceToDC @ 0x140328CA0 (NtGdiAddRemoteMMInstanceToDC.c)
 * Callees:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14001922C (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1400B59F8 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$0BJ@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B5D5C (--0-$SEMOBJ@$0BJ@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     UmfdLoadFontFileView @ 0x1400B5DE4 (UmfdLoadFontFileView.c)
 *     ??$GreReleaseSemaphoreCommon@$0BJ@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400B614C (--$GreReleaseSemaphoreCommon@$0BJ@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B975C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x140106FA8 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x140107864 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x140108068 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z @ 0x14010DE2C (-ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCHECKSUM@@PEAPEAUFONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x14010E08C (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCH.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x14010ED5C (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1401C2AA4 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1401EA728 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ?bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z @ 0x1402FFED0 (-bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::bLoadRemoteFonts(
        PUBLIC_PFTOBJ *this,
        struct XDCOBJ *a2,
        struct FONTFILEVIEW **a3,
        unsigned int a4,
        struct tagDESIGNVECTOR *Src,
        struct PFF **a6,
        int *a7)
{
  struct FONTFILEVIEW **v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // r15
  unsigned int v10; // r12d
  __int64 v11; // rax
  char *v12; // rdi
  char *v13; // r14
  char *v14; // r9
  struct FONTFILEVIEW **v15; // rdx
  __int64 v16; // r10
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // ecx
  __int64 SessionState; // rax
  unsigned int v21; // eax
  __int64 v22; // rdx
  int v23; // ecx
  unsigned int v24; // r12d
  __int64 v25; // rax
  __int64 v26; // r14
  struct PFF *v27; // rdi
  struct PFF **v28; // r9
  __int64 v29; // rdx
  int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  unsigned int v35; // r8d
  PUBLIC_PFTOBJ *v36; // r14
  __int64 v37; // rcx
  struct PFF **v38; // rcx
  size_t Size; // [rsp+30h] [rbp-E0h]
  unsigned int v41; // [rsp+90h] [rbp-80h]
  struct PFF **v42; // [rsp+98h] [rbp-78h] BYREF
  unsigned int v43[2]; // [rsp+A0h] [rbp-70h] BYREF
  HDEV v44; // [rsp+A8h] [rbp-68h] BYREF
  unsigned __int64 v45; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v46; // [rsp+B8h] [rbp-58h] BYREF
  int *v47; // [rsp+C0h] [rbp-50h] BYREF
  PUBLIC_PFTOBJ *v48; // [rsp+C8h] [rbp-48h]
  struct FONTFILEVIEW **v49; // [rsp+D0h] [rbp-40h] BYREF
  struct PFF *v50[3]; // [rsp+D8h] [rbp-38h] BYREF
  XDCOBJ *v51; // [rsp+F0h] [rbp-20h]
  char v52[16]; // [rsp+F8h] [rbp-18h] BYREF
  __int128 v53; // [rsp+108h] [rbp-8h]
  char v54; // [rsp+118h] [rbp+8h] BYREF
  wchar_t Dst[32]; // [rsp+128h] [rbp+18h] BYREF

  v7 = a3;
  v42 = a6;
  v8 = 0;
  v47 = a7;
  v9 = a4;
  v51 = a2;
  v48 = this;
  v49 = a3;
  v45 = 0LL;
  if ( Src )
    v10 = 4 * *((_DWORD *)Src + 1) + 8;
  else
    v10 = 0;
  v41 = v10;
  *(_OWORD *)v52 = 0LL;
  v53 = 0LL;
  if ( ScrutinizeFontLoad(2u, 0LL) < 0 )
    goto LABEL_37;
  if ( (unsigned int)v9 > 4 )
  {
    v11 = PALLOCMEM(16 * (int)v9, 1986422343LL);
    v12 = (char *)v11;
    if ( v11 )
    {
      v13 = (char *)(v11 + 32);
      goto LABEL_9;
    }
LABEL_37:
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&v49);
    return 0LL;
  }
  v12 = v52;
  v13 = &v54;
  if ( (_DWORD)v9 )
  {
LABEL_9:
    v14 = v13;
    v15 = v7;
    v16 = v9;
    do
    {
      *(struct FONTFILEVIEW **)((char *)v15 + v12 - (char *)v7) = (struct FONTFILEVIEW *)*((_QWORD *)*v15 + 2);
      v17 = (__int64)*v15++;
      *(_DWORD *)v14 = *(_DWORD *)(v17 + 24);
      v14 += 4;
      --v16;
    }
    while ( v16 );
  }
  v44 = 0LL;
  UmfdHostLifeTimeManager::EnsureUmfdHost();
  SessionState = W32GetSessionState(v19, v18);
  SEMOBJ<25>::SEMOBJ<25>((HSEMAPHORE *)&v46, *(_QWORD *)(SessionState + 96) + 4872LL);
  *(_QWORD *)v43 = 0LL;
  UmfdLoadFontFileView(0LL, 0, v7, v9, (char)v12, (char)v13, Src, v10, (__int64 *)&v45, &v44, v43, 1, 0LL);
  if ( v46 )
    GreReleaseSemaphoreCommon<25,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v46);
  if ( v12 != v52 )
    Win32FreePool(v12);
  if ( v45 )
  {
    v21 = (*((__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))v44 + 386))(v45, 2LL, 0LL);
    v24 = v21;
    if ( v21 )
    {
      if ( v21 != -1 )
      {
        v25 = W32GetSessionState(v23, v22);
        swprintf_s(
          Dst,
          0x1EuLL,
          L"REMOTE-%u",
          (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v25 + 96) + 24028LL)));
        v26 = -1LL;
        do
          ++v26;
        while ( Dst[v26] );
        LODWORD(Size) = v41;
        PFFMEMOBJ::PFFMEMOBJ(
          (PFFMEMOBJ *)v50,
          v24,
          Dst,
          v26 + 1,
          v9,
          Src,
          Size,
          v45,
          v44,
          0LL,
          *(struct PFT **)v48,
          0x20u,
          0x20u,
          (struct FNTCHECKSUM *)v43,
          v7,
          (struct _UNIVERSAL_FONT_ID *)v42,
          0);
        v27 = v50[0];
        if ( v50[0] )
        {
          v28 = v42;
          v7 = 0LL;
          *v47 = 0;
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable(
                               (PFFMEMOBJ *)v50,
                               Dst,
                               v24,
                               (struct _UNIVERSAL_FONT_ID *)v28,
                               0LL) )
          {
            v31 = W32GetSessionState(v30, v29);
            SEMOBJ<17>::SEMOBJ<17>((HSEMAPHORE *)&v47, *(_QWORD *)(v31 + 96) + 4872LL);
            if ( (unsigned int)PFFOBJ::bAddHash((__int64 **)v50, 0LL, v32) )
            {
              v35 = v26 + 1;
              v36 = v48;
              v42 = 0LL;
              if ( !PUBLIC_PFTOBJ::pPFFGet(v48, Dst, v35, v9, Src, v41, &v42, 0)
                && (unsigned int)XDCOBJ::bAddRemoteFont(v51, v27) )
              {
                v8 = 1;
                v37 = *(_QWORD *)v36;
                if ( (*((_DWORD *)v27 + 13) & 0x200) == 0 )
                  ++*(_DWORD *)(v37 + 32);
                ++*(_DWORD *)(v37 + 28);
                v38 = v42;
                if ( *v42 )
                  *((_QWORD *)*v42 + 2) = v27;
                *((_QWORD *)v27 + 1) = *v38;
                *((_QWORD *)v27 + 2) = 0LL;
                *v38 = v27;
                PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v50);
              }
            }
            else
            {
              PFFOBJ::vRemoveHash((PFFOBJ *)v50, v33, v34);
            }
            SEMOBJ<17>::vUnlock((HSEMAPHORE *)&v47);
          }
        }
        else
        {
          v7 = v49;
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v50);
      }
    }
  }
  if ( v7 )
    Win32FreePool(v7);
  return v8;
}
