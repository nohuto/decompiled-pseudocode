/*
 * XREFs of KiEnumerateNmiSxCallback @ 0x140535898
 * Callers:
 *     KiEnumerateCallback @ 0x1404F6DD0 (KiEnumerateCallback.c)
 *     MmIsVerifierApplicableToImage @ 0x1406F8588 (MmIsVerifierApplicableToImage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiEnumerateNmiSxCallback(PVOID **a1, unsigned __int8 *a2, _QWORD *a3)
{
  unsigned __int8 *v4; // rsi
  unsigned __int8 CurrentIrql; // bl
  PVOID *v7; // r9
  PVOID v8; // rax
  unsigned __int64 v10; // rbx

  v4 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v7 = *a1;
  if ( *a1 == &KiNmiCallbackListHead )
    goto LABEL_12;
  if ( v7 )
    goto LABEL_9;
  if ( CurrentIrql < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, (int)a2);
    }
  }
  *v4 = CurrentIrql;
  v7 = (PVOID *)KiNmiCallbackListHead;
  if ( KiNmiCallbackListHead )
  {
LABEL_9:
    *a3 = v7[1];
    v8 = *v7;
    *a1 = (PVOID *)*v7;
    if ( !v8 )
      *a1 = &KiNmiCallbackListHead;
    return 1LL;
  }
  else
  {
LABEL_12:
    v10 = *v4;
    if ( (unsigned __int8)v10 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), *v4);
      __writecr8(v10);
    }
    return 0LL;
  }
}
