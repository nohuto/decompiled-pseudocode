/*
 * XREFs of ?bCreateFontFileView@@YAHPEBUFONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x14021C210
 * Callers:
 *     ?GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z @ 0x14021BB1C (-GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z.c)
 *     NtGdiAddRemoteFontToDC @ 0x14031C1A0 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     ??0AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x140140258 (--0AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ??1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x140140398 (--1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ?Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA_N_K@Z @ 0x1401404A4 (-Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA_N_K@Z.c)
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall bCreateFontFileView(
        const struct FONTFILEVIEW *a1,
        const struct tagDOWNLOADFONTHEADER *a2,
        unsigned int a3,
        struct FONTFILEVIEW ***a4,
        unsigned int a5)
{
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v11; // rax
  struct FONTFILEVIEW **v12; // r14
  __int64 *v13; // r13
  __int64 v14; // rsi
  unsigned int v15; // r15d
  __int64 i; // rdi
  unsigned int v17; // ecx
  __int64 v18; // [rsp+30h] [rbp-1B8h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-1B0h]
  int v20; // [rsp+3Ch] [rbp-1ACh]
  int v21; // [rsp+40h] [rbp-1A8h]
  const struct tagDOWNLOADFONTHEADER *v22; // [rsp+48h] [rbp-1A0h]
  __int64 v23; // [rsp+50h] [rbp-198h]
  struct FONTFILEVIEW ***v24; // [rsp+58h] [rbp-190h]
  __int64 *v25; // [rsp+60h] [rbp-188h]
  __int64 v26; // [rsp+68h] [rbp-180h]
  __int128 v27; // [rsp+70h] [rbp-178h]
  __int128 v28; // [rsp+80h] [rbp-168h]
  __int128 v29; // [rsp+90h] [rbp-158h]
  __int128 v30; // [rsp+A0h] [rbp-148h]
  __int128 v31; // [rsp+B0h] [rbp-138h]
  __int128 v32; // [rsp+C0h] [rbp-128h]
  __int128 v33; // [rsp+D0h] [rbp-118h]
  __int128 v34; // [rsp+F0h] [rbp-F8h]
  struct _KAPC_STATE ApcState; // [rsp+160h] [rbp-88h] BYREF
  int v36; // [rsp+1A4h] [rbp-44h]

  v22 = a2;
  v24 = a4;
  v19 = a5;
  v8 = 1;
  UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::AutoAttachFonDrvProcess((UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)&ApcState);
  if ( !UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::Attach(&ApcState, *((_QWORD *)a1 + 9), v9) )
    goto LABEL_2;
  v27 = *(_OWORD *)a1;
  v28 = *((_OWORD *)a1 + 1);
  v34 = v28;
  v29 = *((_OWORD *)a1 + 2);
  v30 = *((_OWORD *)a1 + 3);
  v31 = *((_OWORD *)a1 + 4);
  v32 = *((_OWORD *)a1 + 5);
  v33 = *((_OWORD *)a1 + 6);
  v18 = *((_QWORD *)a1 + 14);
  if ( a3 <= ((4 * a5 + 15) & 0xFFFFFFF8) )
  {
    v36 = 87;
LABEL_2:
    UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::~AutoAttachFonDrvProcess((UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)&ApcState);
    return 0LL;
  }
  v11 = PALLOCMEM(a5 << 7, 1986422343LL);
  v12 = (struct FONTFILEVIEW **)v11;
  v23 = v11;
  if ( !v11 )
  {
    v36 = 8;
    goto LABEL_2;
  }
  v13 = (__int64 *)v11;
  v14 = v11 + 8 * a5;
  *(_OWORD *)v14 = v27;
  *(_OWORD *)(v14 + 16) = v28;
  *(_OWORD *)(v14 + 32) = v29;
  *(_OWORD *)(v14 + 48) = v30;
  *(_OWORD *)(v14 + 64) = v31;
  *(_OWORD *)(v14 + 80) = v32;
  *(_OWORD *)(v14 + 96) = v33;
  *(_QWORD *)(v14 + 112) = v18;
  v15 = 0;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v20 = i;
    if ( (unsigned int)i >= v19 )
      break;
    LODWORD(v18) = 0;
    GreProbeAndReadFromUntrustedVa(&v18, 4uLL, (char *)v22 + 4 * i + 8, 4uLL, 1uLL);
    v17 = v18;
    if ( (unsigned int)v18 < v15 || (unsigned int)v18 > DWORD2(v34) || v15 != ((v15 + 3) & 0xFFFFFFFC) )
    {
      v8 = 0;
      v21 = 0;
      break;
    }
    *(_QWORD *)(v14 + 16) = v34 + v15;
    *(_DWORD *)(v14 + 24) = v17 - v15;
    *v13++ = v14;
    v25 = v13;
    v14 += 120LL;
    v26 = v14;
    v15 = v17;
  }
  if ( v8 )
    *a4 = v12;
  else
    Win32FreePool(v12);
  UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::~AutoAttachFonDrvProcess((UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)&ApcState);
  return v8;
}
