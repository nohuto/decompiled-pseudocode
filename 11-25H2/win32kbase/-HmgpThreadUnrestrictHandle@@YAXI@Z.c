/*
 * XREFs of ?HmgpThreadUnrestrictHandle@@YAXI@Z @ 0x140040FDC
 * Callers:
 *     ??1ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x140040EC0 (--1ThreadRestrictNewHandlesRegion@@QEAA@XZ.c)
 *     ?OnThreadTermination@ThreadRestrictNewHandlesRegion@@QEAAXXZ @ 0x1401C5080 (-OnThreadTermination@ThreadRestrictNewHandlesRegion@@QEAAXXZ.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x140016260 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x140018A90 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400F36E0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 */

void __fastcall HmgpThreadUnrestrictHandle(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r11
  unsigned __int64 v3; // rdx
  __int64 v4; // rbx
  unsigned int v5; // r10d
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r10
  unsigned int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r9
  __int16 v15; // ax
  unsigned int *v16; // [rsp+50h] [rbp-28h] BYREF
  int v17; // [rsp+58h] [rbp-20h]
  __int16 v18; // [rsp+5Ch] [rbp-1Ch]
  __int64 v19; // [rsp+60h] [rbp-18h]

  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  v1 = (unsigned int)a1;
  v19 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  HANDLELOCK::vLockHandle((__int64 *)&v16, v1, 0);
  if ( v17 )
  {
    v2 = *(_QWORD *)(v19 + 5672);
    v3 = *v16;
    if ( (unsigned int)v3 >= 0x10000 )
    {
      if ( *(_DWORD *)v2 <= 0x10000u )
      {
        v3 = (unsigned __int16)v3;
      }
      else
      {
        v4 = *(_QWORD *)(v2 + 16);
        v5 = *(_DWORD *)(v4 + 2056);
        if ( (unsigned __int16)v3 >= v5 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
        {
          v9 = 0LL;
        }
        else
        {
          if ( (unsigned __int16)v3 >= v5 )
            v6 = (((unsigned __int16)v3 - v5) >> 16) + 1;
          else
            v6 = 0LL;
          v7 = *(_QWORD *)(v4 + 8 * v6 + 8);
          if ( (_DWORD)v6 )
            v8 = (unsigned __int16)v3 + ((1 - (_DWORD)v6) << 16) - v5;
          else
            v8 = (unsigned __int16)v3;
          v9 = 0LL;
          if ( (unsigned int)v8 < *(_DWORD *)(v7 + 20) )
            v9 = *(_QWORD *)v7 + 24 * v8;
        }
        if ( *(unsigned __int8 *)(v9 + 13) == WORD1(v3) )
          v3 = (unsigned __int16)v3;
      }
    }
    v10 = *(_QWORD *)(v2 + 16);
    v11 = *(_DWORD *)(v10 + 2056);
    if ( (unsigned int)v3 >= v11 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16) )
      goto LABEL_29;
    if ( (unsigned int)v3 >= v11 )
      v12 = (((unsigned int)v3 - v11) >> 16) + 1;
    else
      v12 = 0LL;
    v13 = *(_QWORD *)(v10 + 8 * v12 + 8);
    if ( (_DWORD)v12 )
      v3 = ((1 - (_DWORD)v12) << 16) - v11 + (unsigned int)v3;
    if ( (unsigned int)v3 >= *(_DWORD *)(v13 + 20) )
LABEL_29:
      v14 = 0LL;
    else
      v14 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * (v3 >> 8)) + 16LL * (unsigned __int8)v3 + 8);
    v15 = *(_WORD *)(v14 + 14);
    if ( (v15 & 0x20) != 0 )
      *(_WORD *)(v14 + 14) = v15 & 0xFFDF;
    else
      GrepCaptureLiveMemoryDump(400LL, 52LL, 5LL);
    HANDLELOCK::vUnlock((HANDLELOCK *)&v16);
  }
  else
  {
    DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 52LL, 3LL, v1, 0LL, 0LL, 0LL, 0);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v16);
}
