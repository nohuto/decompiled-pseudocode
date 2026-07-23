/*
 * XREFs of KiAbProcessPostContextSwitch @ 0x14023D3E0
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
 *     ?KiAbpProcessPostContextSwitch@LegacyAutoBoost@@YAXPEAU_KTHREAD@@@Z @ 0x14023D580 (-KiAbpProcessPostContextSwitch@LegacyAutoBoost@@YAXPEAU_KTHREAD@@@Z.c)
 *     ?KiAbpAcquireEntryLockRaw@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14026FCF0 (-KiAbpAcquireEntryLockRaw@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 */

void __fastcall KiAbProcessPostContextSwitch(__int64 a1, struct _KTHREAD *a2)
{
  __int64 v3; // rbx
  struct AutoBoost::_AB_THREAD_ENTRY *v4; // rdx
  unsigned int v5; // esi
  bool i; // zf
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  struct AutoBoost::_AB_THREAD_ENTRY *v10; // rdx
  AutoBoost *v11; // rcx
  __int64 v12; // r8
  char v13; // dl
  __int64 v14; // rcx
  __int64 v15; // [rsp+48h] [rbp+10h]

  if ( (KiAbpGlobalState & 1) != 0 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 1136) + 8LL);
    if ( v3 )
    {
      if ( (unsigned __int16)(1LL << *(_BYTE *)(v3 + 14)) - 1 != (*(_WORD *)(v3 + 8) | *(_WORD *)(v3 + 10)) )
      {
        if ( *(_BYTE *)(a1 + 793) )
        {
          v4 = (struct AutoBoost::_AB_THREAD_ENTRY *)(unsigned __int16)((1LL << *(_BYTE *)(v3 + 14)) - 1);
          v5 = (unsigned int)v4 ^ (*(unsigned __int16 *)(v3 + 8) | *(unsigned __int16 *)(v3 + 10));
          for ( i = !_BitScanForward((unsigned int *)&v7, v5); !i; i = !_BitScanForward((unsigned int *)&v7, v5) )
          {
            v8 = (unsigned int)v7;
            v9 = v3 + 48 * v7 + 16;
            if ( (*(_BYTE *)(v9 + 33) & 4) == 0
              && !*(_DWORD *)(v9 + 40)
              && (*(_BYTE *)(v9 + 32) & 2) != 0
              && *(_QWORD *)v9 )
            {
              AutoBoost::KiAbpAcquireEntryLockRaw((AutoBoost *)(v3 + 48 * v7 + 16), v4);
              *(_BYTE *)(v9 + 33) |= 1u;
              AutoBoost::KiAbpEntryUnlink(v11, v10);
              v12 = *(_QWORD *)(v9 + 40);
              *(_DWORD *)(v9 + 40) = 0;
              _InterlockedAnd8((volatile signed __int8 *)(v9 + 35), 0xFEu);
              v13 = *(_BYTE *)(v9 + 36);
              *(_QWORD *)v9 = 0LL;
              *(_WORD *)(v9 + 32) = 0;
              *(_WORD *)(v9 - 48LL * (v13 & 0x7F) - 8) |= 1 << (v13 & 0xF);
              AutoBoost::KiAbpUnboostThread(a1, 0LL, v12, 0LL);
              v14 = *(_QWORD *)(a1 + 800);
              if ( v14 )
              {
                v15 = *(_QWORD *)(v14 + 8 * v8);
                HIBYTE(v15) &= ~0x80u;
                *(_QWORD *)(v14 + 8 * v8) = v15;
              }
            }
            v5 &= v5 - 1;
          }
        }
      }
    }
  }
  else
  {
    LegacyAutoBoost::KiAbpProcessPostContextSwitch((LegacyAutoBoost *)a1, a2);
  }
}
