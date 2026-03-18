/*
 * XREFs of ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x14019EA2C
 * Callers:
 *     GrepDeleteDC @ 0x14001CC30 (GrepDeleteDC.c)
 *     ?GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z @ 0x1400D9C88 (-GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x140016260 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x140018960 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001A30C (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 */

__int64 __fastcall HmgQueryRemoveAttempted(struct HOBJ__ *a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]
  HSEMAPHORE v6; // [rsp+60h] [rbp+18h] BYREF

  v1 = (unsigned int)a1;
  v2 = 0;
  SEMOBJ<20>::SEMOBJ<20>(&v6);
  HANDLELOCK::HANDLELOCK((__int64)&v4, v1, 0);
  if ( v5 )
  {
    if ( *(_BYTE *)(v4 + 14) == 1 && *(_WORD *)(v4 + 12) == HIWORD(v1) )
      v2 = (*(unsigned __int8 *)(v4 + 15) >> 3) & 1;
    HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v4);
  SEMOBJ<20>::vUnlock(&v6);
  return v2;
}
