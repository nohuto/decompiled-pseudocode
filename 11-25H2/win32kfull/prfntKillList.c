/*
 * XREFs of prfntKillList @ 0x1400D7300
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x140106A9C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x14010FBC0 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400BA064 (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ?cInactive@UPDEVOBJ@@QEBA@XZ @ 0x1400D7634 (-cInactive@UPDEVOBJ@@QEBA@XZ.c)
 *     ??0?$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400D7660 (--0-$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D7774 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x1400D79B4 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400D7AB4 (--$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bActive@RFONTOBJ@@QEBA_NAEBV?$SEMOBJ@$0BC@@@@Z @ 0x14030D8F4 (-bActive@RFONTOBJ@@QEBA_NAEBV-$SEMOBJ@$0BC@@@@Z.c)
 */

void __fastcall prfntKillList(_QWORD *a1, __int64 *a2, __int64 a3)
{
  int v3; // edi
  __int64 SessionState; // rax
  Gre::Base *v7; // rcx
  struct Gre::Base::SESSION_GLOBALS *v8; // rbx
  __int64 v9; // r8
  __int64 *i; // rbx
  int v11; // eax
  HSEMAPHORE v12; // rbx
  struct _GRETHREAD *v13; // rax
  __int64 *v15; // r14
  __int64 *v16; // rax
  _QWORD *v17; // rsi
  _QWORD *v18; // rdx
  __int64 *v19; // rcx
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  __int64 *v22; // rax
  _QWORD *v23; // rsi
  _QWORD *v24; // rcx
  __int64 *v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // r8
  _QWORD *v29; // rdx
  __int64 v30; // rdx
  _QWORD *v31; // rax
  __int64 v32; // rax
  int v33; // eax
  int v34; // r9d
  _QWORD *v35; // rdx
  _QWORD *v36; // rax
  __int64 v37; // r8
  _QWORD *v38; // rcx
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // [rsp+20h] [rbp-20h] BYREF
  HSEMAPHORE v43; // [rsp+28h] [rbp-18h] BYREF
  HSEMAPHORE v44[2]; // [rsp+30h] [rbp-10h] BYREF
  _QWORD *v45; // [rsp+80h] [rbp+40h] BYREF
  __int64 *v46; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0;
  LODWORD(v45) = 0;
  SessionState = W32GetSessionState(a1, a2, a3);
  SEMOBJ<18>::SEMOBJ<18>(v44, *(_QWORD *)(SessionState + 96) + 4872LL);
  v8 = Gre::Base::Globals(v7);
  SEMOBJ<19>::SEMOBJ<19>(&v43, v8);
  SEMOBJ<20>::SEMOBJ<20>(&v42);
  for ( i = (__int64 *)*((_QWORD *)v8 + 481); i; i = (__int64 *)*i )
  {
    v11 = *((_DWORD *)i + 10);
    v46 = i;
    if ( (v11 & 1) != 0 )
    {
      v15 = i + 439;
      if ( (v11 & 0x800000) != 0 )
      {
        v16 = (__int64 *)*v15;
        v3 |= 1u;
      }
      else
      {
        v16 = i;
      }
      if ( (v3 & 1) != 0 )
        v3 &= ~1u;
      v17 = (_QWORD *)v16[190];
      while ( 1 )
      {
        v18 = v17;
        if ( (i[5] & 0x800000) != 0 )
        {
          v19 = (__int64 *)*v15;
          v3 |= 2u;
        }
        else
        {
          v19 = i;
        }
        v20 = v19 + 190;
        if ( (v3 & 2) != 0 )
          v3 &= ~2u;
        if ( v17 == v20 )
          break;
        v21 = v17 - 84;
        v17 = (_QWORD *)*v17;
        v45 = v21;
        if ( *(v18 - 68) == *a1 && !(unsigned __int8)RFONTOBJ::bActive(&v45, v18, v9, 0x800000LL) )
        {
          v36 = v35 - 23;
          v37 = *(v35 - 23);
          if ( *(_QWORD **)(v37 + 8) != v35 - 23 )
            goto LABEL_47;
          v38 = (_QWORD *)v36[1];
          if ( (_QWORD *)*v38 != v36
            || (*v38 = v37, *(_QWORD *)(v37 + 8) = v38, v39 = *v35, *(_QWORD **)(*v35 + 8LL) != v35)
            || (v40 = (_QWORD *)v35[1], (_QWORD *)*v40 != v35)
            || (*v40 = v39, *(_QWORD *)(v39 + 8) = v40, v41 = *a2, *(__int64 **)(*a2 + 8) != a2) )
          {
LABEL_47:
            __fastfail(3u);
          }
          *v35 = v41;
          v35[1] = a2;
          *(_QWORD *)(v41 + 8) = v35;
          *a2 = (__int64)v35;
        }
        v45 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
      }
      if ( (i[5] & 0x800000) != 0 )
      {
        v22 = (__int64 *)*v15;
        v3 |= 4u;
      }
      else
      {
        v22 = i;
      }
      if ( (v3 & 4) != 0 )
        v3 &= ~4u;
      v23 = (_QWORD *)v22[192];
      while ( 1 )
      {
        v24 = v23;
        if ( (i[5] & 0x800000) != 0 )
        {
          v25 = (__int64 *)*v15;
          v3 |= 8u;
        }
        else
        {
          v25 = i;
        }
        v26 = v25 + 192;
        if ( (v3 & 8) != 0 )
          v3 &= ~8u;
        if ( v23 == v26 )
          break;
        v23 = (_QWORD *)*v23;
        if ( *(v24 - 68) == *a1 )
        {
          v27 = v24 - 23;
          v28 = *(v24 - 23);
          if ( *(_QWORD **)(v28 + 8) != v24 - 23 )
            goto LABEL_47;
          v29 = (_QWORD *)v27[1];
          if ( (_QWORD *)*v29 != v27 )
            goto LABEL_47;
          *v29 = v28;
          *(_QWORD *)(v28 + 8) = v29;
          v30 = *v24;
          if ( *(_QWORD **)(*v24 + 8LL) != v24 )
            goto LABEL_47;
          v31 = (_QWORD *)v24[1];
          if ( (_QWORD *)*v31 != v24 )
            goto LABEL_47;
          *v31 = v30;
          *(_QWORD *)(v30 + 8) = v31;
          v32 = *a2;
          if ( *(__int64 **)(*a2 + 8) != a2 )
            goto LABEL_47;
          *v24 = v32;
          v24[1] = a2;
          *(_QWORD *)(v32 + 8) = v24;
          *a2 = (__int64)v24;
          v33 = UPDEVOBJ::cInactive((UPDEVOBJ *)&v46) - 1;
          if ( (v34 & (_DWORD)i[5]) != 0 )
          {
            v3 |= 0x10u;
            *(_DWORD *)(*v15 + 1552) = v33;
          }
          else
          {
            *((_DWORD *)i + 388) = v33;
          }
          if ( (v3 & 0x10) != 0 )
            v3 &= ~0x10u;
        }
        v45 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
      }
    }
  }
  if ( v42 )
    GreReleaseSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal);
  v12 = v43;
  if ( v43 )
  {
    EtwTraceGreLockReleaseSemaphore(L"DriverMgmt", v43);
    v13 = GreGetCurrentThreadCrossSessionCheck();
    if ( v13 )
    {
      if ( (*((_BYTE *)v13 + 27))-- == 1 )
        *(_QWORD *)v13 &= ~0x80000uLL;
      if ( !*(_QWORD *)v13 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v12);
  }
  SEMOBJ<18>::vUnlock(v44);
}
