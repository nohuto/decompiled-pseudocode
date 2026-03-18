/*
 * XREFs of GreSetMagicColors @ 0x14018C3B0
 * Callers:
 *     SetSysColor @ 0x14003405C (SetSysColor.c)
 *     NtGdiSetMagicColors @ 0x1401F2590 (NtGdiSetMagicColors.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x14001CDA0 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140024D14 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x14003366C (-ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B5D4 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14003BBF4 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14003D020 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140040038 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C3380 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEBAHXZ @ 0x1400C5370 (-bAllowShareAccess@PDEVOBJ@@QEBAHXZ.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1400C65C4 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1400C6D34 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140185690 (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x1401C4BD8 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ?bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z @ 0x1401F24C8 (-bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreSetMagicColors(HDC a1, struct tagPALETTEENTRY a2, unsigned int a3)
{
  unsigned int v5; // r15d
  unsigned int v6; // r12d
  int v7; // r13d
  int v8; // r8d
  __int64 v9; // rbx
  __int64 v10; // rcx
  struct _ERESOURCE **v11; // rcx
  int v12; // edx
  int v13; // r8d
  struct _ERESOURCE *v14; // rsi
  __int64 v15; // rax
  _QWORD *v16; // rcx
  int v17; // edx
  __int64 v18; // rcx
  unsigned int MatchFromPalentry; // eax
  int v20; // r8d
  unsigned int v21; // ecx
  __int64 v22; // r9
  unsigned int v23; // eax
  struct _ERESOURCE *v24; // rdi
  struct _GRETHREAD *v25; // rax
  bool v26; // zf
  struct _ERESOURCE *v27; // rbx
  struct _GRETHREAD *v28; // rax
  __int64 v29; // rdx
  int v30; // r8d
  struct _GRETHREAD *v31; // rax
  __int64 v33; // [rsp+30h] [rbp-D0h] BYREF
  struct _ERESOURCE **v34; // [rsp+38h] [rbp-C8h] BYREF
  struct _ERESOURCE *v35; // [rsp+40h] [rbp-C0h] BYREF
  HSEMAPHORE v36; // [rsp+48h] [rbp-B8h] BYREF
  HSEMAPHORE v37; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v39[14]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v40[32]; // [rsp+D0h] [rbp-30h] BYREF
  char v41[128]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v42; // [rsp+1B8h] [rbp+B8h] BYREF

  v5 = 0;
  v6 = 0;
  v7 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v39, a1);
  if ( v39[0] )
  {
    v34 = (struct _ERESOURCE **)v39[2];
    if ( a3 - 8 > 1 && a3 - 246 > 1 )
      goto LABEL_56;
    SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v38);
    if ( (*(_DWORD *)&a2 & 0xFF000000) != 0 && (*(_DWORD *)&a2 & 0xFF000000) != 0x2000000 )
    {
LABEL_55:
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v38,
        v8);
LABEL_56:
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v39);
      return v5;
    }
    v35 = 0LL;
    v9 = *(_QWORD *)(v39[0] + 48LL);
    v42 = v9;
    if ( v9 && !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v42) && (*(_DWORD *)(v9 + 40) & 0x8000) == 0 )
    {
      v11 = *(struct _ERESOURCE ***)(W32GetSessionState(v10) + 88);
      v35 = *v11 + 11;
      GreAcquireSemaphore<2,>(v11, v12, v13);
    }
    v14 = *(struct _ERESOURCE **)(v9 + 56);
    GreAcquireSemaphoreInternal(v14);
    GrepAcquireLockValidate<4>();
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v41);
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v40, (struct PDEVOBJ *)&v42);
    if ( !_bittest((const signed __int32 *)(v9 + 2156), 8u) )
    {
      if ( (*(_DWORD *)(v9 + 40) & 0x20000) == 0 )
      {
LABEL_49:
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v40);
        if ( v14 )
        {
          EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v14, v30);
          v31 = GreGetCurrentThreadCrossSessionCheck();
          if ( v31 )
          {
            v26 = (*((_BYTE *)v31 + 12))-- == 1;
            if ( v26 )
              *(_QWORD *)v31 &= ~0x10uLL;
          }
          GreReleaseSemaphoreSharedInternal(v14);
        }
        NEEDGRELOCK::vUnlock(&v35, v29, v30);
        goto LABEL_55;
      }
      v15 = *(_QWORD *)(v9 + 1784);
      v16 = *(_QWORD **)v15;
      v17 = *(_DWORD *)(v15 + 16);
      while ( 1 )
      {
        v9 = v16[6];
        v42 = v9;
        if ( _bittest((const signed __int32 *)(v9 + 2156), 8u) )
          break;
        v16 = (_QWORD *)*v16;
        if ( !--v17 )
          goto LABEL_49;
      }
      v7 = 1;
    }
    v33 = *(_QWORD *)(v9 + 1792);
    SEMOBJ<10>::SEMOBJ<10>((struct _ERESOURCE **)&v37, v34);
    SEMOBJ<13>::SEMOBJ<13>((struct _ERESOURCE **)&v36, v34);
    v34 = *(struct _ERESOURCE ***)(*(_QWORD *)(W32GetSessionState(v18) + 88) + 3872LL);
    MatchFromPalentry = XEPALOBJ::ulGetMatchFromPalentry((ULONG_PTR *)&v34, a2);
    if ( MatchFromPalentry != -1 )
    {
      v21 = MatchFromPalentry + 236;
      if ( MatchFromPalentry < 0xA )
        v21 = MatchFromPalentry;
      if ( v21 == a3 )
      {
        if ( !v7 )
        {
          v5 = 1;
LABEL_34:
          v24 = (struct _ERESOURCE *)v36;
          if ( v36 )
          {
            EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v36, v20);
            v25 = GreGetCurrentThreadCrossSessionCheck();
            if ( v25 )
            {
              v26 = (*((_BYTE *)v25 + 21))-- == 1;
              if ( v26 )
                *(_QWORD *)v25 &= ~0x2000uLL;
            }
            GreReleaseSemaphoreSharedInternal(v24);
          }
          if ( v6 && (*(_DWORD *)(v9 + 40) & 0x400) == 0 )
          {
            if ( *(_QWORD *)(v9 + 1752) )
              (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v9 + 1752))(
                *(_QWORD *)(*(_QWORD *)(v9 + 24) + 1784LL),
                &v33,
                0LL,
                0LL,
                *(_DWORD *)(v33 + 28));
            else
              v5 = 0;
          }
          v27 = (struct _ERESOURCE *)v37;
          if ( v37 )
          {
            EtwTraceGreLockReleaseSemaphore((__int64)L"HT", (int)v37, v20);
            v28 = GreGetCurrentThreadCrossSessionCheck();
            if ( v28 )
            {
              v26 = (*((_BYTE *)v28 + 18))-- == 1;
              if ( v26 )
                *(_QWORD *)v28 &= ~0x400uLL;
            }
            GreReleaseSemaphoreSharedInternal(v27);
          }
          goto LABEL_49;
        }
      }
      else if ( v21 - 8 > 1 && v21 - 246 > 1 )
      {
        if ( a3 == 8 )
        {
          v22 = 12639424LL;
        }
        else if ( a3 == 9 )
        {
          v22 = 15780518LL;
        }
        else
        {
          v22 = 10789024LL;
          if ( a3 == 246 )
            v22 = 15793151LL;
        }
        v23 = bSetMagicColor(&v42, v33, a3, v22);
        goto LABEL_33;
      }
    }
    v23 = bSetMagicColor(&v42, v33, a3, *(unsigned int *)&a2);
    v5 = v23;
LABEL_33:
    v6 = v23;
    goto LABEL_34;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v39);
  return 0LL;
}
