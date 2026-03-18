/*
 * XREFs of InitFNTCache @ 0x14010CA54
 * Callers:
 *     GrepFontSubSystemInitialize @ 0x14010B930 (GrepFontSubSystemInitialize.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BJ@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B5D5C (--0-$SEMOBJ@$0BJ@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BJ@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400B614C (--$GreReleaseSemaphoreCommon@$0BJ@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     bQueryFntCacheReg @ 0x14010C8D0 (bQueryFntCacheReg.c)
 *     bFntCacheDisabled @ 0x14010C9A4 (bFntCacheDisabled.c)
 *     QueryFontReg @ 0x14010CE98 (QueryFontReg.c)
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x14010CF68 (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x14010CFEC (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     bServicingStackModifiedFonts @ 0x14010D098 (bServicingStackModifiedFonts.c)
 *     ComputeFileviewCheckSum @ 0x14010E970 (ComputeFileviewCheckSum.c)
 *     vGetLastBootTimeStatus @ 0x14010ECF0 (vGetLastBootTimeStatus.c)
 *     SaveDisabledKIRListToReg @ 0x14026E308 (SaveDisabledKIRListToReg.c)
 *     bSetFntCacheReg @ 0x14026ECE0 (bSetFntCacheReg.c)
 *     bInitCacheTable @ 0x140303C78 (bInitCacheTable.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z @ 0x140305F10 (-bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z.c)
 */

