/*
 * XREFs of ?PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z @ 0x140165340
 * Callers:
 *     ?UpdateKnobs@KnobNamespace@@AEAAJPEA_N@Z @ 0x14014FA5C (-UpdateKnobs@KnobNamespace@@AEAAJPEA_N@Z.c)
 *     ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x140164E70 (-BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z.c)
 * Callees:
 *     ?GetCurrentValue@KnobDescriptor@@QEBA_KXZ @ 0x140068600 (-GetCurrentValue@KnobDescriptor@@QEBA_KXZ.c)
 *     ?ReadKnobFromStore@KnobCollection@@QEAAJAEAUKnobTransaction@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1401653F0 (-ReadKnobFromStore@KnobCollection@@QEAAJAEAUKnobTransaction@@AEBUKnobDescriptor@@AEAUKnobState@@.c)
 */

void __fastcall KnobCollection::PrepareUpdatedKnobValues(KnobCollection *this, struct KnobTransaction *a2)
{
  unsigned __int64 v2; // rdi
  int *v5; // rbx
  __int64 v6; // rsi
  KnobDescriptor *v7; // r14
  int KnobFromStore; // eax
  unsigned __int64 CurrentValue; // rax
  __int64 v10; // r8

  v2 = 0LL;
  if ( *((_QWORD *)this + 7) )
  {
    v5 = (int *)((char *)this + 80);
    v6 = 0LL;
    do
    {
      v7 = (KnobDescriptor *)(v6 + *((_QWORD *)this + 8));
      if ( v5[1] == 4 )
      {
        *v5 = 0;
      }
      else
      {
        KnobFromStore = KnobCollection::ReadKnobFromStore(
                          this,
                          a2,
                          (const struct KnobDescriptor *)(v6 + *((_QWORD *)this + 8)),
                          (struct KnobState *)(v5 - 2));
        *v5 = KnobFromStore;
        if ( !KnobFromStore )
        {
          CurrentValue = KnobDescriptor::GetCurrentValue(v7);
          if ( v10 != CurrentValue )
            *v5 = 259;
        }
      }
      ++v2;
      v5 += 6;
      v6 += 48LL;
    }
    while ( v2 < *((_QWORD *)this + 7) );
  }
}
