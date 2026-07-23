/*
 * XREFs of MiAddMdlTracker @ 0x1404ED400
 * Callers:
 *     MiSwitchToTransition @ 0x1402A1680 (MiSwitchToTransition.c)
 *     MiProbeAndLockComplete @ 0x1403A1DB0 (MiProbeAndLockComplete.c)
 *     MiProbeAndLockPages @ 0x1403A1ECC (MiProbeAndLockPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     rapidhash_internal @ 0x14024D090 (rapidhash_internal.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 *     MiCaptureStackTraceEx @ 0x14050860C (MiCaptureStackTraceEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiGetInstructionPointer @ 0x1406EB1EC (MiGetInstructionPointer.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiAddMdlTracker(ULONG_PTR BugCheckParameter3, __int64 a2, int a3)
{
  PEPROCESS v6; // rbp
  bool v7; // bl
  struct _LIST_ENTRY *Flink; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  volatile LONG *p_Blink; // rcx
  KIRQL v12; // bp
  struct _LIST_ENTRY *v13; // rdx
  struct _LIST_ENTRY *Blink; // rax
  volatile LONG *v15; // rcx
  _OWORD v16[10]; // [rsp+30h] [rbp-B8h] BYREF
  _UNKNOWN *retaddr; // [rsp+E8h] [rbp+0h]

  memset_0(v16, 0, sizeof(v16));
  v6 = *(PEPROCESS *)(BugCheckParameter3 + 16);
  v7 = 0;
  if ( v6 || (v6 = PsInitialSystemProcess) != 0LL )
  {
    Flink = v6[2].Header.WaitListHead.Flink;
    if ( Flink )
    {
      if ( HIDWORD(Flink[1].Blink) )
      {
        v9 = ExAllocateFromNPagedLookasideList(&Lookaside);
        v10 = v9;
        if ( v9 )
        {
          v9[3] = BugCheckParameter3;
          v9[5] = a2;
          v9[4] = *(_QWORD *)(BugCheckParameter3 + 32);
          *((_DWORD *)v9 + 12) = *(_DWORD *)(BugCheckParameter3 + 44);
          *((_DWORD *)v9 + 13) = *(_DWORD *)(BugCheckParameter3 + 40);
          v9[8] = *(_QWORD *)(BugCheckParameter3 + 48);
          *((_DWORD *)v9 + 15) = rapidhash_internal(
                                   (unsigned __int8 *)(BugCheckParameter3 + 48),
                                   8 * a2,
                                   0xBDD89AA982704029uLL);
          if ( !(unsigned int)MiCaptureStackTraceEx(v16, 14LL) )
          {
            *(_QWORD *)&v16[0] = MiGetInstructionPointer();
            *((_QWORD *)&v16[0] + 1) = retaddr;
          }
          *(_OWORD *)(v10 + 9) = v16[0];
          *(_OWORD *)(v10 + 11) = v16[1];
          *(_OWORD *)(v10 + 13) = v16[2];
          *(_OWORD *)(v10 + 15) = v16[3];
          *(_OWORD *)(v10 + 17) = v16[4];
          *(_OWORD *)(v10 + 19) = v16[5];
          *(_OWORD *)(v10 + 21) = v16[6];
          *((_DWORD *)v10 + 14) = a3;
          v10[23] = v6;
          p_Blink = (volatile LONG *)&Flink[1].Blink;
          if ( KeGetCurrentIrql() == 2 )
          {
            v12 = 17;
            ExAcquireSpinLockExclusiveAtDpcLevel(p_Blink);
          }
          else
          {
            v12 = ExAcquireSpinLockExclusive(p_Blink);
          }
          v13 = Flink->Flink;
          if ( Flink->Flink )
          {
            while ( 1 )
            {
              if ( (struct _LIST_ENTRY *)BugCheckParameter3 >= v13[1].Blink )
              {
                if ( (struct _LIST_ENTRY *)BugCheckParameter3 <= v13[1].Blink )
                  KeBugCheckEx(0xD9u, 1uLL, (ULONG_PTR)v13, BugCheckParameter3, (ULONG_PTR)Flink[1].Flink);
                Blink = v13->Blink;
                if ( !Blink )
                {
                  v7 = 1;
                  break;
                }
              }
              else
              {
                Blink = v13->Flink;
                if ( !v13->Flink )
                  break;
              }
              v13 = Blink;
            }
          }
          RtlAvlInsertNodeEx((unsigned __int64 *)Flink, (unsigned __int64)v13, v7, v10);
          Flink[1].Flink = (struct _LIST_ENTRY *)((char *)Flink[1].Flink + a2);
          v15 = (volatile LONG *)&Flink[1].Blink;
          if ( v12 == 17 )
            ExReleaseSpinLockExclusiveFromDpcLevel(v15);
          else
            ExReleaseSpinLockExclusive(v15, v12);
        }
        else
        {
          HIDWORD(Flink[1].Blink) = 0;
        }
      }
    }
  }
}