void __fastcall InitFNTCache(Gre::Base *a1)
{
  int v1; // r14d
  struct Gre::Base::SESSION_GLOBALS *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rsi
  int FontReg; // eax
  int v16; // r12d
  __int64 v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // r13
  __int64 v20; // rbx
  __int64 v21; // r14
  int v22; // eax
  __int64 v23; // r8
  USHORT v24; // cx
  __int64 v25; // rdx
  __int64 SessionState; // rax
  int inited; // eax
  __int64 v28; // [rsp+40h] [rbp-29h] BYREF
  __int64 v29; // [rsp+48h] [rbp-21h]
  __int64 v30; // [rsp+50h] [rbp-19h]
  __int64 v31; // [rsp+58h] [rbp-11h]
  __int64 v32; // [rsp+60h] [rbp-9h]
  struct Gre::Base::SESSION_GLOBALS *v33; // [rsp+68h] [rbp-1h]
  __int64 v34; // [rsp+70h] [rbp+7h] BYREF
  USHORT AnsiCodePage; // [rsp+D0h] [rbp+67h] BYREF
  USHORT OemCodePage; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 *v37; // [rsp+E0h] [rbp+77h] BYREF
  int v38; // [rsp+E8h] [rbp+7Fh]

  v30 = 0LL;
  v1 = 0;
  v29 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  LODWORD(v37) = 0;
  v38 = 0;
  AnsiCodePage = 0;
  OemCodePage = 0;
  v2 = Gre::Base::Globals(a1);
  v33 = v2;
  v6 = *(_QWORD *)(W32GetSessionState(v4, v3, v5) + 96) + 4872LL;
  SEMOBJ<25>::SEMOBJ<25>((HSEMAPHORE *)&v34, v6);
  *(_DWORD *)(v6 + 14720) = 0;
  if ( (int)GetGreRegKey(
              (PHANDLE)(v6 + 14744),
              0xC0000000,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize") < 0 )
    goto LABEL_40;
  if ( (unsigned int)bFntCacheDisabled(v8, v7, v9) )
    goto LABEL_40;
  v10 = Win32AllocPoolZInit(128LL, 1128682580LL);
  *(_QWORD *)(v6 + 14728) = v10;
  if ( !v10 || *((_DWORD *)v2 + 712) && !(unsigned int)bSetFntCacheReg(0LL, 1LL) )
    goto LABEL_40;
  **(_QWORD **)(v6 + 14728) = 0LL;
  *(_DWORD *)(*(_QWORD *)(v6 + 14728) + 8LL) = 0;
  *(_DWORD *)(*(_QWORD *)(v6 + 14728) + 20LL) = 0;
  RtlGetDefaultCodePage(&AnsiCodePage, &OemCodePage);
  vGetLastBootTimeStatus();
  v28 = 0LL;
  v11 = Win32FileInfo(L"\\SystemRoot\\system32\\win32kfull.sys", &v28, 0LL);
  v12 = v31;
  if ( v11 )
    v12 = v28;
  v13 = Win32FileInfo(L"\\SystemRoot\\system32\\fontdrvhost.exe", &v28, 0LL);
  v14 = v32;
  if ( v13 )
    v14 = v28;
  FontReg = QueryFontReg(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Fonts");
  v16 = (int)v37;
  if ( FontReg )
  {
    v16 = (_DWORD)v37 + 40;
    QueryFontReg(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Type 1 Installer\\Type 1 Fonts");
    v1 = v38;
  }
  if ( !(unsigned int)bServicingStackModifiedFonts()
    && (unsigned int)bMapFileRetainHandle(v17, *(_QWORD *)(v6 + 14728) + 48LL, 0LL) )
  {
    **(_QWORD **)(v6 + 14728) = *(_QWORD *)(*(_QWORD *)(v6 + 14728) + 56LL);
  }
  v18 = *(__int64 **)(v6 + 14728);
  v37 = v18;
  v19 = *v18;
  if ( !*v18 )
  {
    if ( *((_DWORD *)v2 + 712) )
    {
      inited = bInitCacheTable(v16, v1, v30, v29, v12, v14, AnsiCodePage);
LABEL_37:
      if ( inited )
        *(_DWORD *)(v6 + 14720) = 2;
    }
LABEL_39:
    SaveDisabledKIRListToReg(0LL);
    goto LABEL_40;
  }
  v20 = v30;
  v21 = v29;
  if ( !*(_DWORD *)v19 )
    goto LABEL_31;
  v22 = *((_DWORD *)v18 + 18);
  if ( v22 != *(_DWORD *)(v19 + 24)
    || *(_DWORD *)v19 != (unsigned int)ComputeFileviewCheckSum(v19 + 4, (unsigned int)(v22 - 4))
    || *(_QWORD *)(v19 + 48) != v14 )
  {
    goto LABEL_31;
  }
  v24 = AnsiCodePage;
  if ( *(_DWORD *)(v19 + 12) != AnsiCodePage
    || (v25 = *((unsigned int *)v37 + 3), (v25 & 1) != 0)
    || *((_DWORD *)v33 + 712)
    && ((v25 & 2) != 0 || *(_QWORD *)(v19 + 40) != v12 || v20 != *(_QWORD *)(v19 + 56) || v21 != *(_QWORD *)(v19 + 64)) )
  {
LABEL_32:
    if ( *((_DWORD *)v33 + 712) )
    {
      inited = bInitCacheTable(v16, v38, v20, v21, v12, v14, v24);
      goto LABEL_37;
    }
    goto LABEL_39;
  }
  LODWORD(v37) = -1;
  SessionState = W32GetSessionState(AnsiCodePage, v25, v23);
  bQueryFntCacheReg(*(HANDLE *)(*(_QWORD *)(SessionState + 96) + 19616LL), L"FeatureDisabledList", &v37);
  if ( (_DWORD)v37 )
  {
LABEL_31:
    v24 = AnsiCodePage;
    goto LABEL_32;
  }
  *(_DWORD *)(v6 + 14720) = 1;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() && v20 == *(_QWORD *)(**(_QWORD **)(v6 + 14728) + 56LL) )
    *(_DWORD *)(v6 + 14720) |= 4u;
LABEL_40:
  if ( (*(_DWORD *)(v6 + 14720) & 3) != 0 )
  {
    *(_QWORD *)(*(_QWORD *)(v6 + 14728) + 24LL) = **(_QWORD **)(v6 + 14728)
                                                + ((80LL * *(unsigned int *)(**(_QWORD **)(v6 + 14728) + 16LL) + 327) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(*(_QWORD *)(v6 + 14728) + 32LL) = *(_QWORD *)(*(_QWORD *)(v6 + 14728) + 24LL)
                                                + *(unsigned int *)(**(_QWORD **)(v6 + 14728) + 36LL);
    *(_QWORD *)(*(_QWORD *)(v6 + 14728) + 40LL) = *(_QWORD *)(*(_QWORD *)(v6 + 14728) + 24LL)
                                                + *(unsigned int *)(**(_QWORD **)(v6 + 14728) + 28LL)
                                                + (unsigned __int64)*(unsigned int *)(**(_QWORD **)(v6 + 14728) + 32LL);
    *(_DWORD *)(*(_QWORD *)(v6 + 14728) + 8LL) = *(_DWORD *)(**(_QWORD **)(v6 + 14728) + 20LL);
    if ( (*(_DWORD *)(v6 + 14720) & 1) != 0 )
      bSetFntCacheReg(0LL, 0LL);
    else
      *(_DWORD *)(*(_QWORD *)(v6 + 14728) + 16LL) = 0;
  }
  else
  {
    vCleanUpFntCacheInternal();
  }
  if ( v34 )
    GreReleaseSemaphoreCommon<25,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v34);
}
