/*
 * XREFs of ?PutFNTCacheCheckSum@@YAXKK@Z @ 0x1401C61E8
 * Callers:
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCHECKSUM@@PEAPEAUFONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x14013F72C (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCH.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GrepAcquireLockValidate@$0BJ@@@YAXXZ @ 0x1401C6318 (--$GrepAcquireLockValidate@$0BJ@@@YAXXZ.c)
 *     SearchFntCacheNewLink @ 0x14031B5E0 (SearchFntCacheNewLink.c)
 */

void __fastcall PutFNTCacheCheckSum(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  unsigned int v4; // esi
  __int64 v5; // rdi
  HSEMAPHORE v6; // rbx
  __int64 v7; // r8
  struct _GRETHREAD *v8; // rax
  bool v9; // zf
  __int64 v10; // rax

  v3 = a2;
  v4 = a1;
  v5 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  v6 = *(HSEMAPHORE *)(v5 + 20312);
  GreAcquireSemaphoreInternal(v6);
  GrepAcquireLockValidate<25>();
  v7 = *(_QWORD *)(v5 + 19592);
  if ( v7 && v4 )
  {
    if ( (*(_DWORD *)(v5 + 19584) & 2) != 0 )
    {
      v10 = SearchFntCacheNewLink(v4);
      if ( v10 )
      {
        if ( *(_DWORD *)(v10 + 4) )
          *(_DWORD *)(v10 + 24) |= 1u;
        else
          *(_DWORD *)(v10 + 4) = v3;
        *(_DWORD *)(*(_QWORD *)(v5 + 19592) + 28LL) = 1;
      }
    }
    else
    {
      *(_DWORD *)(v7 + 24) |= 2u;
    }
  }
  if ( v6 )
  {
    EtwTraceGreLockReleaseSemaphore(L"FntCache", v6);
    v8 = GreGetCurrentThreadCrossSessionCheck();
    if ( v8 )
    {
      v9 = (*(_QWORD *)v8 & 0xFFFFFFFFFDFFFFFFuLL) == 0;
      *(_QWORD *)v8 &= ~0x2000000uLL;
      if ( v9 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v6);
  }
}
