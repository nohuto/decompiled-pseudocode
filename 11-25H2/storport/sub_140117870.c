/*
 * XREFs of sub_140117870 @ 0x140117870
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400C9458 @ 0x1400C9458 (sub_1400C9458.c)
 *     sub_140115650 @ 0x140115650 (sub_140115650.c)
 */

void __fastcall sub_140117870(struct _KDPC *Dpc, PVOID DeferredContext, _QWORD *SystemArgument1, char *SystemArgument2)
{
  __int64 v4; // r14
  ULONG CurrentProcessorNumber; // eax
  _DWORD *v9; // r8
  _QWORD *v10; // r13
  __int64 v11; // rbp
  unsigned __int64 v12; // rsi
  KIRQL v13; // bl
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  PRKDPC *v18; // rdx
  _BYTE ProcNumber[6]; // [rsp+60h] [rbp+18h] BYREF

  v4 = SystemArgument1[1];
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  v9 = (_DWORD *)*((_QWORD *)SystemArgument2 + 159);
  v10 = qword_140168E40;
  *(_DWORD *)ProcNumber = 0;
  v11 = CurrentProcessorNumber;
  if ( !*v9 )
  {
    v12 = *((_QWORD *)SystemArgument2 + 108) + ((unsigned __int64)*(unsigned __int16 *)(v4 + 138) << 7);
    if ( (*(_WORD *)(*(_QWORD *)(v12 - 128) + 16LL * *(unsigned __int16 *)(v12 - 94) + 14) & 1) != *(_WORD *)(v12 - 92) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)SystemArgument2 + 217) + 12LL) & 2) != 0 )
      {
        sub_140115650(Dpc, DeferredContext, (volatile signed __int32 *)(v12 - 128), SystemArgument2);
      }
      else
      {
        v13 = KfRaiseIrql(2u);
        sub_140115650(Dpc, DeferredContext, (volatile signed __int32 *)(v12 - 128), SystemArgument2);
        KeLowerIrql(v13);
      }
    }
    if ( sub_1400C9458((__int64)SystemArgument2, v4) )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(v12 - 40) + 8 * v11);
      if ( *(_QWORD *)(v14 + 16) && (*(_DWORD *)(*((_QWORD *)SystemArgument2 + 131) + 76LL) & 0x200) != 0 )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)v14, 1, 0) )
          ExSetTimer(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 - 40) + 8 * v11) + 16LL), *(int *)(v12 - 44), 0LL, 0LL);
      }
      else
      {
        if ( (*(_DWORD *)(*((_QWORD *)SystemArgument2 + 217) + 12LL) & 0x10) != 0 )
        {
          v15 = v10[4];
          v16 = 56 * v11;
          if ( *(_QWORD *)(v15 + 56 * v11 + 8) )
          {
            *(_WORD *)ProcNumber = *(_WORD *)(v15 + v16 + 16);
            _BitScanForward64(&v17, *(_QWORD *)(v10[4] + v16 + 8));
            *(_DWORD *)&ProcNumber[2] = v17;
            LODWORD(v11) = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)ProcNumber);
          }
        }
        v18 = *(PRKDPC **)(*(_QWORD *)(v12 - 40) + 8LL * (unsigned int)v11);
        KeInsertQueueDpc(v18[3], v18, SystemArgument2);
      }
    }
  }
}
