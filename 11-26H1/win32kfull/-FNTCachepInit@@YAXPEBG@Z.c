/*
 * XREFs of ?FNTCachepInit@@YAXPEBG@Z @ 0x1401C5E88
 * Callers:
 *     GrepFontSubSystemInitialize @ 0x140323A20 (GrepFontSubSystemInitialize.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GrepAcquireLockValidate@$0BJ@@@YAXXZ @ 0x1401C6318 (--$GrepAcquireLockValidate@$0BJ@@@YAXXZ.c)
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1401C6398 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     ?GrepGetRegKeyCommon@@YAJPEAPEAXKPEBG@Z @ 0x1401C64E4 (-GrepGetRegKeyCommon@@YAJPEAPEAXKPEBG@Z.c)
 *     ?FNTCachepQueryReg@@YAHW4GreRegKey@@PEAT_LARGE_INTEGER@@PEAK@Z @ 0x1401C6574 (-FNTCachepQueryReg@@YAHW4GreRegKey@@PEAT_LARGE_INTEGER@@PEAK@Z.c)
 *     vGetLastBootTimeStatus @ 0x1401C664C (vGetLastBootTimeStatus.c)
 *     bFntCacheDisabled @ 0x1401C66BC (bFntCacheDisabled.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z @ 0x1401C676C (-bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z.c)
 *     FNTCacheUseable @ 0x140294364 (FNTCacheUseable.c)
 *     bSetFntCacheReg @ 0x14029678C (bSetFntCacheReg.c)
 *     FNTCacheUseableAndUpdateToDate @ 0x14031B088 (FNTCacheUseableAndUpdateToDate.c)
 *     bInitCacheTable @ 0x14031B73C (bInitCacheTable.c)
 */

void __fastcall FNTCachepInit(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // r14
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdi
  HSEMAPHORE v6; // rbx
  _QWORD *v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  struct _GRETHREAD *v17; // rax
  bool v18; // zf
  __int64 v19; // [rsp+20h] [rbp-38h] BYREF
  __int128 v20; // [rsp+28h] [rbp-30h] BYREF
  _OWORD v21[2]; // [rsp+38h] [rbp-20h] BYREF
  Gre::Base *AnsiCodePage; // [rsp+90h] [rbp+38h] BYREF
  USHORT OemCodePage; // [rsp+98h] [rbp+40h] BYREF
  unsigned int v24; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v25; // [rsp+A8h] [rbp+50h] BYREF

  AnsiCodePage = a1;
  v20 = 0LL;
  v24 = 0;
  v21[0] = 0LL;
  v25 = 0;
  LOWORD(AnsiCodePage) = 0;
  OemCodePage = 0;
  v1 = Gre::Base::Globals(a1);
  v5 = *(_QWORD *)(W32GetSessionState(v3, v2, v4) + 96);
  v6 = *(HSEMAPHORE *)(v5 + 20312);
  GreAcquireSemaphoreInternal(v6);
  GrepAcquireLockValidate<25>();
  *(_DWORD *)(v5 + 19584) = 0;
  if ( (int)GrepGetRegKeyCommon(
              (PHANDLE)(v5 + 19608),
              0xC0000000,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize") < 0 )
    goto LABEL_26;
  if ( (unsigned int)bFntCacheDisabled() )
    goto LABEL_26;
  v7 = (_QWORD *)Win32AllocPoolZInit(136LL, 1128682580LL);
  *(_QWORD *)(v5 + 19592) = v7;
  if ( !v7 )
    goto LABEL_26;
  *v7 = L"\\SystemRoot\\system32\\FNTCACHE.DAT";
  if ( *((_DWORD *)v1 + 731) )
  {
    if ( !(unsigned int)bSetFntCacheReg(0LL, 1LL) )
      goto LABEL_26;
  }
  RtlGetDefaultCodePage((PUSHORT)&AnsiCodePage, &OemCodePage);
  vGetLastBootTimeStatus();
  v19 = 0LL;
  v8 = Win32FileInfo(L"\\SystemRoot\\system32\\win32kfull.sys", &v19, 0LL);
  v9 = v20;
  if ( v8 )
    v9 = v19;
  *(_QWORD *)&v20 = v9;
  v10 = Win32FileInfo(L"\\SystemRoot\\system32\\fontdrvhost.exe", &v19, 0LL);
  v11 = *((_QWORD *)&v20 + 1);
  if ( v10 )
    v11 = v19;
  *((_QWORD *)&v20 + 1) = v11;
  v12 = FNTCachepQueryReg(2LL, v21, &v24);
  v13 = v24;
  if ( v12 )
    v13 = v24 + 40;
  FNTCachepQueryReg(3LL, (char *)v21 + 8, &v25);
  if ( (unsigned int)bMapFileRetainHandle(**(_QWORD **)(v5 + 19592), *(_QWORD *)(v5 + 19592) + 56LL, 0LL) )
    *(_QWORD *)(*(_QWORD *)(v5 + 19592) + 8LL) = *(_QWORD *)(*(_QWORD *)(v5 + 19592) + 64LL);
  v14 = *(_QWORD *)(v5 + 19592);
  v15 = *(_QWORD *)(v14 + 8);
  if ( *((_DWORD *)v1 + 731) )
  {
    if ( !v15 || !(unsigned __int8)FNTCacheUseableAndUpdateToDate(v14, &v20, (unsigned __int16)AnsiCodePage) )
    {
      if ( (unsigned int)bInitCacheTable(v13, v25, &v20, (unsigned __int16)AnsiCodePage) )
        *(_DWORD *)(v5 + 19584) = 2;
      goto LABEL_22;
    }
    goto LABEL_21;
  }
  if ( v15 && (unsigned __int8)FNTCacheUseable(v14, &v20, (unsigned __int16)AnsiCodePage) )
LABEL_21:
    *(_DWORD *)(v5 + 19584) = 1;
LABEL_22:
  if ( *(_DWORD *)(v5 + 19584) == 1
    && (unsigned int)RtlGetCurrentServiceSessionId()
    && *(_QWORD *)&v21[0] == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 19592) + 8LL) + 56LL) )
  {
    *(_DWORD *)(v5 + 19584) |= 4u;
  }
