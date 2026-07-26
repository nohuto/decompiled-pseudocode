/*
 * XREFs of ?CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z @ 0x140165290
 * Callers:
 *     ?UpdateKnobs@KnobNamespace@@AEAAJPEA_N@Z @ 0x14014FA5C (-UpdateKnobs@KnobNamespace@@AEAAJPEA_N@Z.c)
 *     ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x140164E70 (-BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z.c)
 * Callees:
 *     ?GetCurrentValue@KnobDescriptor@@QEBA_KXZ @ 0x140068600 (-GetCurrentValue@KnobDescriptor@@QEBA_KXZ.c)
 *     ?CommitSingleKnob@KnobCollection@@QEAAXAEBUKnobDescriptor@@AEAUKnobState@@_K_N@Z @ 0x14014FDB4 (-CommitSingleKnob@KnobCollection@@QEAAXAEBUKnobDescriptor@@AEAUKnobState@@_K_N@Z.c)
 */

void __fastcall KnobCollection::CommitUpdatedKnobValues(KnobCollection *this, bool a2)
{
  unsigned __int64 v2; // rdi
  _DWORD *v5; // rbx
  __int64 v6; // rsi
  __int64 CurrentValue; // rax
  struct KnobDescriptor *v8; // r10

  v2 = 0LL;
  if ( *((_QWORD *)this + 7) )
  {
    v5 = (_DWORD *)((char *)this + 80);
    v6 = 0LL;
    do
    {
      CurrentValue = KnobDescriptor::GetCurrentValue((KnobDescriptor *)(v6 + *((_QWORD *)this + 8)));
      if ( *v5 )
      {
        if ( *((_QWORD *)v5 - 1) == CurrentValue )
        {
          *v5 = 0;
        }
        else if ( *v5 == 259 )
        {
          KnobCollection::CommitSingleKnob(this, v8, (struct KnobState *)(v5 - 2), CurrentValue, a2);
        }
      }
      else
      {
        v5[1] = v5[2];
      }
      ++v2;
      v5 += 6;
      v6 += 48LL;
    }
    while ( v2 < *((_QWORD *)this + 7) );
  }
}
