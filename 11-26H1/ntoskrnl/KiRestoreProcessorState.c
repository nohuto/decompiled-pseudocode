/*
 * XREFs of KiRestoreProcessorState @ 0x1405FFEF8
 * Callers:
 *     KiFreezeTargetExecution @ 0x1405F8810 (KiFreezeTargetExecution.c)
 * Callees:
 *     RtlXRestore @ 0x1403D883C (RtlXRestore.c)
 *     KeContextToKframes @ 0x140535F60 (KeContextToKframes.c)
 *     KiRestoreProcessorControlState @ 0x14072BD10 (KiRestoreProcessorControlState.c)
 */

__int64 __fastcall KiRestoreProcessorState(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 Context; // r10
  int v6; // r9d
  char v7; // r11
  __int64 v9; // [rsp+20h] [rbp-18h]

  CurrentPrcb = KeGetCurrentPrcb();
  Context = (__int64)CurrentPrcb->Context;
  v6 = *(_DWORD *)(Context + 48);
  v7 = *(_BYTE *)(Context + 56) & 1;
  if ( !v7
    && ((v6 & 0x100008) == 1048584 || (v6 & 0x100040) == 1048640)
    && (v6 & 0x100040) == 0x100040
    && (MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFC) != 0 )
  {
    RtlXRestore(Context + *(int *)(Context + 1248) + 720LL, MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFC);
  }
  LOBYTE(v9) = v7;
  KeContextToKframes(a1, a2, Context, v6, v9);
  return KiRestoreProcessorControlState(&CurrentPrcb->ProcessorState);
}
