/*
 * XREFs of ?SetCurrentValue@KnobDescriptor@@QEBAX_K@Z @ 0x1400776D0
 * Callers:
 *     ?CommitSingleKnob@KnobCollection@@QEAAXAEBUKnobDescriptor@@AEAUKnobState@@_K_N@Z @ 0x14014FDB4 (-CommitSingleKnob@KnobCollection@@QEAAXAEBUKnobDescriptor@@AEAUKnobState@@_K_N@Z.c)
 *     ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x140164E70 (-BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall KnobDescriptor::SetCurrentValue(KnobDescriptor *this, __int64 a2)
{
  ConfigKnobFlag Flags; // eax
  bool v3; // zf
  _DWORD *Value; // rax

  Flags = this->Flags;
  if ( (Flags & 2) != 0 )
  {
    *(_BYTE *)this->Value = a2;
  }
  else
  {
    v3 = (Flags & 4) == 0;
    Value = this->Value;
    if ( v3 )
      *Value = a2;
    else
      *(_QWORD *)Value = a2;
  }
}