LABEL_26:
  v16 = *(_QWORD *)(v5 + 19592);
  if ( v16 && (*(_DWORD *)(v5 + 19584) & 3) != 0 )
  {
    *(_QWORD *)(v16 + 32) = *(_QWORD *)(v16 + 8)
                          + ((80LL * *(unsigned int *)(*(_QWORD *)(v16 + 8) + 12LL) + 327) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(*(_QWORD *)(v5 + 19592) + 40LL) = *(_QWORD *)(*(_QWORD *)(v5 + 19592) + 32LL)
                                                + *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v5 + 19592) + 8LL) + 32LL);
    *(_QWORD *)(*(_QWORD *)(v5 + 19592) + 48LL) = *(_QWORD *)(*(_QWORD *)(v5 + 19592) + 32LL)
                                                + *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v5 + 19592) + 8LL) + 24LL)
                                                + (unsigned __int64)*(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v5 + 19592)
                                                                                                + 8LL)
                                                                                    + 28LL);
    *(_DWORD *)(*(_QWORD *)(v5 + 19592) + 16LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 19592) + 8LL) + 16LL);
    if ( (*(_DWORD *)(v5 + 19584) & 1) != 0 )
      bSetFntCacheReg(0LL, 0LL);
    else
      *(_DWORD *)(*(_QWORD *)(v5 + 19592) + 24LL) = 0;
  }
  else
  {
    vCleanUpFntCacheInternal();
  }
  if ( v6 )
  {
    EtwTraceGreLockReleaseSemaphore(L"FntCache", v6);
    v17 = GreGetCurrentThreadCrossSessionCheck();
    if ( v17 )
    {
      v18 = (*(_QWORD *)v17 & 0xFFFFFFFFFDFFFFFFuLL) == 0;
      *(_QWORD *)v17 &= ~0x2000000uLL;
      if ( v18 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v6);
  }
}
