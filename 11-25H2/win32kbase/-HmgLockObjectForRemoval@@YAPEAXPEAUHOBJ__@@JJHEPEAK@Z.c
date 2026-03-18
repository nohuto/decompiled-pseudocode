/*
 * XREFs of ?HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z @ 0x1400D8050
 * Callers:
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1400D9D40 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x140016260 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x140018A90 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001A30C (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 */

__int64 __fastcall HmgLockObjectForRemoval(struct HOBJ__ *a1)
{
  unsigned int v1; // edi
  __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  __int64 v5; // r11
  unsigned int v6; // r10d
  __int64 v7; // rcx
  __int64 v8; // r11
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // r10
  unsigned int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // r11
  __int64 v15; // rbx
  char v16; // al
  unsigned int *v18; // [rsp+20h] [rbp-20h] BYREF
  int v19; // [rsp+28h] [rbp-18h]
  __int16 v20; // [rsp+2Ch] [rbp-14h]
  __int64 v21; // [rsp+30h] [rbp-10h]
  HSEMAPHORE v22; // [rsp+50h] [rbp+10h] BYREF

  v1 = (unsigned int)a1;
  SEMOBJ<20>::SEMOBJ<20>(&v22);
  v18 = 0LL;
  v19 = 0;
  v20 = 0;
  v21 = *(_QWORD *)(W32GetSessionState(v2) + 88);
  HANDLELOCK::vLockHandle((__int64 *)&v18, (unsigned __int16)v1 | (v1 >> 8) & 0xFF0000, 0);
  if ( !v19 )
    goto LABEL_31;
  v3 = *(_QWORD *)(v21 + 5672);
  v4 = *v18;
  if ( (unsigned int)v4 >= 0x10000 )
  {
    if ( *(_DWORD *)v3 <= 0x10000u )
    {
      v4 = (unsigned __int16)v4;
    }
    else
    {
      v5 = *(_QWORD *)(v3 + 16);
      v6 = *(_DWORD *)(v5 + 2056);
      if ( (unsigned __int16)v4 >= v6 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
      {
        v10 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v4 >= v6 )
          v7 = (((unsigned __int16)v4 - v6) >> 16) + 1;
        else
          v7 = 0LL;
        v8 = *(_QWORD *)(v5 + 8 * v7 + 8);
        if ( (_DWORD)v7 )
          v9 = (unsigned __int16)v4 + ((1 - (_DWORD)v7) << 16) - v6;
        else
          v9 = (unsigned __int16)v4;
        v10 = 0LL;
        if ( (unsigned int)v9 < *(_DWORD *)(v8 + 20) )
          v10 = *(_QWORD *)v8 + 24 * v9;
      }
      if ( *(unsigned __int8 *)(v10 + 13) == WORD1(v4) )
        v4 = (unsigned __int16)v4;
    }
  }
  v11 = *(_QWORD *)(v3 + 16);
  v12 = *(_DWORD *)(v11 + 2056);
  if ( (unsigned int)v4 >= v12 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
    goto LABEL_34;
  v13 = (unsigned int)v4 >= v12 ? (((unsigned int)v4 - v12) >> 16) + 1 : 0LL;
  v14 = *(_QWORD *)(v11 + 8 * v13 + 8);
  if ( (_DWORD)v13 )
    v4 = ((1 - (_DWORD)v13) << 16) - v12 + (unsigned int)v4;
  if ( (unsigned int)v4 >= *(_DWORD *)(v14 + 20) )
LABEL_34:
    v15 = 0LL;
  else
    v15 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * (v4 >> 8)) + 16LL * (unsigned __int8)v4 + 8);
  if ( *((_BYTE *)v18 + 14) != 1 || *((_WORD *)v18 + 6) != HIWORD(v1) )
  {
    HIBYTE(v20) = 1;
    goto LABEL_30;
  }
  if ( *(_WORD *)(v15 + 12) != 1 || *(_DWORD *)(v15 + 8) )
  {
    *((_BYTE *)v18 + 15) |= 8u;
    goto LABEL_30;
  }
  v16 = *((_BYTE *)v18 + 15);
  if ( (v16 & 1) != 0 )
  {
LABEL_30:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v18);
LABEL_31:
    v15 = 0LL;
    goto LABEL_28;
  }
  *((_BYTE *)v18 + 15) = v16 | 0x40;
  HANDLELOCK::vUnlock((HANDLELOCK *)&v18);
LABEL_28:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v18);
  SEMOBJ<20>::vUnlock(&v22);
  return v15;
}
