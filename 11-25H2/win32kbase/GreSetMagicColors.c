/*
 * XREFs of GreSetMagicColors @ 0x14014DDBC
 * Callers:
 *     SetSysColor @ 0x1400AADC8 (SetSysColor.c)
 *     NtGdiSetMagicColors @ 0x1401C6E60 (NtGdiSetMagicColors.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B6B0 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400436F8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140043E9C (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x140045DD0 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140046948 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEBAHXZ @ 0x1400865B0 (-bAllowShareAccess@PDEVOBJ@@QEBAHXZ.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14008675C (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x140086D90 (-bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140087950 (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008E1A8 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x14008E5C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x140091C38 (-ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400E8268 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z @ 0x1401C6D90 (-bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreSetMagicColors(HDC a1, struct tagPALETTEENTRY a2, unsigned int a3)
{
  unsigned int v5; // r12d
  unsigned int v6; // r15d
  __int64 v7; // rbx
  __int64 v8; // rcx
  struct _ERESOURCE **v9; // rcx
  struct _ERESOURCE *v10; // rsi
  struct _GRETHREAD *v11; // rax
  struct _GRETHREAD *v12; // r13
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  int v15; // r8d
  int v16; // eax
  char v17; // cl
  __int64 v18; // rcx
  struct _ERESOURCE **v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  int v22; // edx
  __int64 v23; // rcx
  unsigned int MatchFromPalentry; // eax
  unsigned int v25; // ecx
  __int64 v26; // r9
  unsigned int v27; // eax
  struct _ERESOURCE *v28; // rdi
  struct _GRETHREAD *v29; // rax
  bool v30; // zf
  struct _ERESOURCE *v31; // rbx
  struct _GRETHREAD *v32; // rax
  struct _GRETHREAD *v33; // rax
  __int64 v35; // [rsp+30h] [rbp-D0h] BYREF
  struct _ERESOURCE **v36; // [rsp+38h] [rbp-C8h] BYREF
  struct _ERESOURCE *v37; // [rsp+40h] [rbp-C0h] BYREF
  HSEMAPHORE v38; // [rsp+48h] [rbp-B8h] BYREF
  HSEMAPHORE v39; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v41; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+70h] [rbp-90h]
  int v43; // [rsp+78h] [rbp-88h]
  char v44[80]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+D8h] [rbp-28h]
  _QWORD v47[14]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v48; // [rsp+1A8h] [rbp+A8h] BYREF

  v5 = 0;
  v6 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v47, a1);
  if ( v47[0] )
  {
    v36 = (struct _ERESOURCE **)v47[2];
    if ( a3 - 8 > 1 && a3 - 246 > 1 )
      goto LABEL_70;
    SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v40);
    if ( (*(_DWORD *)&a2 & 0xFD000000) != 0 )
    {
LABEL_69:
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v40);
LABEL_70:
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v47);
      return v5;
    }
    v37 = 0LL;
    v7 = *(_QWORD *)(v47[0] + 48LL);
    v35 = v7;
    if ( v7 && !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v35) && (*(_DWORD *)(v7 + 40) & 0x8000) == 0 )
    {
      v9 = *(struct _ERESOURCE ***)(W32GetSessionState(v8) + 88);
      v37 = *v9 + 11;
      GreAcquireSemaphore<2,>(v9);
    }
    v10 = *(struct _ERESOURCE **)(v7 + 56);
    GreAcquireSemaphoreInternal(v10);
    v11 = GreGetCurrentThreadCrossSessionCheck();
    v12 = v11;
    if ( v11 )
    {
      v13 = *(_QWORD *)v11;
      if ( (*(_QWORD *)v11 & 0xFFFFFFFFFFFFFFF0uLL) != 0 && (v13 & 0x10) == 0 )
      {
        v14 = 0LL;
        v15 = 37;
        do
        {
          v16 = v14;
          if ( !_bittest64(&v13, v14) )
            v16 = v15;
          ++v14;
          v15 = v16;
        }
        while ( v14 < 0x40 );
        if ( v16 > 4 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
      }
      v17 = *((_BYTE *)v12 + 12);
      *((_BYTE *)v12 + 12) = v17 + 1;
      if ( !v17 )
        *(_QWORD *)v12 |= 0x10uLL;
    }
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v44);
    v46 = 0LL;
    v45 = 0LL;
    v41 = 0LL;
    DEVLOCKOBJ::bPrepareTrgDco((DEVLOCKOBJ *)&v41, 0LL);
    v43 = 1;
    if ( (*(_DWORD *)(v7 + 40) & 1) != 0 )
    {
      v19 = *(struct _ERESOURCE ***)(W32GetSessionState(v18) + 88);
      *(_QWORD *)&v41 = *(_QWORD *)(v7 + 48);
      v42 = v7;
      if ( (struct _ERESOURCE *)v41 == &(*v19)[11] )
      {
        v43 |= 0x100000u;
        GreAcquireSemaphore<2,>(v19);
      }
      else
      {
        GreAcquireSemaphore<8,PDEVOBJ>(v7);
      }
    }
    if ( !_bittest((const signed __int32 *)(v7 + 2156), 8u) )
    {
      if ( (*(_DWORD *)(v7 + 40) & 0x20000) == 0 )
      {
LABEL_63:
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v41);
        if ( v10 )
        {
          EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v10);
          v33 = GreGetCurrentThreadCrossSessionCheck();
          if ( v33 )
          {
            v30 = (*((_BYTE *)v33 + 12))-- == 1;
            if ( v30 )
              *(_QWORD *)v33 &= ~0x10uLL;
          }
          GreReleaseSemaphoreSharedInternal(v10);
        }
        NEEDGRELOCK::vUnlock(&v37);
        goto LABEL_69;
      }
      v20 = *(_QWORD *)(v7 + 1784);
      v21 = *(_QWORD **)v20;
      v22 = *(_DWORD *)(v20 + 16);
      while ( 1 )
      {
        v7 = v21[6];
        v35 = v7;
        if ( _bittest((const signed __int32 *)(v7 + 2156), 8u) )
          break;
        v21 = (_QWORD *)*v21;
        if ( !--v22 )
          goto LABEL_63;
      }
      v5 = 1;
    }
    v48 = *(_QWORD *)(v7 + 1792);
    SEMOBJ<10>::SEMOBJ<10>((struct _ERESOURCE **)&v39, v36);
    SEMOBJ<13>::SEMOBJ<13>((struct _ERESOURCE **)&v38, v36);
    v36 = *(struct _ERESOURCE ***)(*(_QWORD *)(W32GetSessionState(v23) + 88) + 3768LL);
    MatchFromPalentry = XEPALOBJ::ulGetMatchFromPalentry((ULONG_PTR *)&v36, a2);
    if ( MatchFromPalentry != -1 )
    {
      v25 = MatchFromPalentry + 236;
      if ( MatchFromPalentry < 0xA )
        v25 = MatchFromPalentry;
      if ( v25 == a3 )
      {
        if ( !v5 )
        {
          v5 = 1;
LABEL_48:
          v28 = (struct _ERESOURCE *)v38;
          if ( v38 )
          {
            EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v38);
            v29 = GreGetCurrentThreadCrossSessionCheck();
            if ( v29 )
            {
              v30 = (*((_BYTE *)v29 + 21))-- == 1;
              if ( v30 )
                *(_QWORD *)v29 &= ~0x2000uLL;
            }
            GreReleaseSemaphoreSharedInternal(v28);
          }
          if ( v6 && (*(_DWORD *)(v7 + 40) & 0x400) == 0 )
          {
            if ( *(_QWORD *)(v7 + 1752) )
              (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v7 + 1752))(
                *(_QWORD *)(*(_QWORD *)(v7 + 24) + 1784LL),
                &v48,
                0LL,
                0LL,
                *(_DWORD *)(v48 + 28));
            else
              v5 = 0;
          }
          v31 = (struct _ERESOURCE *)v39;
          if ( v39 )
          {
            EtwTraceGreLockReleaseSemaphore((__int64)L"HT", (int)v39);
            v32 = GreGetCurrentThreadCrossSessionCheck();
            if ( v32 )
            {
              v30 = (*((_BYTE *)v32 + 18))-- == 1;
              if ( v30 )
                *(_QWORD *)v32 &= ~0x400uLL;
            }
            GreReleaseSemaphoreSharedInternal(v31);
          }
          goto LABEL_63;
        }
      }
      else if ( v25 - 8 > 1 && v25 - 246 > 1 )
      {
        if ( a3 == 8 )
        {
          v26 = 12639424LL;
        }
        else if ( a3 == 9 )
        {
          v26 = 15780518LL;
        }
        else
        {
          v26 = 10789024LL;
          if ( a3 == 246 )
            v26 = 15793151LL;
        }
        v27 = bSetMagicColor(&v35, v48, a3, v26);
        v5 = 0;
        goto LABEL_47;
      }
    }
    v27 = bSetMagicColor(&v35, v48, a3, *(unsigned int *)&a2);
    v5 = v27;
LABEL_47:
    v6 = v27;
    goto LABEL_48;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v47);
  return 0LL;
}
