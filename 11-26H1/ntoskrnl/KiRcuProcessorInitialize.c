/*
 * XREFs of KiRcuProcessorInitialize @ 0x14050CA2C
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407BC9D8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140CCEBBC (KeStartAllProcessors.c)
 *     KiRcuSystemInitialize @ 0x140D100E4 (KiRcuSystemInitialize.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSrcuProcessorInitialize @ 0x14052FBD8 (KiSrcuProcessorInitialize.c)
 */

__int64 __fastcall KiRcuProcessorInitialize(__int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // r15
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // edi
  struct _LIST_ENTRY *v8; // rbp
  KIRQL v9; // al
  struct _LIST_ENTRY *i; // r14
  struct _LIST_ENTRY *Blink; // rbx
  KIRQL v12; // al
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v14; // rdx
  struct _LIST_ENTRY *v15; // rcx
  KIRQL v17; // al

  v3 = 32LL * *(unsigned int *)(a1 + 36);
  v5 = *(_DWORD *)(a1 + 36) / (unsigned int)KiDpcCorralLock.WaitBlockFill6[81];
  v6 = *(_DWORD *)(a1 + 36) % (unsigned int)KiDpcCorralLock.WaitBlockFill6[81];
  v7 = 0;
  KiDpcCorralLock.SavedApcState.ApcListHead[v3 / 0x10].Blink = (struct _LIST_ENTRY *)a1;
  v8 = &KiDpcCorralLock.WaitBlock[2].WaitListEntry.Flink[4 * (unsigned __int64)v5];
  KiDpcCorralLock.SavedApcState.ApcListHead[v3 / 0x10].Flink = v8;
  *(unsigned __int64 *)((char *)&KiDpcCorralLock.NpxState + v3) = 1LL << v6;
  if ( !a2 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v8[1].Blink);
    v8[1].Flink = (struct _LIST_ENTRY *)((__int64)v8[1].Flink & ~*(unsigned __int64 *)((char *)&KiDpcCorralLock.NpxState
                                                                                     + v3));
    KeReleaseSpinLock((PKSPIN_LOCK)&v8[1].Blink, v9);
  }
  if ( !v8[1].Flink )
  {
    for ( i = v8; ; i = Blink )
    {
      Blink = i->Blink;
      if ( !Blink )
        break;
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Blink[1].Blink);
      Flink = i->Flink;
      v14 = Blink[1].Flink;
      if ( a2 )
      {
        if ( ((unsigned __int64)Flink & (unsigned __int64)v14) != 0 )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)&Blink[1].Blink, v12);
          goto LABEL_15;
        }
        Blink[1].Flink = (struct _LIST_ENTRY *)((unsigned __int64)v14 | (unsigned __int64)Flink);
      }
      else
      {
        v15 = (struct _LIST_ENTRY *)((unsigned __int64)v14 & ~(unsigned __int64)Flink);
        Blink[1].Flink = v15;
        if ( v15 )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)&Blink[1].Blink, v12);
          goto LABEL_13;
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)&Blink[1].Blink, v12);
    }
  }
  if ( a2 )
  {
LABEL_15:
    v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v8[1].Blink);
    v8[1].Flink = (struct _LIST_ENTRY *)((__int64)v8[1].Flink | *(unsigned __int64 *)((char *)&KiDpcCorralLock.NpxState
                                                                                    + v3));
    KeReleaseSpinLock((PKSPIN_LOCK)&v8[1].Blink, v17);
  }
LABEL_13:
  LOBYTE(v7) = a2 != 0;
  *(_DWORD *)&KiDpcCorralLock.SavedApcStateFill[v3 + 16] = *(_DWORD *)&KiDpcCorralLock.SavedApcStateFill[v3 + 16] & 0xFFFFFFFE | v7;
  return KiSrcuProcessorInitialize(a1, a2);
}
