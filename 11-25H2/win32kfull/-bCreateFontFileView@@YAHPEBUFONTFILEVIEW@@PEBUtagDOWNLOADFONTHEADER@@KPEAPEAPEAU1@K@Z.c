/*
 * XREFs of ?bCreateFontFileView@@YAHPEBUFONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x14010E5AC
 * Callers:
 *     ?GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z @ 0x14010D2A4 (-GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z.c)
 *     NtGdiAddRemoteFontToDC @ 0x140304710 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 *     ??0AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x14010E874 (--0AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ??1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x14010EA20 (--1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ?Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA_N_K@Z @ 0x14010EABC (-Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA_N_K@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall bCreateFontFileView(
        const struct FONTFILEVIEW *a1,
        const struct tagDOWNLOADFONTHEADER *a2,
        unsigned int a3,
        struct FONTFILEVIEW ***a4,
        unsigned int a5)
{
  unsigned int v9; // ebx
  struct FONTFILEVIEW **v10; // rax
  struct FONTFILEVIEW **v11; // r11
  struct FONTFILEVIEW **v12; // rdx
  unsigned int v13; // r9d
  __int64 i; // rcx
  unsigned int v15; // r10d
  __int128 v17; // [rsp+50h] [rbp-168h]
  __int128 v18; // [rsp+60h] [rbp-158h]
  __int128 v19; // [rsp+70h] [rbp-148h]
  __int128 v20; // [rsp+80h] [rbp-138h]
  __int128 v21; // [rsp+90h] [rbp-128h]
  __int128 v22; // [rsp+A0h] [rbp-118h]
  __int128 v23; // [rsp+B0h] [rbp-108h]
  struct FONTFILEVIEW *v24; // [rsp+130h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+140h] [rbp-78h] BYREF
  int v26; // [rsp+184h] [rbp-34h]

  v9 = 1;
  UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::AutoAttachFonDrvProcess((UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)&ApcState);
  if ( !UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::Attach(&ApcState, *((_QWORD *)a1 + 9)) )
    goto LABEL_16;
  v17 = *(_OWORD *)a1;
  v18 = *((_OWORD *)a1 + 1);
  v19 = *((_OWORD *)a1 + 2);
  v20 = *((_OWORD *)a1 + 3);
  v21 = *((_OWORD *)a1 + 4);
  v22 = *((_OWORD *)a1 + 5);
  v23 = *((_OWORD *)a1 + 6);
  v24 = (struct FONTFILEVIEW *)*((_QWORD *)a1 + 14);
  if ( a3 <= ((4 * a5 + 15) & 0xFFFFFFF8) )
  {
    v26 = 87;
    goto LABEL_16;
  }
  v10 = (struct FONTFILEVIEW **)PALLOCMEM(a5 << 7, 1986422343LL);
  if ( !v10 )
  {
    v26 = 8;
LABEL_16:
    UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::~AutoAttachFonDrvProcess((UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)&ApcState);
    return 0LL;
  }
  v11 = v10;
  v12 = &v10[a5];
  *(_OWORD *)v12 = v17;
  *((_OWORD *)v12 + 1) = v18;
  *((_OWORD *)v12 + 2) = v19;
  *((_OWORD *)v12 + 3) = v20;
  *((_OWORD *)v12 + 4) = v21;
  *((_OWORD *)v12 + 5) = v22;
  *((_OWORD *)v12 + 6) = v23;
  v12[14] = v24;
  v13 = 0;
  for ( i = 0LL; (unsigned int)i < a5; i = (unsigned int)(i + 1) )
  {
    v15 = *((_DWORD *)a2 + i + 2);
    if ( v15 < v13 || v15 > DWORD2(v18) || v13 != ((v13 + 3) & 0xFFFFFFFC) )
    {
      v9 = 0;
      break;
    }
    v12[2] = (struct FONTFILEVIEW *)(v18 + v13);
    *((_DWORD *)v12 + 6) = v15 - v13;
    *v11++ = (struct FONTFILEVIEW *)v12;
    v12 += 15;
    v13 = v15;
  }
  if ( v9 )
    *a4 = v10;
  else
    Win32FreePool(v10);
  UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::~AutoAttachFonDrvProcess((UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)&ApcState);
  return v9;
}
