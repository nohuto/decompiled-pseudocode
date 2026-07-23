/*
 * XREFs of KiIsThreadRankNonZero @ 0x140411A40
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x1403E40C8 (MiStoreUpdateMemoryConditions.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

bool __fastcall KiIsThreadRankNonZero(__int64 a1, struct _KPRCB *a2)
{
  struct _KPRCB *v2; // rsi
  int v4; // ebp
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx

  v2 = a2;
  if ( *(char *)(a1 + 195) >= 16 || !*(_QWORD *)(a1 + 104) )
    return 0;
  v4 = 0;
  if ( a2 )
  {
    CurrentIrql = 2;
    CurrentPrcb = a2;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
    CurrentPrcb = KeGetCurrentPrcb();
  }
  v7 = *(_QWORD *)(a1 + 104);
  if ( v7 )
  {
    v8 = v7 + CurrentPrcb->ScbOffset;
    if ( v8 )
    {
      if ( v2 )
      {
        if ( *(char *)(a1 + 195) < 16 && (*(_DWORD *)(a1 + 120) & 0x200) == 0 )
        {
          v9 = v8;
          do
          {
            if ( (*(_BYTE *)(v9 + 128) & 2) != 0 )
            {
              v4 = -1;
              goto LABEL_15;
            }
            v9 = *(_QWORD *)(v9 + 440);
          }
          while ( v9 );
          do
          {
            v4 = *(_DWORD *)(v8 + 140);
            if ( v4 )
              break;
            v8 = *(_QWORD *)(v8 + 440);
          }
          while ( v8 );
        }
      }
      else
      {
        do
        {
          v4 = (*(unsigned __int16 *)(v8 + 128) >> 3) & 1;
          if ( v4 )
            break;
          v8 = *(_QWORD *)(v8 + 440);
        }
        while ( v8 );
      }
    }
  }
LABEL_15:
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v4 != 0;
}
