/*
 * XREFs of RtlpUpcaseUnicodeStringPrivate @ 0x1402FAF10
 * Callers:
 *     RtlIsNameInExpression @ 0x1402FA830 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1402FA8B0 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlAreNamesEqual @ 0x14041C900 (RtlAreNamesEqual.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x140216B30 (PsGetEffectiveServerSilo.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpUpcaseUnicodeStringPrivate(__int64 a1, unsigned __int16 *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Blink; // rcx
  __int64 EffectiveServerSilo; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rsi
  __int16 v9; // ax
  __int64 Pool2; // rax
  unsigned int v11; // eax
  unsigned int v12; // r11d
  __int64 v13; // r10
  unsigned __int64 v14; // r9

  if ( !KeGetPcr()->Prcb.NestingLevel
    && ((CurrentThread = KeGetCurrentThread(),
         Blink = (__int64)CurrentThread[1].WaitBlock[3].WaitListEntry.Blink,
         Blink != -3)
      ? (EffectiveServerSilo = PsGetEffectiveServerSilo(Blink))
      : (EffectiveServerSilo = CurrentThread->Process[3].ActiveGroupsMask.Masks[0]),
        EffectiveServerSilo) )
  {
    v7 = *(_QWORD **)(EffectiveServerSilo + 1504);
  }
  else
  {
    v7 = &PspHostSiloGlobals;
  }
  v8 = v7[150];
  v9 = *a2;
  *(_WORD *)(a1 + 2) = *a2;
  if ( v9 )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    *(_QWORD *)(a1 + 8) = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    v11 = 0;
  }
  else
  {
    v11 = 0;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v12 = *a2 >> 1;
  while ( v11 < v12 )
  {
    v13 = 2LL * v11;
    v14 = *(unsigned __int16 *)(v13 + *((_QWORD *)a2 + 1));
    if ( (unsigned int)v14 >= 0x61 )
    {
      if ( (unsigned int)v14 > 0x7A )
      {
        if ( v8 )
        {
          if ( (unsigned __int16)v14 >= 0xC0u )
            LOWORD(v14) = *(_WORD *)(v8
                                   + 2
                                   * ((v14 & 0xF)
                                    + *(unsigned __int16 *)(v8
                                                          + 2LL
                                                          * (((unsigned __int8)v14 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(v8 + 2 * (v14 >> 8))))))
                        + v14;
        }
      }
      else
      {
        LOWORD(v14) = v14 - 32;
      }
    }
    *(_WORD *)(v13 + *(_QWORD *)(a1 + 8)) = v14;
    ++v11;
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}
