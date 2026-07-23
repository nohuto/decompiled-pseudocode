/*
 * XREFs of KiAbProcessPreContextSwitch @ 0x14023F810
 * Callers:
 *     KiDispatchInterrupt @ 0x140224C20 (KiDispatchInterrupt.c)
 *     KiHandleDeferredPreemption @ 0x1402300C0 (KiHandleDeferredPreemption.c)
 *     KeYieldExecution @ 0x14023A110 (KeYieldExecution.c)
 *     KiDirectSwitchThread @ 0x14023B540 (KiDirectSwitchThread.c)
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KiCheckForThreadDispatch @ 0x14037E820 (KiCheckForThreadDispatch.c)
 * Callees:
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     ?KiAbpAcquireEntryLockRaw@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14026FCF0 (-KiAbpAcquireEntryLockRaw@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_LIST_ENTRY@@22@Z @ 0x1402707CC (-KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_L.c)
 *     ?KiAbThreadAreAllEntriesFree@LegacyAutoBoost@@YAKPEAU_KTHREAD@@@Z @ 0x140270FEC (-KiAbThreadAreAllEntriesFree@LegacyAutoBoost@@YAKPEAU_KTHREAD@@@Z.c)
 *     ?KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_KLOCK_ENTRY_BOOST_BITMAP@@@Z @ 0x140271700 (-KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     KiReadyDeferredReadyList @ 0x140331960 (KiReadyDeferredReadyList.c)
 *     ?KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403777D0 (-KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEX.c)
 *     ?KiAbpThreadAreAllEntriesFree@AutoBoost@@YAKPEAU_KTHREAD@@@Z @ 0x140445CE0 (-KiAbpThreadAreAllEntriesFree@AutoBoost@@YAKPEAU_KTHREAD@@@Z.c)
 */

