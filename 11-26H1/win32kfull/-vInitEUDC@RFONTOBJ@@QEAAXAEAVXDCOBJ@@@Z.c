/*
 * XREFs of ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x140174084
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1400C0C28 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z @ 0x14010CB48 (-GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z.c)
 * Callees:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x14006E3E4 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1400C40D8 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400C5C18 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400D57B8 (--$GreReleaseSemaphoreExclusive@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$0P@PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400D5B14 (--$GreReleaseSemaphoreExclusive@$0P@PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??$GreAcquireSemaphore@$0P@PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400D5B7C (--$GreAcquireSemaphore@$0P@PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1400F59E4 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400F651C (--$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x14010D384 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x14010DE20 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z @ 0x14010EEB0 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z.c)
 *     ?bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z @ 0x140174C1C (-bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z.c)
 *     ?GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z @ 0x140174CF0 (-GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z.c)
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x140174DBC (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140174F44 (--$GreReleaseSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x14033A374 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall RFONTOBJ::vInitEUDC(RFONTOBJ *this, struct XDCOBJ *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v6; // rdi
  __int64 SessionState; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  const struct _IFIMETRICS *v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  _BYTE *v17; // r15
  __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rax
  void *v22; // rcx
  unsigned int v23; // ecx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rbx
  struct PFE *EUDCDefaultFontPFE; // rax
  struct PFE *v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 **v31; // rax
  __int64 *v32; // rbx
  struct XDCOBJ *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // ecx
  __int64 v37; // r13
  struct PFE *v38; // r8
  int v39; // r13d
  __int64 v40; // rbx
  bool v41; // si
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rcx
  int v46; // ecx
  __int64 *v47; // rbx
  __int64 v48; // rdi
  Gre::Base *v49; // rcx
  struct LFONT *v50; // rbx
  struct Gre::Base::SESSION_GLOBALS *v51; // rax
  __int64 v52; // [rsp+30h] [rbp-D0h] BYREF
  BOOL v53; // [rsp+38h] [rbp-C8h]
  __int64 v54; // [rsp+40h] [rbp-C0h]
  HSEMAPHORE v55; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v56; // [rsp+50h] [rbp-B0h]
  struct XDCOBJ *v57; // [rsp+58h] [rbp-A8h]
  _QWORD v58[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v59[8]; // [rsp+70h] [rbp-90h] BYREF
  struct LFONT *v60; // [rsp+78h] [rbp-88h]
  _OWORD v61[4]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v62[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v63; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v64; // [rsp+E0h] [rbp-20h]
  _BYTE v65[80]; // [rsp+F0h] [rbp-10h] BYREF

  v3 = *(_QWORD *)a2;
  v57 = a2;
  if ( *(_DWORD *)(v3 + 304) )
  {
    RFONTOBJ::vInitEUDCRemote(this, a2);
    return;
  }
  v6 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  SessionState = W32GetSessionState(this, a2, a3);
  v8 = *(_QWORD *)this;
  v9 = *(_QWORD *)(SessionState + 96) + 4864LL;
  v62[0] = v9;
  if ( !*(_QWORD *)(v8 + 736) && (*(_QWORD *)(v9 + 8656) || *(_QWORD *)(v9 + 8664))
    || (*(_DWORD *)(v9 + 14696) || *(_DWORD *)(v9 + 14688)) && !*(_QWORD *)(v8 + 744)
    || (v10 = *(_QWORD *)(v6 + 120)) != 0
    && (!*(_QWORD *)(v8 + 752) || *(_DWORD *)(v8 + 840) != 1 || *(_DWORD *)(v8 + 844) != *(_DWORD *)(v10 + 104)) )
  {
    LFONTOBJ::LFONTOBJ(
      (LFONTOBJ *)v59,
      *(struct HLFONT__ **)(*(_QWORD *)a2 + 1744LL),
      *(_QWORD **)(*(_QWORD *)a2 + 48LL));
    v11 = *(const struct _IFIMETRICS **)(v6 + 32);
    v52 = *(_QWORD *)this;
    IFIOBJR::IFIOBJR((IFIOBJR *)v61, v11, (struct RFONTOBJ *)&v52, a2);
    v63 = 0LL;
    v64 = 0LL;
    RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)&v63, a2);
    v12 = *(_QWORD *)this;
    v13 = *(_QWORD *)(*(_QWORD *)this + 744LL);
    v56 = *(_QWORD *)(*(_QWORD *)this + 736LL);
    v54 = v13;
    memset_0(v65, 0, sizeof(v65));
    v16 = *(_QWORD *)(v6 + 120);
    v17 = v65;
    v18 = 0LL;
    v53 = 0;
    if ( v16 )
    {
      v14 = *(_DWORD *)(v12 + 840) == 0;
      v53 = *(_DWORD *)(v12 + 840) == 0;
      if ( *(_QWORD *)(v12 + 752) && *(_DWORD *)(v12 + 844) != *(_DWORD *)(v16 + 104) )
      {
        v19 = 0LL;
        if ( *(_DWORD *)(v12 + 848) )
        {
          do
          {
            v20 = *(_QWORD *)(v12 + 752);
            v14 = *(_QWORD *)(v20 + 8 * v19);
            if ( v14 )
            {
              v55 = *(HSEMAPHORE *)(v20 + 8 * v19);
              RFONTOBJ::bMakeInactiveHelper(&v55, 0LL, v15);
              v21 = *(_QWORD *)this;
              v55 = 0LL;
              *(_QWORD *)(*(_QWORD *)(v21 + 752) + 8 * v19) = 0LL;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v55);
            }
            v12 = *(_QWORD *)this;
            v19 = (unsigned int)(v19 + 1);
          }
          while ( (unsigned int)v19 < *(_DWORD *)(*(_QWORD *)this + 848LL) );
        }
        v22 = *(void **)(v12 + 752);
        if ( v22 != (void *)(v12 + 760) )
          Win32FreePool(v22);
        v13 = v54;
        *(_QWORD *)(*(_QWORD *)this + 752LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)this + 848LL) = 0;
      }
      v12 = *(_QWORD *)this;
      if ( !*(_QWORD *)(*(_QWORD *)this + 752LL) )
        v53 = 1;
    }
    *(_DWORD *)(v12 + 720) |= 0x200u;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v57 + 48LL) + 40LL) & 0x8000) != 0 )
    {
      GreReleaseSemaphoreExclusive<15,RFONT *>(*(_QWORD *)this);
      GreReleaseSemaphoreExclusive<5,RFONT *>(*(_QWORD *)this);
    }
    v23 = *(_DWORD *)(*(_QWORD *)this + 852LL) != 0;
    LODWORD(v55) = v23;
    if ( !v56 )
    {
      v24 = v23;
      v25 = *(_QWORD *)(v9 + 8LL * v23 + 8656);
      if ( v25 )
      {
        v52 = 0LL;
        v58[0] = *(_QWORD *)(v25 + 32);
        if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v58) )
        {
          RFONTOBJ::vInit((RFONTOBJ *)&v52, v57, *(struct PFE **)(v9 + 8 * v24 + 8656), (struct _EUDCLOGFONT *)&v63);
          v26 = v56;
          if ( v52 )
            v26 = v52;
          v56 = v26;
        }
        else
        {
          v56 = 0LL;
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v52);
        v23 = (unsigned int)v55;
      }
    }
    if ( !*(_DWORD *)(v9 + 14696) )
      goto LABEL_44;
    if ( v13 )
      goto LABEL_45;
    EUDCDefaultFontPFE = RFONTOBJ::GetEUDCDefaultFontPFE(this, v23);
    v28 = EUDCDefaultFontPFE;
    if ( EUDCDefaultFontPFE )
    {
      v58[0] = *((_QWORD *)EUDCDefaultFontPFE + 4);
      v52 = 0LL;
      if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v58) )
      {
        RFONTOBJ::vInit((RFONTOBJ *)&v52, v57, v28, (struct _EUDCLOGFONT *)&v63);
        if ( v52 )
          v13 = v52;
        v54 = v13;
      }
      else
      {
        v54 = 0LL;
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v52);
    }
    else
    {
LABEL_44:
      v54 = 0LL;
    }
LABEL_45:
    if ( v53 )
    {
      v29 = *(unsigned int *)(*(_QWORD *)(v6 + 120) + 100LL);
      if ( (unsigned int)v29 <= 0xA )
      {
        v17 = v65;
      }
      else
      {
        v17 = (_BYTE *)PALLOCMEM((unsigned int)(8 * v29), 1718382187LL);
        if ( !v17 )
          goto LABEL_66;
      }
      v30 = *(_QWORD *)(v6 + 120);
      if ( v30 )
        v31 = (__int64 **)(v30 + 16);
      else
        v31 = (__int64 **)(*(_QWORD *)(W32GetSessionState(v29, v14, v15) + 96) + 14128LL);
      v32 = *v31;
      v33 = v57;
      while ( 1 )
      {
        v34 = *(_QWORD *)(v6 + 120);
        v35 = v34 ? v34 + 16 : *(_QWORD *)(W32GetSessionState(v29, v14, v15) + 96) + 14128LL;
        if ( v32 == (__int64 *)v35 )
          break;
        v36 = *((_DWORD *)v32 + 6);
        v61[0] = v63;
        v61[1] = v64;
        if ( v36 )
          HIDWORD(v61[0]) = v36 * HIDWORD(v63) / *((_DWORD *)v32 + 7);
        v37 = v32[(unsigned int)v55 + 4] != 0 ? (unsigned int)v55 : 0;
        v58[0] = *(_QWORD *)(v32[v37 + 4] + 32);
        if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v58) )
        {
          v38 = (struct PFE *)v32[v37 + 4];
          v52 = 0LL;
          RFONTOBJ::vInit((RFONTOBJ *)&v52, v33, v38, (struct _EUDCLOGFONT *)v61);
          if ( v52 )
          {
            *(_QWORD *)&v17[8 * v18] = v52;
            v18 = (unsigned int)(v18 + 1);
          }
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v52);
        }
        v32 = (__int64 *)*v32;
      }
      v9 = v62[0];
    }
LABEL_66:
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v57 + 48LL) + 40LL) & 0x8000) != 0 )
    {
      GreAcquireSemaphore<5,RFONT *>(*(_QWORD *)this);
      GreAcquireSemaphore<15,RFONT *>(*(_QWORD *)this);
    }
    v39 = *(_DWORD *)(*(_QWORD *)this + 720LL) & 0x200;
    *(_DWORD *)(*(_QWORD *)this + 720LL) &= ~0x200u;
    v40 = *(_QWORD *)(v9 + 15464);
    GreAcquireSemaphoreCommon<18,void (*)(HSEMAPHORE__ *)>(
      (void (__fastcall *)(__int64))GreAcquireSemaphoreSharedInternal,
      v40);
    if ( *(int *)(*(_QWORD *)this + 668LL) <= 0 && v39 )
    {
      LODWORD(v62[0]) = 37110869;
      *(_QWORD *)((char *)v62 + 4) = 2LL;
      RtlLogUnexpectedCodepath(v62);
    }
    v41 = *(_DWORD *)(*(_QWORD *)this + 668LL) > 0;
    GreReleaseSemaphoreCommon<18,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v40);
    if ( ((unsigned __int8)-(v39 != 0) & v41) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)this + 736LL) = v56;
      *(_QWORD *)(*(_QWORD *)this + 744LL) = v54;
      if ( v53 )
      {
        v42 = *(_QWORD *)this;
        if ( (_DWORD)v18 )
        {
          if ( (unsigned int)v18 <= 0xA )
            *(_QWORD *)(v42 + 752) = v42 + 760;
          else
            *(_QWORD *)(v42 + 752) = v17;
          v43 = 0LL;
          v44 = (unsigned int)v18;
          do
          {
            *(_QWORD *)(v43 + *(_QWORD *)(*(_QWORD *)this + 752LL)) = *(_QWORD *)&v17[v43];
            v43 += 8LL;
            --v44;
          }
          while ( v44 );
        }
        else
        {
          *(_QWORD *)(v42 + 752) = 0LL;
        }
        *(_DWORD *)(*(_QWORD *)this + 848LL) = v18;
        v45 = *(_QWORD *)(v6 + 120);
        if ( v45 )
          v46 = *(_DWORD *)(v45 + 104);
        else
          v46 = 0;
        *(_DWORD *)(*(_QWORD *)this + 844LL) = v46;
        *(_DWORD *)(*(_QWORD *)this + 840LL) = 1;
      }
      if ( *(_BYTE **)(*(_QWORD *)this + 752LL) != v17 && v17 && v17 != v65 )
        Win32FreePool(v17);
      RFONTOBJ::UpdateFontLinksLockOrder(this);
    }
    else
    {
      v52 = v56;
      RFONTOBJ::vMakeInactive((RFONTOBJ *)&v52);
      v52 = v54;
      RFONTOBJ::vMakeInactive((RFONTOBJ *)&v52);
      if ( (_DWORD)v18 )
      {
        v47 = (__int64 *)v17;
        v48 = (unsigned int)v18;
        do
        {
          v52 = *v47;
          RFONTOBJ::vMakeInactive((RFONTOBJ *)&v52);
          v52 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v52);
          ++v47;
          --v48;
        }
        while ( v48 );
      }
      if ( v17 != v65 )
        Win32FreePool(v17);
      v52 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v52);
      v52 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v52);
    }
    v52 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v52);
    v50 = v60;
    if ( v60 )
    {
      v51 = Gre::Base::Globals(v49);
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v51, v50);
    }
  }
}
