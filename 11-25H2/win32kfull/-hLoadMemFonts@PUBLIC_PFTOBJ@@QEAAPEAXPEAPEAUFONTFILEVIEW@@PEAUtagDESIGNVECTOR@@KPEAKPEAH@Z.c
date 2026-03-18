/*
 * XREFs of ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x14010DAC8
 * Callers:
 *     ?GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z @ 0x14010D2A4 (-GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z.c)
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
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x140108068 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z @ 0x14010DE2C (-ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCHECKSUM@@PEAPEAUFONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x14010E08C (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCH.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x14010ED5C (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x14010F6AC (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1401EA728 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::hLoadMemFonts(
        struct PFT **this,
        struct FONTFILEVIEW **a2,
        struct tagDESIGNVECTOR *a3,
        unsigned int a4,
        unsigned int *a5,
        int *a6)
{
  struct FONTFILEVIEW **v6; // rbx
  struct FONTFILEVIEW *v7; // rdx
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 SessionState; // rax
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // r14d
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // r8
  struct PFT *v30; // rcx
  struct PFF **v31; // rcx
  size_t Size; // [rsp+30h] [rbp-E0h]
  struct PFF **v33; // [rsp+90h] [rbp-80h] BYREF
  char v34[4]; // [rsp+98h] [rbp-78h] BYREF
  unsigned int v35; // [rsp+9Ch] [rbp-74h]
  unsigned int v36[2]; // [rsp+A0h] [rbp-70h] BYREF
  HDEV v37; // [rsp+A8h] [rbp-68h] BYREF
  int *v38; // [rsp+B0h] [rbp-60h] BYREF
  __int64 *v39[3]; // [rsp+B8h] [rbp-58h] BYREF
  char v40[8]; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v41; // [rsp+D8h] [rbp-38h] BYREF
  wchar_t Dst[32]; // [rsp+E0h] [rbp-30h] BYREF

  v6 = a2;
  v7 = *a2;
  v38 = a6;
  v35 = a4;
  v11 = 0LL;
  *(_QWORD *)v40 = *((_QWORD *)v7 + 2);
  *(_DWORD *)v34 = *((_DWORD *)v7 + 6);
  v33 = 0LL;
  if ( (int)ScrutinizeFontLoad(1LL) < 0 )
  {
    Win32FreePool(v6);
    return 0LL;
  }
  else
  {
    v37 = 0LL;
    UmfdHostLifeTimeManager::EnsureUmfdHost();
    SessionState = W32GetSessionState(v13, v12, v14);
    SEMOBJ<25>::SEMOBJ<25>((HSEMAPHORE *)&v41, *(_QWORD *)(SessionState + 96) + 4872LL);
    *(_QWORD *)v36 = 0LL;
    UmfdLoadFontFileView(0LL, 0, v6, 1u, (char)v40, (char)v34, a3, a4, (__int64 *)&v33, &v37, v36, 1, 0LL);
    if ( v41 )
      GreReleaseSemaphoreCommon<25,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v41);
    if ( v33 )
    {
      v16 = (*((__int64 (__fastcall **)(struct PFF **, __int64, _QWORD))v37 + 386))(v33, 2LL, 0LL);
      v20 = v16;
      if ( v16 )
      {
        if ( v16 != -1 )
        {
          *a5 = v16;
          v21 = W32GetSessionState(v18, v17, v19);
          swprintf_s(
            Dst,
            0x1EuLL,
            L"MEMORY-%u",
            (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v21 + 96) + 24024LL)));
          v22 = -1LL;
          do
            ++v22;
          while ( Dst[v22] );
          LODWORD(Size) = a4;
          PFFMEMOBJ::PFFMEMOBJ(
            (PFFMEMOBJ *)v39,
            v20,
            Dst,
            v22 + 1,
            1u,
            a3,
            Size,
            (unsigned __int64)v33,
            v37,
            0LL,
            *this,
            0x10u,
            0x30u,
            (struct FNTCHECKSUM *)v36,
            v6,
            0LL,
            0);
          v23 = v39[0];
          if ( v39[0] )
          {
            v6 = 0LL;
            *v38 = 0;
            if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v39, Dst, v20, 0LL, 0LL) )
            {
              v27 = W32GetSessionState(v25, v24, v26);
              SEMOBJ<17>::SEMOBJ<17>((HSEMAPHORE *)&v38, *(_QWORD *)(v27 + 96) + 4872LL);
              if ( (unsigned int)PFFOBJ::bAddHash(v39, 0LL, v28) )
              {
                v33 = 0LL;
                if ( !PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)this, Dst, (int)v22 + 1, 1, a3, v35, &v33, 0) )
                {
                  v30 = *this;
                  if ( (*((_DWORD *)v23 + 13) & 0x200) == 0 )
                    ++*((_DWORD *)v30 + 8);
                  ++*((_DWORD *)v30 + 7);
                  v31 = v33;
                  if ( *v33 )
                    *((_QWORD *)*v33 + 2) = v23;
                  v23[1] = (__int64)*v31;
                  v23[2] = 0LL;
                  *v31 = (struct PFF *)v23;
                  PFFOBJ::vSetUniqueness((PFFOBJ *)v39);
                  PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v39);
                  v11 = *((unsigned int *)v23 + 37);
                }
              }
              else
              {
                PFFOBJ::vRemoveHash((PFFOBJ *)v39);
              }
              SEMOBJ<17>::vUnlock((HSEMAPHORE *)&v38);
            }
          }
          PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v39);
        }
      }
    }
    if ( v6 )
      Win32FreePool(v6);
    return v11;
  }
}
