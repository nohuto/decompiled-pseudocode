/*
 * XREFs of ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x140225258
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x140225158 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400C3B0C (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x1400F6488 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400F651C (--$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FE8E0 (--$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     _UmfdZombifyAllUmfdFonts_::_2_::_lambda_1_::operator() @ 0x1402967F4 (_UmfdZombifyAllUmfdFonts_--_2_--_lambda_1_--operator().c)
 */

void __fastcall UmfdZombifyAllUmfdFonts(int a1, __int64 a2)
{
  int v2; // esi
  _QWORD *v3; // rbx
  Gre::Base *v4; // rcx
  struct _FAST_MUTEX **v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct _FAST_MUTEX *v8; // rbx
  __int64 v9; // rdx
  struct _FAST_MUTEX *i; // rdi
  struct _GRETHREAD *v11; // rax
  struct _LIST_ENTRY **p_Blink; // r15
  struct _FAST_MUTEX *v14; // r14
  PVOID *j; // r14
  __int64 v16; // rcx
  struct _FAST_MUTEX *v17; // rax
  struct _FAST_MUTEX *v18; // r14
  KEVENT *k; // r14
  struct _FAST_MUTEX *v20; // rax
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF
  __int64 v22; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  LODWORD(v21) = 0;
  v3 = *(_QWORD **)(W32GetSessionState(a1, a2) + 96);
  v5 = (struct _FAST_MUTEX **)Gre::Base::Globals(v4);
  v21 = v3[2540];
  GreAcquireSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v21);
  KeAcquireGuardedMutex(*v5 + 26);
  UmfdZombifyAllUmfdFonts_::_2_::_lambda_1_::operator()(v6, v3[2549]);
  UmfdZombifyAllUmfdFonts_::_2_::_lambda_1_::operator()(v7, v3[2548]);
  KeReleaseGuardedMutex(*v5 + 26);
  SEMOBJ<17>::vUnlock((HSEMAPHORE *)&v21);
  v22 = v3[2541];
  GreAcquireSemaphoreCommon<18,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v22);
  v8 = *v5;
  GreAcquireSemaphoreInternal((HSEMAPHORE)*v5);
  GrepAcquireLockValidate<19>();
  for ( i = v5[494]; i; i = *(struct _FAST_MUTEX **)&i->Count )
  {
    p_Blink = &i[62].Event.Header.WaitListHead.Blink;
    if ( ((__int64)i->Event.Header.WaitListHead.Blink & 0x800000) != 0 )
    {
      v14 = (struct _FAST_MUTEX *)*p_Blink;
      v2 |= 1u;
    }
    else
    {
      v14 = i;
    }
    if ( (v2 & 1) != 0 )
      v2 &= ~1u;
    for ( j = (PVOID *)v14[27].Owner; ; j = (PVOID *)*j )
    {
      LODWORD(v16) = (__int64)i->Event.Header.WaitListHead.Blink & 0x800000;
      if ( (_DWORD)v16 )
      {
        v17 = (struct _FAST_MUTEX *)*p_Blink;
        v2 |= 2u;
      }
      else
      {
        v17 = i;
      }
      if ( (v2 & 2) != 0 )
        v2 &= ~2u;
      if ( j == &v17[27].Owner )
        break;
      if ( *(j - 72) == *(PVOID *)(*(_QWORD *)(W32GetSessionState(v16, v9) + 96) + 24136LL) )
        *(j - 77) = 0LL;
    }
    if ( (_DWORD)v16 )
    {
      v18 = (struct _FAST_MUTEX *)*p_Blink;
      v2 |= 4u;
    }
    else
    {
      v18 = i;
    }
    if ( (v2 & 4) != 0 )
      v2 &= ~4u;
    for ( k = *(KEVENT **)&v18[27].Event.Header.Lock; ; k = *(KEVENT **)&k->Header.Lock )
    {
      if ( ((__int64)i->Event.Header.WaitListHead.Blink & 0x800000) != 0 )
      {
        v20 = (struct _FAST_MUTEX *)*p_Blink;
        v2 |= 8u;
      }
      else
      {
        v20 = i;
      }
      if ( (v2 & 8) != 0 )
        v2 &= ~8u;
      if ( k == &v20[27].Event )
        break;
      v16 = *(_QWORD *)(W32GetSessionState(v16, v9) + 96);
      if ( *(_QWORD *)&k[-24].Header.Lock == *(_QWORD *)(v16 + 24136) )
        k[-26].Header.WaitListHead.Flink = 0LL;
    }
  }
  if ( v8 )
  {
    EtwTraceGreLockReleaseSemaphore(L"DriverMgmt", v8);
    v11 = GreGetCurrentThreadCrossSessionCheck();
    if ( v11 )
    {
      if ( (*((_BYTE *)v11 + 27))-- == 1 )
        *(_QWORD *)v11 &= ~0x80000uLL;
      if ( !*(_QWORD *)v11 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal((HSEMAPHORE)v8);
  }
  SEMOBJ<18>::vUnlock((HSEMAPHORE *)&v22);
}
