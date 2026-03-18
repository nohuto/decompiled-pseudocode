/*
 * XREFs of HmgFree @ 0x1401EDCD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x14001C74C (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x14001F150 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ?FreeObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAXK@Z @ 0x140034CA0 (-FreeObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAXK@Z.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1400E59F0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140168140 (--0-$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall HmgFree(__int64 a1)
{
  unsigned int v1; // ebx
  struct OBJECT *v2; // rdi
  unsigned __int8 v3; // si
  unsigned int *v4; // rbp
  __int64 v5; // rdx
  int v6; // r8d
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h]
  HSEMAPHORE v9; // [rsp+58h] [rbp+10h] BYREF

  v1 = a1;
  v2 = 0LL;
  v3 = 0;
  v4 = *(unsigned int **)(W32GetSessionState(a1) + 88);
  SEMOBJ<20>::SEMOBJ<20>(&v9, v4);
  HANDLELOCK::HANDLELOCK(&v7, v4, v1, 1);
  if ( v8 )
  {
    v2 = HANDLELOCK::pObj((HANDLELOCK *)&v7);
    v3 = *(_BYTE *)(v7 + 14);
    HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v7);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v7);
  SEMOBJ<20>::vUnlock(&v9, v5, v6);
  if ( v2 )
    FreeObject((void **)v4, v2, v3);
}
