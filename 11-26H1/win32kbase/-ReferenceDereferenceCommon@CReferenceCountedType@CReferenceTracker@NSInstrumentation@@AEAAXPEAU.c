/*
 * XREFs of ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x140116FFC
 * Callers:
 *     ?TrackObjectReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019E4C (-TrackObjectReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@.c)
 *     ?TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019E80 (-TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@.c)
 *     ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x14002777C (--$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     DrvGetHDEV @ 0x140027860 (DrvGetHDEV.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1400281B8 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ?TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z @ 0x140116F8C (-TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z.c)
 * Callees:
 *     ?Insert@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1400B8B6C (-Insert@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 *     ?Lookup@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEBAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1400B8C38 (-Lookup@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

void __fastcall NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
        NSInstrumentation::CReferenceTracker::CReferenceCountedType *this,
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *a2,
        unsigned __int8 a3)
{
  signed __int64 v5; // r14
  char v6; // r12
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rax
  bool v10; // si
  signed __int64 v11; // rbp
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *Pool2; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **v13; // rcx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **v14; // rsi
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer ***v15; // rax
  volatile signed __int64 v16; // rax
  __int64 v17; // r14
  NSInstrumentation::CPrioritizedWriterLock *v18; // rsi
  __int64 v19; // rax
  int v20; // ecx
  unsigned __int16 CurrentThreadId; // ax
  __int16 v22; // cx
  PVOID BackTrace[20]; // [rsp+30h] [rbp-C8h] BYREF

  v5 = _InterlockedIncrement64((volatile signed __int64 *)a2 + 5);
  v6 = 0;
  v7 = v5 / 1011;
  v8 = v5 / 1011;
  if ( v5 && v5 == 1011 * v7 )
  {
    v8 = v7 - 1;
    v6 = 1;
  }
  while ( 1 )
  {
    v9 = *((_QWORD *)a2 + 4);
    v10 = v9 < 0;
    v11 = -v9;
    if ( v9 >= 0 )
      v11 = *((_QWORD *)a2 + 4);
    if ( v11 == v8 )
      break;
    KeWaitForSingleObject(*((PVOID *)a2 + 2), UserRequest, 0, 0, 0LL);
  }
  if ( v6 )
  {
    KeWaitForSingleObject(*((PVOID *)a2 + 3), UserRequest, 0, 0, 0LL);
    KeClearEvent(*((PRKEVENT *)a2 + 3));
    if ( !v10 )
    {
      Pool2 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)ExAllocatePool2(258LL, 4096LL, 1648980821LL);
      if ( Pool2 )
      {
        v13 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)*((_QWORD *)a2 + 1);
        if ( *v13 != a2 )
          goto LABEL_22;
        *(_QWORD *)Pool2 = a2;
        *((_QWORD *)Pool2 + 1) = v13;
        *v13 = Pool2;
        *((_QWORD *)a2 + 1) = Pool2;
      }
      else
      {
        *((_QWORD *)a2 + 4) = -v8;
      }
    }
    if ( *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)a2 == a2 )
    {
LABEL_19:
      _InterlockedExchange((volatile __int32 *)a2 + 12, 0);
      if ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 4, ++v8, v11) )
        _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 4, -v8, -v11);
      KeSetEvent(*((PRKEVENT *)a2 + 2), 0, 0);
      goto LABEL_23;
    }
    v14 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)*((_QWORD *)a2 + 1);
    if ( *v14 == a2 )
    {
      v15 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer ***)v14[1];
      if ( *v15 == v14 )
      {
        *((_QWORD *)a2 + 1) = v15;
        *v15 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)a2;
        memmove((char *)v14 + 52, (char *)a2 + 52, 0xFCCuLL);
        v16 = *(_QWORD *)a2;
        if ( *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(*(_QWORD *)a2 + 8LL) == a2 )
        {
          *v14 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)v16;
          v14[1] = a2;
          *(_QWORD *)(v16 + 8) = v14;
          *(_QWORD *)a2 = v14;
          goto LABEL_19;
        }
      }
    }
LABEL_22:
    __fastfail(3u);
  }
LABEL_23:
  v17 = v5 % 1011;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  v18 = (NSInstrumentation::CPrioritizedWriterLock *)*((_QWORD *)this + 4);
  v19 = NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Lookup(
          v18,
          (NSInstrumentation::CBackTrace *)BackTrace);
  if ( v19
    || (v19 = NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Insert(
                v18,
                (NSInstrumentation::CBackTrace *)BackTrace)) != 0 )
  {
    v20 = *(_DWORD *)(v19 + 180);
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)a2 + 4, -v8);
    LOWORD(v20) = -1;
  }
  *((_WORD *)a2 + 2 * v17 + 26) = (2 * v20) | *((_WORD *)a2 + 2 * v17 + 26) & 1;
  CurrentThreadId = (unsigned __int16)PsGetCurrentThreadId();
  v22 = *((_WORD *)a2 + 2 * v17 + 26);
  *((_WORD *)a2 + 2 * v17 + 27) = CurrentThreadId;
  *((_WORD *)a2 + 2 * v17 + 26) = a3 | v22 & 0xFFFE;
  if ( _InterlockedIncrement((volatile signed __int32 *)a2 + 12) == 1011 )
    KeSetEvent(*((PRKEVENT *)a2 + 3), 0, 0);
}
