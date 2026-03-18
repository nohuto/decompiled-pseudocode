/*
 * XREFs of ??0PATHMEMOBJ@@QEAA@XZ @ 0x140011400
 * Callers:
 *     GreExtCreateRegion @ 0x140011690 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1400C0C00 (GreCreatePolyPolygonRgnInternal.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x1401A5920 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     PushThreadGuardedObject @ 0x140030350 (PushThreadGuardedObject.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400B7864 (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1400C4384 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z @ 0x1400C4460 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z.c)
 *     ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x1400C9574 (-vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401360D4 (-Allocate@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

PATHMEMOBJ *__fastcall PATHMEMOBJ::PATHMEMOBJ(PATHMEMOBJ *this)
{
  CAutoTGO *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdi
  struct Gre::Base::SESSION_GLOBALS *v7; // rbx
  __int64 v8; // rax
  _OWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]
  char v12; // [rsp+48h] [rbp-10h]

  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v3 = (PATHMEMOBJ *)((char *)this + 80);
  *((_DWORD *)v3 + 8) = 0;
  *((_QWORD *)this + 1) = 0LL;
  CAutoTGO::vGuard(v3, this, (void (*)(void *))THREAD_GUARDED_EPATHOBJ::vThreadCleanup);
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(v4) + 88) + 4384LL) + 32LL) )
  {
    v6 = NSInstrumentation::CTypeIsolation<81920,320>::Allocate();
    if ( v6 )
    {
      v7 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(v5) + 88);
      memset(v10, 0, sizeof(v10));
      PushThreadGuardedObject(
        v10,
        v10,
        UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
      v11 = 0LL;
      v12 = 0;
      if ( HmgInsertObjectInternal(v7, (struct OBJECT *)v6, 3u, 7u) )
      {
        v11 = v6;
        *(_QWORD *)this = 0LL;
        *(_QWORD *)(v6 + 24) = 0LL;
        *(_QWORD *)(v6 + 32) = 0LL;
        *(_QWORD *)(v6 + 40) = 0LL;
        *(_QWORD *)(v6 + 48) = 0LL;
        *(_QWORD *)(v6 + 56) = 0LL;
        *(_QWORD *)(v6 + 64) = 0LL;
        *(_DWORD *)(v6 + 72) = 3;
        *(_QWORD *)(v6 + 88) = 0LL;
        *(_DWORD *)(v6 + 96) = 0;
        v8 = v11;
        *((_QWORD *)this + 1) = v6;
        if ( v8 && !v12 )
          _InterlockedDecrement16((volatile signed __int16 *)(v8 + 12));
        PopThreadGuardedObject(v10);
      }
      else
      {
        FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>((void *)v6);
        HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v10);
      }
    }
  }
  return this;
}
