/*
 * XREFs of HmgRemoveObject @ 0x14001AB00
 * Callers:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x140011BA0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     ?GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z @ 0x140023DBC (-GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x140026090 (--1SURFMEM@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x140034DD0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?bDelete@XDCOBJ@@QEAA_NK@Z @ 0x14003E5B4 (-bDelete@XDCOBJ@@QEAA_NK@Z.c)
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 *     EngDeleteDriverObj @ 0x1401F1C90 (EngDeleteDriverObj.c)
 *     ?bDeleteColorSpace@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1401F260C (-bDeleteColorSpace@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?vCleanupRegionsAndPaths@@YAXK@Z @ 0x1401FAA10 (-vCleanupRegionsAndPaths@@YAXK@Z.c)
 * Callees:
 *     HmgPentryFromPobj @ 0x140019EC0 (HmgPentryFromPobj.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001B5C0 (--$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?TrackHmgrReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@EPEAVOBJECT@@@Z @ 0x14001C700 (-TrackHmgrReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@EPEAVOBJECT@@@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x14001C74C (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

struct OBJECT *__fastcall HmgRemoveObject(
        struct Gre::Base::SESSION_GLOBALS *a1,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        char a6,
        _DWORD *a7)
{
  struct OBJECT *v9; // rbx
  unsigned int v10; // r12d
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int *v17; // rdi
  unsigned int v18; // r15d
  __int64 v19; // rax
  struct OBJECT *v20; // rsi
  int v21; // edx
  __int64 v22; // rax
  _DWORD *v24; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  __int64 v28; // rdx
  unsigned __int64 i; // rcx
  unsigned int *v30; // [rsp+20h] [rbp-68h] BYREF
  int v31; // [rsp+28h] [rbp-60h]
  __int16 v32; // [rsp+2Ch] [rbp-5Ch]
  struct Gre::Base::SESSION_GLOBALS *v33; // [rsp+30h] [rbp-58h]
  __int64 v34; // [rsp+90h] [rbp+8h] BYREF
  __int64 v35; // [rsp+98h] [rbp+10h] BYREF
  int v36; // [rsp+A0h] [rbp+18h]
  int v37; // [rsp+A8h] [rbp+20h]

  v37 = a4;
  v36 = a3;
  v35 = *(_QWORD *)a1 + 1512LL;
  GreAcquireSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(a1, v35);
  v32 = 0;
  v9 = 0LL;
  v33 = a1;
  v10 = (unsigned __int16)a2 | (a2 >> 8) & 0xFF0000;
  v34 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v34);
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (CurrentProcess = PsGetCurrentProcess(),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && (v12 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
  {
    v13 = v12 + 8;
    if ( v12 != -8 )
    {
      v14 = *(_QWORD *)(v12 + 72);
      goto LABEL_6;
    }
  }
  else
  {
    v13 = 0LL;
  }
  v14 = 0LL;
LABEL_6:
  v15 = *((_QWORD *)a1 + 1);
  v31 = 1;
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 40LL))(v15, v10);
  v30 = (unsigned int *)v16;
  v17 = (unsigned int *)v16;
  if ( !v16 )
  {
    v31 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_26;
  }
  _m_prefetchw((const void *)(v16 + 8));
  v18 = *(_DWORD *)(v16 + 8) & 0xFFFFFFFE;
  if ( v18 == (v34 & 0xFFFFFFFC) || !v18 || v14 && v18 == (unsigned int)UMPDGetThreadClientPID(v13) )
  {
    if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a1 + 1) + 96LL))(
                       *((_QWORD *)a1 + 1),
                       *v17)
                   + 14) & 0x20) == 0 )
    {
LABEL_9:
      v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v33 + 1) + 96LL))(*((_QWORD *)v33 + 1), *v17);
      v20 = (struct OBJECT *)v19;
      if ( *((_BYTE *)v17 + 14) != a6 || *((_WORD *)v17 + 6) != HIWORD(a2) )
      {
        HIBYTE(v32) = 1;
LABEL_12:
        HANDLELOCK::vUnlock((HANDLELOCK *)&v30);
        goto LABEL_18;
      }
      v21 = *(_DWORD *)(v19 + 8);
      if ( *(__int16 *)(v19 + 12) == (unsigned __int16)v36 && v21 == v37 )
      {
        if ( a5 || (*((_BYTE *)v17 + 15) & 1) == 0 )
        {
          v22 = HmgPentryFromPobj((__int64)a1);
          TrackHmgrReferenceDecrement(a1, *(_BYTE *)(v22 + 14), v20);
          HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v30);
          v9 = v20;
          goto LABEL_18;
        }
        v24 = a7;
        if ( !a7 )
          goto LABEL_12;
      }
      else
      {
        v24 = a7;
        if ( !a7 )
          goto LABEL_12;
      }
      *v24 = v21;
      HANDLELOCK::vUnlock((HANDLELOCK *)&v30);
      goto LABEL_18;
    }
    if ( v13 )
    {
      v28 = *(_QWORD *)(v13 + 328);
      if ( v28 )
      {
        if ( *(_BYTE *)(v28 + 80) )
        {
          for ( i = 0LL; i < *(_QWORD *)(v28 + 32); ++i )
          {
            if ( *(_DWORD *)(*(_QWORD *)(v28 + 40) + 4 * i) == v10 )
              goto LABEL_9;
          }
        }
      }
    }
    LOBYTE(v32) = 1;
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v30);
  if ( v31 )
  {
    v17 = v30;
    goto LABEL_9;
  }
LABEL_26:
  if ( a7 )
    *a7 = 0x7FFFFFFF;
LABEL_18:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v30);
  SEMOBJ<20>::vUnlock(&v35);
  return v9;
}
