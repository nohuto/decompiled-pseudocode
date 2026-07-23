/*
 * XREFs of KiPreprocessFlushTb @ 0x14041DBE0
 * Callers:
 *     KeFlushEntireTb @ 0x1405F3530 (KeFlushEntireTb.c)
 *     KeFlushSingleTb @ 0x1405F3764 (KeFlushSingleTb.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiIsFlushEntire @ 0x14041DD34 (KiIsFlushEntire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall KiPreprocessFlushTb(char a1, __int64 a2, int a3, _BYTE *a4, unsigned __int8 *a5)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int16 v8; // ax
  volatile _KAFFINITY_EX *ActiveProcessors; // rdx
  unsigned __int64 v10; // r8
  char result; // al
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (HvlEnlightenments & 4) == 0 )
    goto LABEL_18;
  if ( (HvlEnlightenments & 2) != 0 )
    goto LABEL_22;
  if ( !a1 )
  {
    if ( (KiFlushPcid & 3) != 1 )
      goto LABEL_5;
LABEL_22:
    *a4 = 1;
    return 0;
  }
  if ( (HvlEnlightenments & 0x800000) != 0 && (unsigned __int8)KiIsFlushEntire((unsigned int)a2) )
  {
    *a4 = 1;
    return 0;
  }
LABEL_5:
  if ( (_DWORD)KeNumberProcessors_0 == 1 )
  {
LABEL_18:
    *a4 = 0;
    return 0;
  }
  if ( a3 )
    goto LABEL_22;
  _InterlockedOr(v12, 0);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 12;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  *a5 = CurrentIrql;
  v8 = 0;
  ActiveProcessors = CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors;
  while ( 1 )
  {
    if ( v8 >= ActiveProcessors->Count )
    {
      result = 1;
      *a4 = 0;
      return result;
    }
    v10 = ActiveProcessors->Bitmap[v8];
    if ( v10 )
    {
      if ( v8 != CurrentPrcb->Group || v10 != CurrentPrcb->GroupSetMember )
        break;
    }
    ++v8;
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  result = 0;
  *a4 = 1;
  return result;
}
