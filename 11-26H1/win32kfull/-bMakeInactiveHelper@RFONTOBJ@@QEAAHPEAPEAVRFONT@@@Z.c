/*
 * XREFs of ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1400F59E4
 * Callers:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x14006E3E4 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x140174084 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     vMakeInactiveHelper @ 0x1403250D4 (vMakeInactiveHelper.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140071640 (--$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400717B0 (--$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400C3B0C (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400F651C (--$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140105CD0 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 */

__int64 __fastcall RFONTOBJ::bMakeInactiveHelper(HSEMAPHORE *this, struct RFONT **a2, __int64 a3)
{
  struct RFONT **v3; // rdi
  unsigned int v5; // r15d
  HSEMAPHORE v6; // r14
  __int64 SessionState; // rax
  __int64 v8; // rsi
  int v9; // eax
  struct RFONT *v10; // rax
  struct RFONT *v11; // rcx
  struct RFONT *v12; // rcx
  HSEMAPHORE v13; // rax
  unsigned int i; // edx
  HSEMAPHORE v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // rdx
  __int64 *v23; // r8
  __int64 v24; // rdx
  int v25; // edx
  _QWORD *v26; // rdx
  __int64 *v27; // rax
  __int64 v28; // rcx
  __int64 v30; // rcx
  __int64 v31; // r9
  _QWORD *v32; // rdx
  _QWORD *v33; // rcx
  __int64 v34; // rcx
  struct RFONT *v35; // rcx
  __int64 v36; // [rsp+20h] [rbp-30h] BYREF
  _OWORD v37[2]; // [rsp+30h] [rbp-20h] BYREF
  HSEMAPHORE v38; // [rsp+80h] [rbp+30h] BYREF

  v3 = a2;
  v5 = 0;
  if ( !*this )
    return 0LL;
  v6 = 0LL;
  SessionState = W32GetSessionState(this, a2, a3);
  v8 = *(_QWORD *)(SessionState + 96) + 4864LL;
  if ( v3 )
  {
    GreAcquirePushLockShared2<16,0>(*(_QWORD *)(SessionState + 96) + 4864LL);
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8636));
    GreReleasePushLockShared2<16,0>(v8);
  }
  v38 = *(HSEMAPHORE *)(v8 + 15464);
  GreAcquireSemaphoreCommon<18,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
  v9 = *((_DWORD *)*this + 167);
  if ( v9 <= 0 )
  {
    GreAcquirePushLockShared2<16,0>(v8);
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 8636));
    GreReleasePushLockShared2<16,0>(v8);
    SEMOBJ<18>::vUnlock(&v38);
    return 0LL;
  }
  *((_DWORD *)*this + 167) = v9 - 1;
  if ( *((int *)*this + 167) > 0 )
    goto LABEL_45;
  if ( v3 )
  {
    v10 = (struct RFONT *)*((_QWORD *)*this + 91);
    if ( v10 )
    {
      *v3++ = v10;
      *((_QWORD *)*this + 91) = 0LL;
    }
    v5 = 1;
    v11 = (struct RFONT *)*((_QWORD *)*this + 92);
    if ( v11 )
    {
      *v3++ = v11;
      *((_QWORD *)*this + 92) = 0LL;
    }
    v12 = (struct RFONT *)*((_QWORD *)*this + 93);
    if ( v12 )
    {
      *v3++ = v12;
      *((_QWORD *)*this + 93) = 0LL;
    }
    v13 = *this;
    for ( i = 0; i < *((_DWORD *)*this + 212); ++i )
    {
      v35 = *(struct RFONT **)(*((_QWORD *)v13 + 94) + 8LL * i);
      if ( v35 )
      {
        *v3++ = v35;
        *(_QWORD *)(*((_QWORD *)*this + 94) + 8LL * i) = 0LL;
      }
      v13 = *this;
    }
    v15 = (HSEMAPHORE)*((_QWORD *)v13 + 94);
    if ( v15 && v15 != v13 + 190 )
      Win32FreePool(v15);
    *((_QWORD *)*this + 94) = 0LL;
    *((_DWORD *)*this + 212) = 0;
    *((_DWORD *)*this + 210) = 0;
  }
  v16 = *((_QWORD *)*this + 13);
  v17 = (__int64)(*this + 168);
  v18 = *(_QWORD *)v17;
  if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) != v17 )
    goto LABEL_29;
  v19 = (_QWORD *)*((_QWORD *)*this + 85);
  if ( *v19 != v17 )
    goto LABEL_29;
  *v19 = v18;
  *(_QWORD *)(v18 + 8) = v19;
  v20 = *((_QWORD *)*this + 16);
  if ( !*(_DWORD *)(v20 + 56) && !*(_DWORD *)(v20 + 60) && !*(_QWORD *)(v20 + 152) )
  {
    v6 = *this;
    goto LABEL_45;
  }
  v21 = *(_DWORD *)(v16 + 40) & 0x800000;
  v22 = v21 ? *(_QWORD *)(v16 + 3512) : v16;
  v23 = (__int64 *)(v16 + 3512);
  if ( *(_DWORD *)(v22 + 1552) >= 0x80u )
  {
    if ( v21 )
      v30 = *v23;
    else
      v30 = v16;
    v31 = v30 + 1536;
    v32 = *(_QWORD **)(v30 + 1544);
    if ( *v32 != v30 + 1536 )
      goto LABEL_29;
    v33 = (_QWORD *)v32[1];
    if ( (_QWORD *)*v33 != v32 )
      goto LABEL_29;
    *(_QWORD *)(v31 + 8) = v33;
    *v33 = v31;
    if ( (*(_DWORD *)(v16 + 40) & 0x800000) != 0 )
      v34 = *v23;
    else
      v34 = v16;
    v6 = (HSEMAPHORE)(v32 - 84);
    if ( v32 == (_QWORD *)(v34 + 1536) )
      v6 = 0LL;
  }
  else
  {
    v24 = v21 ? *v23 : v16;
    v25 = *(_DWORD *)(v24 + 1552) + 1;
    if ( v21 )
      *(_DWORD *)(*v23 + 1552) = v25;
    else
      *(_DWORD *)(v16 + 1552) = v25;
  }
  v26 = *this + 168;
  if ( (*(_DWORD *)(v16 + 40) & 0x800000) != 0 )
    v16 = *v23;
  v27 = (__int64 *)(v16 + 1536);
  v28 = *v27;
  if ( *(__int64 **)(*v27 + 8) != v27 )
LABEL_29:
    __fastfail(3u);
  *v26 = v28;
  v26[1] = v27;
  *(_QWORD *)(v28 + 8) = v26;
  *v27 = (__int64)v26;
LABEL_45:
  SEMOBJ<18>::vUnlock(&v38);
  if ( v3 && !v5 )
  {
    GreAcquirePushLockShared2<16,0>(v8);
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 8636));
    GreReleasePushLockShared2<16,0>(v8);
  }
  if ( v6 )
  {
    v36 = *((_QWORD *)v6 + 16);
    v38 = v6;
    memset(v37, 0, sizeof(v37));
    PushThreadGuardedObject(v37, v6, RestartInactiveHelper);
    RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v38, 0LL, (struct PFFOBJ *)&v36, 1);
    PopThreadGuardedObject(v37);
    v38 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v38);
  }
  *this = 0LL;
  return v5;
}
