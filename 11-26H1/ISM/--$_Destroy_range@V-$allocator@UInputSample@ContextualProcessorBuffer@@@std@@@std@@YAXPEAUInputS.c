/*
 * XREFs of ??$_Destroy_range@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputSample@ContextualProcessorBuffer@@QEAU12@AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x18001E87C
 * Callers:
 *     ?ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ @ 0x18001AC90 (-ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ.c)
 *     ??1ContextualProcessorBuffer@@MEAA@XZ @ 0x18001CC9C (--1ContextualProcessorBuffer@@MEAA@XZ.c)
 *     ?clear@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAXXZ @ 0x18001E8B8 (-clear@-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@ContextualProc.c)
 *     ??1?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x18006FAC4 (--1-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@ContextualProcesso.c)
 *     ??$_Uninitialized_move@PEAUInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAPEAUInputSample@ContextualProcessorBuffer@@QEAU12@0PEAU12@AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x180094064 (--$_Uninitialized_move@PEAUInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@Cont.c)
 *     ?_Change_array@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAXQEAUInputSample@ContextualProcessorBuffer@@_K1@Z @ 0x180095FB8 (-_Change_array@-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@Contex.c)
 *     ??1?$_Uninitialized_backout_al@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x180099A40 (--1-$_Uninitialized_backout_al@V-$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@.c)
 *     ??1_Reallocation_guard@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x1801A757C (--1_Reallocation_guard@-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSampl.c)
 * Callees:
 *     ??1InputSample@ContextualProcessorBuffer@@QEAA@XZ @ 0x18001E64C (--1InputSample@ContextualProcessorBuffer@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>>(
        ContextualProcessorBuffer::InputSample *this,
        ContextualProcessorBuffer::InputSample *a2)
{
  ContextualProcessorBuffer::InputSample *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      ContextualProcessorBuffer::InputSample::~InputSample(v3);
      v3 = (ContextualProcessorBuffer::InputSample *)((char *)v3 + 208);
    }
    while ( v3 != a2 );
  }
}
