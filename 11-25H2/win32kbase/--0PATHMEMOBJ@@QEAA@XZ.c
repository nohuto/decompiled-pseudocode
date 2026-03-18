/*
 * XREFs of ??0PATHMEMOBJ@@QEAA@XZ @ 0x140098640
 * Callers:
 *     GreExtCreateRegion @ 0x140096D00 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x14009ADAC (GreCreatePolyPolygonRgnInternal.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x140159390 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x14000DAB0 (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14001F850 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x14001F87C (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     HmgInsertObjectInternal @ 0x14001F910 (HmgInsertObjectInternal.c)
 *     ?Allocate@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140098750 (-Allocate@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     PushThreadGuardedObject @ 0x1400988E0 (PushThreadGuardedObject.c)
 */

PATHMEMOBJ *__fastcall PATHMEMOBJ::PATHMEMOBJ(PATHMEMOBJ *this)
{
  __int64 v2; // rbx
  _BYTE v4[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 1) = 0LL;
  if ( !*((_DWORD *)this + 28) )
  {
    PushThreadGuardedObject((char *)this + 80, this, THREAD_GUARDED_EPATHOBJ::vThreadCleanup);
    *((_DWORD *)this + 28) = 1;
  }
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(this) + 88) + 4272LL) + 32LL) )
  {
    v2 = NSInstrumentation::CTypeIsolation<81920,320>::Allocate();
    if ( v2 )
    {
      HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v4);
      if ( v5 || !HmgInsertObjectInternal((struct OBJECT *)v2, 3, 7u) )
      {
        FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>((void *)v2);
      }
      else
      {
        v5 = v2;
        *(_QWORD *)this = 0LL;
        *(_QWORD *)(v2 + 24) = 0LL;
        *(_QWORD *)(v2 + 32) = 0LL;
        *(_QWORD *)(v2 + 40) = 0LL;
        *(_QWORD *)(v2 + 48) = 0LL;
        *(_QWORD *)(v2 + 56) = 0LL;
        *(_QWORD *)(v2 + 64) = 0LL;
        *(_DWORD *)(v2 + 72) = 3;
        *(_QWORD *)(v2 + 88) = 0LL;
        *(_DWORD *)(v2 + 96) = 0;
        *((_QWORD *)this + 1) = v2;
      }
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v4);
    }
  }
  return this;
}
