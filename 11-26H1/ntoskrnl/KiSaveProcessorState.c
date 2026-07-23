/*
 * XREFs of KiSaveProcessorState @ 0x1405FFFC0
 * Callers:
 *     KiFreezeTargetExecution @ 0x1405F8810 (KiFreezeTargetExecution.c)
 *     KxNmiInterrupt @ 0x140738B80 (KxNmiInterrupt.c)
 * Callees:
 *     KeContextFromKframes @ 0x1403D7680 (KeContextFromKframes.c)
 *     RtlXSave @ 0x1403D7D90 (RtlXSave.c)
 *     KiSaveProcessorControlState @ 0x14072BDE0 (KiSaveProcessorControlState.c)
 */

__int64 __fastcall KiSaveProcessorState(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _CONTEXT *Context; // rbx
  unsigned int ContextFlagsInit; // r9d
  unsigned __int64 CompactionMaskInit; // r8
  char v8; // r10
  int v9; // edx
  int v10; // r9d
  int v11; // eax
  unsigned int v12; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  Context = CurrentPrcb->Context;
  ContextFlagsInit = CurrentPrcb->ContextFlagsInit;
  Context->ContextFlags = ContextFlagsInit;
  CompactionMaskInit = CurrentPrcb->CompactionMaskInit;
  v8 = *(_BYTE *)(a1 + 368) & 1;
  if ( CompactionMaskInit )
    *(unsigned __int64 *)((char *)&Context[1].P2Home + SLODWORD(Context[1].P3Home)) = CompactionMaskInit | 0x8000000000000000uLL;
  if ( !v8 )
  {
    v9 = ContextFlagsInit & 0x100008;
    v10 = ContextFlagsInit & 0x100040;
    if ( v10 == 1048640 || v9 == 1048584 )
    {
      v11 = MEMORY[0xFFFFF780000003E0];
      if ( v9 == 1048584 )
        _fxsave(&Context->256);
      if ( v10 == 1048640 )
      {
        v12 = v11 & 0xFFFFFFFC;
        if ( v12 )
          RtlXSave(($1A87EC755C1848520ED6C21D016F807B *)((char *)&Context->1 + SLODWORD(Context[1].P3Home) + 464), v12);
      }
    }
  }
  KeContextFromKframes(a1, a2, (__int64)Context);
  return KiSaveProcessorControlState(&CurrentPrcb->ProcessorState);
}
