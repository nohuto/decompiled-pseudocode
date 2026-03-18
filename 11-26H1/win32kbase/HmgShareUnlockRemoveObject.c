/*
 * XREFs of HmgShareUnlockRemoveObject @ 0x140054820
 * Callers:
 *     ?GrepDeleteReferencedSurface@@YAJPEAUHSURF__@@_N@Z @ 0x14005537C (-GrepDeleteReferencedSurface@@YAJPEAUHSURF__@@_N@Z.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001B5C0 (--$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?TrackHmgrReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@EPEAVOBJECT@@@Z @ 0x14001C700 (-TrackHmgrReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@EPEAVOBJECT@@@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x14001C74C (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x14001F150 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HmgShareUnlockRemoveObject(__int64 a1, unsigned __int16 a2, int a3, int a4, char a5)
{
  unsigned int v8; // edi
  unsigned int *v9; // rsi
  __int64 v10; // rcx
  unsigned int *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdx
  int v14; // r8d
  HSEMAPHORE v16; // [rsp+20h] [rbp-38h] BYREF
  unsigned int *v17; // [rsp+28h] [rbp-30h] BYREF
  int v18; // [rsp+30h] [rbp-28h]
  char v19; // [rsp+35h] [rbp-23h]
  __int64 v20; // [rsp+38h] [rbp-20h]

  v8 = a1;
  v9 = *(unsigned int **)(W32GetSessionState(a1) + 88);
  v16 = (HSEMAPHORE)(*(_QWORD *)v9 + 1512LL);
  GreAcquireSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(v10, v16);
  HANDLELOCK::HANDLELOCK((__int64 *)&v17, v9, v8, 0);
  if ( !v18 )
    goto LABEL_11;
  v11 = v17;
  if ( *((_BYTE *)v17 + 14) != a5 || *((_WORD *)v17 + 6) != HIWORD(v8) )
  {
    v19 = 1;
LABEL_10:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v17);
LABEL_11:
    v12 = 0LL;
    goto LABEL_12;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v20 + 8) + 96LL))(*(_QWORD *)(v20 + 8), *v17);
  TrackHmgrReferenceDecrement((struct Gre::Base::SESSION_GLOBALS *)v9, *((_BYTE *)v11 + 14), (struct OBJECT *)v12);
  --*(_DWORD *)(v12 + 8);
  if ( *(__int16 *)(v12 + 12) != a2 || *(_DWORD *)(v12 + 8) != a3 || !a4 && (*((_BYTE *)v11 + 15) & 1) != 0 )
    goto LABEL_10;
  HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v17);
LABEL_12:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v17);
  SEMOBJ<20>::vUnlock(&v16, v13, v14);
  return v12;
}
