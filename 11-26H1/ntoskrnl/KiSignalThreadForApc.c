/*
 * XREFs of KiSignalThreadForApc @ 0x14020B2C0
 * Callers:
 *     KiSuspendThread @ 0x14020917C (KiSuspendThread.c)
 *     KiQueueTebUpdateApc @ 0x1402094C4 (KiQueueTebUpdateApc.c)
 *     KiInsertDeferredPreemptionApc @ 0x14020A138 (KiInsertDeferredPreemptionApc.c)
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 *     KiSetUserAffinityThread @ 0x14022C114 (KiSetUserAffinityThread.c)
 *     KeRequestTerminationThread @ 0x1403107F4 (KeRequestTerminationThread.c)
 *     KiResumeThread @ 0x140310D78 (KiResumeThread.c)
 *     KeTryToInsertQueueApc @ 0x1403F0DB8 (KeTryToInsertQueueApc.c)
 *     KiSchedulerApc @ 0x14049B710 (KiSchedulerApc.c)
 *     KiRequestSchedulerApcThread @ 0x1405F93EC (KiRequestSchedulerApcThread.c)
 *     ?KiAbpCrossThreadDelete@AutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1406007F8 (-KiAbpCrossThreadDelete@AutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
 *     KiSignalThread @ 0x14027BEB0 (KiSignalThread.c)
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 *     KiRequestSoftwareInterrupt @ 0x1403129C0 (KiRequestSoftwareInterrupt.c)
 *     KiSendSoftwareInterrupt @ 0x14043EC90 (KiSendSoftwareInterrupt.c)
 *     KiRequestApcInterruptSynchronously @ 0x140522BEC (KiRequestApcInterruptSynchronously.c)
 */

char __fastcall KiSignalThreadForApc(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  char v6; // r11
  __int64 v7; // rcx
  char v8; // al
  __int64 v9; // r8
  int v10; // edx
  char v11; // r9
  signed __int32 v13[8]; // [rsp+0h] [rbp-48h] BYREF
  int v14; // [rsp+20h] [rbp-28h] BYREF
  __int128 v15; // [rsp+24h] [rbp-24h]

  v4 = *(_QWORD *)(a2 + 8);
  LODWORD(v5) = *(char *)(a2 + 80);
  v6 = *(_BYTE *)(a2 + 81);
  if ( (_DWORD)v5 == *(unsigned __int8 *)(v4 + 586) )
  {
    if ( v4 == *(_QWORD *)(a1 + 8) )
    {
      if ( !v6 )
      {
        v5 = *(_QWORD *)(a2 + 48);
        if ( !*(_DWORD *)(v4 + 484) || !v5 && !*(_WORD *)(v4 + 486) )
        {
          *(_BYTE *)(v4 + 193) = 1;
          if ( a3 )
          {
            v15 = 0LL;
            if ( (KiTrapFeatures & 0x10) != 0 )
            {
              v8 = HalpDisableInterrupts(a1, a2, KeGetCurrentPrcb());
              v10 = *(_DWORD *)(v9 + 168);
              v11 = v8;
              *(_DWORD *)(v9 + 168) = v10 | 2;
              if ( !v10 )
                __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
              if ( v11 )
                _enable();
            }
            v14 = 5;
            LOBYTE(v5) = HalpInterruptSendIpi(&v14, 31LL);
          }
          else
          {
            *(_DWORD *)(v4 + 116) |= 0x40u;
          }
        }
      }
    }
    else if ( v6 )
    {
      if ( (a4 & 1) == 0 )
      {
        LOBYTE(v5) = *(_BYTE *)(v4 + 388);
        if ( (_BYTE)v5 == 5 && *(_BYTE *)(v4 + 391) == 1 )
        {
          LOBYTE(v5) = *(_BYTE *)(v4 + 112) & 7;
          if ( (_BYTE)v5 != 4 && (_BYTE)v5 != 3 )
          {
            LODWORD(v5) = *(_DWORD *)(v4 + 116);
            if ( (v5 & 0x10) != 0 || (*(_BYTE *)(v4 + 194) & 2) != 0 )
            {
              *(_BYTE *)(v4 + 112) |= 0x40u;
              LOBYTE(v5) = KiSignalThread(a1, v4, 192LL, 0LL);
              if ( (_BYTE)v5 )
                *(_BYTE *)(v4 + 194) |= 2u;
            }
          }
        }
      }
    }
    else
    {
      *(_BYTE *)(v4 + 193) = 1;
      _InterlockedOr(v13, 0);
      LOBYTE(v5) = *(_BYTE *)(v4 + 388);
      if ( (_BYTE)v5 == 2 )
      {
        v7 = *(unsigned int *)(v4 + 536);
        LODWORD(v7) = v7 & 0x7FFFFFFF;
        if ( (a4 & 2) != 0 )
        {
          LOBYTE(v5) = KiRequestApcInterruptSynchronously(v7);
        }
        else
        {
          LOBYTE(a2) = 1;
          if ( KeGetPcr()->Prcb.Number == (_DWORD)v7 )
            LOBYTE(v5) = KiRequestSoftwareInterrupt(0LL, a2);
          else
            LOBYTE(v5) = KiSendSoftwareInterrupt(v7, a2);
        }
      }
      else if ( (a4 & 1) == 0
             && (_BYTE)v5 == 5
             && !*(_BYTE *)(v4 + 390)
             && !*(_WORD *)(v4 + 486)
             && (!*(_QWORD *)(a2 + 48) || !*(_WORD *)(v4 + 484) && !*(_BYTE *)(v4 + 192)) )
      {
        LOBYTE(v5) = KiSignalThread(a1, v4, 256LL, 0LL);
        *(_BYTE *)(v4 + 112) |= 0x20u;
      }
    }
  }
  return v5;
}
