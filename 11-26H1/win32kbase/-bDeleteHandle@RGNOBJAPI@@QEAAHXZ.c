/*
 * XREFs of ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x14001ED10
 * Callers:
 *     GreSelectVisRgn @ 0x140016B80 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x140017500 (GreSelectVisRgnShared.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x140017FB0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x140055690 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
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

__int64 __fastcall RGNOBJAPI::bDeleteHandle(RGNOBJAPI *this)
{
  __int64 SessionState; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned int *v6; // r14
  __int64 v7; // rax
  struct OBJECT *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // r8d
  unsigned int *v13; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+28h] [rbp-30h]
  char v15; // [rsp+2Dh] [rbp-2Bh]
  __int64 v16; // [rsp+30h] [rbp-28h]
  HSEMAPHORE v17; // [rsp+60h] [rbp+8h] BYREF

  SessionState = W32GetSessionState(this);
  v4 = *((_QWORD *)this + 5);
  v5 = *(_QWORD *)(SessionState + 88);
  if ( v4 == *(_QWORD *)(v5 + 4256) )
    return 0LL;
  v17 = (HSEMAPHORE)(*(_QWORD *)v5 + 1512LL);
  GreAcquireSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(v3, v17);
  HANDLELOCK::HANDLELOCK(&v13, v5, v4, 0LL);
  if ( !v14 )
    goto LABEL_7;
  v6 = v13;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v16 + 8) + 96LL))(*(_QWORD *)(v16 + 8), *v13);
  v8 = (struct OBJECT *)v7;
  if ( *((_BYTE *)v6 + 14) != 4 || *((_WORD *)v6 + 6) != WORD1(v4) )
  {
    v15 = 1;
LABEL_6:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v13);
LABEL_7:
    v8 = 0LL;
    goto LABEL_12;
  }
  if ( *(_WORD *)(v7 + 12) != 1 || *(_DWORD *)(v7 + 8) || (*((_BYTE *)v6 + 15) & 1) != 0 )
    goto LABEL_6;
  v9 = HmgPentryFromPobj(v5);
  TrackHmgrReferenceDecrement((struct Gre::Base::SESSION_GLOBALS *)v5, *(_BYTE *)(v9 + 14), v8);
  HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v13);
LABEL_12:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v13);
  SEMOBJ<20>::vUnlock(&v17, v10, v11);
  if ( v8 == *(struct OBJECT **)this )
  {
    *((_QWORD *)this + 5) = 0LL;
    return 1LL;
  }
  return 0LL;
}
