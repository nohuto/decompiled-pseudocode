/*
 * XREFs of ?PutFNTCacheCheckSum@@YAXKK@Z @ 0x14010EBF0
 * Callers:
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCHECKSUM@@PEAPEAUFONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x14010E08C (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCH.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0BJ@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B5D5C (--0-$SEMOBJ@$0BJ@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BJ@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400B614C (--$GreReleaseSemaphoreCommon@$0BJ@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     SearchFntCacheNewLink @ 0x140303B08 (SearchFntCacheNewLink.c)
 */

void __fastcall PutFNTCacheCheckSum(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rax
  HSEMAPHORE v8; // rbx
  struct _GRETHREAD *v9; // rax
  bool v10; // zf
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  v4 = a1;
  v5 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  SEMOBJ<25>::SEMOBJ<25>((HSEMAPHORE *)&v11, v5 + 4872);
  v6 = *(_QWORD *)(v5 + 19600);
  if ( v6 && v4 )
  {
    if ( (*(_DWORD *)(v5 + 19592) & 2) != 0 )
    {
      v7 = SearchFntCacheNewLink(v4);
      if ( v7 )
      {
        if ( *(_DWORD *)(v7 + 4) )
          *(_DWORD *)(v7 + 24) |= 1u;
        else
          *(_DWORD *)(v7 + 4) = v3;
        *(_DWORD *)(*(_QWORD *)(v5 + 19600) + 20LL) = 1;
      }
    }
    else
    {
      *(_DWORD *)(v6 + 16) |= 2u;
    }
    v8 = (HSEMAPHORE)v11;
    if ( v11 )
    {
      EtwTraceGreLockReleaseSemaphore(L"FntCache", v11);
      v9 = GreGetCurrentThreadCrossSessionCheck();
      if ( v9 )
      {
        v10 = (*(_QWORD *)v9 & 0xFFFFFFFFFDFFFFFFuLL) == 0;
        *(_QWORD *)v9 &= ~0x2000000uLL;
        if ( v10 )
          GrepOnAllLocksReleased();
      }
      GreReleaseSemaphoreExclusiveInternal(v8);
    }
  }
  else if ( v11 )
  {
    GreReleaseSemaphoreCommon<25,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v11);
  }
}
