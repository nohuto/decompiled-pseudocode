/*
 * XREFs of ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x1402660F4
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x14010B830 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B975C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400BA064 (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400D7660 (--0-$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D7774 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x140150B6C (-prfntActive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x14016C588 (-prfntInactive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     _UmfdZombifyAllUmfdFonts_::_2_::_lambda_1_::operator() @ 0x140263534 (_UmfdZombifyAllUmfdFonts_--_2_--_lambda_1_--operator().c)
 */

void __fastcall UmfdZombifyAllUmfdFonts(int a1, __int64 a2)
{
  __int64 v2; // rbx
  Gre::Base *v3; // rcx
  struct _FAST_MUTEX **v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  HSEMAPHORE i; // rdi
  struct _LIST_ENTRY *v8; // rax
  __int64 v9; // rdx
  int v10; // ecx
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v12; // rax
  __int64 v13; // rdx
  int v14; // ecx
  struct _LIST_ENTRY *v15; // rbx
  HSEMAPHORE v16; // rbx
  struct _GRETHREAD *v17; // rax
  HSEMAPHORE v19; // [rsp+30h] [rbp+8h] BYREF
  HSEMAPHORE v20; // [rsp+38h] [rbp+10h] BYREF
  HSEMAPHORE v21; // [rsp+40h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v4 = (struct _FAST_MUTEX **)Gre::Base::Globals(v3);
  SEMOBJ<17>::SEMOBJ<17>(&v19, v2 + 4872);
  KeAcquireGuardedMutex(*v4 + 26);
  UmfdZombifyAllUmfdFonts_::_2_::_lambda_1_::operator()(v5, *(_QWORD *)(v2 + 20416));
  UmfdZombifyAllUmfdFonts_::_2_::_lambda_1_::operator()(v6, *(_QWORD *)(v2 + 20408));
  KeReleaseGuardedMutex(*v4 + 26);
  SEMOBJ<17>::vUnlock(&v19);
  SEMOBJ<18>::SEMOBJ<18>(&v21, v2 + 4872);
  SEMOBJ<19>::SEMOBJ<19>(&v20, (HSEMAPHORE *)v4);
  for ( i = (HSEMAPHORE)v4[481]; i; i = *(HSEMAPHORE *)i )
  {
    v19 = i;
    v8 = PDEVOBJ::prfntActive((PDEVOBJ *)&v19);
    Flink = v8->Flink;
    while ( Flink != v8 )
    {
      if ( Flink[-36].Flink == *(struct _LIST_ENTRY **)(*(_QWORD *)(W32GetSessionState(v10, v9) + 96) + 24152LL) )
        Flink[-39].Blink = 0LL;
      Flink = Flink->Flink;
      v8 = PDEVOBJ::prfntActive((PDEVOBJ *)&v19);
    }
    v12 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v19);
    v15 = v12->Flink;
    while ( v15 != v12 )
    {
      if ( v15[-36].Flink == *(struct _LIST_ENTRY **)(*(_QWORD *)(W32GetSessionState(v14, v13) + 96) + 24152LL) )
        v15[-39].Blink = 0LL;
      v15 = v15->Flink;
      v12 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v19);
    }
  }
  v16 = v20;
  if ( v20 )
  {
    EtwTraceGreLockReleaseSemaphore(L"DriverMgmt", v20);
    v17 = GreGetCurrentThreadCrossSessionCheck();
    if ( v17 )
    {
      if ( (*((_BYTE *)v17 + 27))-- == 1 )
        *(_QWORD *)v17 &= ~0x80000uLL;
      if ( !*(_QWORD *)v17 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v16);
  }
  SEMOBJ<18>::vUnlock(&v21);
}
