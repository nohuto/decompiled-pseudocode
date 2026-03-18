/*
 * XREFs of ?HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPEAK@Z @ 0x1400358D0
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     HmgRemoveGarbageCollectible @ 0x1400358A0 (HmgRemoveGarbageCollectible.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1400372F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?bDelete@XDCOBJ@@QEAA_NK@Z @ 0x14003E5B4 (-bDelete@XDCOBJ@@QEAA_NK@Z.c)
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1400C49EC (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F2174 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 *     ?bDeleteColorSpace@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1401F260C (-bDeleteColorSpace@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgPentryFromPobj @ 0x140019EC0 (HmgPentryFromPobj.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001B5C0 (--$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?TrackHmgrReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@EPEAVOBJECT@@@Z @ 0x14001C700 (-TrackHmgrReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@EPEAVOBJECT@@@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x14001C74C (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x14001F150 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HmgRemoveObjectImpl(
        unsigned int *a1,
        unsigned int a2,
        unsigned __int16 a3,
        int a4,
        char a5,
        char a6,
        _DWORD *a7)
{
  __int64 v11; // rbx
  unsigned int *v12; // rsi
  __int64 v13; // rdi
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // r8d
  HSEMAPHORE v19; // [rsp+20h] [rbp-38h] BYREF
  unsigned int *v20; // [rsp+28h] [rbp-30h] BYREF
  int v21; // [rsp+30h] [rbp-28h]
  char v22; // [rsp+35h] [rbp-23h]
  __int64 v23; // [rsp+38h] [rbp-20h]

  v19 = (HSEMAPHORE)(*(_QWORD *)a1 + 1512LL);
  GreAcquireSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>((__int64)a1, v19);
  HANDLELOCK::HANDLELOCK((__int64 *)&v20, a1, a2, a5);
  v11 = 0LL;
  if ( v21 )
  {
    v12 = v20;
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v23 + 8) + 96LL))(*(_QWORD *)(v23 + 8), *v20);
    if ( *((_BYTE *)v12 + 14) == a6 && *((_WORD *)v12 + 6) == HIWORD(a2) )
    {
      v14 = *(_DWORD *)(v13 + 8);
      if ( *(__int16 *)(v13 + 12) == a3 && v14 == a4 && ((a5 & 4) != 0 || (*((_BYTE *)v12 + 15) & 1) == 0) )
      {
        v15 = HmgPentryFromPobj((__int64)a1);
        TrackHmgrReferenceDecrement((struct Gre::Base::SESSION_GLOBALS *)a1, *(_BYTE *)(v15 + 14), (struct OBJECT *)v13);
        HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v20);
        v11 = v13;
        goto LABEL_11;
      }
      if ( a7 )
        *a7 = v14;
    }
    else
    {
      v22 = 1;
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v20);
  }
  else if ( a7 )
  {
    *a7 = 0x7FFFFFFF;
  }
LABEL_11:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v20);
  SEMOBJ<20>::vUnlock(&v19, v16, v17);
  return v11;
}
