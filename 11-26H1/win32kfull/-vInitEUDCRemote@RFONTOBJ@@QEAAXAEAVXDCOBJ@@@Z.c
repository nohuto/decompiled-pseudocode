/*
 * XREFs of ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x14033A374
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x140174084 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x14006E3E4 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1400C40D8 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400C5C18 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x1400C6710 (--1PFFREFOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400C6908 (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400D57B8 (--$GreReleaseSemaphoreExclusive@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$0P@PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400D5B14 (--$GreReleaseSemaphoreExclusive@$0P@PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??$GreAcquireSemaphore@$0P@PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400D5B7C (--$GreAcquireSemaphore@$0P@PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??0?$SEMOBJSHARED@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400F6088 (--0-$SEMOBJSHARED@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1400FF980 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x14010D384 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x14010DE20 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z @ 0x14010EEB0 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x14010FB74 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x140174DBC (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140174F44 (--$GreReleaseSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     ?vAddRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1401B5008 (-vAddRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x14033A2B4 (-ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall RFONTOBJ::vInitEUDCRemote(RFONTOBJ *this, struct XDCOBJ *a2)
{
  _QWORD *v4; // rcx
  char v5; // r12
  unsigned int v6; // edx
  __int64 v7; // rax
  _QWORD *v8; // r8
  struct HLFONT__ *v9; // rdx
  const struct _IFIMETRICS *v10; // rdx
  __int64 v11; // rdx
  __int64 *v12; // r15
  unsigned int v13; // esi
  unsigned int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int i; // r12d
  __int64 SessionState; // rax
  struct PFE *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  struct PFE *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct _LIST_ENTRY *j; // rcx
  int Blink; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // r14d
  __int64 v31; // rax
  bool v32; // bl
  __int64 v33; // rdx
  __int64 v34; // r8
  void *v35; // rcx
  __int64 *v36; // rbx
  __int64 v37; // rdi
  __int64 v38; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v40[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v41; // [rsp+50h] [rbp-B0h]
  struct LFONT *v42[3]; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v43[4]; // [rsp+70h] [rbp-90h] BYREF
  int v44; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v45; // [rsp+B4h] [rbp-4Ch]
  __int128 v46; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v47; // [rsp+D0h] [rbp-30h]
  _BYTE v48[80]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = *(_QWORD **)(*(_QWORD *)this + 752LL);
  if ( v4 )
  {
    if ( *v4 )
      return;
    GrepCaptureLiveMemoryDump(400LL, 24LL, 0LL);
  }
  v5 = 0;
  if ( !*(_QWORD *)(*(_QWORD *)this + 752LL) )
  {
    v6 = *(_DWORD *)(*(_QWORD *)a2 + 304LL);
    if ( v6 <= 0xA )
    {
      *(_QWORD *)(*(_QWORD *)this + 752LL) = *(_QWORD *)this + 760LL;
    }
    else
    {
      v7 = PALLOCMEM(8 * v6, 1718382187LL);
      *(_QWORD *)(*(_QWORD *)this + 752LL) = v7;
      if ( !v7 )
        return;
      v5 = 1;
    }
  }
  *(_DWORD *)(*(_QWORD *)this + 848LL) = 0;
  v8 = *(_QWORD **)(*(_QWORD *)a2 + 48LL);
  v9 = *(struct HLFONT__ **)(*(_QWORD *)a2 + 1744LL);
  v39 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)v42, v9, v8);
  v10 = *(const struct _IFIMETRICS **)(v39 + 32);
  v38 = *(_QWORD *)this;
  IFIOBJR::IFIOBJR((IFIOBJR *)v43, v10, (struct RFONTOBJ *)&v38, a2);
  v46 = 0LL;
  v47 = 0LL;
  RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)&v46, a2);
  memset_0(v48, 0, sizeof(v48));
  v12 = (__int64 *)v48;
  v13 = 0;
  v14 = *(_DWORD *)(*(_QWORD *)a2 + 304LL);
  if ( v14 <= 0xA || (v12 = (__int64 *)PALLOCMEM(8 * v14, 1718382187LL)) != 0LL )
  {
    *(_DWORD *)(*(_QWORD *)this + 720LL) |= 0x200u;
    v15 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    if ( (*(_DWORD *)(v15 + 40) & 0x8000) != 0 )
    {
      GreReleaseSemaphoreExclusive<15,RFONT *>(*(_QWORD *)this);
      GreReleaseSemaphoreExclusive<5,RFONT *>(*(_QWORD *)this);
    }
    v16 = *(_QWORD *)a2;
    for ( i = 0; i < *(_DWORD *)(*(_QWORD *)a2 + 304LL); ++i )
    {
      v40[0] = 0LL;
      v38 = 0LL;
      SessionState = W32GetSessionState(v15, v11);
      SEMOBJ<17>::SEMOBJ<17>((HSEMAPHORE *)&v44, *(_QWORD *)(SessionState + 96) + 4864LL);
      v19 = ppfeFromUFI((struct _UNIVERSAL_FONT_ID *)(*(_QWORD *)(*(_QWORD *)a2 + 296LL) + 8LL * i), i);
      v22 = v19;
      if ( v19 )
      {
        v40[0] = *(_QWORD *)v19;
        PFFOBJ::vAddRFONTRef((PFFOBJ *)v40, v20, v21);
        v41 = 0;
      }
      SEMOBJ<17>::vUnlock((HSEMAPHORE *)&v44);
      if ( v22 )
      {
        v43[0] = v46;
        v43[1] = v47;
        LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v39, v23, v24);
        if ( LinkedFontList )
        {
          for ( j = LinkedFontList->Flink; j != LinkedFontList; j = j->Flink )
          {
            if ( (struct PFE *)j[2].Flink == v22 || (struct PFE *)j[2].Blink == v22 )
            {
              Blink = (int)j[1].Blink;
              if ( Blink )
                HIDWORD(v43[0]) = HIDWORD(v46) * Blink / SHIDWORD(j[1].Blink);
              break;
            }
          }
        }
        RFONTOBJ::vInit((RFONTOBJ *)&v38, a2, v22, (struct _EUDCLOGFONT *)v43);
        if ( v38 )
        {
          v28 = v13++;
          v12[v28] = v38;
        }
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v38);
      PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v40);
      v16 = *(_QWORD *)a2;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v16 + 48) + 40LL) & 0x8000) != 0 )
    {
      GreAcquireSemaphore<5,RFONT *>(*(_QWORD *)this);
      GreAcquireSemaphore<15,RFONT *>(*(_QWORD *)this);
    }
    v29 = *(_QWORD *)this;
    v30 = *(_DWORD *)(*(_QWORD *)this + 720LL) & 0x200;
    *(_DWORD *)(v29 + 720) = *(_DWORD *)(*(_QWORD *)this + 720LL) & 0xFFFFFDFF;
    v31 = W32GetSessionState(v29, v11);
    SEMOBJSHARED<18>::SEMOBJSHARED<18>(&v39, *(_QWORD *)(v31 + 96) + 4864LL);
    if ( *(int *)(*(_QWORD *)this + 668LL) <= 0 && v30 )
    {
      v44 = 37110869;
      v45 = 1LL;
      RtlLogUnexpectedCodepath(&v44);
    }
    v32 = *(_DWORD *)(*(_QWORD *)this + 668LL) > 0;
    GreReleaseSemaphoreCommon<18,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v39);
    if ( ((unsigned __int8)-(v30 != 0) & v32) != 0 )
    {
      if ( v13 )
      {
        v33 = 0LL;
        v34 = v13;
        do
        {
          *(_QWORD *)(v33 * 8 + *(_QWORD *)(*(_QWORD *)this + 752LL)) = v12[v33];
          ++v33;
          --v34;
        }
        while ( v34 );
        *(_DWORD *)(*(_QWORD *)this + 848LL) = v13;
      }
      else
      {
        v35 = *(void **)(*(_QWORD *)this + 752LL);
        if ( v35 != (void *)(*(_QWORD *)this + 760LL) )
          Win32FreePool(v35);
        *(_QWORD *)(*(_QWORD *)this + 752LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)this + 848LL) = 0;
      }
      RFONTOBJ::UpdateFontLinksLockOrder(this);
    }
    else if ( v13 )
    {
      v36 = v12;
      v37 = v13;
      do
      {
        v38 = *v36;
        RFONTOBJ::vMakeInactive((RFONTOBJ *)&v38);
        v38 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v38);
        ++v36;
        --v37;
      }
      while ( v37 );
    }
    if ( v12 != (__int64 *)v48 )
      Win32FreePool(v12);
  }
  else if ( v5 )
  {
    Win32FreePool(*(void **)(*(_QWORD *)this + 752LL));
    *(_QWORD *)(*(_QWORD *)this + 752LL) = 0LL;
  }
  v38 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v38);
  LFONTOBJ::~LFONTOBJ(v42);
}