unsigned int __fastcall KiAbProcessPreContextSwitch(struct _KLOCK_ENTRY *this, __int64 a2)
{
  unsigned int result; // eax
  char v3; // r15
  struct _KTHREAD *AllFields; // r10
  _KLOCK_ENTRY_BOOST_BITMAP *p_BoostBitmap; // rcx
  struct _LIST_ENTRY *Flink; // rdi
  __int64 v8; // r12
  unsigned __int64 Blink_low; // rdx
  unsigned int v10; // ebx
  __int64 v11; // rsi
  struct _LIST_ENTRY *v12; // r14
  AutoBoost *v13; // rcx
  struct AutoBoost::_AB_BOOST_CONTEXT *v14; // r9
  __int64 v15; // r8
  __int64 v16; // r8
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v18; // rdx
  struct AutoBoost::_AB_BOOST_CONTEXT *v19; // r9
  _QWORD **v20; // rbx
  _QWORD *i; // rcx
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  _KLOCK_ENTRY_LOCK_STATE v23; // rsi
  __int64 v24; // r14
  unsigned int v25; // ebx
  int v26; // r12d
  struct _SINGLE_LIST_ENTRY *v27; // rdi
  struct _KPRCB *v28; // rsi
  struct _SINGLE_LIST_ENTRY *v29; // rax
  struct _SINGLE_LIST_ENTRY *v30; // rbx
  char v31; // al
  __int64 v32; // rsi
  struct _LIST_ENTRY *Blink; // r8
  char v34; // al
  bool v35; // zf
  char v36; // al
  LegacyAutoBoost *v37; // rcx
  struct _KTHREAD *v38; // rdi
  struct AutoBoost::_AB_THREAD_ENTRY *v39; // rdx
  AutoBoost *v40; // rcx
  volatile signed __int16 *v41; // rsi
  signed __int32 v42[8]; // [rsp+0h] [rbp-80h] BYREF
  union _KLOCK_ENTRY_BOOST_BITMAP *v43; // [rsp+28h] [rbp-58h]
  struct _KTHREAD *v44; // [rsp+30h] [rbp-50h]
  LegacyAutoBoost *v45; // [rsp+38h] [rbp-48h] BYREF
  __m128i v46; // [rsp+40h] [rbp-40h]
  __int128 p_AbSelfIoBoostsList; // [rsp+50h] [rbp-30h]
  __m128i v48; // [rsp+60h] [rbp-20h] BYREF
  __int128 v49; // [rsp+70h] [rbp-10h]
  unsigned int v50; // [rsp+C8h] [rbp+48h]
  struct _SINGLE_LIST_ENTRY v51; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v52; // [rsp+D8h] [rbp+58h] BYREF

  result = KiAbpGlobalState;
  v3 = 0;
  if ( (KiAbpGlobalState & 1) != 0 )
  {
    AllFields = (struct _KTHREAD *)this[12].BoostBitmap.AllFields;
    p_BoostBitmap = &this[12].BoostBitmap;
    v51.Next = 0LL;
    v45 = 0LL;
    v44 = AllFields;
    Flink = AllFields->Header.WaitListHead.Flink;
    if ( Flink )
    {
      v8 = *(_QWORD *)&this[9].EntryFlags;
      p_BoostBitmap = &this[12].BoostBitmap;
      if ( v8 )
      {
        p_BoostBitmap = &this[12].BoostBitmap;
        Blink_low = LOWORD(Flink->Blink);
        v10 = 0;
        v50 = LOWORD(Flink->Blink);
        if ( BYTE6(Flink->Blink) )
        {
          do
          {
            v11 = *(_QWORD *)(v8 + 8LL * v10);
            v12 = &Flink[3 * v10];
            v52 = v11;
            v13 = (AutoBoost *)&v12[1];
            if ( v11 && (v11 & 2) == 0 && (v11 >= 0 || (BYTE1(v12[3].Flink) & 4) == 0 && (v11 & 1) != 0) )
            {
              v31 = (char)v12[3].Flink;
              v32 = v11 & 0x7FFFFFFFFFFFFFFCLL;
              if ( (v31 & 1) != 0 )
              {
                if ( (v31 & 2) != 0 )
                {
                  v46 = 0LL;
                  AutoBoost::KiAbpAcquireEntryLockRaw(v13, (struct AutoBoost::_AB_THREAD_ENTRY *)Blink_low);
                  AutoBoost::KiAbpEntryUnlink(v40, v39);
                  _InterlockedAnd8((volatile signed __int8 *)&v12[3].Flink + 3, 0xFEu);
                  LODWORD(Blink_low) = v50;
                  v13 = (AutoBoost *)&v12[1];
                }
                LOBYTE(v12[3].Flink) &= ~1u;
                Blink = v12[3].Blink;
                v50 = Blink_low | (1 << v10);
                *(_QWORD *)v13 = 0LL;
                LODWORD(v12[3].Blink) = 0;
                AutoBoost::KiAbpUnboostThread(this, v32, Blink, 0LL);
                Blink_low = v50;
                v13 = (AutoBoost *)&v12[1];
              }
              if ( v32 )
              {
                *(_QWORD *)v13 = v32;
                LOBYTE(v12[3].Flink) |= 1u;
                v34 = BYTE1(v12[3].Flink) & 0xF7;
                v35 = (v52 & 1) == 0;
                BYTE1(v12[3].Flink) = v34;
                if ( v35 )
                  v36 = v34 & 0xFB;
                else
                  v36 = v34 | 4;
                LODWORD(Blink_low) = Blink_low & ~(1 << v10);
                BYTE1(v12[3].Flink) = v36;
                HIBYTE(v52) |= 0x80u;
                v50 = Blink_low;
                *(_QWORD *)(v8 + 8LL * v10) = v52;
              }
            }
            result = BYTE6(Flink->Blink);
            ++v10;
          }
          while ( v10 < result );
          AllFields = v44;
          p_BoostBitmap = &this[12].BoostBitmap;
        }
        LOWORD(Flink->Blink) = Blink_low;
      }
    }
    v14 = (struct AutoBoost::_AB_BOOST_CONTEXT *)p_BoostBitmap->AllFields;
    v15 = *(_QWORD *)p_BoostBitmap->AllFields;
    if ( v15
      && (result = *(unsigned __int16 *)(v15 + 8),
          (unsigned __int16)(1LL << *(_BYTE *)(v15 + 14)) - 1 != ((unsigned __int16)result | *(_WORD *)(v15 + 10)))
      || (v16 = *((_QWORD *)v14 + 1)) != 0
      && (result = *(unsigned __int16 *)(v16 + 8),
          (unsigned __int16)(1LL << *(_BYTE *)(v16 + 14)) - 1 != ((unsigned __int16)result | *(_WORD *)(v16 + 10))) )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v46.m128i_i64[0] = (__int64)&v51;
      v46.m128i_i64[1] = (__int64)&v45;
      p_AbSelfIoBoostsList = (unsigned __int64)&CurrentPrcb->AbSelfIoBoostsList;
      v48 = v46;
      v49 = p_AbSelfIoBoostsList;
      DWORD2(v49) = 7;
      AutoBoost::KiAbpProcessThreadState((AutoBoost *)this, AllFields, (struct AutoBoost::_AB_THREAD_STATE *)&v48, v14);
      DWORD2(v49) = 4;
      v20 = (_QWORD **)_mm_srli_si128(v46, 8).m128i_u64[0];
      for ( i = *v20; *v20; i = *v20 )
      {
        v41 = (volatile signed __int16 *)(i - 101);
        *v20 = (_QWORD *)*i;
        *i = 1LL;
        _InterlockedOr(v42, 0);
        if ( *((_BYTE *)i - 16) )
          AutoBoost::KiAbpProcessThreadState(
            (AutoBoost *)(i - 101),
            *((struct _KTHREAD **)v41 + 142),
            (struct AutoBoost::_AB_THREAD_STATE *)&v48,
            v19);
        _InterlockedDecrement16(v41 + 434);
      }
      Next = v51.Next;
      if ( v51.Next )
      {
        v51.Next = v51.Next->Next;
        do
        {
          KiDeferredReadySingleThread(CurrentPrcb, (ULONG_PTR)&Next[-27], &v51, 0LL);
          Next = v51.Next;
          ++v3;
          if ( v51.Next )
            v51.Next = v51.Next->Next;
          if ( (v3 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts, v18);
        }
        while ( Next );
      }
      return KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts, v18);
    }
  }
  else
  {
    v23.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)this[13].LockState;
    if ( v23.0 )
    {
      v24 = *(_QWORD *)&this[9].EntryFlags;
      if ( v24 )
      {
        v25 = 0;
        v26 = *(unsigned __int16 *)(*(_QWORD *)&v23.0 + 8LL);
        if ( *(_BYTE *)(*(_QWORD *)&v23.0 + 12LL) )
        {
          a2 = 0x7FFFFFFFFFFFFFFCLL;
          do
          {
            v27 = *(struct _SINGLE_LIST_ENTRY **)(v24 + 8LL * v25);
            v51.Next = v27;
            if ( v27 )
            {
              if ( ((unsigned __int8)v27 & 2) == 0 )
              {
                v37 = (LegacyAutoBoost *)(*(_QWORD *)&v23.0 + 88LL * v25 + 16);
                v45 = v37;
                if ( SHIBYTE(v27) >= 0 || !*((_BYTE *)v37 + 9) && ((unsigned __int8)v27 & 1) != 0 )
                {
                  v38 = (struct _KTHREAD *)((unsigned __int64)v27 & 0x7FFFFFFFFFFFFFFCLL);
                  if ( *(_QWORD *)v37 )
                  {
                    _disable();
                    LegacyAutoBoost::KiAbEntryFreeAndEnableInterrupts(v37, this, v38, 0LL, 0, v43);
                    v37 = v45;
                    v26 |= 1 << v25;
                    a2 = 0x7FFFFFFFFFFFFFFCLL;
                  }
                  if ( v38 )
                  {
                    v26 &= ~(1 << v25);
                    *(_QWORD *)v37 = v38;
                    if ( ((__int64)v51.Next & 1) != 0 )
                      *((_BYTE *)v37 + 9) = 1;
                    HIBYTE(v51.Next) |= 0x80u;
                    *(struct _SINGLE_LIST_ENTRY *)(v24 + 8LL * v25) = v51;
                  }
                }
              }
            }
            ++v25;
          }
          while ( v25 < *(unsigned __int8 *)(*(_QWORD *)&v23.0 + 12LL) );
        }
        *(_WORD *)(*(_QWORD *)&v23.0 + 8LL) = v26;
      }
    }
    if ( (KiAbpGlobalState & 1) != 0 )
      result = AutoBoost::KiAbpThreadAreAllEntriesFree((AutoBoost *)this, (struct _KTHREAD *)a2);
    else
      result = LegacyAutoBoost::KiAbThreadAreAllEntriesFree((LegacyAutoBoost *)this, (struct _KTHREAD *)a2);
    if ( !result )
    {
      v52 = 0LL;
      v28 = KeGetCurrentPrcb();
      v51.Next = 0LL;
      LegacyAutoBoost::KiAbProcessThreadLocks(this, 7LL, &v52, &v51, &v28->AbSelfIoBoostsList);
      v29 = v51.Next;
      while ( v29 )
      {
        v30 = v29;
        if ( v29 )
        {
          v29 = v29->Next;
          v51.Next = v29;
        }
        v30->Next = (struct _SINGLE_LIST_ENTRY *)1;
        _InterlockedOr(v42, 0);
        if ( LOBYTE(v30[-2].Next) )
        {
          LegacyAutoBoost::KiAbProcessThreadLocks(&v30[-101], 4LL, &v52, &v51, &v28->AbSelfIoBoostsList);
          v29 = v51.Next;
        }
        _InterlockedDecrement16((volatile signed __int16 *)&v30[7].Next + 2);
      }
      return KiReadyDeferredReadyList(v28, &v52);
    }
  }
  return result;
}
